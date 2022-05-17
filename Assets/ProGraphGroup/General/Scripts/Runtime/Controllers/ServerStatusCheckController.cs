using System;
using Cysharp.Threading.Tasks;
using JetBrains.Annotations;
using ProGraphGroup.General.Interfaces;
using UnityEngine;

namespace ProGraphGroup.General.Controllers
{
    public class ServerStatusCheckController : MonoBehaviour, IInit<object>
    {
        private Action<bool> onDone;

        public void Init(object data = null, Action<bool> onDone = null)
        {
            this.onDone = onDone;
            if (onDone != null)
                onDone(true);
        }
    }
}