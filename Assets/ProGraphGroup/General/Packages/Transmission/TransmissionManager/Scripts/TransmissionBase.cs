using Cysharp.Threading.Tasks;
using UnityEngine;

namespace ProGraphGroup.Games.Hero.Transmission
{
    public class TransmissionBase : MonoBehaviour
    {
        public virtual async UniTask Show()
        {
        }
        public virtual async UniTask Hide()
        {
        }
    }
}
