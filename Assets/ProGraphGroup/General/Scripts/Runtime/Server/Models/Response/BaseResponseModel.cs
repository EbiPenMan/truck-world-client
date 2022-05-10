using Newtonsoft.Json;

namespace ProGraphGroup.Games.Hero.Server.Models.Response
{
    public class BaseResponseModel
    {
        [JsonProperty("result")] public object Result;
        [JsonProperty("error")] public BaseErrorModel Error;
    }
}