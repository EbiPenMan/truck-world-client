using ProGraphGroup.Packages.Utility;
using UnityEngine;

namespace ProGraphGroup.General.Managers
{
    public class LocalStorageManager : Singleton<LocalStorageManager>
    {
        public void SaveItem(string key, string value, bool saveImmediate)
        {
            PlayerPrefs.SetString(key, value);
        }

        public string GetItem(string key)
        {
            return PlayerPrefs.GetString(key);
        }

        public bool SaveClass<T>(string key ,T obj)
        {
            return false;
        }
    }
}