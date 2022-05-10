using System;
using System.Linq;
using DG.Tweening;
using UnityEngine;
using System.Collections.Generic;

namespace BrunoMikoski.AnimationSequencer
{
    [Serializable]
    public sealed class DOTweenAnimationStep : GameObjectAnimationStep
    {
        public override string DisplayName => "Tween Target";
        [SerializeField]
        public int loopCount;
        
        [SerializeField]
        public LoopType loopType;
        [SerializeReference]
        public DOTweenActionBase[] actions;

        public override void AddTweenToSequence(Sequence animationSequence)
        {
            Sequence sequence = DOTween.Sequence();
            for (int i = 0; i < actions.Length; i++)
            {
                Tween tween = actions[i].GenerateTween(target, duration);

                //Abolfazl Hosnian
                tween.SetDelay(StepDelay);
                //
                
                tween.SetLoops(loopCount, loopType);

                // Abolfazl Hosnian
                tween.OnStepComplete(() =>
                {
                    OnLoopCycleFinished();
                    if (tween.CompletedLoops() != loopCount)
                    {
                        float tempValue = 0;
                        Tween tween_2 = ﻿﻿﻿﻿﻿﻿﻿DOTween.To(()=> tempValue, x=> tempValue = x, 0, 0);
                        tween_2.SetDelay(LoopCyclesDelay);
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
            }
            
            if (FlowType == FlowType.Join)
                animationSequence.Join(sequence);
            else
                animationSequence.Append(sequence);

        }

        public override string GetDisplayNameForEditor(int index)
        {
            string targetName = "NULL";
            if (target != null)
                targetName = target.name;
            
            return $"{index}. {targetName}: {String.Join(", ", actions.Select(action => action.DisplayName)).Truncate(45)}";
        }
        
        
        public DOTweenActionBase GetActionByTagKey(string tagKey)
        {
            return actions
                .First(x => x.tagKey == tagKey);
        }
        
    }
}
