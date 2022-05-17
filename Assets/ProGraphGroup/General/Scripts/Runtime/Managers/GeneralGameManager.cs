using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using ProGraphGroup.General.Controllers;
using ProGraphGroup.General.Utility;
using ProGraphGroup.Packages.Utility;
using ProGraphGroup.Projects.TruckWorld;

namespace ProGraphGroup.General.Managers
{
    public class GeneralGameManager : MonoSingleton<GeneralGameManager>
    {
        public GeneralGameState CurrentGameState = GeneralGameState.ClientUpdateCheck;

        public ClientUpdateCheckController clientUpdateCheckController;
        public ServerStatusCheckController serverStatusCheckController;
        public IntroController introController;
        public LoginController loginController;
        public MainMenuController mainMenuController;


        void Start()
        {
            GoToState(CurrentGameState);
        }

        public async UniTask NextState()
        {
            CurrentGameState = GeneralUtils.NextEnumState(CurrentGameState);
            GoToState(CurrentGameState);
        }

        public void GoToState(GeneralGameState state)
        {
            GeneralGameState _oldGameState = CurrentGameState;
            CurrentGameState = state;

            if (CurrentGameState == GeneralGameState.ClientUpdateCheck && clientUpdateCheckController != null)
            {
                clientUpdateCheckController.Init(null, onDoneState);
            }
            else if (CurrentGameState == GeneralGameState.ServerStatusCheck && serverStatusCheckController != null)
            {
                serverStatusCheckController.Init(null, onDoneState);
            }
            else if (CurrentGameState == GeneralGameState.Intro && introController != null)
            {
                introController.Init(null, onDoneState);
            }
            else if (CurrentGameState == GeneralGameState.Login && loginController != null)
            {
                loginController.Init(null, onDoneState);
            }
            else if (CurrentGameState == GeneralGameState.MainMenu && mainMenuController != null)
            {
                mainMenuController.Init(null, null);
            }
            else if ((CurrentGameState == GeneralGameState.ClientUpdateCheck && clientUpdateCheckController == null) ||
                     (CurrentGameState == GeneralGameState.ServerStatusCheck && serverStatusCheckController == null) ||
                     (CurrentGameState == GeneralGameState.Intro && introController == null) ||
                     (CurrentGameState == GeneralGameState.Login && loginController == null))
            {
                NextState();
            }
        }

        private void onDoneState(bool res)
        {
            NextState();
        }
    }


    public enum GeneralGameState
    {
        ClientUpdateCheck,
        ServerStatusCheck,
        Intro,
        Login,
        MainMenu
    }
}