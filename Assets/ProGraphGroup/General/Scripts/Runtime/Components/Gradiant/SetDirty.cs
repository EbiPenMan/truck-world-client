using UnityEngine;
using UnityEngine.UI;

namespace ProGraphGroup.General.Components.Gradiant
{
	public class SetDirty : MonoBehaviour {
		public Graphic m_graphic;
		// Use this for initialization
		void Reset () {
			m_graphic = GetComponent<Graphic>();
		}
	
		// Update is called once per frame
		void Update () {
			m_graphic.SetVerticesDirty();
		}
	}
}
