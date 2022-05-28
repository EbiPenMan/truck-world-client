using System.Collections.Generic;
using System.Linq;
using Cysharp.Threading.Tasks;
// using Nakama;
using Newtonsoft.Json;
using ProGraphGroup.General.Models.Configs;
using ProGraphGroup.General.Server.Configs;
using ProGraphGroup.General.Server.LoginPlatform;
using ProGraphGroup.General.Server.Models.Response;
using ProGraphGroup.General.Utility;
using UnityEngine;

namespace ProGraphGroup.General.Server
{
    public class ServerManager : MonoSingletonExtend<ServerManager>
    {
        public ServerClientConfigs serverClientConfigs;
        public ServerUiController uiController;
        public LoginManager loginManager;


        // [HideInInspector] public Client client;
        [HideInInspector] public string uniqueIdentifier;
        // [HideInInspector] public ISession session;

        [HideInInspector] public PublicServerConfigsModel publicServerConfigs;

        // public async UniTask<bool> Init()
        // {
        //     Logger.Info("Start Init.");
        //     client = await CreateClient();
        //     session = await CreateSession();
        //     if (session != null)
        //         await getAndSetInitData();
        //     return true;
        // }

        // private async UniTask<Client> CreateClient()
        // {
        //     Logger.Info("Start.", tags: new[] {"CreateClient"});
        //     Client _client = new Client(serverClientConfigs.scheme, serverClientConfigs.host, serverClientConfigs.port,
        //         serverClientConfigs.serverKey);
        //     Logger.Info("Client created.", tags: new[] {"CreateClient"});
        //     return _client;
        // }
        //
        // private async UniTask<ISession> CreateSession()
        // {
        //     return await LoginManager.Instance.Init();
        // }

        private async UniTask<bool> getAndSetInitData()
        {
            // publicServerConfigs = await getServerCollection<PublicServerConfigsModel>("public_configuration", "server_configs");
        
            return true;
        }


        // public async UniTask<IApiAccount> GetMyAccount()
        // {
        //     return await client.GetAccountAsync(session);
        // }
        //
        // public async UniTask<IApiUsers> GetUsers(IEnumerable<string> ids)
        // {
        //     return await client.GetUsersAsync(session, ids);
        // }
        //
        // public async UniTask<IApiUser> GetUser(string id)
        // {
        //     IApiUsers users = await GetUsers(new[] {id});
        //     if (users != null && users.Users != null && users.Users.Any())
        //         return users.Users.First();
        //     return null;
        // }

        // public async UniTask<BaseResponseVerifyModel> ChangeDisplayName(string newName)
        // {
        //     // var response = await client.RpcAsync(session, "rpcChangeOwnDisplayName", newName);
        //     // return JsonConvert.DeserializeObject<BaseResponseVerifyModel>(response.Payload);
        // }

        // public async UniTask<GetShopResponse> GetShopItems(SelectQueryInputModel selectQueryInputModel)
        // {
        //     var response =
        //         await client.RpcAsync(session, "rpcGetShop", JsonConvert.SerializeObject(selectQueryInputModel));
        //     return JsonConvert.DeserializeObject<GetShopResponse>(response.Payload);
        // }
        //

        // private async UniTask<T> getServerCollection<T>(string collection, string key, string userId = null,
        //     string version = null) where T : class
        // {
        //     // var storageObjectId = new StorageObjectId();
        //     // storageObjectId.Collection = collection;
        //     // storageObjectId.Key = key;
        //     // if (userId != null)
        //     // {
        //     //     storageObjectId.UserId = userId;
        //     // }
        //     //
        //     // if (version != null)
        //     // {
        //     //     storageObjectId.Version = version;
        //     // }
        //     //
        //     // var result = await client.ReadStorageObjectsAsync(session,
        //     //     new IApiReadStorageObjectId[] {storageObjectId});
        //
        //     // return result.Objects.Any()
        //     //     ? JsonConvert.DeserializeObject<T>(result.Objects.First().Value)
        //     //     : null;
        // }

        
        private async UniTask<List<T>> getServerCollections<T>(string collection, string key, string userId = null,
            string version = null) where T : class
        {
            // var storageObjectId = new StorageObjectId();
            // storageObjectId.Collection = collection;
            // storageObjectId.Key = key;
            // if (userId != null)
            // {
            //     storageObjectId.UserId = userId;
            // }
            //
            // if (version != null)
            // {
            //     storageObjectId.Version = version;
            // }
            //
            // var result = await client.ReadStorageObjectsAsync(session,
            //     new IApiReadStorageObjectId[] {storageObjectId});

            List<T> results = new List<T>();

            // if (result.Objects.Any())
            // {
            //     foreach (var apiStorageObject in result.Objects)
            //     {
            //         results.Add(JsonConvert.DeserializeObject<T>(apiStorageObject.Value));
            //     }
            // }

            return results;
        }
    }
}