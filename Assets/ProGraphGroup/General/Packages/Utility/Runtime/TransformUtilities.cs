using UnityEngine;
namespace ProGraphGroup.Packages.Utility
{
    public class TransformUtilities
    {
        #region SCALE
        public static void SetScale(GameObject targetObject, Vector3 scale)
        {
            targetObject.transform.localScale = scale;
        }
    
        public static void SetScale(Transform targetTransform, Vector3 scale)
        {
            targetTransform.localScale = scale;
        }

        public static void SetScale(GameObject targetObject, float scale)
        {
            targetObject.transform.localScale = Vector3.one*scale;
        }
    
        public static void SetScale(Transform targetTransform, float scale)
        {
            targetTransform.localScale = Vector3.one*scale;
        }

        public static void SetScale(GameObject targetObject, GameObject refrenceObject)
        {
            targetObject.transform.localScale = refrenceObject.transform.localScale;
        }
    
        public static void SetScale(Transform targetTransform, GameObject refrenceObject)
        {
            targetTransform.localScale = refrenceObject.transform.localScale;
        }
    
        public static void SetScale(GameObject targetObject, Transform refrenceTransform)
        {
            targetObject.transform.localScale = refrenceTransform.localScale;
        }
    
        public static void SetScale(Transform targetTransform, Transform refrenceTransform)
        {
            targetTransform.localScale = refrenceTransform.localScale;
        }
        #endregion SCALE

        #region POSITION
        #region GLOBAL
        public static void SetGlobalPosition(GameObject targetObject, Vector3 pos)
        {
            targetObject.transform.position = pos;
        }
    
        public static void SetGlobalPosition(Transform targetTransform, Vector3 pos)
        {
            targetTransform.position = pos;
        }

        public static void SetGlobalPosition(GameObject targetObject, float val)
        {
            targetObject.transform.position = Vector3.one * val;
        }
    
        public static void SetGlobalPosition(Transform targetTransform, float val)
        {
            targetTransform.position = Vector3.one * val;
        }
    
        public static void SetGlobalPosition(GameObject targetObject, GameObject refrenceObject)
        {
            targetObject.transform.position = refrenceObject.transform.position;
        }
    
        public static void SetGlobalPosition(Transform targetTransform, GameObject refrenceObject)
        {
            targetTransform.position = refrenceObject.transform.position;
        }
    
        public static void SetGlobalPosition(GameObject targetObject, Transform refrenceTransform)
        {
            targetObject.transform.position = refrenceTransform.position;
        }
    
        public static void SetGlobalPosition(Transform targetTransform, Transform refrenceTransform)
        {
            targetTransform.position = refrenceTransform.position;
        }
        #endregion GLOBAL

        #region LOCAL
        public static void SetLocalPosition(GameObject targetObject, Vector3 localPos)
        {
            targetObject.transform.localPosition = localPos;
        }
    
        public static void SetLocalPosition(Transform targetTransform, Vector3 localPos)
        {
            targetTransform.localPosition = localPos;
        }

        public static void SetLocalPosition(GameObject targetObject, float val)
        {
            targetObject.transform.localPosition = Vector3.one * val;
        }
    
        public static void SetLocalPosition(Transform targetTransform, float val)
        {
            targetTransform.localPosition = Vector3.one * val;
        }
    
        public static void SetLocalPosition(GameObject targetObject, GameObject refrenceObject)
        {
            targetObject.transform.localPosition = refrenceObject.transform.localPosition;
        }
    
        public static void SetLocalPosition(Transform targetTransform, GameObject refrenceObject)
        {
            targetTransform.localPosition = refrenceObject.transform.localPosition;
        }
    
        public static void SetLocalPosition(GameObject targetObject, Transform refrenceTransform)
        {
            targetObject.transform.localPosition = refrenceTransform.localPosition;
        }
    
        public static void SetLocalPosition(Transform targetTransform, Transform refrenceTransform)
        {
            targetTransform.localPosition = refrenceTransform.localPosition;
        }
        #endregion LOCAL
        #endregion POSITION

        #region ROTATION
        #region GLOBAL
        public static void SetGlobalRotation(GameObject targetObject, Vector3 eulerAngles)
        {
            targetObject.transform.eulerAngles = eulerAngles;
        }
    
        public static void SetGlobalRotation(Transform targetTransform, Vector3 eulerAngles)
        {
            targetTransform.eulerAngles = eulerAngles;
        }

        public static void SetGlobalRotation(GameObject targetObject, float eulerAngle)
        {
            targetObject.transform.eulerAngles = Vector3.one * eulerAngle;
        }
    
        public static void SetGlobalRotation(Transform targetTransform, float eulerAngle)
        {
            targetTransform.eulerAngles = Vector3.one * eulerAngle;
        }
    
        public static void SetGlobalRotation(GameObject targetObject, GameObject refrenceObject)
        {
            targetObject.transform.eulerAngles = refrenceObject.transform.eulerAngles;
        }
    
        public static void SetGlobalRotation(Transform targetTransform, GameObject refrenceObject)
        {
            targetTransform.eulerAngles = refrenceObject.transform.eulerAngles;
        }
    
        public static void SetGlobalRotation(GameObject targetObject, Transform refrenceTransform)
        {
            targetObject.transform.eulerAngles = refrenceTransform.eulerAngles;
        }
    
        public static void SetGlobalRotation(Transform targetTransform, Transform refrenceTransform)
        {
            targetTransform.eulerAngles = refrenceTransform.eulerAngles;
        }
        #endregion GLOBAL

        #region LOCAL
        public static void SetLocalRotation(GameObject targetObject, Vector3 eulerAngles)
        {
            targetObject.transform.localEulerAngles = eulerAngles;
        }
    
        public static void SetLocalRotation(Transform targetTransform, Vector3 eulerAngles)
        {
            targetTransform.localEulerAngles = eulerAngles;
        }

        public static void SetLocalRotation(GameObject targetObject, float eulerAngle)
        {
            targetObject.transform.localEulerAngles = Vector3.one * eulerAngle;
        }
    
        public static void SetLocalRotation(Transform targetTransform, float eulerAngle)
        {
            targetTransform.localEulerAngles = Vector3.one * eulerAngle;
        }
    
        public static void SetLocalRotation(GameObject targetObject, GameObject refrenceObject)
        {
            targetObject.transform.localEulerAngles = refrenceObject.transform.localEulerAngles;
        }
    
        public static void SetLocalRotation(Transform targetTransform, GameObject refrenceObject)
        {
            targetTransform.localEulerAngles = refrenceObject.transform.localEulerAngles;
        }
    
        public static void SetLocalRotation(GameObject targetObject, Transform refrenceTransform)
        {
            targetObject.transform.localEulerAngles = refrenceTransform.localEulerAngles;
        }
    
        public static void SetLocalRotation(Transform targetTransform, Transform refrenceTransform)
        {
            targetTransform.localEulerAngles = refrenceTransform.localEulerAngles;
        }
        #endregion LOCAL
        #endregion ROTATION
    }
}