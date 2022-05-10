// using System;
// using System.Collections;
using System.Collections.Generic;
using ProGraphGroup.Packages.Utility;
// using UnityEngine;
using UnityEngine.Events;


namespace ProGraphGroup.Packages.GeneralManagers
{
    // public class EventManager : MonoSingleton<EventManager>
    public class EventManager : Singleton<EventManager>
    {
        private Dictionary<string, EventData<object>> _eventDictionary = new Dictionary<string, EventData<object>>();

        public void RegisterEvent(string eventName, UnityAction<object> listener)
        {
            EventData<object> currentEvent = null;
            if (_eventDictionary.TryGetValue(eventName, out currentEvent))
            {
                currentEvent.AddListener(listener);
            }
            else
            {
                currentEvent = new EventData<object>();
                currentEvent.AddListener(listener);
                _eventDictionary.Add(eventName, currentEvent);
            }
        }

        public void RemoveEvent(string eventName, UnityAction<object> listener)
        {
            EventData<object> currentEvent = null;
            if (_eventDictionary.TryGetValue(eventName, out currentEvent))
            {
                currentEvent.RemoveListener(listener);
            }
        }

        public void SendEvent(string eventName, object val)
        {
            if (_eventDictionary == null)
            {
                return;
            }

            EventData<object> currentEvent = null;
            if (_eventDictionary.TryGetValue(eventName, out currentEvent))
            {
                currentEvent.Invoke(val);
            }
        }
    }
    
    public class EventData<T> : UnityEvent<T>
    {
    }
}