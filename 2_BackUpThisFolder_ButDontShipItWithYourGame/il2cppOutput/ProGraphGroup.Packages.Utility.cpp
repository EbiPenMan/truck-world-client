#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// ProGraphGroup.Packages.Utility.RenderUtilities
struct RenderUtilities_tF66CA4BC59DC0D5301F8D7B8070A15C7CD9C25C5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// ProGraphGroup.Packages.Utility.Task
struct Task_tF033F23DE7D660B63766C9C08569E4C81C93EDA7;
// ProGraphGroup.Packages.Utility.TaskManager
struct TaskManager_tAC818B438229045E281933056B824620D4413DF4;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// ProGraphGroup.Packages.Utility.TransformUtilities
struct TransformUtilities_tA5B366DF5C82309AF1E1B74D795D11E800A4C21E;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// ProGraphGroup.Packages.Utility.Task/FinishedHandler
struct FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1;
// ProGraphGroup.Packages.Utility.TaskManager/TaskState
struct TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6;
// ProGraphGroup.Packages.Utility.TaskManager/TaskState/<CallWrapper>d__17
struct U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9;
// ProGraphGroup.Packages.Utility.TaskManager/TaskState/FinishedHandler
struct FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskManager_tAC818B438229045E281933056B824620D4413DF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralC890A5EA2A6FB40BFE7B68447EF8CC371207C108;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTaskManager_tAC818B438229045E281933056B824620D4413DF4_m838AE9EB32B67211395DB4C94479118C401CA313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_TaskFinished_mAAF99AFF5C68F281047739275E2CE6E5D4E0651A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCallWrapperU3Ed__17_System_Collections_IEnumerator_Reset_mC22C4CCDBDBAAD648F03D1A3BE64923FFA09F49B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD1036309428A78B7A2A354CA41B7D4F0ACE5D2C4 
{
};
struct Il2CppArrayBounds;

// ProGraphGroup.Packages.Utility.RenderUtilities
struct RenderUtilities_tF66CA4BC59DC0D5301F8D7B8070A15C7CD9C25C5  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// ProGraphGroup.Packages.Utility.Task
struct Task_tF033F23DE7D660B63766C9C08569E4C81C93EDA7  : public RuntimeObject
{
	// ProGraphGroup.Packages.Utility.Task/FinishedHandler ProGraphGroup.Packages.Utility.Task::Finished
	FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* ___Finished_0;
	// ProGraphGroup.Packages.Utility.TaskManager/TaskState ProGraphGroup.Packages.Utility.Task::task
	TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* ___task_1;
};

// ProGraphGroup.Packages.Utility.TransformUtilities
struct TransformUtilities_tA5B366DF5C82309AF1E1B74D795D11E800A4C21E  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// ProGraphGroup.Packages.Utility.TaskManager/TaskState
struct TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6  : public RuntimeObject
{
	// ProGraphGroup.Packages.Utility.TaskManager/TaskState/FinishedHandler ProGraphGroup.Packages.Utility.TaskManager/TaskState::Finished
	FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* ___Finished_0;
	// System.Collections.IEnumerator ProGraphGroup.Packages.Utility.TaskManager/TaskState::coroutine
	RuntimeObject* ___coroutine_1;
	// System.Boolean ProGraphGroup.Packages.Utility.TaskManager/TaskState::running
	bool ___running_2;
	// System.Boolean ProGraphGroup.Packages.Utility.TaskManager/TaskState::paused
	bool ___paused_3;
	// System.Boolean ProGraphGroup.Packages.Utility.TaskManager/TaskState::stopped
	bool ___stopped_4;
};

// ProGraphGroup.Packages.Utility.TaskManager/TaskState/<CallWrapper>d__17
struct U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9  : public RuntimeObject
{
	// System.Int32 ProGraphGroup.Packages.Utility.TaskManager/TaskState/<CallWrapper>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ProGraphGroup.Packages.Utility.TaskManager/TaskState/<CallWrapper>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ProGraphGroup.Packages.Utility.TaskManager/TaskState ProGraphGroup.Packages.Utility.TaskManager/TaskState/<CallWrapper>d__17::<>4__this
	TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* ___U3CU3E4__this_2;
	// System.Collections.IEnumerator ProGraphGroup.Packages.Utility.TaskManager/TaskState/<CallWrapper>d__17::<e>5__2
	RuntimeObject* ___U3CeU3E5__2_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/Type
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ProGraphGroup.Packages.Utility.Task/FinishedHandler
struct FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1  : public MulticastDelegate_t
{
};

// ProGraphGroup.Packages.Utility.TaskManager/TaskState/FinishedHandler
struct FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21  : public MulticastDelegate_t
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// ProGraphGroup.Packages.Utility.TaskManager
struct TaskManager_tAC818B438229045E281933056B824620D4413DF4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct TaskManager_tAC818B438229045E281933056B824620D4413DF4_StaticFields
{
	// ProGraphGroup.Packages.Utility.TaskManager ProGraphGroup.Packages.Utility.TaskManager::singleton
	TaskManager_tAC818B438229045E281933056B824620D4413DF4* ___singleton_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.MeshRenderer,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_mF01A8F96CDB15A6DA85FD3BAD0C6D13158DC9C6F (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___targetMeshRenderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.LineRenderer,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_m0EA1A260B8F4FC328631A2FEC8F16A64D1E79B57 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___targetLineRenderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.SpriteRenderer,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_m325E024B9A02B351130DE0C40F622BC1E91AE589 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___targetSpriteRenderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.MeshRenderer,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_mEB04E405E532132DBCA6ED3E34EF32CD3DEAB49C (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___targetMeshRenderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.LineRenderer,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_m2392390748A39291CAD94FDC2395A18A9619FB92 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___targetLineRenderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.SpriteRenderer,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_m59507FA8E3160093E6F545BE847626A21FD3CFD9 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___targetSpriteRenderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.MeshRenderer,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m6F12B061BC3E711D563E8A234E2FF957406CC2D3 (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___targetMeshRenderer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.SpriteRenderer,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_mFC5FE77DDB52F5AC427C2E3F8A73F28379DAE7F0 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___targetSpriteRenderer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.LineRenderer,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m3F3ADD0CFD6536279B130B6014045F3CE9240254 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___targetLineRenderer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.MeshRenderer,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m49F787C1B3C40537CE69ED2990AEF0E6B948A1C2 (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___targetMeshRenderer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.SpriteRenderer,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m66EF04A30666DED7FA0F038D6ED0EC3F30C78663 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___targetSpriteRenderer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.LineRenderer,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m589B50FB2187E06DD635E1B7A81C642F6E200A2E (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___targetLineRenderer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean ProGraphGroup.Packages.Utility.TaskManager/TaskState::get_Running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TaskState_get_Running_mC19CDE4706FA4A5600ECA7E89A1CE7D3EF1C0B87_inline (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) ;
// System.Boolean ProGraphGroup.Packages.Utility.TaskManager/TaskState::get_Paused()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TaskState_get_Paused_m575AFB4D4B20649977ABE1AE8F8C0A9C93A1B041_inline (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// ProGraphGroup.Packages.Utility.TaskManager/TaskState ProGraphGroup.Packages.Utility.TaskManager::CreateTask(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* TaskManager_CreateTask_m94DD20DACC9AD35FE8ECA6D780DF82C7BACB31BD (RuntimeObject* ___coroutine0, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState/FinishedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler__ctor_m0AB64691BEF9905F786B52E83301859F9EEDE6C7 (FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState::add_Finished(ProGraphGroup.Packages.Utility.TaskManager/TaskState/FinishedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_add_Finished_m6E6EA4463B5A73D442D66B37E097ABFE16C40B6E (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* ___value0, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.Task::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Start_m77603F134D386B975BEE315ED34EA125BE1B561A (Task_tF033F23DE7D660B63766C9C08569E4C81C93EDA7* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Start_mBF6457BD8FA33920D475FA5B6A9F8A6BB08DE8C4 (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Stop_mCA3B1F1002F02E5C1568E0F5653ED6D8E91D81A7 (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Pause_m7D6753E5C4E57E03012A29984C59E900EA1CF2FB (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState::Unpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Unpause_m62AA1BF2F044962C83E75FB82E9093C06CA9B941 (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.Task/FinishedHandler::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishedHandler_Invoke_mE3617B347F501FE1D9AF85A1D0C8E8884BBD351D_inline (FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* __this, bool ___manual0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<ProGraphGroup.Packages.Utility.TaskManager>()
inline TaskManager_tAC818B438229045E281933056B824620D4413DF4* GameObject_AddComponent_TisTaskManager_tAC818B438229045E281933056B824620D4413DF4_m838AE9EB32B67211395DB4C94479118C401CA313 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TaskManager_tAC818B438229045E281933056B824620D4413DF4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState::.ctor(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState__ctor_mAF7117370BB8968EFE4ED915AE6D1383BF281A53 (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, RuntimeObject* ___c0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ProGraphGroup.Packages.Utility.TaskManager/TaskState::CallWrapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskState_CallWrapper_m9160C40C5A9CAF6C6DB6DB6A0EA50068EB460722 (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState/<CallWrapper>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallWrapperU3Ed__17__ctor_m74FD532B4A72429BD23BAD3DFCEF801D43B3CF09 (U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState/FinishedHandler::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishedHandler_Invoke_m30B9F28AE633C9B82953344F8A286ADB6BEFDCE5_inline (FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* __this, bool ___manual0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.GameObject,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_mC6F6DBD53ACB52D3DF7DF1320D2D38BEEE1FD830 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetObject.GetComponent<MeshRenderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_0, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// SetMaterial(targetObject.GetComponent<MeshRenderer>(), mat);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___targetObject0;
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_3, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___mat1;
		RenderUtilities_SetMaterial_mF01A8F96CDB15A6DA85FD3BAD0C6D13158DC9C6F(L_4, L_5, NULL);
		return;
	}

IL_001a:
	{
		// else if (targetObject.GetComponent<LineRenderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___targetObject0;
		NullCheck(L_6);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_7;
		L_7 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_6, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		// SetMaterial(targetObject.GetComponent<LineRenderer>(),mat);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___targetObject0;
		NullCheck(L_9);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_10;
		L_10 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_9, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___mat1;
		RenderUtilities_SetMaterial_m0EA1A260B8F4FC328631A2FEC8F16A64D1E79B57(L_10, L_11, NULL);
		return;
	}

IL_0034:
	{
		// else if (targetObject.GetComponent<SpriteRenderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___targetObject0;
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_12, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_13, NULL);
		if (!L_14)
		{
			goto IL_004d;
		}
	}
	{
		// SetMaterial(targetObject.GetComponent<SpriteRenderer>(), mat);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___targetObject0;
		NullCheck(L_15);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16;
		L_16 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_15, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = ___mat1;
		RenderUtilities_SetMaterial_m325E024B9A02B351130DE0C40F622BC1E91AE589(L_16, L_17, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.GameObject,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_mCB066314CFF774D509021AF6382F7A314A5310C2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetObject.GetComponent<MeshRenderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_0, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// SetMaterial(targetObject.GetComponent<MeshRenderer>(), mat, targetMaterialIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___targetObject0;
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_3, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___mat1;
		int32_t L_6 = ___targetMaterialIndex2;
		RenderUtilities_SetMaterial_mEB04E405E532132DBCA6ED3E34EF32CD3DEAB49C(L_4, L_5, L_6, NULL);
		return;
	}

IL_001b:
	{
		// else if (targetObject.GetComponent<LineRenderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___targetObject0;
		NullCheck(L_7);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_8;
		L_8 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_7, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_8, NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// SetMaterial(targetObject.GetComponent<LineRenderer>(), mat, targetMaterialIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___targetObject0;
		NullCheck(L_10);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_11;
		L_11 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_10, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___mat1;
		int32_t L_13 = ___targetMaterialIndex2;
		RenderUtilities_SetMaterial_m2392390748A39291CAD94FDC2395A18A9619FB92(L_11, L_12, L_13, NULL);
		return;
	}

IL_0036:
	{
		// else if (targetObject.GetComponent<SpriteRenderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = ___targetObject0;
		NullCheck(L_14);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_15;
		L_15 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_14, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		if (!L_16)
		{
			goto IL_0050;
		}
	}
	{
		// SetMaterial(targetObject.GetComponent<SpriteRenderer>(), mat, targetMaterialIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ___targetObject0;
		NullCheck(L_17);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18;
		L_18 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_17, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = ___mat1;
		int32_t L_20 = ___targetMaterialIndex2;
		RenderUtilities_SetMaterial_m59507FA8E3160093E6F545BE847626A21FD3CFD9(L_18, L_19, L_20, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.Transform,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_mD899B4A2CC7EBEE35BB371EAF0FC1650601B72A9 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetTransform.GetComponent<MeshRenderer>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_0, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// SetMaterial(targetTransform.GetComponent<MeshRenderer>(), mat);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___targetTransform0;
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_3, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___mat1;
		RenderUtilities_SetMaterial_mF01A8F96CDB15A6DA85FD3BAD0C6D13158DC9C6F(L_4, L_5, NULL);
		return;
	}

IL_001a:
	{
		// else if (targetTransform.GetComponent<LineRenderer>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___targetTransform0;
		NullCheck(L_6);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_7;
		L_7 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_6, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		// SetMaterial(targetTransform.GetComponent<LineRenderer>(),mat);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___targetTransform0;
		NullCheck(L_9);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_10;
		L_10 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_9, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___mat1;
		RenderUtilities_SetMaterial_m0EA1A260B8F4FC328631A2FEC8F16A64D1E79B57(L_10, L_11, NULL);
		return;
	}

IL_0034:
	{
		// else if (targetTransform.GetComponent<SpriteRenderer>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___targetTransform0;
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13;
		L_13 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_12, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_13, NULL);
		if (!L_14)
		{
			goto IL_004d;
		}
	}
	{
		// SetMaterial(targetTransform.GetComponent<SpriteRenderer>(), mat);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___targetTransform0;
		NullCheck(L_15);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16;
		L_16 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_15, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = ___mat1;
		RenderUtilities_SetMaterial_m325E024B9A02B351130DE0C40F622BC1E91AE589(L_16, L_17, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.Transform,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_mC02D208FADFF92A4B70496DCCD1A17DCF1340C3A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetTransform.GetComponent<MeshRenderer>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_0, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// SetMaterial(targetTransform.GetComponent<MeshRenderer>(), mat, targetMaterialIndex);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___targetTransform0;
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_3, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___mat1;
		int32_t L_6 = ___targetMaterialIndex2;
		RenderUtilities_SetMaterial_mEB04E405E532132DBCA6ED3E34EF32CD3DEAB49C(L_4, L_5, L_6, NULL);
		return;
	}

IL_001b:
	{
		// else if (targetTransform.GetComponent<LineRenderer>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___targetTransform0;
		NullCheck(L_7);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_8;
		L_8 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_7, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_8, NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// SetMaterial(targetTransform.GetComponent<LineRenderer>(), mat, targetMaterialIndex);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___targetTransform0;
		NullCheck(L_10);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_11;
		L_11 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_10, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___mat1;
		int32_t L_13 = ___targetMaterialIndex2;
		RenderUtilities_SetMaterial_m2392390748A39291CAD94FDC2395A18A9619FB92(L_11, L_12, L_13, NULL);
		return;
	}

IL_0036:
	{
		// else if (targetTransform.GetComponent<SpriteRenderer>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___targetTransform0;
		NullCheck(L_14);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_15;
		L_15 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_14, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		if (!L_16)
		{
			goto IL_0050;
		}
	}
	{
		// SetMaterial(targetTransform.GetComponent<SpriteRenderer>(), mat, targetMaterialIndex);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = ___targetTransform0;
		NullCheck(L_17);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18;
		L_18 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_17, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = ___mat1;
		int32_t L_20 = ___targetMaterialIndex2;
		RenderUtilities_SetMaterial_m59507FA8E3160093E6F545BE847626A21FD3CFD9(L_18, L_19, L_20, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.MeshRenderer,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_mF01A8F96CDB15A6DA85FD3BAD0C6D13158DC9C6F (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___targetMeshRenderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < targetMeshRenderer.materials.Length; i++)
		V_0 = 0;
		goto IL_0011;
	}

IL_0004:
	{
		// targetMeshRenderer.materials[i] = mat;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___targetMeshRenderer0;
		NullCheck(L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1;
		L_1 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_0, NULL);
		int32_t L_2 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___mat1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_3);
		// for (int i = 0; i < targetMeshRenderer.materials.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0011:
	{
		// for (int i = 0; i < targetMeshRenderer.materials.Length; i++)
		int32_t L_5 = V_0;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6 = ___targetMeshRenderer0;
		NullCheck(L_6);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_7;
		L_7 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_6, NULL);
		NullCheck(L_7);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.MeshRenderer,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_mEB04E405E532132DBCA6ED3E34EF32CD3DEAB49C (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___targetMeshRenderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) 
{
	{
		// targetMeshRenderer.materials[targetMaterialIndex] = mat;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___targetMeshRenderer0;
		NullCheck(L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1;
		L_1 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_0, NULL);
		int32_t L_2 = ___targetMaterialIndex2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___mat1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_3);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.LineRenderer,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_m0EA1A260B8F4FC328631A2FEC8F16A64D1E79B57 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___targetLineRenderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < targetLineRenderer.materials.Length; i++)
		V_0 = 0;
		goto IL_0011;
	}

IL_0004:
	{
		// targetLineRenderer.materials[i] = mat;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = ___targetLineRenderer0;
		NullCheck(L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1;
		L_1 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_0, NULL);
		int32_t L_2 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___mat1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_3);
		// for (int i = 0; i < targetLineRenderer.materials.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0011:
	{
		// for (int i = 0; i < targetLineRenderer.materials.Length; i++)
		int32_t L_5 = V_0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_6 = ___targetLineRenderer0;
		NullCheck(L_6);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_7;
		L_7 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_6, NULL);
		NullCheck(L_7);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.LineRenderer,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_m2392390748A39291CAD94FDC2395A18A9619FB92 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___targetLineRenderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) 
{
	{
		// targetLineRenderer.materials[targetMaterialIndex] = mat;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = ___targetLineRenderer0;
		NullCheck(L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1;
		L_1 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_0, NULL);
		int32_t L_2 = ___targetMaterialIndex2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___mat1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_3);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.SpriteRenderer,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_m325E024B9A02B351130DE0C40F622BC1E91AE589 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___targetSpriteRenderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < targetSpriteRenderer.materials.Length; i++)
		V_0 = 0;
		goto IL_0011;
	}

IL_0004:
	{
		// targetSpriteRenderer.materials[i] = mat;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___targetSpriteRenderer0;
		NullCheck(L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1;
		L_1 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_0, NULL);
		int32_t L_2 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___mat1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_3);
		// for (int i = 0; i < targetSpriteRenderer.materials.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0011:
	{
		// for (int i = 0; i < targetSpriteRenderer.materials.Length; i++)
		int32_t L_5 = V_0;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = ___targetSpriteRenderer0;
		NullCheck(L_6);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_7;
		L_7 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_6, NULL);
		NullCheck(L_7);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetMaterial(UnityEngine.SpriteRenderer,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetMaterial_m59507FA8E3160093E6F545BE847626A21FD3CFD9 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___targetSpriteRenderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) 
{
	{
		// targetSpriteRenderer.materials[targetMaterialIndex] = mat;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___targetSpriteRenderer0;
		NullCheck(L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1;
		L_1 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_0, NULL);
		int32_t L_2 = ___targetMaterialIndex2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___mat1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_3);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.GameObject,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m6D493BC7B2865A1BEF7076A722ED45F465AAC5AC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetObject.GetComponent<MeshRenderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_0, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// SetColor(targetObject.GetComponent<MeshRenderer>(), color);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___targetObject0;
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_3, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___color1;
		RenderUtilities_SetColor_m6F12B061BC3E711D563E8A234E2FF957406CC2D3(L_4, L_5, NULL);
		return;
	}

IL_001a:
	{
		// else if (targetObject.GetComponent<SpriteRenderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___targetObject0;
		NullCheck(L_6);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7;
		L_7 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_6, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		// SetColor(targetObject.GetComponent<SpriteRenderer>(),color);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___targetObject0;
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_9, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___color1;
		RenderUtilities_SetColor_mFC5FE77DDB52F5AC427C2E3F8A73F28379DAE7F0(L_10, L_11, NULL);
		return;
	}

IL_0034:
	{
		// else if (targetObject.GetComponent<LineRenderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___targetObject0;
		NullCheck(L_12);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_13;
		L_13 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_12, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_13, NULL);
		if (!L_14)
		{
			goto IL_004e;
		}
	}
	{
		// SetColor(targetObject.GetComponent<LineRenderer>(),color);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___targetObject0;
		NullCheck(L_15);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_16;
		L_16 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_15, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___color1;
		RenderUtilities_SetColor_m3F3ADD0CFD6536279B130B6014045F3CE9240254(L_16, L_17, NULL);
		return;
	}

IL_004e:
	{
		// else if (targetObject.GetComponent<Image>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = ___targetObject0;
		NullCheck(L_18);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19;
		L_19 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_18, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_19, NULL);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		// SetColor(targetObject.GetComponent<LineRenderer>(),color);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = ___targetObject0;
		NullCheck(L_21);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_22;
		L_22 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_21, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___color1;
		RenderUtilities_SetColor_m3F3ADD0CFD6536279B130B6014045F3CE9240254(L_22, L_23, NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.GameObject,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m664397B76E48AEB4C77152FFC1A5E49BCCED439E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetObject.GetComponent<MeshRenderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_0, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// SetColor(targetObject.GetComponent<MeshRenderer>(), color, targetMaterialIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___targetObject0;
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_3, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___color1;
		int32_t L_6 = ___targetMaterialIndex2;
		RenderUtilities_SetColor_m49F787C1B3C40537CE69ED2990AEF0E6B948A1C2(L_4, L_5, L_6, NULL);
		return;
	}

IL_001b:
	{
		// else if (targetObject.GetComponent<SpriteRenderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___targetObject0;
		NullCheck(L_7);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8;
		L_8 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_7, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_8, NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// SetColor(targetObject.GetComponent<SpriteRenderer>(),color, targetMaterialIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___targetObject0;
		NullCheck(L_10);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11;
		L_11 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_10, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___color1;
		int32_t L_13 = ___targetMaterialIndex2;
		RenderUtilities_SetColor_m66EF04A30666DED7FA0F038D6ED0EC3F30C78663(L_11, L_12, L_13, NULL);
		return;
	}

IL_0036:
	{
		// else if (targetObject.GetComponent<LineRenderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = ___targetObject0;
		NullCheck(L_14);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_15;
		L_15 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_14, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		// SetColor(targetObject.GetComponent<LineRenderer>(),color, targetMaterialIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ___targetObject0;
		NullCheck(L_17);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_18;
		L_18 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_17, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___color1;
		int32_t L_20 = ___targetMaterialIndex2;
		RenderUtilities_SetColor_m589B50FB2187E06DD635E1B7A81C642F6E200A2E(L_18, L_19, L_20, NULL);
		return;
	}

IL_0051:
	{
		// else if (targetObject.GetComponent<Image>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = ___targetObject0;
		NullCheck(L_21);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22;
		L_22 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_21, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_22, NULL);
		if (!L_23)
		{
			goto IL_006b;
		}
	}
	{
		// SetColor(targetObject.GetComponent<LineRenderer>(),color, targetMaterialIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = ___targetObject0;
		NullCheck(L_24);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_25;
		L_25 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_24, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = ___color1;
		int32_t L_27 = ___targetMaterialIndex2;
		RenderUtilities_SetColor_m589B50FB2187E06DD635E1B7A81C642F6E200A2E(L_25, L_26, L_27, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.Transform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m8978CF2B3641A7E8C3612787A7224F8FE449B87B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetTransform.GetComponent<MeshRenderer>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_0, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// SetColor(targetTransform.GetComponent<MeshRenderer>(), color);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___targetTransform0;
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_3, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___color1;
		RenderUtilities_SetColor_m6F12B061BC3E711D563E8A234E2FF957406CC2D3(L_4, L_5, NULL);
		return;
	}

IL_001a:
	{
		// else if (targetTransform.GetComponent<SpriteRenderer>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___targetTransform0;
		NullCheck(L_6);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7;
		L_7 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_6, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		// SetColor(targetTransform.GetComponent<SpriteRenderer>(),color);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___targetTransform0;
		NullCheck(L_9);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10;
		L_10 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_9, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___color1;
		RenderUtilities_SetColor_mFC5FE77DDB52F5AC427C2E3F8A73F28379DAE7F0(L_10, L_11, NULL);
		return;
	}

IL_0034:
	{
		// else if (targetTransform.GetComponent<LineRenderer>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___targetTransform0;
		NullCheck(L_12);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_13;
		L_13 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_12, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_13, NULL);
		if (!L_14)
		{
			goto IL_004e;
		}
	}
	{
		// SetColor(targetTransform.GetComponent<LineRenderer>(),color);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___targetTransform0;
		NullCheck(L_15);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_16;
		L_16 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_15, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___color1;
		RenderUtilities_SetColor_m3F3ADD0CFD6536279B130B6014045F3CE9240254(L_16, L_17, NULL);
		return;
	}

IL_004e:
	{
		// else if (targetTransform.GetComponent<Image>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ___targetTransform0;
		NullCheck(L_18);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19;
		L_19 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_18, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_19, NULL);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		// SetColor(targetTransform.GetComponent<LineRenderer>(),color);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = ___targetTransform0;
		NullCheck(L_21);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_22;
		L_22 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_21, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___color1;
		RenderUtilities_SetColor_m3F3ADD0CFD6536279B130B6014045F3CE9240254(L_22, L_23, NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.Transform,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m034FABCF787C4C3B6B55FFF9B72472A306C2C2C9 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetTransform.GetComponent<MeshRenderer>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_0, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// SetColor(targetTransform.GetComponent<MeshRenderer>(), color, targetMaterialIndex);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___targetTransform0;
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_3, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___color1;
		int32_t L_6 = ___targetMaterialIndex2;
		RenderUtilities_SetColor_m49F787C1B3C40537CE69ED2990AEF0E6B948A1C2(L_4, L_5, L_6, NULL);
		return;
	}

IL_001b:
	{
		// else if (targetTransform.GetComponent<SpriteRenderer>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___targetTransform0;
		NullCheck(L_7);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8;
		L_8 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_7, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_8, NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// SetColor(targetTransform.GetComponent<SpriteRenderer>(),color, targetMaterialIndex);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___targetTransform0;
		NullCheck(L_10);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11;
		L_11 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_10, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___color1;
		int32_t L_13 = ___targetMaterialIndex2;
		RenderUtilities_SetColor_m66EF04A30666DED7FA0F038D6ED0EC3F30C78663(L_11, L_12, L_13, NULL);
		return;
	}

IL_0036:
	{
		// else if (targetTransform.GetComponent<LineRenderer>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___targetTransform0;
		NullCheck(L_14);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_15;
		L_15 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_14, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		if (!L_16)
		{
			goto IL_0051;
		}
	}
	{
		// SetColor(targetTransform.GetComponent<LineRenderer>(),color, targetMaterialIndex);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = ___targetTransform0;
		NullCheck(L_17);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_18;
		L_18 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_17, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___color1;
		int32_t L_20 = ___targetMaterialIndex2;
		RenderUtilities_SetColor_m589B50FB2187E06DD635E1B7A81C642F6E200A2E(L_18, L_19, L_20, NULL);
		return;
	}

IL_0051:
	{
		// else if (targetTransform.GetComponent<Image>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = ___targetTransform0;
		NullCheck(L_21);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22;
		L_22 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_21, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_22, NULL);
		if (!L_23)
		{
			goto IL_006b;
		}
	}
	{
		// SetColor(targetTransform.GetComponent<LineRenderer>(),color, targetMaterialIndex);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = ___targetTransform0;
		NullCheck(L_24);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_25;
		L_25 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(L_24, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = ___color1;
		int32_t L_27 = ___targetMaterialIndex2;
		RenderUtilities_SetColor_m589B50FB2187E06DD635E1B7A81C642F6E200A2E(L_25, L_26, L_27, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.MeshRenderer,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m6F12B061BC3E711D563E8A234E2FF957406CC2D3 (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___targetMeshRenderer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < targetMeshRenderer.materials.Length; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// targetMeshRenderer.materials[i].color = color;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___targetMeshRenderer0;
		NullCheck(L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1;
		L_1 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_0, NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___color1;
		NullCheck(L_4);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_4, L_5, NULL);
		// for (int i = 0; i < targetMeshRenderer.materials.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < targetMeshRenderer.materials.Length; i++)
		int32_t L_7 = V_0;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_8 = ___targetMeshRenderer0;
		NullCheck(L_8);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_9;
		L_9 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_8, NULL);
		NullCheck(L_9);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.MeshRenderer,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m49F787C1B3C40537CE69ED2990AEF0E6B948A1C2 (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___targetMeshRenderer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) 
{
	{
		// targetMeshRenderer.materials[targetMaterialIndex].color = color;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___targetMeshRenderer0;
		NullCheck(L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1;
		L_1 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_0, NULL);
		int32_t L_2 = ___targetMaterialIndex2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___color1;
		NullCheck(L_4);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.SpriteRenderer,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_mFC5FE77DDB52F5AC427C2E3F8A73F28379DAE7F0 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___targetSpriteRenderer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < targetSpriteRenderer.materials.Length; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// targetSpriteRenderer.materials[i].color = color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___targetSpriteRenderer0;
		NullCheck(L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1;
		L_1 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_0, NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___color1;
		NullCheck(L_4);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_4, L_5, NULL);
		// for (int i = 0; i < targetSpriteRenderer.materials.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < targetSpriteRenderer.materials.Length; i++)
		int32_t L_7 = V_0;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = ___targetSpriteRenderer0;
		NullCheck(L_8);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_9;
		L_9 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_8, NULL);
		NullCheck(L_9);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.SpriteRenderer,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m66EF04A30666DED7FA0F038D6ED0EC3F30C78663 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___targetSpriteRenderer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) 
{
	{
		// targetSpriteRenderer.materials[targetMaterialIndex].color = color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___targetSpriteRenderer0;
		NullCheck(L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1;
		L_1 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_0, NULL);
		int32_t L_2 = ___targetMaterialIndex2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___color1;
		NullCheck(L_4);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.LineRenderer,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m3F3ADD0CFD6536279B130B6014045F3CE9240254 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___targetLineRenderer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < targetLineRenderer.materials.Length; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// targetLineRenderer.materials[i].color = color;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = ___targetLineRenderer0;
		NullCheck(L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1;
		L_1 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_0, NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___color1;
		NullCheck(L_4);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_4, L_5, NULL);
		// for (int i = 0; i < targetLineRenderer.materials.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < targetLineRenderer.materials.Length; i++)
		int32_t L_7 = V_0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_8 = ___targetLineRenderer0;
		NullCheck(L_8);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_9;
		L_9 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_8, NULL);
		NullCheck(L_9);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.LineRenderer,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m589B50FB2187E06DD635E1B7A81C642F6E200A2E (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___targetLineRenderer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, int32_t ___targetMaterialIndex2, const RuntimeMethod* method) 
{
	{
		// targetLineRenderer.materials[targetMaterialIndex].color = color;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = ___targetLineRenderer0;
		NullCheck(L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1;
		L_1 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_0, NULL);
		int32_t L_2 = ___targetMaterialIndex2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___color1;
		NullCheck(L_4);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::SetColor(UnityEngine.UI.Image,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities_SetColor_m1E57D185F5A8E1A23876064F62E6284C1A85E182 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___targetImage0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	{
		// targetImage.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = ___targetImage0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color1;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.RenderUtilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderUtilities__ctor_m4C8CDF6EB9EE4B2635313001AEDBDAF77C359AD8 (RenderUtilities_tF66CA4BC59DC0D5301F8D7B8070A15C7CD9C25C5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ProGraphGroup.Packages.Utility.Task::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_Running_mC09B1C2C517C22CB040EDE34CED81227C8C0C31B (Task_tF033F23DE7D660B63766C9C08569E4C81C93EDA7* __this, const RuntimeMethod* method) 
{
	{
		// return task.Running;
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_0 = __this->___task_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = TaskState_get_Running_mC19CDE4706FA4A5600ECA7E89A1CE7D3EF1C0B87_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean ProGraphGroup.Packages.Utility.Task::get_Paused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_Paused_m4EC95F8AAE0B57E2C7D950107910FCBAF0EA4A0D (Task_tF033F23DE7D660B63766C9C08569E4C81C93EDA7* __this, const RuntimeMethod* method) 
{
	{
		// return task.Paused;
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_0 = __this->___task_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = TaskState_get_Paused_m575AFB4D4B20649977ABE1AE8F8C0A9C93A1B041_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void ProGraphGroup.Packages.Utility.Task::add_Finished(ProGraphGroup.Packages.Utility.Task/FinishedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_add_Finished_mF371D71B6F440D5D6D7032BDA0A5B78E6C8CE303 (Task_tF033F23DE7D660B63766C9C08569E4C81C93EDA7* __this, FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* V_0 = NULL;
	FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* V_1 = NULL;
	FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* V_2 = NULL;
	{
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_0 = __this->___Finished_0;
		V_0 = L_0;
	}

IL_0007:
	{
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_1 = V_0;
		V_1 = L_1;
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_2 = V_1;
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1*)CastclassSealed((RuntimeObject*)L_4, FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1_il2cpp_TypeInfo_var));
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1** L_5 = (&__this->___Finished_0);
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_6 = V_2;
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_7 = V_1;
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_8;
		L_8 = InterlockedCompareExchangeImpl<FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1*>(L_5, L_6, L_7);
		V_0 = L_8;
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_9 = V_0;
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_10 = V_1;
		if ((!(((RuntimeObject*)(FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1*)L_9) == ((RuntimeObject*)(FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.Task::remove_Finished(ProGraphGroup.Packages.Utility.Task/FinishedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_remove_Finished_mF552E85907DB5D19FF2E182523B42BDCB7E32B2C (Task_tF033F23DE7D660B63766C9C08569E4C81C93EDA7* __this, FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* V_0 = NULL;
	FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* V_1 = NULL;
	FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* V_2 = NULL;
	{
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_0 = __this->___Finished_0;
		V_0 = L_0;
	}

IL_0007:
	{
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_1 = V_0;
		V_1 = L_1;
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_2 = V_1;
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1*)CastclassSealed((RuntimeObject*)L_4, FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1_il2cpp_TypeInfo_var));
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1** L_5 = (&__this->___Finished_0);
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_6 = V_2;
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_7 = V_1;
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_8;
		L_8 = InterlockedCompareExchangeImpl<FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1*>(L_5, L_6, L_7);
		V_0 = L_8;
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_9 = V_0;
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_10 = V_1;
		if ((!(((RuntimeObject*)(FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1*)L_9) == ((RuntimeObject*)(FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.Task::.ctor(System.Collections.IEnumerator,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_mD9228D08C522551AB8C418A6CA1FF1B85EB33559 (Task_tF033F23DE7D660B63766C9C08569E4C81C93EDA7* __this, RuntimeObject* ___c0, bool ___autoStart1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_TaskFinished_mAAF99AFF5C68F281047739275E2CE6E5D4E0651A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Task(IEnumerator c, bool autoStart = true)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// task = TaskManager.CreateTask(c);
		RuntimeObject* L_0 = ___c0;
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_1;
		L_1 = TaskManager_CreateTask_m94DD20DACC9AD35FE8ECA6D780DF82C7BACB31BD(L_0, NULL);
		__this->___task_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___task_1), (void*)L_1);
		// task.Finished += TaskFinished;
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_2 = __this->___task_1;
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_3 = (FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21*)il2cpp_codegen_object_new(FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FinishedHandler__ctor_m0AB64691BEF9905F786B52E83301859F9EEDE6C7(L_3, __this, (intptr_t)((void*)Task_TaskFinished_mAAF99AFF5C68F281047739275E2CE6E5D4E0651A_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		TaskState_add_Finished_m6E6EA4463B5A73D442D66B37E097ABFE16C40B6E(L_2, L_3, NULL);
		// if(autoStart)
		bool L_4 = ___autoStart1;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Start();
		Task_Start_m77603F134D386B975BEE315ED34EA125BE1B561A(__this, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.Task::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Start_m77603F134D386B975BEE315ED34EA125BE1B561A (Task_tF033F23DE7D660B63766C9C08569E4C81C93EDA7* __this, const RuntimeMethod* method) 
{
	{
		// task.Start();
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_0 = __this->___task_1;
		NullCheck(L_0);
		TaskState_Start_mBF6457BD8FA33920D475FA5B6A9F8A6BB08DE8C4(L_0, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.Task::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Stop_m1B3C97BFFA61F623F5D792DBFB5725BC0C79C9CD (Task_tF033F23DE7D660B63766C9C08569E4C81C93EDA7* __this, const RuntimeMethod* method) 
{
	{
		// task.Stop();
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_0 = __this->___task_1;
		NullCheck(L_0);
		TaskState_Stop_mCA3B1F1002F02E5C1568E0F5653ED6D8E91D81A7(L_0, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.Task::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Pause_mA233819B23E82298B43D864E198B5AA84E1B3E4A (Task_tF033F23DE7D660B63766C9C08569E4C81C93EDA7* __this, const RuntimeMethod* method) 
{
	{
		// task.Pause();
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_0 = __this->___task_1;
		NullCheck(L_0);
		TaskState_Pause_m7D6753E5C4E57E03012A29984C59E900EA1CF2FB(L_0, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.Task::Unpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Unpause_m5FA1BD3F1201475782738EFC0B92F789AC844FC7 (Task_tF033F23DE7D660B63766C9C08569E4C81C93EDA7* __this, const RuntimeMethod* method) 
{
	{
		// task.Unpause();
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_0 = __this->___task_1;
		NullCheck(L_0);
		TaskState_Unpause_m62AA1BF2F044962C83E75FB82E9093C06CA9B941(L_0, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.Task::TaskFinished(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_TaskFinished_mAAF99AFF5C68F281047739275E2CE6E5D4E0651A (Task_tF033F23DE7D660B63766C9C08569E4C81C93EDA7* __this, bool ___manual0, const RuntimeMethod* method) 
{
	FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* V_0 = NULL;
	{
		// FinishedHandler handler = Finished;
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_0 = __this->___Finished_0;
		V_0 = L_0;
		// if(handler != null)
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// handler(manual);
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* L_2 = V_0;
		bool L_3 = ___manual0;
		NullCheck(L_2);
		FinishedHandler_Invoke_mE3617B347F501FE1D9AF85A1D0C8E8884BBD351D_inline(L_2, L_3, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FinishedHandler_Invoke_mE3617B347F501FE1D9AF85A1D0C8E8884BBD351D_Multicast(FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* __this, bool ___manual0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* currentDelegate = reinterpret_cast<FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___manual0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FinishedHandler_Invoke_mE3617B347F501FE1D9AF85A1D0C8E8884BBD351D_Open(FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* __this, bool ___manual0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___manual0, method);
}
void FinishedHandler_Invoke_mE3617B347F501FE1D9AF85A1D0C8E8884BBD351D_OpenStaticInvoker(FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* __this, bool ___manual0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___manual0);
}
void FinishedHandler_Invoke_mE3617B347F501FE1D9AF85A1D0C8E8884BBD351D_ClosedStaticInvoker(FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* __this, bool ___manual0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___manual0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1 (FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* __this, bool ___manual0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___manual0));

}
// System.Void ProGraphGroup.Packages.Utility.Task/FinishedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler__ctor_m57E8DD837632105F3FC1319AF333B68E8FF563B3 (FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FinishedHandler_Invoke_mE3617B347F501FE1D9AF85A1D0C8E8884BBD351D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FinishedHandler_Invoke_mE3617B347F501FE1D9AF85A1D0C8E8884BBD351D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FinishedHandler_Invoke_mE3617B347F501FE1D9AF85A1D0C8E8884BBD351D_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&FinishedHandler_Invoke_mE3617B347F501FE1D9AF85A1D0C8E8884BBD351D_Multicast;
}
// System.Void ProGraphGroup.Packages.Utility.Task/FinishedHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler_Invoke_mE3617B347F501FE1D9AF85A1D0C8E8884BBD351D (FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* __this, bool ___manual0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___manual0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ProGraphGroup.Packages.Utility.Task/FinishedHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FinishedHandler_BeginInvoke_m9D65E6D7A54FED95B98F0362D1AB013AA66FC545 (FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* __this, bool ___manual0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___manual0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void ProGraphGroup.Packages.Utility.Task/FinishedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler_EndInvoke_m0241B67EC0FAA89745EBE1A7F1947340B9C6D576 (FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ProGraphGroup.Packages.Utility.TaskManager/TaskState ProGraphGroup.Packages.Utility.TaskManager::CreateTask(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* TaskManager_CreateTask_m94DD20DACC9AD35FE8ECA6D780DF82C7BACB31BD (RuntimeObject* ___coroutine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTaskManager_tAC818B438229045E281933056B824620D4413DF4_m838AE9EB32B67211395DB4C94479118C401CA313_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskManager_tAC818B438229045E281933056B824620D4413DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC890A5EA2A6FB40BFE7B68447EF8CC371207C108);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(singleton == null) {
		TaskManager_tAC818B438229045E281933056B824620D4413DF4* L_0 = ((TaskManager_tAC818B438229045E281933056B824620D4413DF4_StaticFields*)il2cpp_codegen_static_fields_for(TaskManager_tAC818B438229045E281933056B824620D4413DF4_il2cpp_TypeInfo_var))->___singleton_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// GameObject go = new GameObject("TaskManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteralC890A5EA2A6FB40BFE7B68447EF8CC371207C108, NULL);
		// singleton = go.AddComponent<TaskManager>();
		NullCheck(L_2);
		TaskManager_tAC818B438229045E281933056B824620D4413DF4* L_3;
		L_3 = GameObject_AddComponent_TisTaskManager_tAC818B438229045E281933056B824620D4413DF4_m838AE9EB32B67211395DB4C94479118C401CA313(L_2, GameObject_AddComponent_TisTaskManager_tAC818B438229045E281933056B824620D4413DF4_m838AE9EB32B67211395DB4C94479118C401CA313_RuntimeMethod_var);
		((TaskManager_tAC818B438229045E281933056B824620D4413DF4_StaticFields*)il2cpp_codegen_static_fields_for(TaskManager_tAC818B438229045E281933056B824620D4413DF4_il2cpp_TypeInfo_var))->___singleton_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((TaskManager_tAC818B438229045E281933056B824620D4413DF4_StaticFields*)il2cpp_codegen_static_fields_for(TaskManager_tAC818B438229045E281933056B824620D4413DF4_il2cpp_TypeInfo_var))->___singleton_4), (void*)L_3);
	}

IL_0021:
	{
		// return new TaskState(coroutine);
		RuntimeObject* L_4 = ___coroutine0;
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_5 = (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6*)il2cpp_codegen_object_new(TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		TaskState__ctor_mAF7117370BB8968EFE4ED915AE6D1383BF281A53(L_5, L_4, NULL);
		return L_5;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TaskManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskManager__ctor_m9CDB8DA3A53E655D9252D50CE59EAA9153024CAB (TaskManager_tAC818B438229045E281933056B824620D4413DF4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ProGraphGroup.Packages.Utility.TaskManager/TaskState::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskState_get_Running_mC19CDE4706FA4A5600ECA7E89A1CE7D3EF1C0B87 (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) 
{
	{
		// return running;
		bool L_0 = __this->___running_2;
		return L_0;
	}
}
// System.Boolean ProGraphGroup.Packages.Utility.TaskManager/TaskState::get_Paused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskState_get_Paused_m575AFB4D4B20649977ABE1AE8F8C0A9C93A1B041 (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) 
{
	{
		// return paused;
		bool L_0 = __this->___paused_3;
		return L_0;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState::add_Finished(ProGraphGroup.Packages.Utility.TaskManager/TaskState/FinishedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_add_Finished_m6E6EA4463B5A73D442D66B37E097ABFE16C40B6E (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* V_0 = NULL;
	FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* V_1 = NULL;
	FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* V_2 = NULL;
	{
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_0 = __this->___Finished_0;
		V_0 = L_0;
	}

IL_0007:
	{
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_1 = V_0;
		V_1 = L_1;
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_2 = V_1;
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21*)CastclassSealed((RuntimeObject*)L_4, FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21_il2cpp_TypeInfo_var));
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21** L_5 = (&__this->___Finished_0);
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_6 = V_2;
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_7 = V_1;
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_8;
		L_8 = InterlockedCompareExchangeImpl<FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21*>(L_5, L_6, L_7);
		V_0 = L_8;
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_9 = V_0;
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_10 = V_1;
		if ((!(((RuntimeObject*)(FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21*)L_9) == ((RuntimeObject*)(FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState::remove_Finished(ProGraphGroup.Packages.Utility.TaskManager/TaskState/FinishedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_remove_Finished_m45314D8B2C2E7F997EB159EFEE73CDA7F6D79B3E (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* V_0 = NULL;
	FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* V_1 = NULL;
	FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* V_2 = NULL;
	{
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_0 = __this->___Finished_0;
		V_0 = L_0;
	}

IL_0007:
	{
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_1 = V_0;
		V_1 = L_1;
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_2 = V_1;
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21*)CastclassSealed((RuntimeObject*)L_4, FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21_il2cpp_TypeInfo_var));
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21** L_5 = (&__this->___Finished_0);
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_6 = V_2;
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_7 = V_1;
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_8;
		L_8 = InterlockedCompareExchangeImpl<FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21*>(L_5, L_6, L_7);
		V_0 = L_8;
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_9 = V_0;
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_10 = V_1;
		if ((!(((RuntimeObject*)(FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21*)L_9) == ((RuntimeObject*)(FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState::.ctor(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState__ctor_mAF7117370BB8968EFE4ED915AE6D1383BF281A53 (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	{
		// public TaskState(IEnumerator c)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// coroutine = c;
		RuntimeObject* L_0 = ___c0;
		__this->___coroutine_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coroutine_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Pause_m7D6753E5C4E57E03012A29984C59E900EA1CF2FB (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) 
{
	{
		// paused = true;
		__this->___paused_3 = (bool)1;
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState::Unpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Unpause_m62AA1BF2F044962C83E75FB82E9093C06CA9B941 (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) 
{
	{
		// paused = false;
		__this->___paused_3 = (bool)0;
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Start_mBF6457BD8FA33920D475FA5B6A9F8A6BB08DE8C4 (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskManager_tAC818B438229045E281933056B824620D4413DF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// running = true;
		__this->___running_2 = (bool)1;
		// singleton.StartCoroutine(CallWrapper());
		TaskManager_tAC818B438229045E281933056B824620D4413DF4* L_0 = ((TaskManager_tAC818B438229045E281933056B824620D4413DF4_StaticFields*)il2cpp_codegen_static_fields_for(TaskManager_tAC818B438229045E281933056B824620D4413DF4_il2cpp_TypeInfo_var))->___singleton_4;
		RuntimeObject* L_1;
		L_1 = TaskState_CallWrapper_m9160C40C5A9CAF6C6DB6DB6A0EA50068EB460722(__this, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Stop_mCA3B1F1002F02E5C1568E0F5653ED6D8E91D81A7 (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) 
{
	{
		// stopped = true;
		__this->___stopped_4 = (bool)1;
		// running = false;
		__this->___running_2 = (bool)0;
		// }
		return;
	}
}
// System.Collections.IEnumerator ProGraphGroup.Packages.Utility.TaskManager/TaskState::CallWrapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskState_CallWrapper_m9160C40C5A9CAF6C6DB6DB6A0EA50068EB460722 (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9* L_0 = (U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9*)il2cpp_codegen_object_new(U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCallWrapperU3Ed__17__ctor_m74FD532B4A72429BD23BAD3DFCEF801D43B3CF09(L_0, 0, NULL);
		U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FinishedHandler_Invoke_m30B9F28AE633C9B82953344F8A286ADB6BEFDCE5_Multicast(FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* __this, bool ___manual0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* currentDelegate = reinterpret_cast<FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___manual0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FinishedHandler_Invoke_m30B9F28AE633C9B82953344F8A286ADB6BEFDCE5_Open(FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* __this, bool ___manual0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___manual0, method);
}
void FinishedHandler_Invoke_m30B9F28AE633C9B82953344F8A286ADB6BEFDCE5_OpenStaticInvoker(FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* __this, bool ___manual0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___manual0);
}
void FinishedHandler_Invoke_m30B9F28AE633C9B82953344F8A286ADB6BEFDCE5_ClosedStaticInvoker(FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* __this, bool ___manual0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___manual0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21 (FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* __this, bool ___manual0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___manual0));

}
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState/FinishedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler__ctor_m0AB64691BEF9905F786B52E83301859F9EEDE6C7 (FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FinishedHandler_Invoke_m30B9F28AE633C9B82953344F8A286ADB6BEFDCE5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FinishedHandler_Invoke_m30B9F28AE633C9B82953344F8A286ADB6BEFDCE5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FinishedHandler_Invoke_m30B9F28AE633C9B82953344F8A286ADB6BEFDCE5_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&FinishedHandler_Invoke_m30B9F28AE633C9B82953344F8A286ADB6BEFDCE5_Multicast;
}
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState/FinishedHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler_Invoke_m30B9F28AE633C9B82953344F8A286ADB6BEFDCE5 (FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* __this, bool ___manual0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___manual0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ProGraphGroup.Packages.Utility.TaskManager/TaskState/FinishedHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FinishedHandler_BeginInvoke_mD1B6A1BF1F2D065DFB49477A99677C3FB3F594DF (FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* __this, bool ___manual0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___manual0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState/FinishedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler_EndInvoke_mE75C2EA17F04637D5BE92D766B5A070F173792F5 (FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState/<CallWrapper>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallWrapperU3Ed__17__ctor_m74FD532B4A72429BD23BAD3DFCEF801D43B3CF09 (U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState/<CallWrapper>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallWrapperU3Ed__17_System_IDisposable_Dispose_m779E90D493206E03563F7446A455D36FDAE1D59A (U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ProGraphGroup.Packages.Utility.TaskManager/TaskState/<CallWrapper>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCallWrapperU3Ed__17_MoveNext_mD931E1B1EEF6AE80B9182D3C019C744DBE34220A (U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* V_1 = NULL;
	FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_006a;
			}
			case 3:
			{
				goto IL_00a2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// IEnumerator e = coroutine;
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_3 = V_1;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___coroutine_1;
		__this->___U3CeU3E5__2_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)L_4);
		goto IL_00b2;
	}

IL_0052:
	{
		// if(paused)
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->___paused_3;
		if (!L_6)
		{
			goto IL_0073;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_006a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00b2;
	}

IL_0073:
	{
		// if(e != null && e.MoveNext()) {
		RuntimeObject* L_7 = __this->___U3CeU3E5__2_3;
		if (!L_7)
		{
			goto IL_00ab;
		}
	}
	{
		RuntimeObject* L_8 = __this->___U3CeU3E5__2_3;
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			goto IL_00ab;
		}
	}
	{
		// yield return e.Current;
		RuntimeObject* L_10 = __this->___U3CeU3E5__2_3;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00a2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00b2;
	}

IL_00ab:
	{
		// running = false;
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_12 = V_1;
		NullCheck(L_12);
		L_12->___running_2 = (bool)0;
	}

IL_00b2:
	{
		// while(running) {
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = L_13->___running_2;
		if (L_14)
		{
			goto IL_0052;
		}
	}
	{
		// FinishedHandler handler = Finished;
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_15 = V_1;
		NullCheck(L_15);
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_16 = L_15->___Finished_0;
		V_2 = L_16;
		// if(handler != null)
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_17 = V_2;
		if (!L_17)
		{
			goto IL_00d0;
		}
	}
	{
		// handler(stopped);
		FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* L_18 = V_2;
		TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* L_19 = V_1;
		NullCheck(L_19);
		bool L_20 = L_19->___stopped_4;
		NullCheck(L_18);
		FinishedHandler_Invoke_m30B9F28AE633C9B82953344F8A286ADB6BEFDCE5_inline(L_18, L_20, NULL);
	}

IL_00d0:
	{
		// }
		return (bool)0;
	}
}
// System.Object ProGraphGroup.Packages.Utility.TaskManager/TaskState/<CallWrapper>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallWrapperU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAB0294C70AF8C7A83A2A4CA95AAFEE887E746FDB (U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TaskManager/TaskState/<CallWrapper>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallWrapperU3Ed__17_System_Collections_IEnumerator_Reset_mC22C4CCDBDBAAD648F03D1A3BE64923FFA09F49B (U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCallWrapperU3Ed__17_System_Collections_IEnumerator_Reset_mC22C4CCDBDBAAD648F03D1A3BE64923FFA09F49B_RuntimeMethod_var)));
	}
}
// System.Object ProGraphGroup.Packages.Utility.TaskManager/TaskState/<CallWrapper>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallWrapperU3Ed__17_System_Collections_IEnumerator_get_Current_m428A29AF0211AF37614DB100ECE20DBEC53313F9 (U3CCallWrapperU3Ed__17_t890932FD0E78C5F9890BC3369CD65424E0F012D9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetScale(UnityEngine.GameObject,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetScale_m4C19DACCE4CE8E090CA7E6EC7B7723B8E1B93ECD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.localScale = scale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___scale1;
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetScale(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetScale_m92643AAD4716E0BBBDF2E5FD00A7B3EFA583D7C3 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale1, const RuntimeMethod* method) 
{
	{
		// targetTransform.localScale = scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___scale1;
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetScale(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetScale_m9A4F5883E58021795456750DE5F943343C482ECF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, float ___scale1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.localScale = Vector3.one*scale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_3 = ___scale1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetScale(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetScale_m00A7008773F1B74F5EF99BE2723F7C940359BBD5 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, float ___scale1, const RuntimeMethod* method) 
{
	{
		// targetTransform.localScale = Vector3.one*scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_2 = ___scale1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetScale(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetScale_mACBDF3D2B4C937F952DEA1F65136F03A60EAAD1E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___refrenceObject1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.localScale = refrenceObject.transform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___refrenceObject1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_3, NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetScale(UnityEngine.Transform,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetScale_m24E5243DE63CC5E09B2621B51418E52371585532 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___refrenceObject1, const RuntimeMethod* method) 
{
	{
		// targetTransform.localScale = refrenceObject.transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___refrenceObject1;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetScale(UnityEngine.GameObject,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetScale_mC0BA495C383D62BF78D648A600CE6DDC994DEBBF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___refrenceTransform1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.localScale = refrenceTransform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___refrenceTransform1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetScale(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetScale_mBEC924A22742DCDC1196F3AE395450E1A6CB834D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___refrenceTransform1, const RuntimeMethod* method) 
{
	{
		// targetTransform.localScale = refrenceTransform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___refrenceTransform1;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalPosition(UnityEngine.GameObject,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalPosition_m4E823688665D2DA63163AA215D18C9B80D7161A3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.position = pos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___pos1;
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalPosition(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalPosition_m35A2404AF6302AC320748AEDB7A86511C0F339D7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method) 
{
	{
		// targetTransform.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___pos1;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalPosition(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalPosition_m355F3F4DB7ED7985FA479ED9A572B0FF9ABCE1A3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, float ___val1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.position = Vector3.one * val;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_3 = ___val1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalPosition(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalPosition_m4309BB4817AE6DF3077287E361CF014147C17B40 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, float ___val1, const RuntimeMethod* method) 
{
	{
		// targetTransform.position = Vector3.one * val;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_2 = ___val1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalPosition(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalPosition_m5ACF576B12C95FA9FD0DDA66A3D619A0AAED76F1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___refrenceObject1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.position = refrenceObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___refrenceObject1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalPosition(UnityEngine.Transform,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalPosition_m662BF737992F1ECC57CDBE488596651DCBCC4226 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___refrenceObject1, const RuntimeMethod* method) 
{
	{
		// targetTransform.position = refrenceObject.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___refrenceObject1;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalPosition(UnityEngine.GameObject,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalPosition_mA338E4403F6A64C64BD8D7E01407C617882EA187 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___refrenceTransform1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.position = refrenceTransform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___refrenceTransform1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalPosition(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalPosition_mE29A86725F09B548F7D2F0548E1D33D7750F26CC (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___refrenceTransform1, const RuntimeMethod* method) 
{
	{
		// targetTransform.position = refrenceTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___refrenceTransform1;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalPosition(UnityEngine.GameObject,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalPosition_m10BE9DC2C0C3484E44396B34834BD4B025FD6A4D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPos1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.localPosition = localPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___localPos1;
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalPosition(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalPosition_m5282119D00E3DAE382464E40225575B4068D63D2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPos1, const RuntimeMethod* method) 
{
	{
		// targetTransform.localPosition = localPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___localPos1;
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalPosition(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalPosition_mE5ACCE14F365FB3BA562A6ED5D43667DEE4E87C8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, float ___val1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.localPosition = Vector3.one * val;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_3 = ___val1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalPosition(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalPosition_m1658F916AC9395A81662AC4EF8E44450A9AEBD32 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, float ___val1, const RuntimeMethod* method) 
{
	{
		// targetTransform.localPosition = Vector3.one * val;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_2 = ___val1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalPosition(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalPosition_mAB6BBED9A6C2334A94DE9946F93633222B47A8B8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___refrenceObject1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.localPosition = refrenceObject.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___refrenceObject1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalPosition(UnityEngine.Transform,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalPosition_mC1E82B5C2F285EBD3A694ADBA0216BC70AA47961 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___refrenceObject1, const RuntimeMethod* method) 
{
	{
		// targetTransform.localPosition = refrenceObject.transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___refrenceObject1;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalPosition(UnityEngine.GameObject,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalPosition_mC3C1D5B9D021826D94876BBFE6D78570BFFC3E4C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___refrenceTransform1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.localPosition = refrenceTransform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___refrenceTransform1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalPosition(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalPosition_m9961EF8AA7440A21E3021ADE478E392E6F9DF499 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___refrenceTransform1, const RuntimeMethod* method) 
{
	{
		// targetTransform.localPosition = refrenceTransform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___refrenceTransform1;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalRotation(UnityEngine.GameObject,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalRotation_mE0C9C83A449414587A9466384AEAF2E738F67DCE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulerAngles1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.eulerAngles = eulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___eulerAngles1;
		NullCheck(L_1);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalRotation(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalRotation_m6181EBD3E2E44998E2C54359F426BF64243A73DD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulerAngles1, const RuntimeMethod* method) 
{
	{
		// targetTransform.eulerAngles = eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___eulerAngles1;
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalRotation(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalRotation_m8589EDA256AFA8FF4B9202CBAC66501DD301F1D7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, float ___eulerAngle1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.eulerAngles = Vector3.one * eulerAngle;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_3 = ___eulerAngle1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalRotation(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalRotation_m921B9D7E50C18A0532487CD18DEC200E85A19504 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, float ___eulerAngle1, const RuntimeMethod* method) 
{
	{
		// targetTransform.eulerAngles = Vector3.one * eulerAngle;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_2 = ___eulerAngle1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalRotation(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalRotation_m25F985147B8853C70E44A118C6A0E956C31164AC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___refrenceObject1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.eulerAngles = refrenceObject.transform.eulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___refrenceObject1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		NullCheck(L_1);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalRotation(UnityEngine.Transform,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalRotation_m71BD09A84DA3EA49BA472BF7DE474321B9C6864E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___refrenceObject1, const RuntimeMethod* method) 
{
	{
		// targetTransform.eulerAngles = refrenceObject.transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___refrenceObject1;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_2, NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalRotation(UnityEngine.GameObject,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalRotation_m554824CF87395A13C567A6A79AB2DEFDA8DFF39C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___refrenceTransform1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.eulerAngles = refrenceTransform.eulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___refrenceTransform1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_2, NULL);
		NullCheck(L_1);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetGlobalRotation(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetGlobalRotation_mECF4A72E9DEEE91DF7C2D6D821983AE0C2D74BD6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___refrenceTransform1, const RuntimeMethod* method) 
{
	{
		// targetTransform.eulerAngles = refrenceTransform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___refrenceTransform1;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_1, NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalRotation(UnityEngine.GameObject,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalRotation_m5383FAD58C54AB07872A10C4D17AEE226C3E6022 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulerAngles1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.localEulerAngles = eulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___eulerAngles1;
		NullCheck(L_1);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalRotation(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalRotation_m158B543B631541C0B15D3047339758C760E6F14C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulerAngles1, const RuntimeMethod* method) 
{
	{
		// targetTransform.localEulerAngles = eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___eulerAngles1;
		NullCheck(L_0);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalRotation(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalRotation_m52C662227537364D568029C1CE617E7BD291AB2B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, float ___eulerAngle1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.localEulerAngles = Vector3.one * eulerAngle;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_3 = ___eulerAngle1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalRotation(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalRotation_m7BB40428E11501069445841E367C4E88FA7C4895 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, float ___eulerAngle1, const RuntimeMethod* method) 
{
	{
		// targetTransform.localEulerAngles = Vector3.one * eulerAngle;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_2 = ___eulerAngle1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalRotation(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalRotation_m773D9618A42547AF78A90E72FE230335E3E5BCBF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___refrenceObject1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.localEulerAngles = refrenceObject.transform.localEulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___refrenceObject1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_3, NULL);
		NullCheck(L_1);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalRotation(UnityEngine.Transform,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalRotation_m838DA838B1E0118229E2D87846AE98F48524FA5C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___refrenceObject1, const RuntimeMethod* method) 
{
	{
		// targetTransform.localEulerAngles = refrenceObject.transform.localEulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___refrenceObject1;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_2, NULL);
		NullCheck(L_0);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalRotation(UnityEngine.GameObject,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalRotation_m8D55F4E0F2BDD7A9D3F3D7C20D9174A17CDBCE61 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___refrenceTransform1, const RuntimeMethod* method) 
{
	{
		// targetObject.transform.localEulerAngles = refrenceTransform.localEulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___refrenceTransform1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_2, NULL);
		NullCheck(L_1);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::SetLocalRotation(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities_SetLocalRotation_m7C8C71D89B4FF1509FF9EAAF84CD8C67AC1162B7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___refrenceTransform1, const RuntimeMethod* method) 
{
	{
		// targetTransform.localEulerAngles = refrenceTransform.localEulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___refrenceTransform1;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_1, NULL);
		NullCheck(L_0);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Packages.Utility.TransformUtilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtilities__ctor_mBE44EF9E158CB0A843AA13DB0E931FFCA8B7C4C3 (TransformUtilities_tA5B366DF5C82309AF1E1B74D795D11E800A4C21E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TaskState_get_Running_mC19CDE4706FA4A5600ECA7E89A1CE7D3EF1C0B87_inline (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) 
{
	{
		// return running;
		bool L_0 = __this->___running_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TaskState_get_Paused_m575AFB4D4B20649977ABE1AE8F8C0A9C93A1B041_inline (TaskState_t8FBB2B37694B9DB906B3329C10FF33CCFD483DD6* __this, const RuntimeMethod* method) 
{
	{
		// return paused;
		bool L_0 = __this->___paused_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishedHandler_Invoke_mE3617B347F501FE1D9AF85A1D0C8E8884BBD351D_inline (FinishedHandler_t09B6DDF53C15175F620523693EA542C5F0B16AF1* __this, bool ___manual0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___manual0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishedHandler_Invoke_m30B9F28AE633C9B82953344F8A286ADB6BEFDCE5_inline (FinishedHandler_tAA4D79B942BB3B23714C5CB061EC8A1004933B21* __this, bool ___manual0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___manual0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
