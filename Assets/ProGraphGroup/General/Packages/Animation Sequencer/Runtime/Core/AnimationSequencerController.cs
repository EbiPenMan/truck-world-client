using System;
using System.Collections;
using System.Linq;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;

namespace BrunoMikoski.AnimationSequencer
{
    public class AnimationSequencerController : MonoBehaviour
    {
        private enum PlayType
        {
            Play,
            Backward,
            Forward
        }

        [SerializeField]
        public string tagKey;


        [SerializeReference] public AnimationStepBase[] animationSteps = new AnimationStepBase[0];


        [SerializeField] public UpdateType updateType = UpdateType.Normal;
        [SerializeField] public bool timeScaleIndependent = false;
        [SerializeField] public bool autoKill = false;
        [SerializeField] public bool playOnAwake;
        [SerializeField] public bool pauseOnAwake;
        [SerializeField] private PlayType playType = PlayType.Play;

        [SerializeField] public int loops = 0;
        [SerializeField] public LoopType loopType = LoopType.Restart;

        public Sequence playingSequence;
        public Sequence PlayingSequence => playingSequence;

        public bool IsPlaying => playingSequence != null && playingSequence.IsPlaying();

        [SerializeField] public UnityEvent onStartEvent = new UnityEvent();
        public UnityEvent OnStartEvent => onStartEvent;
        [SerializeField] public UnityEvent onFinishedEvent = new UnityEvent();
        public UnityEvent OnFinishedEvent => onFinishedEvent;
        [SerializeField] public UnityEvent onProgressEvent = new UnityEvent();
        public UnityEvent OnProgressEvent => onProgressEvent;


        //
        // Abolfazl Hosnian

        #region Abolfazl

        [SerializeField] public float sequenceDelay;
        [SerializeField] public float sequenceLoopsDelay;


        [SerializeField] public UnityEvent onPauseEvent = new UnityEvent();
        public UnityEvent OnPauseEvent => onPauseEvent;

        [SerializeField] public UnityEvent onResumeEvent = new UnityEvent();
        public UnityEvent OnResumeEvent => onResumeEvent;

        [SerializeField] public UnityEvent onSequenceLoopCycleStartEvent = new UnityEvent();
        public UnityEvent OnSequenceLoopCycleStartEvent => onSequenceLoopCycleStartEvent;

        [SerializeField] public UnityEvent onSequenceLoopCycleFinishedEvent = new UnityEvent();
        public UnityEvent OnSequenceLoopCycleFinishedEvent => onSequenceLoopCycleFinishedEvent;


        public void OnPause()
        {
            onPauseEvent?.Invoke();
        }

        public void OnResume()
        {
            onResumeEvent?.Invoke();
        }

        public void OnSequenceLoopCycleStart()
        {
            onSequenceLoopCycleStartEvent?.Invoke();
        }

        public void OnSequenceLoopCycleFinished()
        {
            onSequenceLoopCycleFinishedEvent?.Invoke();
        }

        #endregion Abolfazl

        //

        private void Awake()
        {
            if (playOnAwake)
            {
                Play();
                if (pauseOnAwake)
                    playingSequence.Pause();
            }
        }

        private void OnDestroy()
        {
            DOTween.Kill(this);
            playingSequence?.Kill();
        }

        public void Play(Action onCompleteCallback = null)
        {
            DOTween.Kill(this);
            playingSequence?.Kill();

            if (onCompleteCallback != null)
                onFinishedEvent.AddListener(onCompleteCallback.Invoke);

            playingSequence = GenerateSequence();

            switch (playType)
            {
                case PlayType.Backward:
                    playingSequence.PlayBackwards();
                    break;

                case PlayType.Forward:
                    playingSequence.PlayForward();
                    break;

                default:
                    playingSequence.Play();
                    break;
            }
        }

        public void TogglePause()
        {
            if (playingSequence == null)
                return;

            playingSequence.TogglePause();
        }

        public void Pause()
        {
            if (!IsPlaying)
                return;

            playingSequence.Pause();

            // Abolfazl Hosnian
            OnPause();
            //
        }

        public void Resume()
        {
            if (playingSequence == null)
                return;

            playingSequence.Play();

            //Abolfazl Hosnian
            OnResume();
            //
        }


        public void Complete(bool withCallbacks = true)
        {
            if (playingSequence == null)
                return;

            playingSequence.Complete(withCallbacks);
        }

        public void Rewind(bool includeDelay = true)
        {
            if (playingSequence == null)
                return;

            playingSequence.Rewind(includeDelay);
        }

        public void Kill(bool complete = false)
        {
            if (!IsPlaying)
                return;

            playingSequence.Kill(complete);
        }

        public IEnumerator PlayEnumerator()
        {
            Play();
            yield return playingSequence.WaitForCompletion();
        }

        public Sequence GenerateSequence()
        {
            Sequence sequence = DOTween.Sequence();

            for (int i = 0; i < animationSteps.Length; i++)
            {
                AnimationStepBase animationStepBase = animationSteps[i];

                animationStepBase.AddTweenToSequence(sequence);
            }

            sequence.SetTarget(this);
            sequence.SetUpdate(updateType, timeScaleIndependent);
            sequence.OnComplete(() => { onStartEvent.Invoke(); });
            sequence.OnUpdate(() => { onProgressEvent.Invoke(); });
            sequence.OnComplete(() => { onFinishedEvent.Invoke(); });

            sequence.SetAutoKill(autoKill);

            int targetLoops = loops;

            if (!Application.isPlaying)
            {
                if (loops == -1)
                    targetLoops = 10;
            }

            sequence.SetLoops(targetLoops, loopType);

            //Abolfazl Hosnian
            sequence.OnStepComplete(() =>
            {
                OnSequenceLoopCycleFinished();


                if (sequence.CompletedLoops() != loops && loops != 0)
                {
                    Tweener tw = gameObject.transform.DOMoveX(gameObject.transform.position.x, 0);
                    tw.SetDelay(sequenceLoopsDelay);
                    tw.OnComplete(() => { OnSequenceLoopCycleStart(); });
                    tw.SetAutoKill(true);
                    tw.Play();
                }
            });

            sequence.OnStart(() =>
            {
                onStartEvent?.Invoke();

                Tweener tw = gameObject.transform.DOMoveX(gameObject.transform.position.x, 0);
                tw.SetDelay(sequenceDelay + sequenceLoopsDelay);
                tw.OnComplete(() => { OnSequenceLoopCycleStart(); });
                tw.SetAutoKill(true);
                tw.Play();
            });

            //

            return sequence;
        }

        public AnimationSequencerController GetControllerByTagKey(string tagKey)
        {
            return gameObject
                .GetComponents<AnimationSequencerController>()
                .First(x => x.tagKey == tagKey);
        }

        public AnimationStepBase GetStepByTagKey(string tagKey)
        {
            return animationSteps
                .First(x => x.tagKey == tagKey);
        }
    }
}