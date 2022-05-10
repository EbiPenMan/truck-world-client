using System.Collections.Generic;
using Newtonsoft.Json;

namespace ProGraphGroup.Games.Hero.Models.Configs
{
    public class PublicServerConfigsModel {
    
        [JsonProperty("baseCdnUrl")]
        public string BaseCdnUrl;
    
        [JsonProperty("fillEnergyFixedHour")]
        public int FillEnergyFixedHour;
    
        [JsonProperty("fillEnergyConfigs")]
        public IEnumerable<FillEnergyConfigsModel> FillEnergyConfigs;
    
        [JsonProperty("breedCostEachParentConfigs")]
        public BreedCostEachParentConfigsModel BreedCostEachParentConfigs;
    
        [JsonProperty("maxBreedCount")]
        public int MaxBreedCount;
    
        [JsonProperty("sellCost")]
        public int SellCost;
    
        [JsonProperty("buyFeePercent")]
        public int BuyFeePercent;
    
        [JsonProperty("changeNameCost")]
        public int ChangeNameCost;
    
    }
    
    public class FillEnergyConfigsModel {
    
        [JsonProperty("minHeroCount")]
        public int MinHeroCount;
    
        [JsonProperty("maxHeroCount")]
        public int MaxHeroCount;
    
        [JsonProperty("energyAmount")]
        public int EnergyAmount;
    
    }
    
    public class BreedCostEachParentConfigsModel {
    
        [JsonProperty("lovePotionByBreedCount")]
        public IEnumerable<int> LovePotionByBreedCount;
    
        [JsonProperty("govToken")]
        public int GovToken;
    
    }
}