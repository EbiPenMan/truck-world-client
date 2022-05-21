using BrunoMikoski.AnimationSequencer;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace ProGraphGroup.Projects.TruckWorld.PanelController
{
    public class BasePanelController : MonoBehaviour
    {
        [Header("General")] public GameObject root;
        [HideInInspector] public bool isShowing;
        [HideInInspector] public bool isHiding;

        public GameObject searchHeader;
        public GameObject itemsHeader;
        public GameObject content;

        public MainMenuPanelController.MainMenuState myState;
        
        private MainMenuPanelController mainMenuPanelController;

        public async UniTask Show(MainMenuPanelController mainMenuPanelController )
        {
            this.mainMenuPanelController = mainMenuPanelController;
            if (isShowing)
                return;
            if (isHiding)
                await UniTask.WaitUntilValueChanged(this, x => x.isHiding);
            await InitBeforeShow();
            isShowing = true;
            if (root.GetComponent<AnimationSequencerController>() != null)
                await root.GetComponent<AnimationSequencerController>().GetControllerByTagKey("Show")
                    .PlayEnumerator();
            isShowing = false;
        }

        public async UniTask Hide()
        {
            if (isHiding)
                return;
            if (isShowing)
                await UniTask.WaitUntilValueChanged(this, x => x.isShowing);
            isHiding = true;
            if (root.GetComponent<AnimationSequencerController>() != null)
                await root.GetComponent<AnimationSequencerController>().GetControllerByTagKey("Hide")
                    .PlayEnumerator();
            isHiding = false;
            await InitAfterHide();
        }

        protected virtual async UniTask InitBeforeShow()
        {
            root.SetActive(true);
        }

        protected virtual async UniTask InitAfterHide()
        {
            root.SetActive(false);
        }
    }
}