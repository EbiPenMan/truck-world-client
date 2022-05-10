using System;
using UnityEngine;

namespace ProGraphGroup.Packages.Components.Condition
{
    public abstract class BaseCondition : MonoBehaviour
    {
        public abstract void Init<T>(T controller, Action onEnd);
    }
}
