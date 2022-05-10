using System;
using UnityEngine;

namespace BrunoMikoski.AnimationSequencer
{
    [Serializable]
    public sealed class PathPositionDOTweenActionBase : PathDOTweenActionBase
    {
        [SerializeField]
        public Vector3[] positions;
        
        public override string DisplayName => "Move to Path Positions" ;

        protected override Vector3[] GetPathPositions()
        {
            return positions;
        }
    }
}
