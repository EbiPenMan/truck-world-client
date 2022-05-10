using System;
using UnityEngine;

namespace BrunoMikoski.AnimationSequencer
{
    [Serializable]
    public sealed class RotateToEulerAnglesFromTransformRotateDOTweenAction : RotateDOTweenActionBase
    {
        public override string DisplayName => "Rotate To Transform Euler Angles";

        [SerializeField]
        public Transform target;
        [SerializeField]
        public bool useLocalEulerAngles;
        
        
        protected override Vector3 GetRotation()
        {
            if (!useLocalEulerAngles)
                return target.eulerAngles;
            return target.localEulerAngles;
        }
    }
}
