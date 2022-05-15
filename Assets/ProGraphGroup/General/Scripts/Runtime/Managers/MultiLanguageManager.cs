
using ProGraphGroup.Packages.Utility;

namespace ProGraphGroup.General.Managers
{
    public class MultiLanguage : Singleton<MultiLanguage>
    {
        public string GetCurrentLanguageCodeName()
        {
            return "en";
        }
    }
}