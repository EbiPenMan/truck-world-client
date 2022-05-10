using System;
using Cysharp.Threading.Tasks;
using Nakama;
using ProGraphGroup.Games.Hero.Server.LoginPlatform.Base;
using ProGraphGroup.General.Models;
using ProGraphGroup.General.Utility;
using UnityEngine;

namespace ProGraphGroup.Games.Hero.Server.LoginPlatform
{
    public class LoginManager : MonoSingletonExtend<LoginManager>
    {
        public LoginManagerUiController loginManagerUiController;

        public DeviceLoginPlatform deviceLoginPlatformPref;
        public EmailLoginPlatform emailLoginPlatformPref;
        public CafeBazaarLoginPlatform cafeBazaarLoginPlatformPref;

        public Transform loginPlatformUiParentNode;
        public LoginPlatformType activeLoginPlatformType;

        private LoginPlatformBase _currentLoginPlatform;


        public async UniTask<ISession> Init()
        {
            loginManagerUiController.InitShowUi();

            LoginPlatformType lastLoginPlatform = (LoginPlatformType) PlayerPrefs.GetInt("lastLoginPlatform");

            // UniTaskAsyncEnumerable.EveryValueChanged(this, s => s.activeLoginPlatformType)
            //     .ForEachAsync(s =>
            //     {
            //         Logger.Info("==== activeLoginPlatformType:");
            //         Logger.Info(JsonConvert.SerializeObject(s));
            //         if (s.HasFlag(LoginPlatformType.Gmail))
            //         {
            //             Logger.Info("==== OK  ----------");
            //         }
            //     });

            // await foreach (var _ in UniTaskAsyncEnumerable.Interval(TimeSpan.FromSeconds(5)))
            // {
            //     Debug.Log("Update() " + Time.frameCount);
            // }
            Logger.Info("lastLoginPlatform: " + lastLoginPlatform);

            if (lastLoginPlatform != 0)
            {
                ISession session = await InitCurrentLoginPlatform(lastLoginPlatform);
                loginManagerUiController.rootNode.SetActive(false);
                loginManagerUiController.loadingUi.SetActive(false);

                return session;
            }
            else
            {
                //TODO Show All active login platform for select by user
                lastLoginPlatform = await loginManagerUiController.SelectLoginPlatform();
                ISession session = await InitCurrentLoginPlatform(lastLoginPlatform);
                loginManagerUiController.InitHideUi();

                //TODo check null session
                PlayerPrefs.SetInt("lastLoginPlatform", (int) lastLoginPlatform);

                return session;
            }

            return null;
        }

        public async UniTask<ISession> InitCurrentLoginPlatform(LoginPlatformType loginPlatformType)
        {
            Logger.Info("InitCurrentLoginPlatform");
            if (loginPlatformType == LoginPlatformType.DeviceId)
            {
                _currentLoginPlatform = Instantiate(deviceLoginPlatformPref, loginPlatformUiParentNode, true);
            }
            else if (loginPlatformType == LoginPlatformType.Email)
            {
                _currentLoginPlatform = Instantiate(emailLoginPlatformPref, loginPlatformUiParentNode, true);
            }
            else if (loginPlatformType == LoginPlatformType.CafeBazaar)
            {
                _currentLoginPlatform = Instantiate(cafeBazaarLoginPlatformPref, loginPlatformUiParentNode, true);
            }
            else
            {
                return null;
            }

            Tuple<ISession, ErrorModel> res = await _currentLoginPlatform.SingIn(ServerManager.Instance.client);
            if (res.Item1 == null)
            {
                //TODO error
                return res.Item1;
            }
            else
            {
                return res.Item1;
            }
        }
    }
}