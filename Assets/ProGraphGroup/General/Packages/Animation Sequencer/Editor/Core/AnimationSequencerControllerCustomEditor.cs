﻿using System;
using DG.DOTweenEditor;
using DG.Tweening;
using UnityEditor;
using UnityEditor.IMGUI.Controls;
using UnityEditorInternal;
using UnityEngine;

namespace BrunoMikoski.AnimationSequencer
{
    [CustomEditor(typeof(AnimationSequencerController))]
    public sealed class AnimationSequencerControllerCustomEditor : Editor
    {
        private ReorderableList reorderableList;
        
        private AnimationSequencerController sequencerController;

        private static AnimationStepAdvancedDropdown cachedAnimationStepsDropdown;
        private static AnimationStepAdvancedDropdown AnimationStepAdvancedDropdown
        {
            get
            {
                if (cachedAnimationStepsDropdown == null)
                    cachedAnimationStepsDropdown = new AnimationStepAdvancedDropdown(new AdvancedDropdownState());
                return cachedAnimationStepsDropdown;
            }
        }

        private bool showPreview = true;
        private bool showSettings = false;
        private bool showCallbacks = false;
        private bool showSequenceSettings = false;

        private void OnEnable()
        {
            sequencerController = target as AnimationSequencerController;
            reorderableList = new ReorderableList(serializedObject, serializedObject.FindProperty("animationSteps"), true, true, true, true);
            reorderableList.drawElementCallback += OnDrawAnimationStep;
            reorderableList.elementHeightCallback += GetAnimationStepHeight;
            reorderableList.onAddDropdownCallback += OnClickToAddNew;
            reorderableList.onRemoveCallback += OnClickToRemove;
            reorderableList.onReorderCallback += OnListOrderChanged;
            reorderableList.drawHeaderCallback += OnDrawerHeader;
            Repaint();
        }

        private void OnDisable()
        {
            reorderableList.drawElementCallback -= OnDrawAnimationStep;
            reorderableList.elementHeightCallback -= GetAnimationStepHeight;
            reorderableList.onAddDropdownCallback -= OnClickToAddNew;
            reorderableList.onRemoveCallback -= OnClickToRemove;
            reorderableList.onReorderCallback -= OnListOrderChanged;
            reorderableList.drawHeaderCallback -= OnDrawerHeader;

            if (!Application.isPlaying)
                DOTweenEditorPreview.Stop();
        }

        private void OnDrawerHeader(Rect rect)
        {
            EditorGUI.LabelField(rect, "Animation Steps");
        }
        
        private void AddNewAnimationStepOfType(Type targetAnimationType)
        {
            SerializedProperty animationStepsProperty = reorderableList.serializedProperty;
            int targetIndex = animationStepsProperty.arraySize;
            animationStepsProperty.InsertArrayElementAtIndex(targetIndex);
            SerializedProperty arrayElementAtIndex = animationStepsProperty.GetArrayElementAtIndex(targetIndex);
            object managedReferenceValue = Activator.CreateInstance(targetAnimationType);
            arrayElementAtIndex.managedReferenceValue = managedReferenceValue;
        
            //TODO copy from last step would be better here.
            SerializedProperty targetSerializedProperty = arrayElementAtIndex.FindPropertyRelative("target");
            if (targetSerializedProperty != null)
                targetSerializedProperty.objectReferenceValue = (serializedObject.targetObject as AnimationSequencerController)?.gameObject;
            
            serializedObject.ApplyModifiedProperties();
        }
        
        private void OnClickToRemove(ReorderableList list)
        {
            SerializedProperty element = reorderableList.serializedProperty.GetArrayElementAtIndex(list.index);
            SerializedPropertyExtensions.ClearPropertyCache(element.propertyPath);
            reorderableList.serializedProperty.DeleteArrayElementAtIndex(list.index);
            reorderableList.serializedProperty.serializedObject.ApplyModifiedProperties();
        }
        
        private void OnListOrderChanged(ReorderableList list)
        {
            SerializedPropertyExtensions.ClearPropertyCache(list.serializedProperty.propertyPath);
            list.serializedProperty.serializedObject.ApplyModifiedProperties();
        }
        
        private void OnClickToAddNew(Rect buttonRect, ReorderableList list)
        {
            AnimationStepAdvancedDropdown.Show(buttonRect, OnNewAnimationStepTypeSelected);
        }

        private void OnNewAnimationStepTypeSelected(AnimationStepAdvancedDropdownItem animationStepAdvancedDropdownItem)
        {
            AddNewAnimationStepOfType(animationStepAdvancedDropdownItem.AnimationStepType);
        }

        public override void OnInspectorGUI()
        {
            DrawFoldoutArea("Animation Sequence Settings", ref showSettings, DrawSettings);
            DrawFoldoutArea("Callback", ref showCallbacks, DrawCallbacks);
            DrawFoldoutArea("Preview", ref showPreview, DrawPreviewControls);
            DrawFoldoutArea("Sequence Settings", ref showSequenceSettings, DrawSequenceSettings);
            bool wasGUIEnabled = GUI.enabled;
            if (DOTweenEditorPreview.isPreviewing)
                GUI.enabled = false;

            reorderableList.DoLayoutList();

            GUI.enabled = wasGUIEnabled;
        }

        private void DrawCallbacks()
        {
            bool wasGUIEnabled = GUI.enabled;
            if (DOTweenEditorPreview.isPreviewing)
                GUI.enabled = false;
            SerializedProperty onStartEventSerializedProperty = serializedObject.FindProperty("onStartEvent");
            SerializedProperty onFinishedEventSerializedProperty = serializedObject.FindProperty("onFinishedEvent");
            SerializedProperty onProgressEventSerializedProperty = serializedObject.FindProperty("onProgressEvent");
            
            //Abolfazl Hosnian
            // SerializedProperty onInitEventSerializedProperty = serializedObject.FindProperty("onInitEvent");
            SerializedProperty onPauseEventSerializedProperty = serializedObject.FindProperty("onPauseEvent");
            SerializedProperty onResumeEventSerializedProperty = serializedObject.FindProperty("onResumeEvent");
            SerializedProperty onSequenceLoopCycleStartEventSerializedProperty = serializedObject.FindProperty("onSequenceLoopCycleStartEvent");
            SerializedProperty onSequenceLoopCycleFinishedEventSerializedProperty = serializedObject.FindProperty("onSequenceLoopCycleFinishedEvent");
            
            //


            using (EditorGUI.ChangeCheckScope changedCheck = new EditorGUI.ChangeCheckScope())
            {
                EditorGUILayout.PropertyField(onStartEventSerializedProperty);
                EditorGUILayout.PropertyField(onFinishedEventSerializedProperty);
                EditorGUILayout.PropertyField(onProgressEventSerializedProperty);
                
                //Abolfazl Hosnian
                // EditorGUILayout.PropertyField(onInitEventSerializedProperty);
                EditorGUILayout.PropertyField(onPauseEventSerializedProperty);
                EditorGUILayout.PropertyField(onResumeEventSerializedProperty);
                EditorGUILayout.PropertyField(onSequenceLoopCycleStartEventSerializedProperty);
                EditorGUILayout.PropertyField(onSequenceLoopCycleFinishedEventSerializedProperty);
                //
                
                
                if (changedCheck.changed)
                    serializedObject.ApplyModifiedProperties();
            }
            
            GUI.enabled = wasGUIEnabled;
        }

        private void DrawSettings()
        {
            SerializedProperty playOnAwakeSerializedProperty = serializedObject.FindProperty("playOnAwake");
            SerializedProperty pauseOnAwakeSerializedProperty = serializedObject.FindProperty("pauseOnAwake");
            SerializedProperty updateTypeSerializedProperty = serializedObject.FindProperty("tagKey");
            using (EditorGUI.ChangeCheckScope changedCheck = new EditorGUI.ChangeCheckScope())
            {
                EditorGUILayout.PropertyField(updateTypeSerializedProperty);
                EditorGUILayout.PropertyField(playOnAwakeSerializedProperty);
                if (playOnAwakeSerializedProperty.boolValue)
                    EditorGUILayout.PropertyField(pauseOnAwakeSerializedProperty);
                
                if (changedCheck.changed)
                    serializedObject.ApplyModifiedProperties();
            }
        }
        
        private void DrawSequenceSettings()
        {
            bool wasEnabled = GUI.enabled; 
            if (DOTweenEditorPreview.isPreviewing)
                GUI.enabled = false;
            
            SerializedProperty updateTypeSerializedProperty = serializedObject.FindProperty("updateType");
            SerializedProperty timeScaleIndependentSerializedProperty = serializedObject.FindProperty("timeScaleIndependent");
            SerializedProperty autoKillSerializedProperty = serializedObject.FindProperty("autoKill");
            SerializedProperty sequenceDirectionSerializedProperty = serializedObject.FindProperty("playType");
            SerializedProperty loopsSerializedProperty = serializedObject.FindProperty("loops");
            SerializedProperty loopTypeSerializedProperty = serializedObject.FindProperty("loopType");
            
            //Abolfazl Hosnian
            SerializedProperty sequenceDelaySerializedProperty = serializedObject.FindProperty("sequenceDelay");
            SerializedProperty sequenceLoopDelaySerializedProperty = serializedObject.FindProperty("sequenceLoopsDelay");
            
            
            //

            using (EditorGUI.ChangeCheckScope changedCheck = new EditorGUI.ChangeCheckScope())
            {
                EditorGUILayout.PropertyField(timeScaleIndependentSerializedProperty);
                EditorGUILayout.PropertyField(autoKillSerializedProperty);
                EditorGUILayout.PropertyField(sequenceDirectionSerializedProperty);
                EditorGUILayout.PropertyField(updateTypeSerializedProperty);
                
                //Abolfazl Hosnain
                EditorGUILayout.PropertyField(sequenceDelaySerializedProperty);
                //

                EditorGUILayout.PropertyField(loopsSerializedProperty);

                if (loopsSerializedProperty.intValue != 0)
                {
                    
                    //Abolfazl Hosnian
                    EditorGUILayout.PropertyField(sequenceLoopDelaySerializedProperty);
                    //

                    EditorGUILayout.PropertyField(loopTypeSerializedProperty);

                    if (loopTypeSerializedProperty.enumValueIndex != 0 && !Application.isPlaying)
                    {
                        EditorGUILayout.HelpBox(
                            "Anything but Restart loop type, can cause issues when stopping the preview on the editor," +
                            " strongly advice to save the prefab so you can easily revert it ", MessageType.Warning);
                    }
                }

                if (loopsSerializedProperty.intValue == -1 && !Application.isPlaying)
                {
                    EditorGUILayout.HelpBox(
                        "Infinity loops breaks the editor, in editor time the maximum of 10 loops will be set",
                        MessageType.Warning);
                }
 
                if (changedCheck.changed)
                {
                    loopsSerializedProperty.intValue = Mathf.Clamp(loopsSerializedProperty.intValue, -1, int.MaxValue);
                    serializedObject.ApplyModifiedProperties();
                }
                
                
                //Abolfazl Hosnian
                // EditorGUILayout.PropertyField(sequenceDelaySerializedProperty);
                // EditorGUILayout.PropertyField(sequenceLoopDelaySerializedProperty);
                //

            }

            GUI.enabled = wasEnabled;
        }

        private void DrawPreviewControls()
        {
            EditorGUILayout.BeginHorizontal();

            GUILayout.FlexibleSpace();
            
            bool guiEnabled = GUI.enabled;
            GUI.enabled = sequencerController.PlayingSequence != null && Application.isPlaying || DOTweenEditorPreview.isPreviewing;

            GUIStyle previewButtonStyle = new GUIStyle(GUI.skin.button);
            previewButtonStyle.fixedWidth = previewButtonStyle.fixedHeight = 40;
            if (GUILayout.Button(AnimationSequenceEditorGUIUtility.BackButtonGUIContent, previewButtonStyle))
            {
                sequencerController.Rewind();
            }

            GUI.enabled = true;
            if (!DOTweenEditorPreview.isPreviewing && !Application.isPlaying)
            {
                if (GUILayout.Button(AnimationSequenceEditorGUIUtility.PlayButtonGUIContent, previewButtonStyle))
                {
                    if (!Application.isPlaying)
                        DOTweenEditorPreview.Start();
                    
                    sequencerController.Play();
                    
                    if (!Application.isPlaying)
                        DOTweenEditorPreview.PrepareTweenForPreview(sequencerController.PlayingSequence);
                }
            }
            else
            {
                if (!sequencerController.IsPlaying)
                {
                    if (GUILayout.Button(AnimationSequenceEditorGUIUtility.PlayButtonGUIContent, previewButtonStyle))
                    {
                        if (sequencerController.PlayingSequence == null)
                        {
                            sequencerController.Play();
                        }
                        else
                        {
                            if (sequencerController.PlayingSequence.IsComplete())
                                sequencerController.Rewind();
                            
                            sequencerController.TogglePause();
                        }
                    }
                }
                else
                {
                    if (GUILayout.Button(AnimationSequenceEditorGUIUtility.PauseButtonGUIContent, previewButtonStyle))
                    {
                        sequencerController.TogglePause();
                    }
                }
            }

            GUI.enabled = sequencerController.PlayingSequence != null && Application.isPlaying || DOTweenEditorPreview.isPreviewing;
            if (GUILayout.Button(AnimationSequenceEditorGUIUtility.ForwardButtonGUIContent, previewButtonStyle))
            {
                sequencerController.Complete();
            }

            float elapsedPercentage = 0;
            if (sequencerController.PlayingSequence != null)
                elapsedPercentage = sequencerController.PlayingSequence.ElapsedPercentage();
            if (!DOTweenEditorPreview.isPreviewing
                || sequencerController.PlayingSequence.IsPlaying() && !Mathf.Approximately(elapsedPercentage, 0)
                || !Mathf.Approximately(elapsedPercentage, 1))
            {
                GUI.enabled = false;
            }

            if (!Application.isPlaying)
            {
                if (GUILayout.Button(AnimationSequenceEditorGUIUtility.StopButtonGUIContent, previewButtonStyle))
                {
                    DOTweenEditorPreview.Stop();
                }
            }

            GUI.enabled = guiEnabled;
            GUILayout.FlexibleSpace();
            EditorGUILayout.EndHorizontal();
            DrawTimeScaleSlider();
            DrawProgressSlider();
            if (DOTweenEditorPreview.isPreviewing)
            {
                EditorGUILayout.HelpBox(
                    "Please don't unselect this object or enter play mode before stopping Preview mode at the correct "
                    + "position (0% or 100% depending on the direction of the tween). Also don't save the scene!",
                    MessageType.Info
                );
            }
        }

        private void DrawProgressSlider()
        {
            GUILayout.FlexibleSpace();
            bool guiEnabled = GUI.enabled;

            GUI.enabled = sequencerController.PlayingSequence != null && DOTweenEditorPreview.isPreviewing;

            EditorGUI.BeginChangeCheck();
            float tweenProgress = 1;

            if (sequencerController.PlayingSequence != null)
                tweenProgress = sequencerController.PlayingSequence.ElapsedPercentage();

            EditorGUILayout.LabelField("Progress");
            tweenProgress = EditorGUILayout.Slider(tweenProgress, 0, 1);

            if (EditorGUI.EndChangeCheck())
            {
                if (sequencerController.PlayingSequence != null)
                {
                    sequencerController.PlayingSequence.Goto(tweenProgress *
                                                          sequencerController.PlayingSequence.Duration());
                }
            }

            GUI.enabled = guiEnabled;
            GUILayout.FlexibleSpace();
        }

        private void DrawTimeScaleSlider()
        {
            GUILayout.FlexibleSpace();
            bool guiEnabled = GUI.enabled;

            GUI.enabled = sequencerController.PlayingSequence != null && DOTweenEditorPreview.isPreviewing;

            EditorGUI.BeginChangeCheck();
            float tweenTimescale = 1;

            if (sequencerController.PlayingSequence != null)
                tweenTimescale = sequencerController.PlayingSequence.timeScale;

            EditorGUILayout.LabelField("TimeScale");
            tweenTimescale = EditorGUILayout.Slider(tweenTimescale, 0, 2);

            if (EditorGUI.EndChangeCheck())
            {
                if (sequencerController.PlayingSequence != null)
                    sequencerController.PlayingSequence.timeScale = tweenTimescale;
            }

            GUI.enabled = guiEnabled;
            GUILayout.FlexibleSpace();
        }

        private void DrawFoldoutArea(string title,ref bool foldout, Action additionalInspectorGUI)
        {
            using (new EditorGUILayout.VerticalScope("FrameBox"))
            {
                Rect rect = EditorGUILayout.GetControlRect();
                rect.x += 10;
                rect.width -= 10;
                rect.y -= 4;
                
                foldout = EditorGUI.BeginFoldoutHeaderGroup(rect, foldout, title);
                
                if (foldout)
                    additionalInspectorGUI.Invoke();
                EditorGUI.EndFoldoutHeaderGroup();
            }
        }
        
        private void OnDrawAnimationStep(Rect rect, int index, bool isActive, bool isFocused)
        {
            SerializedProperty element = reorderableList.serializedProperty.GetArrayElementAtIndex(index);
            SerializedProperty flowTypeSerializedProperty = element.FindPropertyRelative("flowType");

            if (element.TryGetTargetObjectOfProperty(out AnimationStepBase animationStepBase))
            {
                if (animationStepBase.IsPlaying)
                {
                    reorderableList.index = index;
                }
            }

            FlowType flowType = (FlowType)flowTypeSerializedProperty.enumValueIndex;

            int baseIdentLevel = EditorGUI.indentLevel;
            
            GUIContent guiContent = new GUIContent(element.displayName);
            if (animationStepBase != null)
                guiContent = new GUIContent(animationStepBase.GetDisplayNameForEditor(index + 1));

            if (flowType == FlowType.Join)
                EditorGUI.indentLevel = baseIdentLevel + 1;
            
            rect.height = EditorGUIUtility.singleLineHeight;
            rect.x += 10;
            rect.width -= 20;

            EditorGUI.PropertyField(
                rect,
                element,
                guiContent,
                false
            );

            EditorGUI.indentLevel = baseIdentLevel;
        }
        
        private float GetAnimationStepHeight(int index)
        {
            SerializedProperty element = reorderableList.serializedProperty.GetArrayElementAtIndex(index);
            return element.GetPropertyDrawerHeight();
            
        }
    }
}
