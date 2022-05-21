using Cysharp.Threading.Tasks;

namespace ProGraphGroup.Projects.TruckWorld.PanelController
{
    public class ProfileController : BasePanelController
    {
        public void HideMe()
        {
            mainMenuPanelController.ShowHideProfilePanel(false).Forget();
        }
    }
}