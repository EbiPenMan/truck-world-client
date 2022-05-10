using System.Collections.Generic;
using Newtonsoft.Json;

namespace ProGraphGroup.Games.Hero.Models.Configs
{
    public class UserStorageMutableConfigsModel {
    
        [JsonProperty("soundVolume")]
        public int SoundVolume;
    
        [JsonProperty("musicVolume")]
        public int MusicVolume;
    
        [JsonProperty("heroTeams")]
        public HeroTeamsModel HeroTeams;
    
    }
    
    public class HeroTeamsModel {
    
        [JsonProperty("activeTeamIndex")]
        public int ActiveTeamIndex;
    
        [JsonProperty("favouriteTeamsIndexes")]
        public IEnumerable<int> FavouriteTeamsIndexes;
    
        [JsonProperty("teams")]
        public IEnumerable<HeroTeamItemModel> Teams;
    
    }
    
    public class HeroTeamItemModel {
    
        [JsonProperty("teamName")]
        public string TeamName;
    
        [JsonProperty("heroTeamItemHero")]
        public HeroTeamItemHeroModel HeroTeamItemHero;
    
    }
    
    public class HeroTeamItemHeroModel {
    
        [JsonProperty("heroId")]
        public string HeroId;
    
        [JsonProperty("columnIndex")]
        public int ColumnIndex;
    
        [JsonProperty("rowIndex")]
        public HeroTeamItemHeroRowIndex RowIndex;
    
    }
    
    public enum HeroTeamItemHeroRowIndex {
        top ,
        middle,
        down
    }
}