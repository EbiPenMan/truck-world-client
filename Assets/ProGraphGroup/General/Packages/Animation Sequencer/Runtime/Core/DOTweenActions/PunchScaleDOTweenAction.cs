using System;
using DG.Tweening;
using UnityEngine;

namespace BrunoMikoski.AnimationSequencer
{
    [Serializable]
    public sealed class PunchScaleDOTweenAction : DOTweenActionBase
    {
        public override string DisplayName => "Punch Scale";
        public override Type TargetComponentType => typeof(Transform);

        [SerializeField]
        public Vector3 punch;
        [SerializeField]
        public int vibrato = 10;
        [SerializeField]
        public float elasticity = 1f;

        protected override Tweener GenerateTween_Internal(GameObject target, float duration)
        {
            Tweener tween = target.transform.DOPunchScale(punch, duration, vibrato, elasticity);

            return tween;
        }

    }
}
