﻿using Newtonsoft.Json;

namespace ProGraphGroup.General.Models.Configs
{
    public class UserWalletModel {
    
        [JsonProperty("energy")]
        public int Energy;
    
        [JsonProperty("govToken")]
        public int GovToken;
    
        [JsonProperty("lovePotion")]
        public int LovePotion;
    
    }
}