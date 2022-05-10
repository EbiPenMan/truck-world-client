using System;
using DG.Tweening;
using UnityEngine;

namespace BrunoMikoski.AnimationSequencer
{
    [Serializable]
    public abstract class DOTweenActionBase
    {
        public enum AnimationDirection
        {
            To, 
            From
        }
        
        [SerializeField]
        public string tagKey;

        [SerializeField]
        public AnimationDirection direction;
        
        [SerializeField]
        public CustomEase ease = CustomEase.InOutCirc;
        [SerializeField]
        public bool isRelative;

        public virtual Type TargetComponentType { get; }
        public abstract string DisplayName { get; }

        protected abstract Tweener GenerateTween_Internal(GameObject target, float duration);

        public Tween GenerateTween(GameObject target, float duration)
        {
            Tweener tween = GenerateTween_Internal(target, duration);
            if (direction == AnimationDirection.From)
                tween.From();

            tween.SetEase(ease);
            tween.SetRelative(isRelative);
            return tween;
        }
        
      
    }
}
