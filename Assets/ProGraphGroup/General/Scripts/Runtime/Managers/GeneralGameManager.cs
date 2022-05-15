using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using ProGraphGroup.General.Controllers;
using ProGraphGroup.General.Utility;
using ProGraphGroup.Packages.Utility;

namespace ProGraphGroup.General.Managers
{
    public class GeneralGameManager : MonoSingleton<GeneralGameManager>
    {
        public GeneralGameState CurrentGameState = GeneralGameState.ClientUpdateCheck;

        private ClientUpdateCheckController _clientUpdateCheckController = new ClientUpdateCheckController();
        private ServerStatusCheckController _serverStatusCheckController = new ServerStatusCheckController();
        private IntroController _introController = new IntroController();
        private LoginController _loginController = new LoginController();
        private MainMenuController _mainMenuController = new MainMenuController();

        private CancellationTokenSource _cancellationTokenSource;
        private Action _onEndAction;


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
            switch (CurrentGameState)
            {
                case GeneralGameState.ClientUpdateCheck:
                    _clientUpdateCheckController.Init();
                    break;
                case GeneralGameState.ServerStatusCheck:
                    _serverStatusCheckController.Init();
                    break;
                case GeneralGameState.Intro:
                    _introController.Init();
                    break;
                case GeneralGameState.Login:
                    _loginController.Init();
                    break;
                case GeneralGameState.MainMenu:
                    _mainMenuController.Init();
                    break;
                default:
                    CurrentGameState = _oldGameState;
                    throw new ArgumentOutOfRangeException();
            }
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