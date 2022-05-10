using BrunoMikoski.AnimationSequencer;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace ProGraphGroup.Games.Hero.Transmission
{
    public class ScaleTransmission : TransmissionBase
    {
        public GameObject canvas;
        public AnimationSequencerController animationSequencer;
        public override async UniTask Show()
        {
            canvas.SetActive(true);
            bool isComplete = false;
            animationSequencer.GetControllerByTagKey("Show").Play(() =>
            {
                isComplete = true;
            });
            await UniTask.WaitWhile(() => isComplete == false);
        }
        
        public override async UniTask Hide()
        {
            bool isComplete = false;
            animationSequencer.GetControllerByTagKey("Hide").Play(() =>
            {
                isComplete = true;
            });
            await UniTask.WaitWhile(() => isComplete == false);
            canvas.SetActive(false);
        }
    }
}
