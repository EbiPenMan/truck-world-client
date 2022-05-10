using System;
using Newtonsoft.Json;

namespace ProGraphGroup.Games.Hero.Models.Configs
{
    public class UserStoragePrivateConfigsModel {
    
        [JsonProperty("startFillEnergy")]
        public DateTime StartFillEnergy;
    
    }

}