using UnityEngine;
using UnityEngine.UI;

namespace ProGraphGroup.Packages.Utility
{
    public class RenderUtilities
    {
        #region MATERIAL
        public static void SetMaterial(GameObject targetObject, Material mat)
        {
            if (targetObject.GetComponent<MeshRenderer>())
            {
                SetMaterial(targetObject.GetComponent<MeshRenderer>(), mat);
            }
            else if (targetObject.GetComponent<LineRenderer>())
            {
                SetMaterial(targetObject.GetComponent<LineRenderer>(),mat);
            }
            else if (targetObject.GetComponent<SpriteRenderer>())
            {
                SetMaterial(targetObject.GetComponent<SpriteRenderer>(), mat);
            }
        }

        public static void SetMaterial(GameObject targetObject, Material mat, int targetMaterialIndex)
        {
            if (targetObject.GetComponent<MeshRenderer>())
            {
                SetMaterial(targetObject.GetComponent<MeshRenderer>(), mat, targetMaterialIndex);
            }
            else if (targetObject.GetComponent<LineRenderer>())
            {
                SetMaterial(targetObject.GetComponent<LineRenderer>(), mat, targetMaterialIndex);
            }
            else if (targetObject.GetComponent<SpriteRenderer>())
            {
                SetMaterial(targetObject.GetComponent<SpriteRenderer>(), mat, targetMaterialIndex);
            }
        }
        
        public static void SetMaterial(Transform targetTransform, Material mat)
        {
            if (targetTransform.GetComponent<MeshRenderer>())
            {
                SetMaterial(targetTransform.GetComponent<MeshRenderer>(), mat);
            }
            else if (targetTransform.GetComponent<LineRenderer>())
            {
                SetMaterial(targetTransform.GetComponent<LineRenderer>(),mat);
            }
            else if (targetTransform.GetComponent<SpriteRenderer>())
            {
                SetMaterial(targetTransform.GetComponent<SpriteRenderer>(), mat);
            }
        }
        
        public static void SetMaterial(Transform targetTransform, Material mat, int targetMaterialIndex)
        {
            if (targetTransform.GetComponent<MeshRenderer>())
            {
                SetMaterial(targetTransform.GetComponent<MeshRenderer>(), mat, targetMaterialIndex);
            }
            else if (targetTransform.GetComponent<LineRenderer>())
            {
                SetMaterial(targetTransform.GetComponent<LineRenderer>(), mat, targetMaterialIndex);
            }
            else if (targetTransform.GetComponent<SpriteRenderer>())
            {
                SetMaterial(targetTransform.GetComponent<SpriteRenderer>(), mat, targetMaterialIndex);
            }
        }

        public static void SetMaterial(MeshRenderer targetMeshRenderer, Material mat)
        {
            for (int i = 0; i < targetMeshRenderer.materials.Length; i++)
            {
                targetMeshRenderer.materials[i] = mat;
            }
        }
        
        public static void SetMaterial(MeshRenderer targetMeshRenderer, Material mat, int targetMaterialIndex)
        {
            targetMeshRenderer.materials[targetMaterialIndex] = mat;
        }

        public static void SetMaterial(LineRenderer targetLineRenderer, Material mat)
        {
            for (int i = 0; i < targetLineRenderer.materials.Length; i++)
            {
                targetLineRenderer.materials[i] = mat;
            }
        }
        
        public static void SetMaterial(LineRenderer targetLineRenderer, Material mat, int targetMaterialIndex)
        {
            targetLineRenderer.materials[targetMaterialIndex] = mat;
        }

        public static void SetMaterial(SpriteRenderer targetSpriteRenderer, Material mat)
        {
            for (int i = 0; i < targetSpriteRenderer.materials.Length; i++)
            {
                targetSpriteRenderer.materials[i] = mat;
            }
        }
        
        public static void SetMaterial(SpriteRenderer targetSpriteRenderer, Material mat, int targetMaterialIndex)
        {
            targetSpriteRenderer.materials[targetMaterialIndex] = mat;
        }
        #endregion MATERIAL

        #region COLOR

        public static void SetColor(GameObject targetObject, Color color)
        {
            if (targetObject.GetComponent<MeshRenderer>())
            {
                SetColor(targetObject.GetComponent<MeshRenderer>(), color);
            }
            else if (targetObject.GetComponent<SpriteRenderer>())
            {
                SetColor(targetObject.GetComponent<SpriteRenderer>(),color);
            }
            else if (targetObject.GetComponent<LineRenderer>())
            {
                SetColor(targetObject.GetComponent<LineRenderer>(),color);
            }
            else if (targetObject.GetComponent<Image>())
            {
                SetColor(targetObject.GetComponent<LineRenderer>(),color);
            }
        }

        public static void SetColor(GameObject targetObject, Color color, int targetMaterialIndex)
        {
            if (targetObject.GetComponent<MeshRenderer>())
            {
                SetColor(targetObject.GetComponent<MeshRenderer>(), color, targetMaterialIndex);
            }
            else if (targetObject.GetComponent<SpriteRenderer>())
            {
                SetColor(targetObject.GetComponent<SpriteRenderer>(),color, targetMaterialIndex);
            }
            else if (targetObject.GetComponent<LineRenderer>())
            {
                SetColor(targetObject.GetComponent<LineRenderer>(),color, targetMaterialIndex);
            }
            else if (targetObject.GetComponent<Image>())
            {
                SetColor(targetObject.GetComponent<LineRenderer>(),color, targetMaterialIndex);
            }
        }

        public static void SetColor(Transform targetTransform, Color color)
        {
            if (targetTransform.GetComponent<MeshRenderer>())
            {
                SetColor(targetTransform.GetComponent<MeshRenderer>(), color);
            }
            else if (targetTransform.GetComponent<SpriteRenderer>())
            {
                SetColor(targetTransform.GetComponent<SpriteRenderer>(),color);
            }
            else if (targetTransform.GetComponent<LineRenderer>())
            {
                SetColor(targetTransform.GetComponent<LineRenderer>(),color);
            }
            else if (targetTransform.GetComponent<Image>())
            {
                SetColor(targetTransform.GetComponent<LineRenderer>(),color);
            }
        }

        public static void SetColor(Transform targetTransform, Color color, int targetMaterialIndex)
        {
            if (targetTransform.GetComponent<MeshRenderer>())
            {
                SetColor(targetTransform.GetComponent<MeshRenderer>(), color, targetMaterialIndex);
            }
            else if (targetTransform.GetComponent<SpriteRenderer>())
            {
                SetColor(targetTransform.GetComponent<SpriteRenderer>(),color, targetMaterialIndex);
            }
            else if (targetTransform.GetComponent<LineRenderer>())
            {
                SetColor(targetTransform.GetComponent<LineRenderer>(),color, targetMaterialIndex);
            }
            else if (targetTransform.GetComponent<Image>())
            {
                SetColor(targetTransform.GetComponent<LineRenderer>(),color, targetMaterialIndex);
            }
        }
        
        public static void SetColor(MeshRenderer targetMeshRenderer, Color color)
        {
            for (int i = 0; i < targetMeshRenderer.materials.Length; i++)
            {
                targetMeshRenderer.materials[i].color = color;
            }
        }

        public static void SetColor(MeshRenderer targetMeshRenderer, Color color, int targetMaterialIndex)
        {
            targetMeshRenderer.materials[targetMaterialIndex].color = color;
        }
        
        public static void SetColor(SpriteRenderer targetSpriteRenderer, Color color)
        {
            for (int i = 0; i < targetSpriteRenderer.materials.Length; i++)
            {
                targetSpriteRenderer.materials[i].color = color;
            }
        }
        
        public static void SetColor(SpriteRenderer targetSpriteRenderer, Color color, int targetMaterialIndex)
        {
            targetSpriteRenderer.materials[targetMaterialIndex].color = color;
        }
        
        public static void SetColor(LineRenderer targetLineRenderer, Color color)
        {
            for (int i = 0; i < targetLineRenderer.materials.Length; i++)
            {
                targetLineRenderer.materials[i].color = color;
            }
        }
        
        public static void SetColor(LineRenderer targetLineRenderer, Color color, int targetMaterialIndex)
        {
            targetLineRenderer.materials[targetMaterialIndex].color = color;
        }

        public static void SetColor(Image targetImage, Color color)
        {
            targetImage.color = color;
        }
        #endregion COLOR
    }
}