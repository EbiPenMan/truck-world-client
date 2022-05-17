using System;

namespace ProGraphGroup.General.Interfaces
{
    public interface IInit<T> where T : class
    {
        public void Init(T data = null, Action<bool> onDone = null);
    }
}