using System;
using System.Collections.Generic;
using BrunoMikoski.AnimationSequencer;
using ProGraphGroup.General.Interfaces;
using UnityEngine;

namespace ProGraphGroup.General.Controllers
{
    public class IntroController : MonoBehaviour, IInit<object>, IPlayerPref<int>
    {
        private Action<bool> onDone;

        public GameObject root;
        public int currentPageIndex = 0;
        public List<GameObject> pageList;

        public void Init(object data = null, Action<bool> onDone = null)
        {
            if (LoadPref() == 1)
            {
                if (onDone != null)
                    onDone(true);
                return;
            }
            this.onDone = onDone;
            Show();
            GoToPage(currentPageIndex);
        }

        public void NextPage()
        {
            Debug.Log("NextPage");
            if (currentPageIndex >= pageList.Count)
                return;

            GoToPage(currentPageIndex + 1);
        }

        public void PreviousPage()
        {
            Debug.Log("PreviousPage");
            if (currentPageIndex == 0)
                return;

            GoToPage(currentPageIndex - 1);
        }


        private void GoToPage(int pageIndex)
        {
            Debug.Log("GoToPage");
            // pageList[currentPageIndex].SetActive(false);
            int oldPageIndex = currentPageIndex;
            if (oldPageIndex != pageIndex)
                pageList[oldPageIndex].GetComponent<AnimationSequencerController>().GetControllerByTagKey("Hide")
                    .Play(() => pageList[oldPageIndex].SetActive(false));
            currentPageIndex = pageIndex;
            pageList[currentPageIndex].GetComponent<AnimationSequencerController>().GetControllerByTagKey("Show")
                .Play();
            pageList[currentPageIndex].SetActive(true);
        }

        public void Show()
        {
            Debug.Log("Show");
            root.SetActive(true);
        }

        public void Hide()
        {
            SavePref(1);
            Debug.Log("Hide");
            root.SetActive(false);
            if (onDone != null)
                onDone(true);
        }

        public void SavePref(int data)
        {
            PlayerPrefs.SetInt("IntroController", data);
            PlayerPrefs.Save();
        }

        public int LoadPref()
        {
            if (PlayerPrefs.HasKey("IntroController"))
                return PlayerPrefs.GetInt("IntroController");
            return 0;
        }
    }
}