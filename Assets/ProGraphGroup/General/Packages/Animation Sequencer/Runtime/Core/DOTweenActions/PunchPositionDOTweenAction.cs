using System;
using DG.Tweening;
using UnityEngine;

namespace BrunoMikoski.AnimationSequencer
{
    [Serializable]
    public sealed class PunchPositionDOTweenAction : DOTweenActionBase
    {
        public override Type TargetComponentType => typeof(Transform);
        public override string DisplayName => "Punch Position";

        [SerializeField]
        public Vector3 punch;
        [SerializeField]
        public int vibrato = 10;
        [SerializeField]
        public float elasticity = 1f;
        [SerializeField]
        public bool snapping;

        protected override Tweener GenerateTween_Internal(GameObject target, float duration)
        {
            Tweener tween = target.transform.DOPunchPosition(punch, duration, vibrato, elasticity, snapping);

            return tween;
        }

    }
}
