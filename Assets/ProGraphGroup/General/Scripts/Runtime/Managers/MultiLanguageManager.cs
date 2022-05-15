
using ProGraphGroup.Packages.Utility;

namespace ProGraphGroup.General.Manager
{
    public class MultiLanguage : Singleton<MultiLanguage>
    {
        public string GetCurrentLanguageCodeName()
        {
            return "en";
        }
    }
}