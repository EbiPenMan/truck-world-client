using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ProGraphGroup.Projects.TruckWorld
{
    public class IntroPanelController : MonoBehaviour
    {
        public GameObject rootGo;
        public int currentPageIndex = 0;
        public List<GameObject> pageList;

        public void Start()
        {
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
            pageList[currentPageIndex].SetActive(false);
            currentPageIndex = pageIndex;
            pageList[currentPageIndex].SetActive(true);
        }

        public void Show()
        {
            Debug.Log("Show");
            rootGo.SetActive(true);
    
        }
        public void Hide()
        {
            Debug.Log("Hide");
            rootGo.SetActive(false);
   
        }
    }
}