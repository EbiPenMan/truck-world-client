using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.Linq;
using DG.DemiEditor;
using ProGraphGroup.General.Interfaces;
using RTLTMPro;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace ProGraphGroup.Projects.TruckWorld
{
    public class LoginController : MonoBehaviour, IInit<object>, IPlayerPref<string>
    {
        private Action<bool> onDone;
        private string phoneNumber;

        public GameObject root;
        public TMP_InputField PhoneNumberInput;
        public TMP_InputField CodeInput;

        public RTLTextMeshPro CurrentPhoneNumber;
        public RTLTextMeshPro PhoneNumberError;
        public RTLTextMeshPro timer;
        public RTLTextMeshPro CodeError;

        public Button Btn_SendCode;
        public Button Btn_VerifyCode;
        public Button Btn_SendAgain;
        public Button Btn_EditPhoneNumber;

        public GameObject InputPhone;
        public GameObject InputCode;

        private CancellationTokenSource _cancellationTokenSource;
        private int timerValue = 0;

        private string currentPhoneNumber;
        private int currentCode;

        public void Init(object data = null, Action<bool> onDone = null)
        {
            if (LoadPref().IsNullOrEmpty())
            {
                //TODO show loading and send login to server
                //TODO wait for res - hide loading and call onDone
                if (onDone != null)
                    onDone(true);
                return;
            }

            this.onDone = onDone;
            root.SetActive(true);
        }


        public void onValueChangePhoneNumber()
        {
            Debug.Log("onValueChangePhoneNumber");
            if ((PhoneNumberInput.text.Length == 10 && !PhoneNumberInput.text.StartsWith("0")) ||
                PhoneNumberInput.text.Length == 11 && PhoneNumberInput.text.StartsWith("0"))
            {
                Btn_SendCode.interactable = true;
            }
            else
            {
                Btn_SendCode.interactable = false;
            }
        }

        public void GetCode()
        {
            //TODO check phone number valid
            currentPhoneNumber = PhoneNumberInput.text;
            //send request to server
            //if server accept request show input code ui
            //else show error
            //PhoneNumberError.text = "کد مورد تایید نمی باشد";

            if (currentPhoneNumber.StartsWith("0912") || currentPhoneNumber.StartsWith("912"))
            {
                initForGetCode();
                //TODO start timer;
            }
            else
            {
                PhoneNumberError.text = "شماره همراه مورد تایید نمی باشد";
            }
        }

        public void initForGetCode()
        {
            InputPhone.SetActive(false);
            InputCode.SetActive(true);
            CurrentPhoneNumber.text = currentPhoneNumber;
            // _cancellationTokenSource.Dispose();
            _cancellationTokenSource = new CancellationTokenSource();
            timerValue = 10;
            timer.text = timerValue.ToString();
            CodeInput.text = "";
            CodeError.text = "";
            Btn_SendAgain.interactable = false;
            Btn_VerifyCode.interactable = false;
            UniTaskAsyncEnumerable.Interval(TimeSpan.FromSeconds(1)).ForEachAsync(_ =>
            {
                Debug.Log("timerValue: " + timerValue);
                try
                {
                    timerValue--;
                    timer.text = timerValue.ToString();
                    if (timerValue <= 0)
                    {
                        _cancellationTokenSource.Cancel();
                        onEndTimer();
                    }
                }
                catch (Exception e)
                {
                    onEndTimer();
                }
            }, _cancellationTokenSource.Token);
        }

        public void onEndTimer()
        {
            Btn_SendAgain.interactable = true;
        }

        public void onValueChangeCode()
        {
            //if enter 4 digit number check the code
            Debug.Log("onValueChangeCode");

            if (CodeInput.text.Length == 4)
            {
                Btn_VerifyCode.interactable = true;
            }
            else
            {
                Btn_VerifyCode.interactable = false;
            }
        }

        public void VerifyCode()
        {
            //send code to server for verify
            //if ok get profile data and got to next ui
            //else show error

            currentCode = Int32.Parse(CodeInput.text);

            //if ok
            if (currentCode == 1234)
            {
                _cancellationTokenSource.Cancel();
                LoginWithPhoneNumber();
            }
            else
            {
                CodeError.text = "کد مورد تایید نمی باشد";
            }
        }

        private void LoginWithPhoneNumber()
        {
            SavePref(phoneNumber);
            root.SetActive(false);
            if (onDone != null)
                onDone(true);
        }

        public void ChangePhoneNumber()
        {
            //back to previous ui
            _cancellationTokenSource.Cancel();
            PhoneNumberError.text = "";
            InputCode.SetActive(false);
            InputPhone.SetActive(true);
        }

        public void GetNewCode()
        {
            //send request to server
            //if accept request rest timer
            //else show error
            initForGetCode();
        }

        public void EmailSupport()
        {
            Application.OpenURL("mailto:support@dandeh-sangin.ir");
        }


        public void SavePref(string data)
        {
            PlayerPrefs.SetString("LoginController", data);
            PlayerPrefs.Save();
        }


        public string LoadPref()
        {
            if (PlayerPrefs.HasKey("LoginController"))
                return PlayerPrefs.GetString("LoginController");
            return "0";
        }
    }
}