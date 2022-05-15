using Newtonsoft.Json;

namespace ProGraphGroup.General.Models.Configs
{
    public class UserStoragePublicConfigsModel {
    
        [JsonProperty("trophyGeneral")]
        public int TrophyGeneral;
    
        [JsonProperty("trophySeason")]
        public int TrophySeason;
    
    }
}