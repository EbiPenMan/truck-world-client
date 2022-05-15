using Cysharp.Threading.Tasks;
using ProGraphGroup.General.ManagersOld;
using ProGraphGroup.Packages.Utility;
using RTLTMPro;
using UnityEngine;
using UnityEngine.UI;
using Task = System.Threading.Tasks.Task;

namespace ProGraphGroup.General.UiManagers
{
    public class MainMenuUiManager : MonoSingleton<MainMenuUiManager>
    {
        public GameObject rootNode;
        public RTLTextMeshPro txt_playerName;
        public RTLTextMeshPro txt_wallet_current_energy;
        public RTLTextMeshPro txt_wallet_max_energy;

        public Button btn_arenaMatch;
            

        private async Task Awake()
        {
            ProfileManager.Instance.onSynceMyAccount.AddListener(updateMyAccountUi);
            // HeroManager.Instance.onSynceMyHeroes.AddListener(updateEnergyMaxUi);
        }

        public async UniTask Show()
        {
            rootNode.SetActive(true);
        }
        public async UniTask Hide()
        {
            rootNode.SetActive(false);
        }

        private void updateMyAccountUi()
        {
            txt_playerName.text = ProfileManager.Instance.GetMyAccount().User.DisplayName;
            // txt_wallet_current_energy.text = ProfileManager.Instance.GetMyWallet().Energy.ToString();
        }
        private void updateEnergyMaxUi()
        {
            int currentHeroCount = 12; // TODO get from server
            int maxEnergy = 0;

            if (currentHeroCount >= 3 && currentHeroCount <= 9)
            {
                maxEnergy = 20;
            }
            else if (currentHeroCount >= 10 && currentHeroCount <= 19  )
            {
                maxEnergy = 40;
            }
            else if (currentHeroCount >= 20  )
            {
                maxEnergy = 60;
            }
            
            txt_wallet_max_energy.text = maxEnergy.ToString();
        }
        
    }
}