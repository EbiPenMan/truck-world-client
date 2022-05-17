using System;
using Cysharp.Threading.Tasks;
using JetBrains.Annotations;
using ProGraphGroup.General.Interfaces;
using UnityEngine;

namespace ProGraphGroup.General.Controllers
{
    public class ServerStatusCheckController:  MonoBehaviour ,IInit<object>
    {
        public void Init(object data = null, Action<bool> onDone = null)
        {
        }
    }
}