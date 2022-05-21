using System;
using BrunoMikoski.AnimationSequencer;
using Cysharp.Threading.Tasks;
using JetBrains.Annotations;
using ProGraphGroup.General.Interfaces;
using UnityEngine;

namespace ProGraphGroup.General.Controllers
{
    public class MainMenuController : MonoBehaviour, IInit<object>
    {
        public GameObject root;

        public virtual void Init(object data = null, Action<bool> onDone = null)
        {
            root.SetActive(true);
        }
       
    }
}