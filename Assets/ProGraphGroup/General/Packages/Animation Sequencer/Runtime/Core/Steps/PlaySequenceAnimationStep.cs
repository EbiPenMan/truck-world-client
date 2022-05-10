using System;
using DG.Tweening;
using UnityEngine;

namespace BrunoMikoski.AnimationSequencer
{
    [Serializable]
    public sealed class PlaySequenceAnimationStep : AnimationStepBase
    {
        public override string DisplayName => "Play Sequence";

        [SerializeField] public AnimationSequencerController sequencer;

        public override void AddTweenToSequence(Sequence animationSequence)
        {
            AnimationSequencerController currentSeq;
            if (tagKey != "")
            {
                currentSeq = sequencer.GetControllerByTagKey("tagKey");
                if (currentSeq == null)
                {
                    Debug.LogWarning("Can not found current seq by tagKey");
                    return;
                }
            }
            else
            {
                currentSeq = sequencer;
            }

            Sequence sequence = currentSeq.GenerateSequence();
            sequence.AppendInterval(StepDelay);

            if (FlowType == FlowType.Join)
                animationSequence.Join(sequence);
            else
                animationSequence.Append(sequence);
        }

        public override string GetDisplayNameForEditor(int index)
        {
            string display = "NULL";
            if (sequencer != null)
                display = sequencer.name;
            if (tagKey != "")
                return $"{index}. Play {display}  By TagKey {tagKey}";
            else
                return $"{index}. Play {display} Sequence";
        }

        public void SetTarget(AnimationSequencerController newTarget)
        {
            sequencer = newTarget;
        }
    }
}