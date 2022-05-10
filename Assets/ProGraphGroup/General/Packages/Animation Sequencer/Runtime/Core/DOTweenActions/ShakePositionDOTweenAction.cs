using System;
using DG.Tweening;
using UnityEngine;

namespace BrunoMikoski.AnimationSequencer
{
    [Serializable]
    public sealed class ShakePositionDOTweenAction : DOTweenActionBase
    {
        public override Type TargetComponentType => typeof(Transform);
        public override string DisplayName => "Shake Position";

        [SerializeField]
        public Vector3 strength;
        [SerializeField]
        public int vibrato = 10;
        [SerializeField]
        public float randomness = 90;
        [SerializeField]
        public bool snapping;
        [SerializeField]
        public bool fadeout = true;

        protected override Tweener GenerateTween_Internal(GameObject target, float duration)
        {
            Tweener tween = target.transform.DOShakePosition(duration, strength, vibrato, randomness, snapping, fadeout);

            return tween;
        }

    }
}
