using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using ProGraphGroup.Packages.Utility;
using UnityEngine;

namespace ProGraphGroup.Games.Hero.Transmission
{
    public enum TransmissionState
    {
        Hide = 0,
        PreparingHide = 1,
        Show = 2,
        PreparingShow = 3,
    }

    public class TransmissionManager : MonoSingleton<TransmissionManager>
    {
        public TransmissionConfig transmissionConfig;
        public string defaultTransmissionName;
        private Transmission currentTransmission;
        private TransmissionState state;
        private List<Transmission> builtTransmissions = new List<Transmission>();

        public async UniTask<bool> Show(string transmissionName = null)
        {
            Debug.Log("Show Transmission" + GetState());
            if (GetState() != TransmissionState.Hide)
                return false;

            SetState(TransmissionState.PreparingShow);

            currentTransmission = null;
            if (transmissionName == null)
            {
                transmissionName = defaultTransmissionName;
            }

            currentTransmission = FindTransmission(transmissionName);

            if (currentTransmission == null)
            {
                SetState(TransmissionState.Hide);
                Debug.LogWarning("TransmissionManager - Show - TransmissionName Not Found");
                return false;
            }

            await currentTransmission.transmission.Show();
            SetState(TransmissionState.Show);
            return true;
        }

        public async UniTask<bool> Hide()
        {
            Debug.Log("Hide Transmission" + GetState());
            if (GetState() != TransmissionState.Show)
                return false;
            SetState(TransmissionState.PreparingHide);
            await currentTransmission.transmission.Hide();
            SetState(TransmissionState.Hide);
            return true;
        }

        protected Transmission FindTransmission(string transmissionName)
        {
            Transmission builtTransmission = null;
            builtTransmission = builtTransmissions.Find(
                transmission =>
                    transmission.transmissionName == transmissionName
            );

            if (builtTransmission == null)
            {
                var newTransmission = transmissionConfig.transmissions.Find(
                    transmission =>
                        transmission.transmissionName == transmissionName
                );
                if (newTransmission != null)
                {
                    TransmissionBase transmission = Instantiate(newTransmission.transmission);
                    transmission.transform.SetParent(transform);
                    builtTransmission = new Transmission();
                    builtTransmission.transmission = transmission;
                    builtTransmission.transmissionName = newTransmission.transmissionName;
                    builtTransmissions.Add(builtTransmission);
                }
            }

            return builtTransmission;
        }

        protected TransmissionState GetState()
        {
            return state;
        }

        protected void SetState(TransmissionState _state)
        {
            state = _state;
        }
    }
}