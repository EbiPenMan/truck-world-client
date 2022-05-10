using System;
using System.Collections.Generic;
using UnityEngine;

namespace ProGraphGroup.Games.Hero.Transmission
{
    [Serializable]
    public class Transmission
    {
        public string transmissionName;
        public TransmissionBase transmission;
    }
    
    [CreateAssetMenu(menuName = "ProGraphGroup/TransmissionManager/Configs/TransmissionConfig",fileName = "TransmissionConfig")]
    public class TransmissionConfig : ScriptableObject
    {
        public List<Transmission> transmissions = new List<Transmission>();
    }
}
