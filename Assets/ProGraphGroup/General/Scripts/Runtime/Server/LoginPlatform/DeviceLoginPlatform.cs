using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using Nakama;
using ProGraphGroup.Games.Hero.Server.LoginPlatform.Base;
using ProGraphGroup.General.Models;
using ProGraphGroup.General.Utility;
using UnityEngine;

namespace ProGraphGroup.Games.Hero.Server.LoginPlatform
{
    public class DeviceLoginPlatform : LoginPlatformBase
    {
        private string _uniqueIdentifier;
        private Log _logger;

        private void Awake()
        {
            _logger = new Log(name);
        }

        public override async UniTask<Tuple<ISession, ErrorModel>> SingIn(Client client)
        {
            _uniqueIdentifier = PlayerPrefs.GetString("DeviceLoginPlatform_uniqueIdentifier");
            if (string.IsNullOrEmpty(_uniqueIdentifier))
                _uniqueIdentifier = SystemInfo.deviceUniqueIdentifier;

            var cts = new CancellationTokenSource();
            cts.CancelAfterSlim(TimeSpan.FromSeconds(loginSessionTimeout)); // 5sec timeout.
            try
            {
                ISession session = await client.AuthenticateDeviceAsync(_uniqueIdentifier, null, true, null, null, cts);
                PlayerPrefs.SetString("DeviceLoginPlatform_uniqueIdentifier", _uniqueIdentifier);
                PlayerPrefs.Save();
                _logger.Info("SingIn Device Successful.", "uniqueIdentifier : " + _uniqueIdentifier, new[] {"SingIn"});
                _logger.Info("SingIn Device Successful.", "UserId : " + session.UserId, new[] {"SingIn"});
                return new Tuple<ISession, ErrorModel>(session, null);
            }
            catch (Exception e)
            {
                _logger.Error("SingIn Device UnSuccessful.", "error : " + e.Message, new[] {"SingIn"});
                return new Tuple<ISession, ErrorModel>(null, new ErrorModel(0, e.Message));
            }
        }

        public override async UniTask<Tuple<bool, ErrorModel>> SingOut(Client client)
        {
            PlayerPrefs.DeleteKey("DeviceLoginPlatform_uniqueIdentifier");
            PlayerPrefs.Save();
            _logger.Info("SingOut Device Successful.", "uniqueIdentifier : " + _uniqueIdentifier, new[] {"SingOut"});
            return new Tuple<bool, ErrorModel>(true, null);
        }

        public override async UniTask<Tuple<bool, ErrorModel>> Link(Client client, ISession session)
        {
            _uniqueIdentifier = PlayerPrefs.GetString("DeviceLoginPlatform_uniqueIdentifier");
            if (string.IsNullOrEmpty(_uniqueIdentifier))
                _uniqueIdentifier = SystemInfo.deviceUniqueIdentifier;

            var cts = new CancellationTokenSource();
            cts.CancelAfterSlim(TimeSpan.FromSeconds(loginSessionTimeout)); // 5sec timeout.
            try
            {
                await client.LinkDeviceAsync(session, _uniqueIdentifier, null, cts);
                PlayerPrefs.SetString("DeviceLoginPlatform_uniqueIdentifier", _uniqueIdentifier);
                PlayerPrefs.Save();
                _logger.Info("Linked Device Successful.", "uniqueIdentifier : " + _uniqueIdentifier, new[] {"Linked"});
                return new Tuple<bool, ErrorModel>(true, null);
            }
            catch (Exception e)
            {
                _logger.Error("Linked Device UnSuccessful.", "error : " + e.Message, new[] {"Linked"});
                return new Tuple<bool, ErrorModel>(false, new ErrorModel(0, e.Message));
            }
        }

        public override async UniTask<Tuple<bool, ErrorModel>> UnLink(Client client, ISession session)
        {
            _uniqueIdentifier = PlayerPrefs.GetString("DeviceLoginPlatform_uniqueIdentifier");
            if (string.IsNullOrEmpty(_uniqueIdentifier))
                _uniqueIdentifier = SystemInfo.deviceUniqueIdentifier;

            var cts = new CancellationTokenSource();
            cts.CancelAfterSlim(TimeSpan.FromSeconds(loginSessionTimeout)); // 5sec timeout.
            try
            {
                await client.UnlinkDeviceAsync(session, _uniqueIdentifier, null, cts);
                PlayerPrefs.DeleteKey("DeviceLoginPlatform_uniqueIdentifier");
                PlayerPrefs.Save();
                _logger.Info("UnLinked Device Successful.", "uniqueIdentifier : " + _uniqueIdentifier,
                    new[] {"UnLinked"});
                return new Tuple<bool, ErrorModel>(true, null);
            }
            catch (Exception e)
            {
                _logger.Error("UnLinked Device UnSuccessful.", "error : " + e.Message, new[] {"UnLinked"});
                return new Tuple<bool, ErrorModel>(false, new ErrorModel(0, e.Message));
            }
        }
    }
}