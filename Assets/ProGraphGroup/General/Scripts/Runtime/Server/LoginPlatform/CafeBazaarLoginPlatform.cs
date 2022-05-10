using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using ProGraphGroup.Games.Hero.Server.LoginPlatform.Base;
using UnityEngine;
// using CafeBazaar.Games;
// using CafeBazaar.Games.BasicApi;
using Nakama;
using ProGraphGroup.General.Models;
using ProGraphGroup.General.Utility;

namespace ProGraphGroup.Games.Hero.Server.LoginPlatform
{
    public class CafeBazaarLoginPlatform : LoginPlatformBase
    {
        private string _uniqueIdentifier;


        public override async UniTask<Tuple<ISession, ErrorModel>> SingIn(Client client)
        {
            _uniqueIdentifier = PlayerPrefs.GetString("CafeBazaarLoginPlatform_uniqueIdentifier");
            if (string.IsNullOrEmpty(_uniqueIdentifier))
                _uniqueIdentifier = SystemInfo.deviceUniqueIdentifier;

            var cts = new CancellationTokenSource();
            cts.CancelAfterSlim(TimeSpan.FromSeconds(loginSessionTimeout)); // 5sec timeout.
            try
            {
                _uniqueIdentifier = await _bazaarGamesAuthenticate();
                ISession session =
                    await client.AuthenticateCustomAsync(_uniqueIdentifier, null, true, null, null, cts);
                PlayerPrefs.SetString("CafeBazaarLoginPlatform_uniqueIdentifier", _uniqueIdentifier);
                PlayerPrefs.Save();
                Logger.Info("SingIn CafeBazaar Successful.", "uniqueIdentifier : " + _uniqueIdentifier,
                    new[] {"SingIn"});
                return new Tuple<ISession, ErrorModel>(session, null);
            }
            catch (Exception e)
            {
                Logger.Error("SingIn CafeBazaar UnSuccessful.", "error : " + e.Message, new[] {"SingIn"});
                return new Tuple<ISession, ErrorModel>(null, new ErrorModel(0, e.Message));
            }
        }

        public override async UniTask<Tuple<bool, ErrorModel>> SingOut(Client client)
        {
            PlayerPrefs.DeleteKey("CafeBazaarLoginPlatform_uniqueIdentifier");
            PlayerPrefs.Save();
            Logger.Info("SingOut CafeBazaar Successful.", "uniqueIdentifier : " + _uniqueIdentifier,
                new[] {"SingOut"});
            return new Tuple<bool, ErrorModel>(true, null);
        }

        public override async UniTask<Tuple<bool, ErrorModel>> Link(Client client, ISession session)
        {
            _uniqueIdentifier = PlayerPrefs.GetString("CafeBazaarLoginPlatform_uniqueIdentifier");
            if (string.IsNullOrEmpty(_uniqueIdentifier))
                _uniqueIdentifier = SystemInfo.deviceUniqueIdentifier;

            var cts = new CancellationTokenSource();
            cts.CancelAfterSlim(TimeSpan.FromSeconds(loginSessionTimeout)); // 5sec timeout.
            try
            {
                _uniqueIdentifier = await _bazaarGamesAuthenticate();
                await client.LinkCustomAsync(session, _uniqueIdentifier, null, cts);
                PlayerPrefs.SetString("CafeBazaarLoginPlatform_uniqueIdentifier", _uniqueIdentifier);
                PlayerPrefs.Save();
                Logger.Info("Linked CafeBazaar Successful.", "uniqueIdentifier : " + _uniqueIdentifier,
                    new[] {"Linked"});
                return new Tuple<bool, ErrorModel>(true, null);
            }
            catch (Exception e)
            {
                Logger.Error("Linked CafeBazaar UnSuccessful.", "error : " + e.Message, new[] {"Linked"});
                return new Tuple<bool, ErrorModel>(false, new ErrorModel(0, e.Message));
            }
        }

        public override async UniTask<Tuple<bool, ErrorModel>> UnLink(Client client, ISession session)
        {
            _uniqueIdentifier = PlayerPrefs.GetString("CafeBazaarLoginPlatform_uniqueIdentifier");
            if (string.IsNullOrEmpty(_uniqueIdentifier))
                _uniqueIdentifier = SystemInfo.deviceUniqueIdentifier;

            var cts = new CancellationTokenSource();
            cts.CancelAfterSlim(TimeSpan.FromSeconds(loginSessionTimeout)); // 5sec timeout.
            try
            {
                _uniqueIdentifier = await _bazaarGamesAuthenticate();
                await client.UnlinkCustomAsync(session, _uniqueIdentifier, null, cts);
                PlayerPrefs.DeleteKey("CafeBazaarLoginPlatform_uniqueIdentifier");
                PlayerPrefs.Save();
                Logger.Info("UnLinked CafeBazaar Successful.", "uniqueIdentifier : " + _uniqueIdentifier,
                    new[] {"UnLinked"});
                return new Tuple<bool, ErrorModel>(true, null);
            }
            catch (Exception e)
            {
                Logger.Error("UnLinked CafeBazaar UnSuccessful.", "error : " + e.Message, new[] {"UnLinked"});
                return new Tuple<bool, ErrorModel>(false, new ErrorModel(0, e.Message));
            }
        }


        private async UniTask<string> _bazaarGamesAuthenticate()
        {
            try
            {
                // var config = new BazaarGamesClientConfiguration.Builder().Build();
                // BazaarGamesPlatform.InitializeInstance(config);
                // BazaarGamesPlatform.Activate();
                //
                // bool response = false;
                // bool isEndAuthenticate = false;
                // BazaarGamesPlatform.Instance.Authenticate(false, res =>
                // {
                //     if (res)
                //         Debug.Log("SignedIn to bazaar AccountId : " +
                //                   BazaarGamesPlatform.Instance.GetUserId());
                //     else
                //         Debug.Log("SignedIn error ");
                //     response = res;
                //     isEndAuthenticate = true;
                // });
                // await UniTask.WaitUntil(() => isEndAuthenticate == false);
                //
                // if (response)
                // {
                //     return BazaarGamesPlatform.Instance.GetUserId();
                // }

                throw new ErrorModel(0, "null response");
            }
            catch (Exception e)
            {
                throw new ErrorModel(0, e.Message);

            }
        }
    }
}