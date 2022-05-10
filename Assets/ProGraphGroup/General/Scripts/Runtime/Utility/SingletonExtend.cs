using ProGraphGroup.Packages.Utility;

namespace ProGraphGroup.General.Utility
{
    public class SingletonExtend<T> : Singleton<T> where T : class, new()
    {
        protected Log Logger;

        public SingletonExtend()
        {
            Logger = new Log(GetType().Name);
        }
        
    }
}