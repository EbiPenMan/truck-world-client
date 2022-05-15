using Newtonsoft.Json;

namespace ProGraphGroup.General.Server.Models.Response
{
    public class BaseResponseVerifyModel : BaseResponseModel
    {
        [JsonProperty("result")] public new BaseResponseVerifyResultModel Result;
    }

    public class BaseResponseVerifyResultModel
    {
        [JsonProperty("status")] public bool Status;
    }
}