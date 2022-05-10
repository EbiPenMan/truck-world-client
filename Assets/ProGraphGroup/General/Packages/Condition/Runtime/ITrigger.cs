using System;

namespace ProGraphGroup.Packages.Components.Condition
{
    public enum TriggerEventType
    {
        Global = 0,
        Action = 1,
    }
    
    public interface ITrigger<T>
    {
        public Action<T> OnTriggerCall { get; set; }
    }
}