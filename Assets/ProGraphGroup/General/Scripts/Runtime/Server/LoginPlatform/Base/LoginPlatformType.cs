namespace ProGraphGroup.Games.Hero.Server.LoginPlatform.Base
{
    [System.Flags]
    public enum LoginPlatformType
    {
        DeviceId = 1 << 0,
        Email = 1 << 1,
        CafeBazaar = 1 << 2,
        Gmail = 1 << 3,
        Facebook = 1 << 4,
        All =  DeviceId | Email | CafeBazaar | Gmail | Facebook
    }
}