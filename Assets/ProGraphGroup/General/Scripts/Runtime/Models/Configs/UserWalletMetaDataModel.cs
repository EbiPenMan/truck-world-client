using Newtonsoft.Json;

namespace ProGraphGroup.Games.Hero.Models.Configs
{
    public class UserWalletMetaDataModel {
    
        [JsonProperty("code")]
        public int Code;
    
        [JsonProperty("message")]
        public string Message;
    
        [JsonProperty("action")]
        public string Action;
    
    }
}