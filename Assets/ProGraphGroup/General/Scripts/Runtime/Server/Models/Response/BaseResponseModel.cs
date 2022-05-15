using Newtonsoft.Json;

namespace ProGraphGroup.General.Server.Models.Response
{
    public class BaseResponseModel
    {
        [JsonProperty("result")] public object Result;
        [JsonProperty("error")] public BaseErrorModel Error;
    }
}