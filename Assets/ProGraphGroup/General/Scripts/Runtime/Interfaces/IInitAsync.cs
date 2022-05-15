using System;
using Cysharp.Threading.Tasks;
using JetBrains.Annotations;

namespace ProGraphGroup.General.Interfaces
{
    public interface IInitAsync<T> where T : class
    {
        public UniTaskVoid InitAsync(T data = null);
    }
}