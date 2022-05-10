using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using ProGraphGroup.Packages.GeneralManagers;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Serialization;

namespace ProGraphGroup.Packages.Components.Condition
{
    public enum TimeIntervalType
    {
        MilliSecond = 0,
        Second = 1,
        Frame = 2,
    }
    
    public enum TriggerState
    {
        None = 0,
        InProgress = 1,
        Paused = 2,
    }

    public class TimerComponent : MonoBehaviour, ITrigger<float>
    {
        public Action<float> OnTriggerCall { get; set; }
        public float defaultValue;
        public TimeIntervalType timeIntervalType;
        public float stepValue;
        public float timeIntervalValue;
        public bool ignoreTimeScale;

        public TriggerEventType triggerEventType = TriggerEventType.Global;

        [ShowIf("triggerEventType", TriggerEventType.Global)]
        public List<string> onStartEventsName = new List<string>();

        [ShowIf("triggerEventType", TriggerEventType.Global)]
        public List<string> onPauseEventsName = new List<string>();

        [ShowIf("triggerEventType", TriggerEventType.Global)]
        public List<string> onContinueEventsName = new List<string>();

        [ShowIf("triggerEventType", TriggerEventType.Global)]
        public List<string> onStopEventsName = new List<string>();

        private float _currentValue;
        private TriggerState _triggerState = TriggerState.None;
        private CancellationTokenSource _cancellationTokenSource;

        private void Start()
        {
            if (triggerEventType == TriggerEventType.Global)
            {
                for (int i = 0; i < onStartEventsName.Count; i++)
                {
                    EventManager.Instance.RegisterEvent(onStartEventsName[i], StartTrigger);
                }

                for (int i = 0; i < onPauseEventsName.Count; i++)
                {
                    EventManager.Instance.RegisterEvent(onPauseEventsName[i], PauseTrigger);
                }

                for (int i = 0; i < onContinueEventsName.Count; i++)
                {
                    EventManager.Instance.RegisterEvent(onContinueEventsName[i], ContinueTrigger);
                }

                for (int i = 0; i < onStopEventsName.Count; i++)
                {
                    EventManager.Instance.RegisterEvent(onStopEventsName[i], StopTrigger);
                }
            }
        }

        public async void StartTrigger(object value)
        {
            if (!CheckEnable())
                return;
            if (_triggerState != TriggerState.None)
                return;
            _triggerState = TriggerState.InProgress;
            _currentValue = defaultValue;
            _cancellationTokenSource = new CancellationTokenSource();
            await Progress();
        }

        public void PauseTrigger(object value)
        {
            if (!CheckEnable())
                return;
            if (_triggerState == TriggerState.InProgress)
            {
                _triggerState = TriggerState.Paused;
                if (_cancellationTokenSource != null && _cancellationTokenSource.Token.CanBeCanceled)
                {
                    _cancellationTokenSource.Cancel();
                }
            }
        }

        public async void ContinueTrigger(object value)
        {
            if (!CheckEnable())
                return;
            if (_triggerState == TriggerState.Paused)
            {
                _triggerState = TriggerState.InProgress;
                _cancellationTokenSource = new CancellationTokenSource();
                await Progress();
            }
        }

        public void StopTrigger(object value)
        {
            if (!CheckEnable())
                return;
            if (_triggerState == TriggerState.None)
                return;
            _currentValue = 0;
            _triggerState = TriggerState.None;
            if (_cancellationTokenSource != null && _cancellationTokenSource.Token.CanBeCanceled)
            {
                _cancellationTokenSource.Cancel();
            }
        }

        private async UniTask Progress()
        {
            bool _isCanceled = false;
            if (timeIntervalType == TimeIntervalType.Second)
                _isCanceled = await UniTask
                    .Delay(TimeSpan.FromSeconds(stepValue), ignoreTimeScale,
                        cancellationToken: _cancellationTokenSource.Token).SuppressCancellationThrow();
            else if (timeIntervalType == TimeIntervalType.MilliSecond)
                _isCanceled = await UniTask
                    .Delay(TimeSpan.FromMilliseconds(stepValue), ignoreTimeScale,
                        cancellationToken: _cancellationTokenSource.Token).SuppressCancellationThrow();
            else if (timeIntervalType == TimeIntervalType.Frame)
                _isCanceled = await UniTask
                    .DelayFrame((int) stepValue, cancellationToken: _cancellationTokenSource.Token)
                    .SuppressCancellationThrow();

            if (!_isCanceled)
            {
                _currentValue += timeIntervalValue;
                OnTriggerCall?.Invoke(_currentValue);
                await Progress();
            }
        }

        private bool CheckEnable()
        {
            if (!enabled || !gameObject.activeSelf || !gameObject.activeInHierarchy)
                return false;
            return true;
        }

        private void OnDestroy()
        {
            if (triggerEventType == TriggerEventType.Global)
            {
                for (int i = 0; i < onStartEventsName.Count; i++)
                {
                    EventManager.Instance.RemoveEvent(onStartEventsName[i], StartTrigger);
                }

                for (int i = 0; i < onPauseEventsName.Count; i++)
                {
                    EventManager.Instance.RemoveEvent(onPauseEventsName[i], PauseTrigger);
                }

                for (int i = 0; i < onContinueEventsName.Count; i++)
                {
                    EventManager.Instance.RemoveEvent(onContinueEventsName[i], ContinueTrigger);
                }

                for (int i = 0; i < onStopEventsName.Count; i++)
                {
                    EventManager.Instance.RemoveEvent(onStopEventsName[i], StopTrigger);
                }
            }
        }
    }
}