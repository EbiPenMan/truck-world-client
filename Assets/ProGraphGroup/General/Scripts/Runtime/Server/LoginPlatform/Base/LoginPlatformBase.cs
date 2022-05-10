using System;
using Cysharp.Threading.Tasks;
using Nakama;
using ProGraphGroup.General.Models;
using ProGraphGroup.General.Utility;
using UnityEngine;

namespace ProGraphGroup.Games.Hero.Server.LoginPlatform.Base
{
    public abstract class LoginPlatformBase : MonoBehaviourExtend
    {
        protected float loginSessionTimeout = 5;

        public abstract UniTask<Tuple<ISession, ErrorModel>> SingIn(Client client);
        public abstract UniTask<Tuple<bool, ErrorModel>> SingOut(Client client);
        public abstract UniTask<Tuple<bool, ErrorModel>> Link(Client client, ISession session);
        public abstract UniTask<Tuple<bool, ErrorModel>> UnLink(Client client, ISession session);
    }
}