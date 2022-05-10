using System;
using UnityEngine;

namespace BrunoMikoski.AnimationSequencer
{
    [Serializable]
    public abstract class GameObjectAnimationStep : AnimationStepBase
    {
        [SerializeField]
        public GameObject target;
        public GameObject Target => target;
        
        [SerializeField]
        public float duration = 1;
        

        
        public void SetTarget(GameObject newTarget)
        {
            target = newTarget;
        }
    }
}
