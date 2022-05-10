using System;
using JetBrains.Annotations;

namespace ProGraphGroup.Packages.Components.Condition
{
    public enum Operation
    {
        LessThan = 0,
        GreaterThan = 1,
        Equal = 2,
        LessThanOrEqual = 3,
        GreaterThanOrEqual = 4,
        NotEqual = 5,
    }

    public class CheckValueCondition : BaseCondition
    {
        public Operation operation;
        public float targetValue = 0;
        protected Action OnEnd;

        public override void Init<T>([CanBeNull] T controller, Action onEnd)
        {
            OnEnd = onEnd;
            transform.GetComponent<ITrigger<float>>().OnTriggerCall = OnChangeValue;
        }

        public virtual void OnChangeValue(float value)
        {
            float currentValue = Convert.ToSingle(value);
            switch (operation)
            {
                case Operation.LessThan:
                    if (currentValue < targetValue)
                        OnEnd?.Invoke();
                    break;
                case Operation.GreaterThan:
                    if (currentValue > targetValue)
                        OnEnd?.Invoke();
                    break;
                case Operation.Equal:
                    if (currentValue == targetValue)
                        OnEnd?.Invoke();
                    break;
                case Operation.LessThanOrEqual:
                    if (currentValue <= targetValue)
                        OnEnd?.Invoke();
                    break;
                case Operation.GreaterThanOrEqual:
                    if (currentValue >= targetValue)
                        OnEnd?.Invoke();
                    break;
                case Operation.NotEqual:
                    if (currentValue != targetValue)
                        OnEnd?.Invoke();
                    break;
            }
        }
    }
}