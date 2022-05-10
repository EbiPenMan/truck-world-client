using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;

namespace BrunoMikoski.AnimationSequencer
{
    [Serializable]
    public sealed class InvokeCallbackAnimationStep : AnimationStepBase
    {
        
        [SerializeField]
        public float duration = 1;

        [SerializeField]
        public int loopCount;
        
        [SerializeField]
        public LoopType loopType;
        
        
        
        
        public override string DisplayName => "Invoke Callback Step";
        
        

        public override void AddTweenToSequence(Sequence animationSequence)
        {
            Sequence sequence = DOTween.Sequence();

            float tempValue = 0;
            Tween tween = ﻿﻿﻿﻿﻿﻿﻿DOTween.To(()=> tempValue, x=> tempValue = x, 0, duration);
            tween.SetDelay(StepDelay);

            tween.SetLoops(loopCount, loopType);

            
            tween.OnStepComplete(() =>
            {
                OnLoopCycleFinished();
                if (tween.CompletedLoops() != loopCount && loopCount != 0)
                {
                    
                    float tempValue = 0;
                    Tween tween_2 = ﻿﻿﻿﻿﻿﻿﻿DOTween.To(()=> tempValue, x=> tempValue = x, 0, 0);
                    tween_2.SetDelay(StepDelay);
                    tween_2.OnComplete(() =>
                    {
                        OnLoopCycleStart();
                    });
                    tween_2.SetAutoKill(true);
                    tween_2.Play();
                }
            });

                
            tween.OnStart(() =>
                {
                    OnStepStart();
                    float tempValue = 0;
                    Tween tween_2 = ﻿﻿﻿﻿﻿﻿﻿DOTween.To(()=> tempValue, x=> tempValue = x, 0, 0);
                    tween_2.SetDelay(StepDelay+LoopCyclesDelay);
                    tween_2.OnComplete(() =>
                    {
                        OnLoopCycleStart();
                    });
                    tween_2.SetAutoKill(true);
                    tween_2.Play();
                }
            );
                
            tween.OnComplete(() =>
            {
                OnStepFinished();
            });
            sequence.Join(tween);
            
            if (FlowType == FlowType.Join)
                animationSequence.Join(sequence);
            else
                animationSequence.Append(sequence);
        }

        public override string GetDisplayNameForEditor(int index)
        {
            string persistentTargetNames = String.Empty;
            // for (int i = 0; i < callback.GetPersistentEventCount(); i++)
            // {
            //     if (callback.GetPersistentTarget(i) == null)
            //         continue;
            //     
            //     persistentTargetNames = $"{string.Join(", ", callback.GetPersistentTarget(i).name).Truncate(45)}";
            // }
            
            return $"{index}. {DisplayName}: {persistentTargetNames}";
        }
    }
}
