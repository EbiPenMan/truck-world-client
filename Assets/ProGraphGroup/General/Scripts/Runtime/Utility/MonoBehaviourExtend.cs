using System;
using ProGraphGroup.Packages.Utility;
using UnityEngine;

namespace ProGraphGroup.General.Utility
{
    public class MonoBehaviourExtend : MonoBehaviour
    {
        protected Log Logger;

        private void Awake()
        {
            Logger = new Log(name);
        }
    }
}