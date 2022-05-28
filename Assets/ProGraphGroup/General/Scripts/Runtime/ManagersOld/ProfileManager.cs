using System.Collections.Generic;
using Cysharp.Threading.Tasks;
// using Nakama;
using Newtonsoft.Json;
using ProGraphGroup.General.Models.Configs;
using ProGraphGroup.General.Server;
using ProGraphGroup.General.Server.Models.Response;
using ProGraphGroup.General.Utility;
using ProGraphGroup.Packages.Utility;
using UnityEngine.Events;

namespace ProGraphGroup.General.ManagersOld
{
    public class ProfileManager : MonoSingleton<ProfileManager>
    {
        private Log _logger;
        // private Dictionary<string, IApiUser> _users = new Dictionary<string, IApiUser>();
        // private IApiAccount _myAccount;
        //
        // public UnityEvent onSynceMyAccount;
        //
        // private void Awake()
        // {
        //     _logger = new Log("ServerManager");
        // }
        //
        //
        // public IApiAccount GetMyAccount()
        // {
        //     return _myAccount;
        // }
        //
        // public async UniTask<IApiAccount> GetMyAccountAsync()
        // {
        //     _myAccount = await ServerManager.Instance.GetMyAccount();
        //     _users.Add(_myAccount.User.Id, _myAccount.User);
        //     onSynceMyAccount?.Invoke();
        //     return _myAccount;
        // }
        //
        // public IApiUser GetUser(string id)
        // {
        //     return _users[id];
        // }
        //
        // public async UniTask<IApiUser> GetUserAsync(string id, bool isForceUpdate = false)
        // {
        //     var user = _users[id];
        //     if (!isForceUpdate && user != null) return user;
        //     user = await ServerManager.Instance.GetUser(id);
        //     if (user == null) return null;
        //     _users.Add(user.Id, user);
        //     return user;
        // }

        // public async UniTask<bool> ChangeMyName(string newName)
        // {
        //     BaseResponseVerifyModel res = await ServerManager.Instance.ChangeDisplayName(newName);
        //     await GetMyAccountAsync();
        //     return res.Result.Status;
        // }
        //
        // public UserWalletModel GetMyWallet()
        // {
        //     return JsonConvert.DeserializeObject<UserWalletModel>(_myAccount.Wallet);
        // }
        // public async UniTask<UserWalletModel> GetMyWalletAsync()
        // {
        //     await GetMyAccountAsync();
        //     return JsonConvert.DeserializeObject<UserWalletModel>(_myAccount.Wallet);
        // }
    }
}