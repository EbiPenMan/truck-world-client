using System;
using DG.Tweening;
using UnityEngine;

namespace BrunoMikoski.AnimationSequencer
{
    [Serializable]
    public sealed class PlayParticleSystemAnimationStep : AnimationStepBase
    {
        [SerializeField]
        public ParticleSystem particleSystem;

        [SerializeField]
        public float duration = 1;


        [SerializeField]
        public bool stopEmittingWhenOver;

        public override string DisplayName => "Play Particle System";

        public override void AddTweenToSequence(Sequence animationSequence)
        {
            // animationSequence.SetDelay(Delay);
            
            //Abolfazl Hosnian
            animationSequence.SetDelay(StepDelay);
            //
            animationSequence.AppendCallback(() =>
            {
                particleSystem.Play();
            });
            
            animationSequence.AppendInterval(duration);
            animationSequence.AppendCallback(FinishParticles);
        }

        public void FinishParticles()
        {
            if (stopEmittingWhenOver)
            {
                particleSystem.Stop();
            }
        }

        public void SetTarget(ParticleSystem newTarget)
        {
            particleSystem = newTarget;
        }

        public override string GetDisplayNameForEditor(int index)
        {
            string display = "NULL";
            if (particleSystem != null)
                display = particleSystem.name;
            return $"{index}. Play {display} particle system";
        }

    }
}
