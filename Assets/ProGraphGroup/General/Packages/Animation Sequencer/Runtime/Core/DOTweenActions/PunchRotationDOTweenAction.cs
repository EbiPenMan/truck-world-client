using System;
using DG.Tweening;
using UnityEngine;

namespace BrunoMikoski.AnimationSequencer
{
    [Serializable]
    public sealed class PunchRotationDOTweenAction : DOTweenActionBase
    {
        public override Type TargetComponentType => typeof(Transform);
        public override string DisplayName => "Punch Rotation";

        [SerializeField]
        public Vector3 punch;
        [SerializeField]
        public int vibrato = 10;
        [SerializeField]
        public float elasticity = 1f;

        protected override Tweener GenerateTween_Internal(GameObject target, float duration)
        {  
            Tweener tween = target.transform.DOPunchRotation(punch, duration, vibrato, elasticity);

            return tween;
        }

    }
}
