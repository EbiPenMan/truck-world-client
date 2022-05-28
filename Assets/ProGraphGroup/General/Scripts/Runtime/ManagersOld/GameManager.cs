using ProGraphGroup.General.UiManagers;
using ProGraphGroup.General.Utility;
using ProGraphGroup.Packages.Utility;

namespace ProGraphGroup.General.ManagersOld
{
    public class GameManager : MonoSingleton<GameManager>
    {
        private Log _logger;

        private void Awake()
        {
            _logger = new Log("ServerManager");
        }

        private async void Start()
        {
            // await TransmissionManager.Instance.Show();
            // await ServerManager.Instance.Init();
            
            // var aa = await ProfileManager.Instance.GetMyAccountAsync();
            // _logger.Info("User Id: ", aa.User.Id);
            // _logger.Info("Username: ", aa.User.Username);
            // var bb = await HeroManager.Instance.GetMyHeroAsync();
            // await ShopManager.Instance.GetMyHeroes();
            // await TransmissionManager.Instance.Show();
            await MainMenuUiManager.Instance.Show();
            // await TransmissionManager.Instance.Hide();
        }
    }
}