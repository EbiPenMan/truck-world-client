using Cysharp.Threading.Tasks.Triggers;
using ProGraphGroup.Packages.Utility;
using UnityEngine;

namespace ProGraphGroup.General.Utility
{
    public class MonoSingletonExtend<T> : MonoSingleton<T> where T : MonoBehaviour
    {
        protected Log Logger;

        protected virtual void Awake()
        {
            Logger = new Log(GetType().Name);
            base.Awake();
        }

    }
}