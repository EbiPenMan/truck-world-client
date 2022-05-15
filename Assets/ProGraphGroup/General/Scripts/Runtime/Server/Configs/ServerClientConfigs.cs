using UnityEngine;

namespace ProGraphGroup.General.Server.Configs
{
    [CreateAssetMenu( menuName = "ProGraphGroup/Server/Create New Config" , fileName = "NewServerConfig")]
    public class ServerClientConfigs : ScriptableObject
    {
       public string scheme = "http";
       public string host = "localhost";
       public int port = 7350;
       public string serverKey = "defaultkey";
       public string deviceId = "5";
       
       // public LoginType LoginType = 0;

    }
}
