using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;

namespace BrunoMikoski.AnimationSequencer
{
    [Serializable]
    public abstract class AnimationStepBase
    {

        [SerializeField]
        public string tagKey;
        
        [SerializeField] public float stepDelay;
        [SerializeField] public float loopCyclesDelay;
        [SerializeField] public FlowType flowType;

        public float StepDelay => stepDelay;
        public float LoopCyclesDelay => loopCyclesDelay;

        //

        public FlowType FlowType => flowType;

        public abstract string DisplayName { get; }


        //TODO find a way to discover if one step is playing or not.
        public bool IsPlaying => false;

        public abstract void AddTweenToSequence(Sequence animationSequence);

        public virtual string GetDisplayNameForEditor(int index)
        {
            return $"{index}. {this}";
        }

        # region Forked

        public UnityEvent onStepStartEvent = new UnityEvent();

        public UnityEvent onStepFinishedEvent = new UnityEvent();


        public UnityEvent onLoopCycleStartEvent = new UnityEvent();

        public UnityEvent onLoopCycleFinishedEvent = new UnityEvent();


        protected virtual void OnStepStart()
        {
            onStepStartEvent?.Invoke();
        }

        protected virtual void OnStepFinished()
        {
            onStepFinishedEvent?.Invoke();
        }

        protected virtual void OnLoopCycleStart()
        {
            onLoopCycleStartEvent?.Invoke();
        }

        protected virtual void OnLoopCycleFinished()
        {
            onLoopCycleFinishedEvent?.Invoke();
        }

        #endregion
    }
}