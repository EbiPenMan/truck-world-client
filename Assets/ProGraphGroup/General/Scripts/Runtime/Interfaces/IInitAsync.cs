using Cysharp.Threading.Tasks;

namespace ProGraphGroup.General.Interfaces
{
    public interface IAsyncInit
    {
        public UniTask<bool> InitAsync<T>(T data);
    }
}