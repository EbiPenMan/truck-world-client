using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using ProGraphGroup.General.Controllers;
using UnityEngine;

namespace ProGraphGroup.Projects.TruckWorld.PanelController
{
    public class MainMenuPanelController : MainMenuController
    {
        [Header("Controllers")] public List<BasePanelController> panelControllers = new List<BasePanelController>();

        [Header("MainItem")] public GameObject footer;

        public MainMenuState defaultMenuState = MainMenuState.Place;
        public MainMenuState currentMenuState = MainMenuState.None;

        private bool isChangingState;
        private bool isChangingProfilePanelState;

        public override void Init(object data = null, Action<bool> onDone = null)
        {
            root.SetActive(true);
            ChangeState(defaultMenuState).Forget();
        }

        public async UniTask ChangeState(MainMenuState newState)
        {
            if (isChangingState)
                return;
            isChangingState = true;
            if (currentMenuState != MainMenuState.None)
            {
                await GetPanelControllerByState(currentMenuState).Hide();
            }

            currentMenuState = newState;
            await GetPanelControllerByState(currentMenuState).Show(this);
            isChangingState = false;
        }

        public BasePanelController GetPanelControllerByState(MainMenuState state)
        {
            return panelControllers.Find(x => x.myState == state);
        }

        public async UniTask ShowHideProfilePanel(bool state)
        {
            if (isChangingProfilePanelState)
                return;
            isChangingProfilePanelState = true;
            if (state)
                await GetPanelControllerByState(MainMenuState.Profile).Show(this);
            else
                await GetPanelControllerByState(MainMenuState.Profile).Hide();

            isChangingProfilePanelState = false;
        }
        
        public async UniTask ShowPanel(MainMenuState state)
        {
            ChangeState(state).Forget();
        }

        public enum MainMenuState
        {
            None,
            Map,
            Place,
            Learn,
            Shop,
            News,
            Profile
        }
    }
}