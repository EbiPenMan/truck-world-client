using System;

namespace ProGraphGroup.General.Interfaces
{
    public interface  IPlayerPref<T> 
    {
        public void SavePref(T data);
        public T LoadPref();
        
    }
}