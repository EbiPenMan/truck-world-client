using System;
using System.Collections.Generic;
using ProGraphGroup.Packages.GeneralManagers;

namespace ProGraphGroup.Packages.Components.Condition
{
    public class CheckEventCondition : BaseCondition
    {
        protected Action OnEnd;
        public List<String> onConditionOccurEventsName = new List<string>();

        public override void Init<T>(T controller, Action onEnd)
        {
            OnEnd = onEnd;
            for (int i = 0; i < onConditionOccurEventsName.Count; i++)
            {
                EventManager.Instance.RegisterEvent(onConditionOccurEventsName[i], OnCallEvent);
            }
        }

        protected void OnCallEvent(object value)
        {
            OnEnd?.Invoke();
        }

        protected void OnDestroy()
        {
            for (int i = 0; i < onConditionOccurEventsName.Count; i++)
            {
                EventManager.Instance.RemoveEvent(onConditionOccurEventsName[i], OnCallEvent);
            }
        }
    }
}