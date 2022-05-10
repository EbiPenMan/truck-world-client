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
    public class EmailLoginPlatform : LoginPlatformBase
    {
        private string _email;
        private string _password;

        private Log _logger;

        private void Awake()
        {
            _logger = new Log(name);
        }

        public override async UniTask<Tuple<ISession, ErrorModel>> SingIn(Client client)
        {
            _email = PlayerPrefs.GetString("EmailLoginPlatform_email");
            _password = PlayerPrefs.GetString("EmailLoginPlatform_password");
            if (string.IsNullOrEmpty(_email) || string.IsNullOrEmpty(_password))
            {
                //TODO show singup or singin ui

                //TODO then fill email and password
                _email = "a@b.com";
                _password = "123456";
            }

            var cts = new CancellationTokenSource();
            cts.CancelAfterSlim(TimeSpan.FromSeconds(loginSessionTimeout)); // 5sec timeout.
            try
            {
                ISession session = await client.AuthenticateEmailAsync(_email, _password, null, true, null,null, cts);
                _logger.Info("SingIn Email Successful.", "email : " + _email, new[] {"SingIn"});
                PlayerPrefs.SetString("EmailLoginPlatform_email", _email);
                PlayerPrefs.SetString("EmailLoginPlatform_password", _password);
                PlayerPrefs.Save();
                return new Tuple<ISession, ErrorModel>(session, null);
            }
            catch (Exception e)
            {
                _logger.Error("SingIn Email UnSuccessful.", "error : " + e.Message, new[] {"SingIn"});
                return new Tuple<ISession, ErrorModel>(null, new ErrorModel(0, e.Message));
            }
        }

        public override async UniTask<Tuple<bool, ErrorModel>> SingOut(Client client)
        {
            PlayerPrefs.DeleteKey("EmailLoginPlatform_email");
            PlayerPrefs.DeleteKey("EmailLoginPlatform_password");
            PlayerPrefs.Save();
            _logger.Info("SingOut Email Successful.", "email : " + _email, new[] {"SingOut"});
            return new Tuple<bool, ErrorModel>(true, null);
        }

        public override async UniTask<Tuple<bool, ErrorModel>> Link(Client client, ISession session)
        {
            _email = PlayerPrefs.GetString("EmailLoginPlatform_email");
            _password = PlayerPrefs.GetString("EmailLoginPlatform_password");
            if (string.IsNullOrEmpty(_email) || string.IsNullOrEmpty(_password))
            {
                //TODO show singup or singin ui

                //TODO then fill email and password
                _email = "a@b.com";
                _password = "123456";
            }

            var cts = new CancellationTokenSource();
            cts.CancelAfterSlim(TimeSpan.FromSeconds(loginSessionTimeout)); // 5sec timeout.
            try
            {
                await client.LinkEmailAsync(session, _email, _password,null, cts);
                PlayerPrefs.SetString("EmailLoginPlatform_email", _email);
                PlayerPrefs.SetString("EmailLoginPlatform_password", _password);
                PlayerPrefs.Save();
                _logger.Info("Linked Email Successful.", "email : " + _email,  new[] {"Linked"});
                return new Tuple<bool, ErrorModel>(true, null);
            }
            catch (Exception e)
            {
                _logger.Error("Linked Email UnSuccessful.", "error : " + e.Message, new[] {"Linked"});
                return new Tuple<bool, ErrorModel>(false, new ErrorModel(0, e.Message));
            }
        }

        public override async UniTask<Tuple<bool, ErrorModel>> UnLink(Client client, ISession session)
        {
            _email = PlayerPrefs.GetString("EmailLoginPlatform_email");
            _password = PlayerPrefs.GetString("EmailLoginPlatform_password");
            if (string.IsNullOrEmpty(_email) || string.IsNullOrEmpty(_password))
            {
                //TODO show singup or singin ui

                //TODO then fill email and password
                _email = "a@b.com";
                _password = "123456";
            }

            var cts = new CancellationTokenSource();
            cts.CancelAfterSlim(TimeSpan.FromSeconds(loginSessionTimeout)); // 5sec timeout.
            try
            {
                await client.UnlinkEmailAsync(session, _email, _password,null, cts);

                PlayerPrefs.DeleteKey("EmailLoginPlatform_email");
                PlayerPrefs.DeleteKey("EmailLoginPlatform_password");
                PlayerPrefs.Save();
                _logger.Info("UnLinked Email Successful.", "email : " + _email,
                    new[] {"UnLinked"});
                return new Tuple<bool, ErrorModel>(true, null);
            }
            catch (Exception e)
            {
                _logger.Error("UnLinked Email UnSuccessful.", "error : " + e.Message, new[] {"UnLinked"});
                return new Tuple<bool, ErrorModel>(false, new ErrorModel(0, e.Message));
            }
        }

    }
}