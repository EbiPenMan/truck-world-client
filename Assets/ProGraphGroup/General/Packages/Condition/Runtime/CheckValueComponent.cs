using System;
using System.Collections.Generic;
using ProGraphGroup.Packages.GeneralManagers;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Serialization;

namespace ProGraphGroup.Packages.Components.Condition
{
    public class CheckValueComponent : MonoBehaviour, ITrigger<float>
    {
        public Action<float> OnTriggerCall { get; set; }
        public TriggerEventType triggerEventType = TriggerEventType.Global;

        [ShowIf("triggerEventType", TriggerEventType.Global)]
        public List<string> onChangeValueEventsName = new List<string>();

        private float _currentValue;

        private void Start()
        {
            if (triggerEventType == TriggerEventType.Global)
            {
                for (int i = 0; i < onChangeValueEventsName.Count; i++)
                {
                    EventManager.Instance.RegisterEvent(onChangeValueEventsName[i], ChangeValueTrigger);
                }
            }
        }

        public void ChangeValueTrigger(object value)
        {
            if (!CheckEnable())
                return;
            _currentValue = Convert.ToSingle(value);
            OnTriggerCall?.Invoke(_currentValue);
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
                for (int i = 0; i < onChangeValueEventsName.Count; i++)
                {
                    EventManager.Instance.RemoveEvent(onChangeValueEventsName[i], ChangeValueTrigger);
                }
            }
        }
    }
}