#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController,System.Boolean>
struct Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEqualityComparer`1<System.Boolean>
struct IEqualityComparer_1_t446D6AA97B44CB67BBAD9B016F7E4A238DF7763F;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController>
struct List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395;
// System.Collections.Generic.List`1<Nakama.IApiWriteStorageObject>
struct List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController>
struct Predicate_1_tB769B77841D1087B877A489A353D18A6DC079A54;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<Nakama.IApiStorageObjectAcks>
struct TaskFactory_1_tA4F21F2656DE99E0E34BBA46A5CF183F0ACCAF5F;
// System.Threading.Tasks.TaskFactory`1<Nakama.ISession>
struct TaskFactory_1_t4BCBBE3AD8F69349863A5142F390C9BB0B0C7558;
// System.Threading.Tasks.Task`1<Nakama.IApiStorageObjectAcks>
struct Task_1_tBF9434A1D4E18A49F8645C272592082164BE22BB;
// System.Threading.Tasks.Task`1<Nakama.ISession>
struct Task_1_t82065A00B0AC8C1AE4BC789A97E01B28EC502304;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// BrunoMikoski.AnimationSequencer.AnimationStepBase[]
struct AnimationStepBaseU5BU5D_t8025F50672EBDBCC4AA898D6E6833E3244D1B8CC;
// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController[]
struct BasePanelControllerU5BU5D_t491A3F58D9CA1855885AA77CE2CFA65BF9AB9F5F;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Nakama.IApiWriteStorageObject[]
struct IApiWriteStorageObjectU5BU5D_t29EBC64E432E5B13CE1698CC1C5156B3D76B5F12;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// BrunoMikoski.AnimationSequencer.AnimationSequencerController
struct AnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1;
// Nakama.ApiClient
struct ApiClient_t5CDEC12E4C586307449D7D25280966C469BBBE95;
// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController
struct BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// Nakama.Client
struct Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Nakama.IApiStorageObjectAcks
struct IApiStorageObjectAcks_t901EC2FB23C63339E059BD26D34396FF0B4558AD;
// Nakama.IApiWriteStorageObject
struct IApiWriteStorageObject_t34D8889BE52136B217A0E145DA01151BB63C8D24;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Nakama.ILogger
struct ILogger_tBBA17A49CF37F6EC51EDDFCB68D81F367A130B60;
// Nakama.ISession
struct ISession_t3382AA3E55A593004A7BD330D09D2F9415ADF7B0;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// Nakama.Jitter
struct Jitter_t7AA6C892822E2F70DE4A2ECD71B2EDEEBF9705C0;
// ProGraphGroup.Projects.TruckWorld.PanelController.LearnController
struct LearnController_t76181060E239065F3E53AC47DDE99A8013AD897B;
// ProGraphGroup.General.Controllers.MainMenuController
struct MainMenuController_t7015EC65DE6B00748D9F3442D81F2D54E576BFE3;
// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController
struct MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF;
// ProGraphGroup.Projects.TruckWorld.PanelController.MapController
struct MapController_t92A7B8D8EE21890A98056D2A928F67FB5ED45871;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// ProGraphGroup.Games.Hero.NewBehaviourScript
struct NewBehaviourScript_tD94EB34149403675309E9BF8D0673AC19E452BCB;
// ProGraphGroup.Projects.TruckWorld.PanelController.NewsController
struct NewsController_tB81D362D4AF70C185EB35248750CE1D2F62CE4B3;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ProGraphGroup.Projects.TruckWorld.PanelController.PlaceController
struct PlaceController_tB7025B8CF50015CE998A38803D8BDA769C1F1241;
// ProGraphGroup.Projects.TruckWorld.PanelController.ProfileController
struct ProfileController_tB811648A15255F6C2E58B66F9715521FDBB1638F;
// Nakama.RetryConfiguration
struct RetryConfiguration_tCE062917A7A5F7680EA943F16461A2CD3A87E2CF;
// Nakama.RetryInvoker
struct RetryInvoker_t1B9F8D9CC972A221CC37FB12BF305D9BB1FD4B6A;
// Nakama.RetryListener
struct RetryListener_tC027C0AF604471A4D3FA8DC48E2A57BB823D91CC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// ProGraphGroup.Projects.TruckWorld.PanelController.ShopController
struct ShopController_tC298296E012AFAE7F17F61381BBB051809E8B658;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Nakama.WriteStorageObject
struct WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0;
// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<>c
struct U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86;
// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t7A1D0D702E51DDF33180AE83CDB4973B503B387D;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISession_t3382AA3E55A593004A7BD330D09D2F9415ADF7B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tB769B77841D1087B877A489A353D18A6DC079A54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t7A1D0D702E51DDF33180AE83CDB4973B503B387D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14CCE260371188F4456BF7A8605E420E81EC2EF5;
IL2CPP_EXTERN_C String_t* _stringLiteral2D2E263A945BC08E972CDF91FA5E3FCF1BB8F881;
IL2CPP_EXTERN_C String_t* _stringLiteral37CBD59912B4F7D36A9D27D25B8D9B8D5AE08A28;
IL2CPP_EXTERN_C String_t* _stringLiteral3F4160C4033E5D72FD6FA98A97EFE2B84E12817A;
IL2CPP_EXTERN_C String_t* _stringLiteral4EB38AF1EDE66F108D7E0BCA0C313F6DEB7B17D9;
IL2CPP_EXTERN_C String_t* _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral704C806DFBFD6775B42B652BD17084BD4A120D33;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteral88149003BF937253D4067BB8F1FE4301B82D976A;
IL2CPP_EXTERN_C String_t* _stringLiteral88A68D437FF46A1910B0D96745A659684513804B;
IL2CPP_EXTERN_C String_t* _stringLiteral8AA9F08FECBBE2764052FC53BED5D5979442EBAE;
IL2CPP_EXTERN_C String_t* _stringLiteral992590D1F8F43629C98BA7433D8D0197CBA4850F;
IL2CPP_EXTERN_C String_t* _stringLiteral9A8FCE63F94A2933E547955960C4C482899FD416;
IL2CPP_EXTERN_C String_t* _stringLiteralB6C7257B1F9AA5918E1B6EB477D23DC7634170F7;
IL2CPP_EXTERN_C String_t* _stringLiteralBEF1F71BD3C21C53860EC6863B3105336E4D873B;
IL2CPP_EXTERN_C String_t* _stringLiteralCA5EF003C43724A30EBD3751479853EC15EA99A5;
IL2CPP_EXTERN_C String_t* _stringLiteralF02D738EE1C7F47C807EEE61B40B3C461CE6F483;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m7993DC7CC4B014D7C5A4125E47D788FA76ADAB8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m68DFADF6C15DC8582611F1D98B2DFCC2A706E048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m7553343A485EE42FF80EAE2D56FD800341CFAAF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mF60102E049A410BBFD22A882AC63C68FFB6C2650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0E24B1A79AF68425D5008B9D63878B086E773822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_mDB4EE4271C92627C7D307D3863C501ACC93E66C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_m02BABCC06F3A6BEF17B21922C5D1A6D1FF0365AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_m531555DF542683F1083BEEDA0F26C90FCBE9CAB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0C035985C0A36057B75C4C9E1717330845BD576A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_m4C4B1AA86D7C7210D0317CD405329E1A939FE0D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mCB36A7F05AFA556B117C8107E38FAC03F008B882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1_mFAF0DCC384388E95D23989AAF2C5CF33926683D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4_m6956882398B2B98DC6B10C0377AD666FF029B76B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_mB4B8B079780D23E56A9AA0763F4FAE7A29A38F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_Start_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_mBEDC31229CCEE1592A4EE75293315FA38E923B49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumeratorAsyncExtensions_GetAwaiter_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m3F4064D3BDAE5B63747E91BA3BFBD5EED4ACCB52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1_m91EEECDB476A25A6B275D95713DA72D5D6D77F1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA4166664A7EC154AD39CE44E9D66617A58D5996F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m3D8A6D150A0E62447106B8ED05D1C9EE06222B9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m04128AADDD72DD0C0F588910E0747A8384E44366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4A01BBDE359339C3C707A5715E6362B3DAEF8B18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA713B9D1C8C42D371CDE684006C2F931A4CAB980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m6F05F9733AB36E0CBA38705B3F518D918B7E070C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m9053FDFB04130DC5C75CC43033CB7CBEB6053A67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m34AB285D4A74A8CA98DF0DCC6FD9A9BB3C7AE4D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m751A3441654D412D24A6AB5A740994811EFA098B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m4C3E6E9BB2E2A81C4409A62139A82A2CC4906821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m5BC36E12C94D18440EE727E11CA9405F56E2638D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CHideU3Eb__9_0_mF0CFD09EFDC5FACE2B50D00D92B36F28337DF4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CShowU3Eb__8_0_m8A35960151B4FE4D8AC3220C1B9549FFA963934A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CGetPanelControllerByStateU3Eb__0_m99F5812617EE97BE60AC06D65D568EC2891D5993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_WaitUntilValueChanged_TisBasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9469390F7CE6728CB779FD0A623E7FF9F3DA06CA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IApiWriteStorageObjectU5BU5D_t29EBC64E432E5B13CE1698CC1C5156B3D76B5F12;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t84C15CDD8C32F593B938DAC54B9F3DE2B151F788 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController>
struct List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BasePanelControllerU5BU5D_t491A3F58D9CA1855885AA77CE2CFA65BF9AB9F5F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BasePanelControllerU5BU5D_t491A3F58D9CA1855885AA77CE2CFA65BF9AB9F5F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Nakama.IApiWriteStorageObject>
struct List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IApiWriteStorageObjectU5BU5D_t29EBC64E432E5B13CE1698CC1C5156B3D76B5F12* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IApiWriteStorageObjectU5BU5D_t29EBC64E432E5B13CE1698CC1C5156B3D76B5F12* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5  : public RuntimeObject
{
};

struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AwaiterActions::InvokeContinuationDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___InvokeContinuationDelegate_0;
};

// Nakama.RetryConfiguration
struct RetryConfiguration_tCE062917A7A5F7680EA943F16461A2CD3A87E2CF  : public RuntimeObject
{
	// System.Int32 Nakama.RetryConfiguration::<BaseDelayMs>k__BackingField
	int32_t ___U3CBaseDelayMsU3Ek__BackingField_0;
	// Nakama.Jitter Nakama.RetryConfiguration::<Jitter>k__BackingField
	Jitter_t7AA6C892822E2F70DE4A2ECD71B2EDEEBF9705C0* ___U3CJitterU3Ek__BackingField_1;
	// System.Int32 Nakama.RetryConfiguration::<MaxAttempts>k__BackingField
	int32_t ___U3CMaxAttemptsU3Ek__BackingField_2;
	// Nakama.RetryListener Nakama.RetryConfiguration::<RetryListener>k__BackingField
	RetryListener_tC027C0AF604471A4D3FA8DC48E2A57BB823D91CC* ___U3CRetryListenerU3Ek__BackingField_3;
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

// Nakama.WriteStorageObject
struct WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0  : public RuntimeObject
{
	// System.String Nakama.WriteStorageObject::<Collection>k__BackingField
	String_t* ___U3CCollectionU3Ek__BackingField_0;
	// System.String Nakama.WriteStorageObject::<Key>k__BackingField
	String_t* ___U3CKeyU3Ek__BackingField_1;
	// System.Int32 Nakama.WriteStorageObject::<PermissionRead>k__BackingField
	int32_t ___U3CPermissionReadU3Ek__BackingField_2;
	// System.Int32 Nakama.WriteStorageObject::<PermissionWrite>k__BackingField
	int32_t ___U3CPermissionWriteU3Ek__BackingField_3;
	// System.String Nakama.WriteStorageObject::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_4;
	// System.String Nakama.WriteStorageObject::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_5;
};

// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<>c
struct U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86  : public RuntimeObject
{
};

struct U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_StaticFields
{
	// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<>c ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<>c::<>9
	U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86* ___U3CU3E9_0;
	// System.Func`2<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController,System.Boolean> ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<>c::<>9__8_0
	Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* ___U3CU3E9__8_0_1;
	// System.Func`2<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController,System.Boolean> ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<>c::<>9__9_0
	Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* ___U3CU3E9__9_0_2;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Nakama.IApiStorageObjectAcks>
struct TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tBF9434A1D4E18A49F8645C272592082164BE22BB* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Nakama.ISession>
struct TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t82065A00B0AC8C1AE4BC789A97E01B28EC502304* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	bool ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::ex
	Exception_t* ___ex_1;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task_0;
};

// Nakama.Client
struct Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074  : public RuntimeObject
{
	// System.Boolean Nakama.Client::<AutoRefreshSession>k__BackingField
	bool ___U3CAutoRefreshSessionU3Ek__BackingField_4;
	// Nakama.RetryConfiguration Nakama.Client::<GlobalRetryConfiguration>k__BackingField
	RetryConfiguration_tCE062917A7A5F7680EA943F16461A2CD3A87E2CF* ___U3CGlobalRetryConfigurationU3Ek__BackingField_5;
	// System.String Nakama.Client::<Host>k__BackingField
	String_t* ___U3CHostU3Ek__BackingField_6;
	// System.Int32 Nakama.Client::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_7;
	// System.String Nakama.Client::<Scheme>k__BackingField
	String_t* ___U3CSchemeU3Ek__BackingField_8;
	// System.String Nakama.Client::<ServerKey>k__BackingField
	String_t* ___U3CServerKeyU3Ek__BackingField_9;
	// Nakama.ApiClient Nakama.Client::_apiClient
	ApiClient_t5CDEC12E4C586307449D7D25280966C469BBBE95* ____apiClient_10;
	// Nakama.ILogger Nakama.Client::_logger
	RuntimeObject* ____logger_11;
	// Nakama.RetryInvoker Nakama.Client::_retryInvoker
	RetryInvoker_t1B9F8D9CC972A221CC37FB12BF305D9BB1FD4B6A* ____retryInvoker_12;
};

struct Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074_StaticFields
{
	// System.TimeSpan Nakama.Client::DefaultExpiredTimeSpan
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___DefaultExpiredTimeSpan_3;
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

// DG.Tweening.LoopType
struct LoopType_t3128AD2C907BAF825D244B38F274987C1AA08FE5 
{
	// System.Int32 DG.Tweening.LoopType::value__
	int32_t ___value___2;
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

// Cysharp.Threading.Tasks.PlayerLoopTiming
struct PlayerLoopTiming_tA0561E77DCF3749CC535F4F45642F515BDF040C2 
{
	// System.Int32 Cysharp.Threading.Tasks.PlayerLoopTiming::value__
	int32_t ___value___2;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// Cysharp.Threading.Tasks.UniTaskStatus
struct UniTaskStatus_tC898C29839EBB5DB7055C3DF299A2C276237CB70 
{
	// System.Int32 Cysharp.Threading.Tasks.UniTaskStatus::value__
	int32_t ___value___2;
};

// DG.Tweening.UpdateType
struct UpdateType_tA521F450D94A1E8A88C6967093E093777BBA4C57 
{
	// System.Int32 DG.Tweening.UpdateType::value__
	int32_t ___value___2;
};

// BrunoMikoski.AnimationSequencer.AnimationSequencerController/PlayType
struct PlayType_t064AFB1912D2EFC981594545E02AA34FB33B1031 
{
	// System.Int32 BrunoMikoski.AnimationSequencer.AnimationSequencerController/PlayType::value__
	int32_t ___value___2;
};

// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitAfterHide>d__11
struct U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1 
{
	// System.Int32 ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitAfterHide>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitAfterHide>d__11::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitAfterHide>d__11::<>4__this
	BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* ___U3CU3E4__this_2;
};

// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitBeforeShow>d__10
struct U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4 
{
	// System.Int32 ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitBeforeShow>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitBeforeShow>d__10::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitBeforeShow>d__10::<>4__this
	BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* ___U3CU3E4__this_2;
};

// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/MainMenuState
struct MainMenuState_tF3E95B36D15C4D197DEF957257DDCC44BAD013A4 
{
	// System.Int32 ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/MainMenuState::value__
	int32_t ___value___2;
};

// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};

// System.Threading.Tasks.Task`1<Nakama.IApiStorageObjectAcks>
struct Task_1_tBF9434A1D4E18A49F8645C272592082164BE22BB  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

struct Task_1_tBF9434A1D4E18A49F8645C272592082164BE22BB_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA4F21F2656DE99E0E34BBA46A5CF183F0ACCAF5F* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Nakama.ISession>
struct Task_1_t82065A00B0AC8C1AE4BC789A97E01B28EC502304  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

struct Task_1_t82065A00B0AC8C1AE4BC789A97E01B28EC502304_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t4BCBBE3AD8F69349863A5142F390C9BB0B0C7558* ___s_defaultFactory_39;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9
struct U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6 
{
	// System.Int32 ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9::<>4__this
	BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9::<>u__1
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9::<>u__2
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_4;
};

// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8
struct U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1 
{
	// System.Int32 ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8::<>4__this
	BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* ___U3CU3E4__this_2;
	// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8::mainMenuPanelController
	MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* ___mainMenuPanelController_3;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8::<>u__1
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_4;
	// Cysharp.Threading.Tasks.UniTask/Awaiter ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8::<>u__2
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_5;
};

// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t7A1D0D702E51DDF33180AE83CDB4973B503B387D  : public RuntimeObject
{
	// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/MainMenuState ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<>c__DisplayClass8_0::state
	int32_t ___state_0;
};

// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7
struct U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6 
{
	// System.Int32 ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7::<>4__this
	MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* ___U3CU3E4__this_2;
	// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/MainMenuState ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7::newState
	int32_t ___newState_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_4;
};

// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9
struct U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B 
{
	// System.Int32 ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9::<>4__this
	MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* ___U3CU3E4__this_2;
	// System.Boolean ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9::state
	bool ___state_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_4;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`2<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController,System.Boolean>
struct Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951  : public MulticastDelegate_t
{
};

// System.Predicate`1<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController>
struct Predicate_1_tB769B77841D1087B877A489A353D18A6DC079A54  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0
struct U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1 
{
	// System.Int32 ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Nakama.Client ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0::<client>5__2
	Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074* ___U3CclientU3E5__2_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Nakama.ISession> ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0::<>u__1
	TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00 ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Nakama.IApiStorageObjectAcks> ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0::<>u__2
	TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E ___U3CU3Eu__2_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BrunoMikoski.AnimationSequencer.AnimationSequencerController
struct AnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String BrunoMikoski.AnimationSequencer.AnimationSequencerController::tagKey
	String_t* ___tagKey_4;
	// BrunoMikoski.AnimationSequencer.AnimationStepBase[] BrunoMikoski.AnimationSequencer.AnimationSequencerController::animationSteps
	AnimationStepBaseU5BU5D_t8025F50672EBDBCC4AA898D6E6833E3244D1B8CC* ___animationSteps_5;
	// DG.Tweening.UpdateType BrunoMikoski.AnimationSequencer.AnimationSequencerController::updateType
	int32_t ___updateType_6;
	// System.Boolean BrunoMikoski.AnimationSequencer.AnimationSequencerController::timeScaleIndependent
	bool ___timeScaleIndependent_7;
	// System.Boolean BrunoMikoski.AnimationSequencer.AnimationSequencerController::autoKill
	bool ___autoKill_8;
	// System.Boolean BrunoMikoski.AnimationSequencer.AnimationSequencerController::playOnAwake
	bool ___playOnAwake_9;
	// System.Boolean BrunoMikoski.AnimationSequencer.AnimationSequencerController::pauseOnAwake
	bool ___pauseOnAwake_10;
	// BrunoMikoski.AnimationSequencer.AnimationSequencerController/PlayType BrunoMikoski.AnimationSequencer.AnimationSequencerController::playType
	int32_t ___playType_11;
	// System.Int32 BrunoMikoski.AnimationSequencer.AnimationSequencerController::loops
	int32_t ___loops_12;
	// DG.Tweening.LoopType BrunoMikoski.AnimationSequencer.AnimationSequencerController::loopType
	int32_t ___loopType_13;
	// DG.Tweening.Sequence BrunoMikoski.AnimationSequencer.AnimationSequencerController::playingSequence
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___playingSequence_14;
	// UnityEngine.Events.UnityEvent BrunoMikoski.AnimationSequencer.AnimationSequencerController::onStartEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStartEvent_15;
	// UnityEngine.Events.UnityEvent BrunoMikoski.AnimationSequencer.AnimationSequencerController::onFinishedEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onFinishedEvent_16;
	// UnityEngine.Events.UnityEvent BrunoMikoski.AnimationSequencer.AnimationSequencerController::onProgressEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onProgressEvent_17;
	// System.Single BrunoMikoski.AnimationSequencer.AnimationSequencerController::sequenceDelay
	float ___sequenceDelay_18;
	// System.Single BrunoMikoski.AnimationSequencer.AnimationSequencerController::sequenceLoopsDelay
	float ___sequenceLoopsDelay_19;
	// UnityEngine.Events.UnityEvent BrunoMikoski.AnimationSequencer.AnimationSequencerController::onPauseEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onPauseEvent_20;
	// UnityEngine.Events.UnityEvent BrunoMikoski.AnimationSequencer.AnimationSequencerController::onResumeEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onResumeEvent_21;
	// UnityEngine.Events.UnityEvent BrunoMikoski.AnimationSequencer.AnimationSequencerController::onSequenceLoopCycleStartEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onSequenceLoopCycleStartEvent_22;
	// UnityEngine.Events.UnityEvent BrunoMikoski.AnimationSequencer.AnimationSequencerController::onSequenceLoopCycleFinishedEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onSequenceLoopCycleFinishedEvent_23;
};

// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController
struct BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::root
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root_4;
	// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/MainMenuState ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::myState
	int32_t ___myState_5;
	// System.Boolean ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::isShowing
	bool ___isShowing_6;
	// System.Boolean ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::isHiding
	bool ___isHiding_7;
	// UnityEngine.GameObject ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::searchHeader
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___searchHeader_8;
	// UnityEngine.GameObject ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::itemsHeader
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___itemsHeader_9;
	// UnityEngine.GameObject ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::content
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___content_10;
	// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::mainMenuPanelController
	MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* ___mainMenuPanelController_11;
};

// ProGraphGroup.General.Controllers.MainMenuController
struct MainMenuController_t7015EC65DE6B00748D9F3442D81F2D54E576BFE3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ProGraphGroup.General.Controllers.MainMenuController::root
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root_4;
};

// ProGraphGroup.Games.Hero.NewBehaviourScript
struct NewBehaviourScript_tD94EB34149403675309E9BF8D0673AC19E452BCB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ProGraphGroup.Projects.TruckWorld.PanelController.LearnController
struct LearnController_t76181060E239065F3E53AC47DDE99A8013AD897B  : public BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086
{
};

// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController
struct MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF  : public MainMenuController_t7015EC65DE6B00748D9F3442D81F2D54E576BFE3
{
	// System.Collections.Generic.List`1<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController> ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::panelControllers
	List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395* ___panelControllers_5;
	// UnityEngine.GameObject ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::footer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___footer_6;
	// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/MainMenuState ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::defaultMenuState
	int32_t ___defaultMenuState_7;
	// ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/MainMenuState ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::currentMenuState
	int32_t ___currentMenuState_8;
	// System.Boolean ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::isChangingState
	bool ___isChangingState_9;
	// System.Boolean ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::isChangingProfilePanelState
	bool ___isChangingProfilePanelState_10;
};

// ProGraphGroup.Projects.TruckWorld.PanelController.MapController
struct MapController_t92A7B8D8EE21890A98056D2A928F67FB5ED45871  : public BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086
{
};

// ProGraphGroup.Projects.TruckWorld.PanelController.NewsController
struct NewsController_tB81D362D4AF70C185EB35248750CE1D2F62CE4B3  : public BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086
{
};

// ProGraphGroup.Projects.TruckWorld.PanelController.PlaceController
struct PlaceController_tB7025B8CF50015CE998A38803D8BDA769C1F1241  : public BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086
{
};

// ProGraphGroup.Projects.TruckWorld.PanelController.ProfileController
struct ProfileController_tB811648A15255F6C2E58B66F9715521FDBB1638F  : public BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086
{
};

// ProGraphGroup.Projects.TruckWorld.PanelController.ShopController
struct ShopController_tC298296E012AFAE7F17F61381BBB051809E8B658  : public BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Nakama.IApiWriteStorageObject[]
struct IApiWriteStorageObjectU5BU5D_t29EBC64E432E5B13CE1698CC1C5156B3D76B5F12  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_mBEDC31229CCEE1592A4EE75293315FA38E923B49_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mCB36A7F05AFA556B117C8107E38FAC03F008B882_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitBeforeShow>d__10>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4_m6956882398B2B98DC6B10C0377AD666FF029B76B_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitAfterHide>d__11>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1_mFAF0DCC384388E95D23989AAF2C5CF33926683D2_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<U> Cysharp.Threading.Tasks.UniTask::WaitUntilValueChanged<System.Object,System.Boolean>(T,System.Func`2<T,U>,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Collections.Generic.IEqualityComparer`1<U>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 UniTask_WaitUntilValueChanged_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m39C7FF584E478FF494B00662FCF2D9D58C4EA507_gshared (RuntimeObject* ___target0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___monitorFunction1, int32_t ___monitorTiming2, RuntimeObject* ___equalityComparer3, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken4, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0E24B1A79AF68425D5008B9D63878B086E773822_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* ___awaiter0, U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* ___stateMachine1, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0C035985C0A36057B75C4C9E1717330845BD576A_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* ___stateMachine1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisRuntimeObject_m6E84075CB490BF6A8482C654CFEE9B330FBD15CB_gshared (RuntimeObject* ___enumerator0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mF60102E049A410BBFD22A882AC63C68FFB6C2650_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* ___awaiter0, U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_m02BABCC06F3A6BEF17B21922C5D1A6D1FF0365AE_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_m4C4B1AA86D7C7210D0317CD405329E1A939FE0D8_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_mB4B8B079780D23E56A9AA0763F4FAE7A29A38F64_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_mDB4EE4271C92627C7D307D3863C501ACC93E66C9_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_m531555DF542683F1083BEEDA0F26C90FCBE9CAB8_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m7553343A485EE42FF80EAE2D56FD800341CFAAF0_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m532F97DCE2F2C6C7A6DD5E8FCC0BA9655CC98C6A_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_mBEDC31229CCEE1592A4EE75293315FA38E923B49_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_mBEDC31229CCEE1592A4EE75293315FA38E923B49_gshared_inline)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mCB36A7F05AFA556B117C8107E38FAC03F008B882_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mCB36A7F05AFA556B117C8107E38FAC03F008B882_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitBeforeShow>d__10>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4_m6956882398B2B98DC6B10C0377AD666FF029B76B_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4_m6956882398B2B98DC6B10C0377AD666FF029B76B_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitAfterHide>d__11>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1_mFAF0DCC384388E95D23989AAF2C5CF33926683D2_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1_mFAF0DCC384388E95D23989AAF2C5CF33926683D2_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF629E1EACBD5BF090CB55E4205263D59980EA243 (U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF15C3FCAD8D4D0609E4BECE695535C88F74CBB66 (Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// Cysharp.Threading.Tasks.UniTask`1<U> Cysharp.Threading.Tasks.UniTask::WaitUntilValueChanged<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController,System.Boolean>(T,System.Func`2<T,U>,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Collections.Generic.IEqualityComparer`1<U>,System.Threading.CancellationToken)
inline UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 UniTask_WaitUntilValueChanged_TisBasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9469390F7CE6728CB779FD0A623E7FF9F3DA06CA (BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* ___target0, Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* ___monitorFunction1, int32_t ___monitorTiming2, RuntimeObject* ___equalityComparer3, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken4, const RuntimeMethod* method)
{
	return ((  UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 (*) (BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086*, Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951*, int32_t, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))UniTask_WaitUntilValueChanged_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m39C7FF584E478FF494B00662FCF2D9D58C4EA507_gshared)(___target0, ___monitorFunction1, ___monitorTiming2, ___equalityComparer3, ___cancellationToken4, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
inline Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0E24B1A79AF68425D5008B9D63878B086E773822_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* ___awaiter0, U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0E24B1A79AF68425D5008B9D63878B086E773822_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
inline bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline)(__this, method);
}
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.UniTask::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask/Awaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0C035985C0A36057B75C4C9E1717330845BD576A_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0C035985C0A36057B75C4C9E1717330845BD576A_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<BrunoMikoski.AnimationSequencer.AnimationSequencerController>()
inline AnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1* GameObject_GetComponent_TisAnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1_m91EEECDB476A25A6B275D95713DA72D5D6D77F1B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// BrunoMikoski.AnimationSequencer.AnimationSequencerController BrunoMikoski.AnimationSequencer.AnimationSequencerController::GetControllerByTagKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1* AnimationSequencerController_GetControllerByTagKey_mD5431A4D0FE51BA1C7BC4806A8D9D07F23C6A4D5 (AnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1* __this, String_t* ___tagKey0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BrunoMikoski.AnimationSequencer.AnimationSequencerController::PlayEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimationSequencerController_PlayEnumerator_m81FE35B750C995E6AC5D4DA55B13430E3D4D3F4D (AnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.EnumeratorAsyncExtensions::GetAwaiter<System.Collections.IEnumerator>(T)
inline Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 EnumeratorAsyncExtensions_GetAwaiter_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m3F4064D3BDAE5B63747E91BA3BFBD5EED4ACCB52 (RuntimeObject* ___enumerator0, const RuntimeMethod* method)
{
	return ((  Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 (*) (RuntimeObject*, const RuntimeMethod*))EnumeratorAsyncExtensions_GetAwaiter_TisRuntimeObject_m6E84075CB490BF6A8482C654CFEE9B330FBD15CB_gshared)(___enumerator0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ed__8_MoveNext_mC606D2D52723D1629AB746F6C0FCDC81E3FFD5BD (U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ed__8_SetStateMachine_m2C24E0C7866AF0699AB82AD3712BD2DE4CC28410 (U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mF60102E049A410BBFD22A882AC63C68FFB6C2650_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* ___awaiter0, U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mF60102E049A410BBFD22A882AC63C68FFB6C2650_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_m02BABCC06F3A6BEF17B21922C5D1A6D1FF0365AE_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_m02BABCC06F3A6BEF17B21922C5D1A6D1FF0365AE_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideU3Ed__9_MoveNext_mBB7C739827AB95059B871897708329A18BAD2539 (U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideU3Ed__9_SetStateMachine_m23B2B8367C5299B39222D0057558840D64E2B624 (U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitBeforeShow>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitBeforeShowU3Ed__10_MoveNext_m88CD20B9647C243E7455A7308E2EFB4E0952DF4D (U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitBeforeShow>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitBeforeShowU3Ed__10_SetStateMachine_m61AA251573405213558382A0C45E7A543F1F6510 (U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitAfterHide>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitAfterHideU3Ed__11_MoveNext_mC90B2535ACDAA279B80CB8A2313034B7FD8E032F (U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitAfterHide>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitAfterHideU3Ed__11_SetStateMachine_m14FCF3F50EF365BF0612AEFBEF8AFA9D8870B6D7 (U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePanelController__ctor_mAAD8ADF7969360489BF7F22B623924D9AC88D3A6 (BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::ChangeState(ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/MainMenuState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 MainMenuPanelController_ChangeState_m95E63F14CC83BBD37B49D95A5EA0B0EAEBB47D97 (MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* __this, int32_t ___newState0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskExtensions::Forget(Cysharp.Threading.Tasks.UniTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_Forget_m37F7D43D931AC3DDA84E80AE88513FE184E1B5A2 (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_m4C4B1AA86D7C7210D0317CD405329E1A939FE0D8_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_m4C4B1AA86D7C7210D0317CD405329E1A939FE0D8_gshared_inline)(__this, ___stateMachine0, method);
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mC6BF1583B67929BFFC9AAE0428D040ADC050FE1A (U3CU3Ec__DisplayClass8_0_t7A1D0D702E51DDF33180AE83CDB4973B503B387D* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m70E978A6CC2D3C0D908E900406F0781455C071A0 (Predicate_1_tB769B77841D1087B877A489A353D18A6DC079A54* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tB769B77841D1087B877A489A353D18A6DC079A54*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController>::Find(System.Predicate`1<T>)
inline BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* List_1_Find_m3D8A6D150A0E62447106B8ED05D1C9EE06222B9A (List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395* __this, Predicate_1_tB769B77841D1087B877A489A353D18A6DC079A54* ___match0, const RuntimeMethod* method)
{
	return ((  BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* (*) (List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395*, Predicate_1_tB769B77841D1087B877A489A353D18A6DC079A54*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_mB4B8B079780D23E56A9AA0763F4FAE7A29A38F64_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_mB4B8B079780D23E56A9AA0763F4FAE7A29A38F64_gshared_inline)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTask ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::ShowHideProfilePanel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 MainMenuPanelController_ShowHideProfilePanel_m7039BF323A480E6DAE969D5CA38D7FC6DF3E4AF5 (MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* __this, bool ___state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController>::.ctor()
inline void List_1__ctor_m4A01BBDE359339C3C707A5715E6362B3DAEF8B18 (List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void ProGraphGroup.General.Controllers.MainMenuController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuController__ctor_m972C7653558F746AF8B5289C15AFB5FEC0FE3B63 (MainMenuController_t7015EC65DE6B00748D9F3442D81F2D54E576BFE3* __this, const RuntimeMethod* method) ;
// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::GetPanelControllerByState(ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/MainMenuState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* MainMenuPanelController_GetPanelControllerByState_m9F0E4C9D8C29932123D8706C4293BC9CBF232B3A (MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* __this, int32_t ___state0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 BasePanelController_Hide_m5C5B8EF588AB22574BECFE0F7535A542186D1ED0 (BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_mDB4EE4271C92627C7D307D3863C501ACC93E66C9_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_mDB4EE4271C92627C7D307D3863C501ACC93E66C9_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// Cysharp.Threading.Tasks.UniTask ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::Show(ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 BasePanelController_Show_mBA4F42D7F2802D6CBCD4E5E036A116734910BEFE (BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* __this, MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* ___mainMenuPanelController0, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeStateU3Ed__7_MoveNext_m7658A7E28BF4E984DF8851C07585148E9ECC463C (U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeStateU3Ed__7_SetStateMachine_mECF5D78B88A6F2EFA3E5A33F290CB8F1BAE2ECB7 (U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_m531555DF542683F1083BEEDA0F26C90FCBE9CAB8_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_m531555DF542683F1083BEEDA0F26C90FCBE9CAB8_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowHideProfilePanelU3Ed__9_MoveNext_m7595BDB4C9E4141BD9170A4AF1636AAC319C32E4 (U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowHideProfilePanelU3Ed__9_SetStateMachine_m8822FC171B090BCAB5F8544BCFDC087B0AE485C7 (U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m7553343A485EE42FF80EAE2D56FD800341CFAAF0 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m7553343A485EE42FF80EAE2D56FD800341CFAAF0_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Nakama.Client::.ctor(System.String,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mE101877256C63598D6BB08589B282C558EA2EDC8 (Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074* __this, String_t* ___scheme0, String_t* ___host1, int32_t ___port2, String_t* ___serverKey3, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_mCA336E71D49E8B830EAFBC13E46FA22A628D0E17 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Nakama.ISession> Nakama.Client::AuthenticateDeviceAsync(System.String,System.String,System.Boolean,System.Collections.Generic.Dictionary`2<System.String,System.String>,Nakama.RetryConfiguration,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t82065A00B0AC8C1AE4BC789A97E01B28EC502304* Client_AuthenticateDeviceAsync_mF82FA593AE11EAC11A8C4310C8041440790248E3 (Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074* __this, String_t* ___id0, String_t* ___username1, bool ___create2, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___vars3, RetryConfiguration_tCE062917A7A5F7680EA943F16461A2CD3A87E2CF* ___retryConfiguration4, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___canceller5, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Nakama.ISession>::GetAwaiter()
inline TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00 Task_1_GetAwaiter_m4C3E6E9BB2E2A81C4409A62139A82A2CC4906821 (Task_1_t82065A00B0AC8C1AE4BC789A97E01B28EC502304* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00 (*) (Task_1_t82065A00B0AC8C1AE4BC789A97E01B28EC502304*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Nakama.ISession>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m34AB285D4A74A8CA98DF0DCC6FD9A9BB3C7AE4D3 (TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Nakama.ISession>,ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m68DFADF6C15DC8582611F1D98B2DFCC2A706E048 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00* ___awaiter0, U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00*, U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m532F97DCE2F2C6C7A6DD5E8FCC0BA9655CC98C6A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Nakama.ISession>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_m9053FDFB04130DC5C75CC43033CB7CBEB6053A67 (TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Nakama.IApiWriteStorageObject>::.ctor()
inline void List_1__ctor_mA713B9D1C8C42D371CDE684006C2F931A4CAB980 (List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Nakama.WriteStorageObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteStorageObject__ctor_mEC9276C267CFC3DE7EE9284E2CA1C1E0374C5CC2 (WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* __this, const RuntimeMethod* method) ;
// System.Void Nakama.WriteStorageObject::set_Collection(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WriteStorageObject_set_Collection_m74F653EE92C1BF100B2ED0EBB66C29CD0BD877F9_inline (WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nakama.WriteStorageObject::set_Key(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WriteStorageObject_set_Key_mF3B8267FFD54AA790BF20044E636CDF8AE875BE3_inline (WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Nakama.WriteStorageObject::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WriteStorageObject_set_Value_mF1A01653E4534448233BA02BF40ACBADFAEC6FD2_inline (WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Nakama.IApiWriteStorageObject>::Add(T)
inline void List_1_Add_mA4166664A7EC154AD39CE44E9D66617A58D5996F_inline (List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<Nakama.IApiWriteStorageObject>::ToArray()
inline IApiWriteStorageObjectU5BU5D_t29EBC64E432E5B13CE1698CC1C5156B3D76B5F12* List_1_ToArray_m04128AADDD72DD0C0F588910E0747A8384E44366 (List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4* __this, const RuntimeMethod* method)
{
	return ((  IApiWriteStorageObjectU5BU5D_t29EBC64E432E5B13CE1698CC1C5156B3D76B5F12* (*) (List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<Nakama.IApiStorageObjectAcks> Nakama.Client::WriteStorageObjectsAsync(Nakama.ISession,Nakama.IApiWriteStorageObject[],Nakama.RetryConfiguration,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tBF9434A1D4E18A49F8645C272592082164BE22BB* Client_WriteStorageObjectsAsync_m62124F8137C1550C2297057888FFCCFAD062C1D6 (Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074* __this, RuntimeObject* ___session0, IApiWriteStorageObjectU5BU5D_t29EBC64E432E5B13CE1698CC1C5156B3D76B5F12* ___objects1, RetryConfiguration_tCE062917A7A5F7680EA943F16461A2CD3A87E2CF* ___retryConfiguration2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___canceller3, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Nakama.IApiStorageObjectAcks>::GetAwaiter()
inline TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E Task_1_GetAwaiter_m5BC36E12C94D18440EE727E11CA9405F56E2638D (Task_1_tBF9434A1D4E18A49F8645C272592082164BE22BB* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E (*) (Task_1_tBF9434A1D4E18A49F8645C272592082164BE22BB*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Nakama.IApiStorageObjectAcks>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m751A3441654D412D24A6AB5A740994811EFA098B (TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Nakama.IApiStorageObjectAcks>,ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m7993DC7CC4B014D7C5A4125E47D788FA76ADAB8A (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E* ___awaiter0, U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E*, U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m532F97DCE2F2C6C7A6DD5E8FCC0BA9655CC98C6A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Nakama.IApiStorageObjectAcks>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_m6F05F9733AB36E0CBA38705B3F518D918B7E070C (TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_mECA40A7DE4809FEFAD4C00CC074EF5473D658135 (String_t* ___separator0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__0_MoveNext_m2F58A48614D1B358CC3250B353DBA792345D20A6 (U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__0_SetStateMachine_m026EB56B28EB904AAA58F8815A589D9393159893 (U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_FromException_m69BFDD356DB02E84451A39D61ABC27D9E6D746CB (Exception_t* ___ex0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::.ctor(Cysharp.Threading.Tasks.UniTask&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline (int32_t ___status0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___task0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline)(__this, ___task0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
inline int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::UnsafeOnCompleted(System.Action)
inline void Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_gshared_inline)(__this, ___continuation0, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
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
// Cysharp.Threading.Tasks.UniTask ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::Show(ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 BasePanelController_Show_mBA4F42D7F2802D6CBCD4E5E036A116734910BEFE (BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* __this, MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* ___mainMenuPanelController0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_mBEDC31229CCEE1592A4EE75293315FA38E923B49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_1 = ___mainMenuPanelController0;
		(&V_0)->___mainMenuPanelController_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___mainMenuPanelController_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_mBEDC31229CCEE1592A4EE75293315FA38E923B49_inline(L_2, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_mBEDC31229CCEE1592A4EE75293315FA38E923B49_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_4;
		L_4 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_3, NULL);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.UniTask ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 BasePanelController_Hide_m5C5B8EF588AB22574BECFE0F7535A542186D1ED0 (BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mCB36A7F05AFA556B117C8107E38FAC03F008B882_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mCB36A7F05AFA556B117C8107E38FAC03F008B882_inline(L_1, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mCB36A7F05AFA556B117C8107E38FAC03F008B882_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::InitBeforeShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 BasePanelController_InitBeforeShow_m2E4C95F25538751679563C939150EFD975B005AC (BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4_m6956882398B2B98DC6B10C0377AD666FF029B76B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4_m6956882398B2B98DC6B10C0377AD666FF029B76B_inline(L_1, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4_m6956882398B2B98DC6B10C0377AD666FF029B76B_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::InitAfterHide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 BasePanelController_InitAfterHide_mF64A5F549D35B9F256DFADDCEA50B09F19032471 (BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1_mFAF0DCC384388E95D23989AAF2C5CF33926683D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1_mFAF0DCC384388E95D23989AAF2C5CF33926683D2_inline(L_1, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1_mFAF0DCC384388E95D23989AAF2C5CF33926683D2_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePanelController__ctor_mAAD8ADF7969360489BF7F22B623924D9AC88D3A6 (BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* __this, const RuntimeMethod* method) 
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
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m642002ADD65E495D8B170F3EAED4DC747CAC9EB0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86* L_0 = (U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86*)il2cpp_codegen_object_new(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF629E1EACBD5BF090CB55E4205263D59980EA243(L_0, NULL);
		((U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF629E1EACBD5BF090CB55E4205263D59980EA243 (U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<>c::<Show>b__8_0(ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CShowU3Eb__8_0_m8A35960151B4FE4D8AC3220C1B9549FFA963934A (U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86* __this, BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* ___x0, const RuntimeMethod* method) 
{
	{
		// await UniTask.WaitUntilValueChanged(this, x => x.isHiding);
		BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1 = L_0->___isHiding_7;
		return L_1;
	}
}
// System.Boolean ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<>c::<Hide>b__9_0(ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CHideU3Eb__9_0_mF0CFD09EFDC5FACE2B50D00D92B36F28337DF4C1 (U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86* __this, BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* ___x0, const RuntimeMethod* method) 
{
	{
		// await UniTask.WaitUntilValueChanged(this, x => x.isShowing);
		BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1 = L_0->___isShowing_6;
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
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ed__8_MoveNext_mC606D2D52723D1629AB746F6C0FCDC81E3FFD5BD (U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0E24B1A79AF68425D5008B9D63878B086E773822_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0C035985C0A36057B75C4C9E1717330845BD576A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumeratorAsyncExtensions_GetAwaiter_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m3F4064D3BDAE5B63747E91BA3BFBD5EED4ACCB52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1_m91EEECDB476A25A6B275D95713DA72D5D6D77F1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CShowU3Eb__8_0_m8A35960151B4FE4D8AC3220C1B9549FFA963934A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_WaitUntilValueChanged_TisBasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9469390F7CE6728CB779FD0A623E7FF9F3DA06CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEF1F71BD3C21C53860EC6863B3105336E4D873B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* V_1 = NULL;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* G_B7_0 = NULL;
	BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* G_B7_1 = NULL;
	Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* G_B6_0 = NULL;
	BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* G_B6_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_00aa_1;
				}
				case 1:
				{
					goto IL_010c_1;
				}
				case 2:
				{
					goto IL_0195_1;
				}
			}
		}
		{
			// this.mainMenuPanelController = mainMenuPanelController;
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_3 = V_1;
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_4 = __this->___mainMenuPanelController_3;
			NullCheck(L_3);
			L_3->___mainMenuPanelController_11 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->___mainMenuPanelController_11), (void*)L_4);
			// if (isShowing)
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = L_5->___isShowing_6;
			if (!L_6)
			{
				goto IL_0039_1;
			}
		}
		{
			// return;
			goto IL_01db;
		}

IL_0039_1:
		{
			// if (isHiding)
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = L_7->___isHiding_7;
			if (!L_8)
			{
				goto IL_00ce_1;
			}
		}
		{
			// await UniTask.WaitUntilValueChanged(this, x => x.isHiding);
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_9 = V_1;
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var);
			Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* L_10 = ((U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
			Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* L_11 = L_10;
			G_B6_0 = L_11;
			G_B6_1 = L_9;
			if (L_11)
			{
				G_B7_0 = L_11;
				G_B7_1 = L_9;
				goto IL_0064_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var);
			U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86* L_12 = ((U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* L_13 = (Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951*)il2cpp_codegen_object_new(Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951_il2cpp_TypeInfo_var);
			NullCheck(L_13);
			Func_2__ctor_mF15C3FCAD8D4D0609E4BECE695535C88F74CBB66(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3CShowU3Eb__8_0_m8A35960151B4FE4D8AC3220C1B9549FFA963934A_RuntimeMethod_var), NULL);
			Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* L_14 = L_13;
			((U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_14);
			G_B7_0 = L_14;
			G_B7_1 = G_B6_1;
		}

IL_0064_1:
		{
			il2cpp_codegen_initobj((&V_3), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_15 = V_3;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_16;
			L_16 = UniTask_WaitUntilValueChanged_TisBasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9469390F7CE6728CB779FD0A623E7FF9F3DA06CA(G_B7_1, G_B7_0, 8, (RuntimeObject*)NULL, L_15, UniTask_WaitUntilValueChanged_TisBasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9469390F7CE6728CB779FD0A623E7FF9F3DA06CA_RuntimeMethod_var);
			V_4 = L_16;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17;
			L_17 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			V_2 = L_17;
			bool L_18;
			L_18 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_00c6_1;
			}
		}
		{
			int32_t L_19 = 0;
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = V_2;
			__this->___U3CU3Eu__1_4 = L_20;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_21 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0E24B1A79AF68425D5008B9D63878B086E773822_inline(L_21, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0E24B1A79AF68425D5008B9D63878B086E773822_RuntimeMethod_var);
			goto IL_01ee;
		}

IL_00aa_1:
		{
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_22 = __this->___U3CU3Eu__1_4;
			V_2 = L_22;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_23 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_23, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
		}

IL_00c6_1:
		{
			bool L_25;
			L_25 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		}

IL_00ce_1:
		{
			// await InitBeforeShow();
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_26 = V_1;
			NullCheck(L_26);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_27;
			L_27 = VirtualFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(4 /* Cysharp.Threading.Tasks.UniTask ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::InitBeforeShow() */, L_26);
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28;
			L_28 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_6), NULL);
			V_5 = L_28;
			bool L_29;
			L_29 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_5), NULL);
			if (L_29)
			{
				goto IL_0129_1;
			}
		}
		{
			int32_t L_30 = 1;
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_31 = V_5;
			__this->___U3CU3Eu__2_5 = L_31;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_5))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0C035985C0A36057B75C4C9E1717330845BD576A_inline(L_32, (&V_5), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0C035985C0A36057B75C4C9E1717330845BD576A_RuntimeMethod_var);
			goto IL_01ee;
		}

IL_010c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = __this->___U3CU3Eu__2_5;
			V_5 = L_33;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_34 = (&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
		}

IL_0129_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_5), NULL);
			// isShowing = true;
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_36 = V_1;
			NullCheck(L_36);
			L_36->___isShowing_6 = (bool)1;
			// if (root.GetComponent<AnimationSequencerController>() != null)
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_37 = V_1;
			NullCheck(L_37);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = L_37->___root_4;
			NullCheck(L_38);
			AnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1* L_39;
			L_39 = GameObject_GetComponent_TisAnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1_m91EEECDB476A25A6B275D95713DA72D5D6D77F1B(L_38, GameObject_GetComponent_TisAnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1_m91EEECDB476A25A6B275D95713DA72D5D6D77F1B_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_40;
			L_40 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_39, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_40)
			{
				goto IL_01b9_1;
			}
		}
		{
			// await root.GetComponent<AnimationSequencerController>().GetControllerByTagKey("Show")
			//     .PlayEnumerator();
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_41 = V_1;
			NullCheck(L_41);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = L_41->___root_4;
			NullCheck(L_42);
			AnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1* L_43;
			L_43 = GameObject_GetComponent_TisAnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1_m91EEECDB476A25A6B275D95713DA72D5D6D77F1B(L_42, GameObject_GetComponent_TisAnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1_m91EEECDB476A25A6B275D95713DA72D5D6D77F1B_RuntimeMethod_var);
			NullCheck(L_43);
			AnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1* L_44;
			L_44 = AnimationSequencerController_GetControllerByTagKey_mD5431A4D0FE51BA1C7BC4806A8D9D07F23C6A4D5(L_43, _stringLiteralBEF1F71BD3C21C53860EC6863B3105336E4D873B, NULL);
			NullCheck(L_44);
			RuntimeObject* L_45;
			L_45 = AnimationSequencerController_PlayEnumerator_m81FE35B750C995E6AC5D4DA55B13430E3D4D3F4D(L_44, NULL);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46;
			L_46 = EnumeratorAsyncExtensions_GetAwaiter_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m3F4064D3BDAE5B63747E91BA3BFBD5EED4ACCB52(L_45, EnumeratorAsyncExtensions_GetAwaiter_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m3F4064D3BDAE5B63747E91BA3BFBD5EED4ACCB52_RuntimeMethod_var);
			V_5 = L_46;
			bool L_47;
			L_47 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_5), NULL);
			if (L_47)
			{
				goto IL_01b2_1;
			}
		}
		{
			int32_t L_48 = 2;
			V_0 = L_48;
			__this->___U3CU3E1__state_0 = L_48;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = V_5;
			__this->___U3CU3Eu__2_5 = L_49;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_5))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_50 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0C035985C0A36057B75C4C9E1717330845BD576A_inline(L_50, (&V_5), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0C035985C0A36057B75C4C9E1717330845BD576A_RuntimeMethod_var);
			goto IL_01ee;
		}

IL_0195_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_51 = __this->___U3CU3Eu__2_5;
			V_5 = L_51;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_52 = (&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_52, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_53 = (-1);
			V_0 = L_53;
			__this->___U3CU3E1__state_0 = L_53;
		}

IL_01b2_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_5), NULL);
		}

IL_01b9_1:
		{
			// isShowing = false;
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_54 = V_1;
			NullCheck(L_54);
			L_54->___isShowing_6 = (bool)0;
			goto IL_01db;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c2;
		}
		throw e;
	}

CATCH_01c2:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_55 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_56 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_55, L_56, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01ee;
	}// end catch (depth: 1)

IL_01db:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_57 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_57, NULL);
	}

IL_01ee:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CShowU3Ed__8_MoveNext_mC606D2D52723D1629AB746F6C0FCDC81E3FFD5BD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1*>(__this + _offset);
	U3CShowU3Ed__8_MoveNext_mC606D2D52723D1629AB746F6C0FCDC81E3FFD5BD(_thisAdjusted, method);
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Show>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ed__8_SetStateMachine_m2C24E0C7866AF0699AB82AD3712BD2DE4CC28410 (U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CShowU3Ed__8_SetStateMachine_m2C24E0C7866AF0699AB82AD3712BD2DE4CC28410_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1*>(__this + _offset);
	U3CShowU3Ed__8_SetStateMachine_m2C24E0C7866AF0699AB82AD3712BD2DE4CC28410(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideU3Ed__9_MoveNext_mBB7C739827AB95059B871897708329A18BAD2539 (U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mF60102E049A410BBFD22A882AC63C68FFB6C2650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_m02BABCC06F3A6BEF17B21922C5D1A6D1FF0365AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumeratorAsyncExtensions_GetAwaiter_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m3F4064D3BDAE5B63747E91BA3BFBD5EED4ACCB52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1_m91EEECDB476A25A6B275D95713DA72D5D6D77F1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CHideU3Eb__9_0_mF0CFD09EFDC5FACE2B50D00D92B36F28337DF4C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_WaitUntilValueChanged_TisBasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9469390F7CE6728CB779FD0A623E7FF9F3DA06CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA5EF003C43724A30EBD3751479853EC15EA99A5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* V_1 = NULL;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* G_B7_0 = NULL;
	BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* G_B7_1 = NULL;
	Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* G_B6_0 = NULL;
	BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* G_B6_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_009e_1;
				}
				case 1:
				{
					goto IL_012a_1;
				}
				case 2:
				{
					goto IL_0190_1;
				}
			}
		}
		{
			// if (isHiding)
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->___isHiding_7;
			if (!L_4)
			{
				goto IL_002d_1;
			}
		}
		{
			// return;
			goto IL_01cf;
		}

IL_002d_1:
		{
			// if (isShowing)
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = L_5->___isShowing_6;
			if (!L_6)
			{
				goto IL_00c2_1;
			}
		}
		{
			// await UniTask.WaitUntilValueChanged(this, x => x.isShowing);
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_7 = V_1;
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var);
			Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* L_8 = ((U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_2;
			Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* L_9 = L_8;
			G_B6_0 = L_9;
			G_B6_1 = L_7;
			if (L_9)
			{
				G_B7_0 = L_9;
				G_B7_1 = L_7;
				goto IL_0058_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var);
			U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86* L_10 = ((U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* L_11 = (Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951*)il2cpp_codegen_object_new(Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951_il2cpp_TypeInfo_var);
			NullCheck(L_11);
			Func_2__ctor_mF15C3FCAD8D4D0609E4BECE695535C88F74CBB66(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CHideU3Eb__9_0_mF0CFD09EFDC5FACE2B50D00D92B36F28337DF4C1_RuntimeMethod_var), NULL);
			Func_2_t7BA05AAF5281E65A63CFB7F24586462EC6C9E951* L_12 = L_11;
			((U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_2 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t89DE0DCD5AF46C7D7ED9A8B1CA560FBF71B7FD86_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_2), (void*)L_12);
			G_B7_0 = L_12;
			G_B7_1 = G_B6_1;
		}

IL_0058_1:
		{
			il2cpp_codegen_initobj((&V_3), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = V_3;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_14;
			L_14 = UniTask_WaitUntilValueChanged_TisBasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9469390F7CE6728CB779FD0A623E7FF9F3DA06CA(G_B7_1, G_B7_0, 8, (RuntimeObject*)NULL, L_13, UniTask_WaitUntilValueChanged_TisBasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9469390F7CE6728CB779FD0A623E7FF9F3DA06CA_RuntimeMethod_var);
			V_4 = L_14;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15;
			L_15 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			V_2 = L_15;
			bool L_16;
			L_16 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_00ba_1;
			}
		}
		{
			int32_t L_17 = 0;
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = V_2;
			__this->___U3CU3Eu__1_3 = L_18;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_19 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mF60102E049A410BBFD22A882AC63C68FFB6C2650_inline(L_19, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mF60102E049A410BBFD22A882AC63C68FFB6C2650_RuntimeMethod_var);
			goto IL_01e2;
		}

IL_009e_1:
		{
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = __this->___U3CU3Eu__1_3;
			V_2 = L_20;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_21 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_21, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
			int32_t L_22 = (-1);
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
		}

IL_00ba_1:
		{
			bool L_23;
			L_23 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		}

IL_00c2_1:
		{
			// isHiding = true;
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_24 = V_1;
			NullCheck(L_24);
			L_24->___isHiding_7 = (bool)1;
			// if (root.GetComponent<AnimationSequencerController>() != null)
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_25 = V_1;
			NullCheck(L_25);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___root_4;
			NullCheck(L_26);
			AnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1* L_27;
			L_27 = GameObject_GetComponent_TisAnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1_m91EEECDB476A25A6B275D95713DA72D5D6D77F1B(L_26, GameObject_GetComponent_TisAnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1_m91EEECDB476A25A6B275D95713DA72D5D6D77F1B_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_28;
			L_28 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_28)
			{
				goto IL_014e_1;
			}
		}
		{
			// await root.GetComponent<AnimationSequencerController>().GetControllerByTagKey("Hide")
			//     .PlayEnumerator();
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_29 = V_1;
			NullCheck(L_29);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_29->___root_4;
			NullCheck(L_30);
			AnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1* L_31;
			L_31 = GameObject_GetComponent_TisAnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1_m91EEECDB476A25A6B275D95713DA72D5D6D77F1B(L_30, GameObject_GetComponent_TisAnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1_m91EEECDB476A25A6B275D95713DA72D5D6D77F1B_RuntimeMethod_var);
			NullCheck(L_31);
			AnimationSequencerController_tFAA6202D34C36A8109DCC56A1C25A576CB69AAC1* L_32;
			L_32 = AnimationSequencerController_GetControllerByTagKey_mD5431A4D0FE51BA1C7BC4806A8D9D07F23C6A4D5(L_31, _stringLiteralCA5EF003C43724A30EBD3751479853EC15EA99A5, NULL);
			NullCheck(L_32);
			RuntimeObject* L_33;
			L_33 = AnimationSequencerController_PlayEnumerator_m81FE35B750C995E6AC5D4DA55B13430E3D4D3F4D(L_32, NULL);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = EnumeratorAsyncExtensions_GetAwaiter_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m3F4064D3BDAE5B63747E91BA3BFBD5EED4ACCB52(L_33, EnumeratorAsyncExtensions_GetAwaiter_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m3F4064D3BDAE5B63747E91BA3BFBD5EED4ACCB52_RuntimeMethod_var);
			V_5 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_5), NULL);
			if (L_35)
			{
				goto IL_0147_1;
			}
		}
		{
			int32_t L_36 = 1;
			V_0 = L_36;
			__this->___U3CU3E1__state_0 = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_5;
			__this->___U3CU3Eu__2_4 = L_37;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_4))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_38 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_m02BABCC06F3A6BEF17B21922C5D1A6D1FF0365AE_inline(L_38, (&V_5), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_m02BABCC06F3A6BEF17B21922C5D1A6D1FF0365AE_RuntimeMethod_var);
			goto IL_01e2;
		}

IL_012a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = __this->___U3CU3Eu__2_4;
			V_5 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_40 = (&__this->___U3CU3Eu__2_4);
			il2cpp_codegen_initobj(L_40, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->___U3CU3E1__state_0 = L_41;
		}

IL_0147_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_5), NULL);
		}

IL_014e_1:
		{
			// isHiding = false;
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_42 = V_1;
			NullCheck(L_42);
			L_42->___isHiding_7 = (bool)0;
			// await InitAfterHide();
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_43 = V_1;
			NullCheck(L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = VirtualFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(5 /* Cysharp.Threading.Tasks.UniTask ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController::InitAfterHide() */, L_43);
			V_6 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_6), NULL);
			V_5 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_5), NULL);
			if (L_46)
			{
				goto IL_01ad_1;
			}
		}
		{
			int32_t L_47 = 2;
			V_0 = L_47;
			__this->___U3CU3E1__state_0 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_5;
			__this->___U3CU3Eu__2_4 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_4))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_49 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_m02BABCC06F3A6BEF17B21922C5D1A6D1FF0365AE_inline(L_49, (&V_5), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_m02BABCC06F3A6BEF17B21922C5D1A6D1FF0365AE_RuntimeMethod_var);
			goto IL_01e2;
		}

IL_0190_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = __this->___U3CU3Eu__2_4;
			V_5 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (&__this->___U3CU3Eu__2_4);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
		}

IL_01ad_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_5), NULL);
			goto IL_01cf;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b6;
		}
		throw e;
	}

CATCH_01b6:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_53 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_54 = V_7;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_53, L_54, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e2;
	}// end catch (depth: 1)

IL_01cf:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_55 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_55, NULL);
	}

IL_01e2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHideU3Ed__9_MoveNext_mBB7C739827AB95059B871897708329A18BAD2539_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6*>(__this + _offset);
	U3CHideU3Ed__9_MoveNext_mBB7C739827AB95059B871897708329A18BAD2539(_thisAdjusted, method);
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<Hide>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideU3Ed__9_SetStateMachine_m23B2B8367C5299B39222D0057558840D64E2B624 (U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHideU3Ed__9_SetStateMachine_m23B2B8367C5299B39222D0057558840D64E2B624_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6*>(__this + _offset);
	U3CHideU3Ed__9_SetStateMachine_m23B2B8367C5299B39222D0057558840D64E2B624(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitBeforeShow>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitBeforeShowU3Ed__10_MoveNext_m88CD20B9647C243E7455A7308E2EFB4E0952DF4D (U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4* __this, const RuntimeMethod* method) 
{
	BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_0 = __this->___U3CU3E4__this_2;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		// root.SetActive(true);
		BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_1 = V_0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1->___root_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		goto IL_002c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_3 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_4 = V_1;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_3, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003f;
	}// end catch (depth: 1)

IL_002c:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_5 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_5, NULL);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitBeforeShowU3Ed__10_MoveNext_m88CD20B9647C243E7455A7308E2EFB4E0952DF4D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4*>(__this + _offset);
	U3CInitBeforeShowU3Ed__10_MoveNext_m88CD20B9647C243E7455A7308E2EFB4E0952DF4D(_thisAdjusted, method);
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitBeforeShow>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitBeforeShowU3Ed__10_SetStateMachine_m61AA251573405213558382A0C45E7A543F1F6510 (U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitBeforeShowU3Ed__10_SetStateMachine_m61AA251573405213558382A0C45E7A543F1F6510_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4*>(__this + _offset);
	U3CInitBeforeShowU3Ed__10_SetStateMachine_m61AA251573405213558382A0C45E7A543F1F6510(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitAfterHide>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitAfterHideU3Ed__11_MoveNext_mC90B2535ACDAA279B80CB8A2313034B7FD8E032F (U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1* __this, const RuntimeMethod* method) 
{
	BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_0 = __this->___U3CU3E4__this_2;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		// root.SetActive(false);
		BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_1 = V_0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1->___root_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		goto IL_002c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_3 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_4 = V_1;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_3, L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003f;
	}// end catch (depth: 1)

IL_002c:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_5 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_5, NULL);
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitAfterHideU3Ed__11_MoveNext_mC90B2535ACDAA279B80CB8A2313034B7FD8E032F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1*>(__this + _offset);
	U3CInitAfterHideU3Ed__11_MoveNext_mC90B2535ACDAA279B80CB8A2313034B7FD8E032F(_thisAdjusted, method);
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController/<InitAfterHide>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitAfterHideU3Ed__11_SetStateMachine_m14FCF3F50EF365BF0612AEFBEF8AFA9D8870B6D7 (U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitAfterHideU3Ed__11_SetStateMachine_m14FCF3F50EF365BF0612AEFBEF8AFA9D8870B6D7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1*>(__this + _offset);
	U3CInitAfterHideU3Ed__11_SetStateMachine_m14FCF3F50EF365BF0612AEFBEF8AFA9D8870B6D7(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.LearnController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LearnController__ctor_mE2C2E14F5F2AF9A99AC42178108459FE6A881037 (LearnController_t76181060E239065F3E53AC47DDE99A8013AD897B* __this, const RuntimeMethod* method) 
{
	{
		BasePanelController__ctor_mAAD8ADF7969360489BF7F22B623924D9AC88D3A6(__this, NULL);
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
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::Init(System.Object,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuPanelController_Init_m3571A0387C9DE2C0FB52B2338F3344C58201EE34 (MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* __this, RuntimeObject* ___data0, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___onDone1, const RuntimeMethod* method) 
{
	{
		// root.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ((MainMenuController_t7015EC65DE6B00748D9F3442D81F2D54E576BFE3*)__this)->___root_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// ChangeState(defaultMenuState).Forget();
		int32_t L_1 = __this->___defaultMenuState_7;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = MainMenuPanelController_ChangeState_m95E63F14CC83BBD37B49D95A5EA0B0EAEBB47D97(__this, L_1, NULL);
		UniTaskExtensions_Forget_m37F7D43D931AC3DDA84E80AE88513FE184E1B5A2(L_2, NULL);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::ChangeState(ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/MainMenuState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 MainMenuPanelController_ChangeState_m95E63F14CC83BBD37B49D95A5EA0B0EAEBB47D97 (MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* __this, int32_t ___newState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_m4C4B1AA86D7C7210D0317CD405329E1A939FE0D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		int32_t L_1 = ___newState0;
		(&V_0)->___newState_3 = L_1;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_m4C4B1AA86D7C7210D0317CD405329E1A939FE0D8_inline(L_2, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_m4C4B1AA86D7C7210D0317CD405329E1A939FE0D8_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_4;
		L_4 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_3, NULL);
		return L_4;
	}
}
// ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::GetPanelControllerByState(ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/MainMenuState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* MainMenuPanelController_GetPanelControllerByState_m9F0E4C9D8C29932123D8706C4293BC9CBF232B3A (MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m3D8A6D150A0E62447106B8ED05D1C9EE06222B9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tB769B77841D1087B877A489A353D18A6DC079A54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CGetPanelControllerByStateU3Eb__0_m99F5812617EE97BE60AC06D65D568EC2891D5993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t7A1D0D702E51DDF33180AE83CDB4973B503B387D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t7A1D0D702E51DDF33180AE83CDB4973B503B387D* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t7A1D0D702E51DDF33180AE83CDB4973B503B387D* L_0 = (U3CU3Ec__DisplayClass8_0_t7A1D0D702E51DDF33180AE83CDB4973B503B387D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t7A1D0D702E51DDF33180AE83CDB4973B503B387D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_mC6BF1583B67929BFFC9AAE0428D040ADC050FE1A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t7A1D0D702E51DDF33180AE83CDB4973B503B387D* L_1 = V_0;
		int32_t L_2 = ___state0;
		NullCheck(L_1);
		L_1->___state_0 = L_2;
		// return panelControllers.Find(x => x.myState == state);
		List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395* L_3 = __this->___panelControllers_5;
		U3CU3Ec__DisplayClass8_0_t7A1D0D702E51DDF33180AE83CDB4973B503B387D* L_4 = V_0;
		Predicate_1_tB769B77841D1087B877A489A353D18A6DC079A54* L_5 = (Predicate_1_tB769B77841D1087B877A489A353D18A6DC079A54*)il2cpp_codegen_object_new(Predicate_1_tB769B77841D1087B877A489A353D18A6DC079A54_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_m70E978A6CC2D3C0D908E900406F0781455C071A0(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CGetPanelControllerByStateU3Eb__0_m99F5812617EE97BE60AC06D65D568EC2891D5993_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_6;
		L_6 = List_1_Find_m3D8A6D150A0E62447106B8ED05D1C9EE06222B9A(L_3, L_5, List_1_Find_m3D8A6D150A0E62447106B8ED05D1C9EE06222B9A_RuntimeMethod_var);
		return L_6;
	}
}
// Cysharp.Threading.Tasks.UniTask ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::ShowHideProfilePanel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 MainMenuPanelController_ShowHideProfilePanel_m7039BF323A480E6DAE969D5CA38D7FC6DF3E4AF5 (MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* __this, bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_Start_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_mB4B8B079780D23E56A9AA0763F4FAE7A29A38F64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		bool L_1 = ___state0;
		(&V_0)->___state_3 = L_1;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_mB4B8B079780D23E56A9AA0763F4FAE7A29A38F64_inline(L_2, (&V_0), AsyncUniTaskMethodBuilder_Start_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_mB4B8B079780D23E56A9AA0763F4FAE7A29A38F64_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_4;
		L_4 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_3, NULL);
		return L_4;
	}
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::ShowPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuPanelController_ShowPanel_m937C95E456BB92BD04D2F319D2DAB58A06DA6247 (MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	{
		// if ((MainMenuState) state == MainMenuState.Profile)
		int32_t L_0 = ___state0;
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_0011;
		}
	}
	{
		// ShowHideProfilePanel(true).Forget();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = MainMenuPanelController_ShowHideProfilePanel_m7039BF323A480E6DAE969D5CA38D7FC6DF3E4AF5(__this, (bool)1, NULL);
		UniTaskExtensions_Forget_m37F7D43D931AC3DDA84E80AE88513FE184E1B5A2(L_1, NULL);
		return;
	}

IL_0011:
	{
		// ChangeState((MainMenuState) state).Forget();
		int32_t L_2 = ___state0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = MainMenuPanelController_ChangeState_m95E63F14CC83BBD37B49D95A5EA0B0EAEBB47D97(__this, L_2, NULL);
		UniTaskExtensions_Forget_m37F7D43D931AC3DDA84E80AE88513FE184E1B5A2(L_3, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuPanelController__ctor_m6D37F713B7D8210ABFDA34516B335233D71EA2E1 (MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4A01BBDE359339C3C707A5715E6362B3DAEF8B18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Header("Controllers")] public List<BasePanelController> panelControllers = new List<BasePanelController>();
		List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395* L_0 = (List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395*)il2cpp_codegen_object_new(List_1_t9719768AD863CD0B84D2F438139B31DCA2BC9395_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4A01BBDE359339C3C707A5715E6362B3DAEF8B18(L_0, List_1__ctor_m4A01BBDE359339C3C707A5715E6362B3DAEF8B18_RuntimeMethod_var);
		__this->___panelControllers_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panelControllers_5), (void*)L_0);
		// public MainMenuState defaultMenuState = MainMenuState.Place;
		__this->___defaultMenuState_7 = 2;
		MainMenuController__ctor_m972C7653558F746AF8B5289C15AFB5FEC0FE3B63(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeStateU3Ed__7_MoveNext_m7658A7E28BF4E984DF8851C07585148E9ECC463C (U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_mDB4EE4271C92627C7D307D3863C501ACC93E66C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_007a_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00ed_1;
			}
		}
		{
			// if (isChangingState)
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = L_4->___isChangingState_9;
			if (!L_5)
			{
				goto IL_0025_1;
			}
		}
		{
			// return;
			goto IL_0132;
		}

IL_0025_1:
		{
			// isChangingState = true;
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_6 = V_1;
			NullCheck(L_6);
			L_6->___isChangingState_9 = (bool)1;
			// if (currentMenuState != MainMenuState.None)
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_7 = V_1;
			NullCheck(L_7);
			int32_t L_8 = L_7->___currentMenuState_8;
			if (!L_8)
			{
				goto IL_009d_1;
			}
		}
		{
			// await GetPanelControllerByState(currentMenuState).Hide();
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_9 = V_1;
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_10 = V_1;
			NullCheck(L_10);
			int32_t L_11 = L_10->___currentMenuState_8;
			NullCheck(L_9);
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_12;
			L_12 = MainMenuPanelController_GetPanelControllerByState_m9F0E4C9D8C29932123D8706C4293BC9CBF232B3A(L_9, L_11, NULL);
			NullCheck(L_12);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_13;
			L_13 = BasePanelController_Hide_m5C5B8EF588AB22574BECFE0F7535A542186D1ED0(L_12, NULL);
			V_3 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14;
			L_14 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_14;
			bool L_15;
			L_15 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_15)
			{
				goto IL_0096_1;
			}
		}
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_17 = V_2;
			__this->___U3CU3Eu__1_4 = L_17;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_18 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_mDB4EE4271C92627C7D307D3863C501ACC93E66C9_inline(L_18, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_mDB4EE4271C92627C7D307D3863C501ACC93E66C9_RuntimeMethod_var);
			goto IL_0145;
		}

IL_007a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_19 = __this->___U3CU3Eu__1_4;
			V_2 = L_19;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_20 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
		}

IL_0096_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_009d_1:
		{
			// currentMenuState = newState;
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_22 = V_1;
			int32_t L_23 = __this->___newState_3;
			NullCheck(L_22);
			L_22->___currentMenuState_8 = L_23;
			// await GetPanelControllerByState(currentMenuState).Show(this);
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_24 = V_1;
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_25 = V_1;
			NullCheck(L_25);
			int32_t L_26 = L_25->___currentMenuState_8;
			NullCheck(L_24);
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_27;
			L_27 = MainMenuPanelController_GetPanelControllerByState_m9F0E4C9D8C29932123D8706C4293BC9CBF232B3A(L_24, L_26, NULL);
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_28 = V_1;
			NullCheck(L_27);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_29;
			L_29 = BasePanelController_Show_mBA4F42D7F2802D6CBCD4E5E036A116734910BEFE(L_27, L_28, NULL);
			V_3 = L_29;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_30;
			L_30 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_30;
			bool L_31;
			L_31 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_31)
			{
				goto IL_0109_1;
			}
		}
		{
			int32_t L_32 = 1;
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = V_2;
			__this->___U3CU3Eu__1_4 = L_33;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_34 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_mDB4EE4271C92627C7D307D3863C501ACC93E66C9_inline(L_34, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_mDB4EE4271C92627C7D307D3863C501ACC93E66C9_RuntimeMethod_var);
			goto IL_0145;
		}

IL_00ed_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35 = __this->___U3CU3Eu__1_4;
			V_2 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_36 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_36, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_37 = (-1);
			V_0 = L_37;
			__this->___U3CU3E1__state_0 = L_37;
		}

IL_0109_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
			// isChangingState = false;
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_38 = V_1;
			NullCheck(L_38);
			L_38->___isChangingState_9 = (bool)0;
			goto IL_0132;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0119;
		}
		throw e;
	}

CATCH_0119:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_39 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_40 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_39, L_40, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0145;
	}// end catch (depth: 1)

IL_0132:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_41 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_41, NULL);
	}

IL_0145:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CChangeStateU3Ed__7_MoveNext_m7658A7E28BF4E984DF8851C07585148E9ECC463C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6*>(__this + _offset);
	U3CChangeStateU3Ed__7_MoveNext_m7658A7E28BF4E984DF8851C07585148E9ECC463C(_thisAdjusted, method);
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ChangeState>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeStateU3Ed__7_SetStateMachine_mECF5D78B88A6F2EFA3E5A33F290CB8F1BAE2ECB7 (U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CChangeStateU3Ed__7_SetStateMachine_mECF5D78B88A6F2EFA3E5A33F290CB8F1BAE2ECB7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6*>(__this + _offset);
	U3CChangeStateU3Ed__7_SetStateMachine_mECF5D78B88A6F2EFA3E5A33F290CB8F1BAE2ECB7(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mC6BF1583B67929BFFC9AAE0428D040ADC050FE1A (U3CU3Ec__DisplayClass8_0_t7A1D0D702E51DDF33180AE83CDB4973B503B387D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<>c__DisplayClass8_0::<GetPanelControllerByState>b__0(ProGraphGroup.Projects.TruckWorld.PanelController.BasePanelController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CGetPanelControllerByStateU3Eb__0_m99F5812617EE97BE60AC06D65D568EC2891D5993 (U3CU3Ec__DisplayClass8_0_t7A1D0D702E51DDF33180AE83CDB4973B503B387D* __this, BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* ___x0, const RuntimeMethod* method) 
{
	{
		// return panelControllers.Find(x => x.myState == state);
		BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___myState_5;
		int32_t L_2 = __this->___state_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowHideProfilePanelU3Ed__9_MoveNext_m7595BDB4C9E4141BD9170A4AF1636AAC319C32E4 (U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_m531555DF542683F1083BEEDA0F26C90FCBE9CAB8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0076_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00d9_1;
			}
		}
		{
			// if (isChangingProfilePanelState)
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = L_4->___isChangingProfilePanelState_10;
			if (!L_5)
			{
				goto IL_0025_1;
			}
		}
		{
			// return;
			goto IL_011e;
		}

IL_0025_1:
		{
			// isChangingProfilePanelState = true;
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_6 = V_1;
			NullCheck(L_6);
			L_6->___isChangingProfilePanelState_10 = (bool)1;
			// if (state)
			bool L_7 = __this->___state_3;
			if (!L_7)
			{
				goto IL_009b_1;
			}
		}
		{
			// await GetPanelControllerByState(MainMenuState.Profile).Show(this);
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_8 = V_1;
			NullCheck(L_8);
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_9;
			L_9 = MainMenuPanelController_GetPanelControllerByState_m9F0E4C9D8C29932123D8706C4293BC9CBF232B3A(L_8, 6, NULL);
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_10 = V_1;
			NullCheck(L_9);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_11;
			L_11 = BasePanelController_Show_mBA4F42D7F2802D6CBCD4E5E036A116734910BEFE(L_9, L_10, NULL);
			V_3 = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12;
			L_12 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_12;
			bool L_13;
			L_13 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_13)
			{
				goto IL_0092_1;
			}
		}
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_15 = V_2;
			__this->___U3CU3Eu__1_4 = L_15;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_16 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_m531555DF542683F1083BEEDA0F26C90FCBE9CAB8_inline(L_16, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_m531555DF542683F1083BEEDA0F26C90FCBE9CAB8_RuntimeMethod_var);
			goto IL_0131;
		}

IL_0076_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_17 = __this->___U3CU3Eu__1_4;
			V_2 = L_17;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_18 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
		}

IL_0092_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
			goto IL_00fc_1;
		}

IL_009b_1:
		{
			// await GetPanelControllerByState(MainMenuState.Profile).Hide();
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_20 = V_1;
			NullCheck(L_20);
			BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086* L_21;
			L_21 = MainMenuPanelController_GetPanelControllerByState_m9F0E4C9D8C29932123D8706C4293BC9CBF232B3A(L_20, 6, NULL);
			NullCheck(L_21);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_22;
			L_22 = BasePanelController_Hide_m5C5B8EF588AB22574BECFE0F7535A542186D1ED0(L_21, NULL);
			V_3 = L_22;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_23;
			L_23 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_23;
			bool L_24;
			L_24 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_24)
			{
				goto IL_00f5_1;
			}
		}
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_26 = V_2;
			__this->___U3CU3Eu__1_4 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_27 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_m531555DF542683F1083BEEDA0F26C90FCBE9CAB8_inline(L_27, (&V_2), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_m531555DF542683F1083BEEDA0F26C90FCBE9CAB8_RuntimeMethod_var);
			goto IL_0131;
		}

IL_00d9_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28 = __this->___U3CU3Eu__1_4;
			V_2 = L_28;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_29 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
		}

IL_00f5_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00fc_1:
		{
			// isChangingProfilePanelState = false;
			MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_31 = V_1;
			NullCheck(L_31);
			L_31->___isChangingProfilePanelState_10 = (bool)0;
			goto IL_011e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0105;
		}
		throw e;
	}

CATCH_0105:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_4;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_32, L_33, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0131;
	}// end catch (depth: 1)

IL_011e:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_34 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_34, NULL);
	}

IL_0131:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CShowHideProfilePanelU3Ed__9_MoveNext_m7595BDB4C9E4141BD9170A4AF1636AAC319C32E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B*>(__this + _offset);
	U3CShowHideProfilePanelU3Ed__9_MoveNext_m7595BDB4C9E4141BD9170A4AF1636AAC319C32E4(_thisAdjusted, method);
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MainMenuPanelController/<ShowHideProfilePanel>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowHideProfilePanelU3Ed__9_SetStateMachine_m8822FC171B090BCAB5F8544BCFDC087B0AE485C7 (U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CShowHideProfilePanelU3Ed__9_SetStateMachine_m8822FC171B090BCAB5F8544BCFDC087B0AE485C7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B*>(__this + _offset);
	U3CShowHideProfilePanelU3Ed__9_SetStateMachine_m8822FC171B090BCAB5F8544BCFDC087B0AE485C7(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.MapController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController__ctor_mED0EA0B9EA4905C6307DA39A3524D6DEF69812D6 (MapController_t92A7B8D8EE21890A98056D2A928F67FB5ED45871* __this, const RuntimeMethod* method) 
{
	{
		BasePanelController__ctor_mAAD8ADF7969360489BF7F22B623924D9AC88D3A6(__this, NULL);
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
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.NewsController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewsController__ctor_mF44CD98D9A5F72AA342611E3AE8E3CAD49394596 (NewsController_tB81D362D4AF70C185EB35248750CE1D2F62CE4B3* __this, const RuntimeMethod* method) 
{
	{
		BasePanelController__ctor_mAAD8ADF7969360489BF7F22B623924D9AC88D3A6(__this, NULL);
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
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.PlaceController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceController__ctor_mC39895CE6F1838FF92900276DCC64695E58E55CF (PlaceController_tB7025B8CF50015CE998A38803D8BDA769C1F1241* __this, const RuntimeMethod* method) 
{
	{
		BasePanelController__ctor_mAAD8ADF7969360489BF7F22B623924D9AC88D3A6(__this, NULL);
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
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.ProfileController::HideMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileController_HideMe_m6B2CE1F11D5201C83BA8012C239B792FD68F56C6 (ProfileController_tB811648A15255F6C2E58B66F9715521FDBB1638F* __this, const RuntimeMethod* method) 
{
	{
		// mainMenuPanelController.ShowHideProfilePanel(false).Forget();
		MainMenuPanelController_t692DE27EC58F9D9B6F572E494B04B7C5B9BE49EF* L_0 = ((BasePanelController_tE41FBC87BADBE1D48AB419A5C27439249F67F086*)__this)->___mainMenuPanelController_11;
		NullCheck(L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = MainMenuPanelController_ShowHideProfilePanel_m7039BF323A480E6DAE969D5CA38D7FC6DF3E4AF5(L_0, (bool)0, NULL);
		UniTaskExtensions_Forget_m37F7D43D931AC3DDA84E80AE88513FE184E1B5A2(L_1, NULL);
		// }
		return;
	}
}
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.ProfileController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileController__ctor_m52263D99445016519B6E0DF391276FF221BCEFFB (ProfileController_tB811648A15255F6C2E58B66F9715521FDBB1638F* __this, const RuntimeMethod* method) 
{
	{
		BasePanelController__ctor_mAAD8ADF7969360489BF7F22B623924D9AC88D3A6(__this, NULL);
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
// System.Void ProGraphGroup.Projects.TruckWorld.PanelController.ShopController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopController__ctor_mF2CC98F55A7BC49E038748885B9F86D391A4BCFB (ShopController_tC298296E012AFAE7F17F61381BBB051809E8B658* __this, const RuntimeMethod* method) 
{
	{
		BasePanelController__ctor_mAAD8ADF7969360489BF7F22B623924D9AC88D3A6(__this, NULL);
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
// System.Threading.Tasks.Task ProGraphGroup.Games.Hero.NewBehaviourScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* NewBehaviourScript_Start_m1C3F682E38CADF31D80CB64CB1729840CDEE0054 (NewBehaviourScript_tD94EB34149403675309E9BF8D0673AC19E452BCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m7553343A485EE42FF80EAE2D56FD800341CFAAF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m7553343A485EE42FF80EAE2D56FD800341CFAAF0(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m7553343A485EE42FF80EAE2D56FD800341CFAAF0_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Void ProGraphGroup.Games.Hero.NewBehaviourScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Update_m5F4635BE8CE0F867DF446C992EB936B9CB0D59BE (NewBehaviourScript_tD94EB34149403675309E9BF8D0673AC19E452BCB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ProGraphGroup.Games.Hero.NewBehaviourScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript__ctor_mFD1BE2043C5C553E6B1FCC2C2D164281B10696E9 (NewBehaviourScript_tD94EB34149403675309E9BF8D0673AC19E452BCB* __this, const RuntimeMethod* method) 
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
// System.Void ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__0_MoveNext_m2F58A48614D1B358CC3250B353DBA792345D20A6 (U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m7993DC7CC4B014D7C5A4125E47D788FA76ADAB8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m68DFADF6C15DC8582611F1D98B2DFCC2A706E048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISession_t3382AA3E55A593004A7BD330D09D2F9415ADF7B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA4166664A7EC154AD39CE44E9D66617A58D5996F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m04128AADDD72DD0C0F588910E0747A8384E44366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA713B9D1C8C42D371CDE684006C2F931A4CAB980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m6F05F9733AB36E0CBA38705B3F518D918B7E070C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m9053FDFB04130DC5C75CC43033CB7CBEB6053A67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m34AB285D4A74A8CA98DF0DCC6FD9A9BB3C7AE4D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m751A3441654D412D24A6AB5A740994811EFA098B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m4C3E6E9BB2E2A81C4409A62139A82A2CC4906821_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m5BC36E12C94D18440EE727E11CA9405F56E2638D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14CCE260371188F4456BF7A8605E420E81EC2EF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D2E263A945BC08E972CDF91FA5E3FCF1BB8F881);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37CBD59912B4F7D36A9D27D25B8D9B8D5AE08A28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F4160C4033E5D72FD6FA98A97EFE2B84E12817A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EB38AF1EDE66F108D7E0BCA0C313F6DEB7B17D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral704C806DFBFD6775B42B652BD17084BD4A120D33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88149003BF937253D4067BB8F1FE4301B82D976A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88A68D437FF46A1910B0D96745A659684513804B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AA9F08FECBBE2764052FC53BED5D5979442EBAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral992590D1F8F43629C98BA7433D8D0197CBA4850F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A8FCE63F94A2933E547955960C4C482899FD416);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6C7257B1F9AA5918E1B6EB477D23DC7634170F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF02D738EE1C7F47C807EEE61B40B3C461CE6F483);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00 V_7;
	memset((&V_7), 0, sizeof(V_7));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_8;
	memset((&V_8), 0, sizeof(V_8));
	TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0084_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_01e1_1;
			}
		}
		{
			// var client = new Client(scheme, host, port, serverKey);
			Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074* L_3 = (Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074*)il2cpp_codegen_object_new(Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			Client__ctor_mE101877256C63598D6BB08589B282C558EA2EDC8(L_3, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE, ((int32_t)7350), _stringLiteral3F4160C4033E5D72FD6FA98A97EFE2B84E12817A, NULL);
			__this->___U3CclientU3E5__2_2 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclientU3E5__2_2), (void*)L_3);
			// var deviceId = SystemInfo.deviceUniqueIdentifier;
			String_t* L_4;
			L_4 = SystemInfo_get_deviceUniqueIdentifier_mCA336E71D49E8B830EAFBC13E46FA22A628D0E17(NULL);
			V_1 = L_4;
			// var session = await client.AuthenticateDeviceAsync(deviceId);
			Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074* L_5 = __this->___U3CclientU3E5__2_2;
			String_t* L_6 = V_1;
			il2cpp_codegen_initobj((&V_8), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = V_8;
			NullCheck(L_5);
			Task_1_t82065A00B0AC8C1AE4BC789A97E01B28EC502304* L_8;
			L_8 = Client_AuthenticateDeviceAsync_mF82FA593AE11EAC11A8C4310C8041440790248E3(L_5, L_6, (String_t*)NULL, (bool)1, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, (RetryConfiguration_tCE062917A7A5F7680EA943F16461A2CD3A87E2CF*)NULL, L_7, NULL);
			NullCheck(L_8);
			TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00 L_9;
			L_9 = Task_1_GetAwaiter_m4C3E6E9BB2E2A81C4409A62139A82A2CC4906821(L_8, Task_1_GetAwaiter_m4C3E6E9BB2E2A81C4409A62139A82A2CC4906821_RuntimeMethod_var);
			V_7 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_1_get_IsCompleted_m34AB285D4A74A8CA98DF0DCC6FD9A9BB3C7AE4D3((&V_7), TaskAwaiter_1_get_IsCompleted_m34AB285D4A74A8CA98DF0DCC6FD9A9BB3C7AE4D3_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_00a1_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00 L_12 = V_7;
			__this->___U3CU3Eu__1_3 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m68DFADF6C15DC8582611F1D98B2DFCC2A706E048(L_13, (&V_7), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m68DFADF6C15DC8582611F1D98B2DFCC2A706E048_RuntimeMethod_var);
			goto IL_026b;
		}

IL_0084_1:
		{
			TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00 L_14 = __this->___U3CU3Eu__1_3;
			V_7 = L_14;
			TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00* L_15 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_tE7B163A0F14360787575EFC76B5D0CCDE906EE00));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_00a1_1:
		{
			RuntimeObject* L_17;
			L_17 = TaskAwaiter_1_GetResult_m9053FDFB04130DC5C75CC43033CB7CBEB6053A67((&V_7), TaskAwaiter_1_GetResult_m9053FDFB04130DC5C75CC43033CB7CBEB6053A67_RuntimeMethod_var);
			V_2 = L_17;
			// Debug.Log(session);
			RuntimeObject* L_18 = V_2;
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_18, NULL);
			// Debug.Log(session.AuthToken); // raw JWT token
			RuntimeObject* L_19 = V_2;
			NullCheck(L_19);
			String_t* L_20;
			L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Nakama.ISession::get_AuthToken() */, ISession_t3382AA3E55A593004A7BD330D09D2F9415ADF7B0_il2cpp_TypeInfo_var, L_19);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_20, NULL);
			// Debug.LogFormat("Session user id: '{0}'", session.UserId);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21;
			RuntimeObject* L_23 = V_2;
			NullCheck(L_23);
			String_t* L_24;
			L_24 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Nakama.ISession::get_UserId() */, ISession_t3382AA3E55A593004A7BD330D09D2F9415ADF7B0_il2cpp_TypeInfo_var, L_23);
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_24);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_24);
			Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral37CBD59912B4F7D36A9D27D25B8D9B8D5AE08A28, L_22, NULL);
			// Debug.LogFormat("Session user username: '{0}'", session.Username);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
			RuntimeObject* L_27 = V_2;
			NullCheck(L_27);
			String_t* L_28;
			L_28 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String Nakama.ISession::get_Username() */, ISession_t3382AA3E55A593004A7BD330D09D2F9415ADF7B0_il2cpp_TypeInfo_var, L_27);
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_28);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_28);
			Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral14CCE260371188F4456BF7A8605E420E81EC2EF5, L_26, NULL);
			// Debug.LogFormat("Session has expired: {0}", session.IsExpired);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_29;
			RuntimeObject* L_31 = V_2;
			NullCheck(L_31);
			bool L_32;
			L_32 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean Nakama.ISession::get_IsExpired() */, ISession_t3382AA3E55A593004A7BD330D09D2F9415ADF7B0_il2cpp_TypeInfo_var, L_31);
			bool L_33 = L_32;
			RuntimeObject* L_34 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_33);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_34);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_34);
			Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral992590D1F8F43629C98BA7433D8D0197CBA4850F, L_30, NULL);
			// Debug.LogFormat("Session expires at: {0}", session.ExpireTime); // in seconds.
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_35;
			RuntimeObject* L_37 = V_2;
			NullCheck(L_37);
			int64_t L_38;
			L_38 = InterfaceFuncInvoker0< int64_t >::Invoke(3 /* System.Int64 Nakama.ISession::get_ExpireTime() */, ISession_t3382AA3E55A593004A7BD330D09D2F9415ADF7B0_il2cpp_TypeInfo_var, L_37);
			int64_t L_39 = L_38;
			RuntimeObject* L_40 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_39);
			NullCheck(L_36);
			ArrayElementTypeCheck (L_36, L_40);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_40);
			Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral88149003BF937253D4067BB8F1FE4301B82D976A, L_36, NULL);
			// var saveGame = "{ \"progress\": 50 }";
			V_3 = _stringLiteral9A8FCE63F94A2933E547955960C4C482899FD416;
			// var myStats = "{ \"skill\": 24 }";
			V_4 = _stringLiteral8AA9F08FECBBE2764052FC53BED5D5979442EBAE;
			// List<IApiWriteStorageObject> list = new List<IApiWriteStorageObject>();
			List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4* L_41 = (List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4*)il2cpp_codegen_object_new(List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4_il2cpp_TypeInfo_var);
			NullCheck(L_41);
			List_1__ctor_mA713B9D1C8C42D371CDE684006C2F931A4CAB980(L_41, List_1__ctor_mA713B9D1C8C42D371CDE684006C2F931A4CAB980_RuntimeMethod_var);
			V_5 = L_41;
			// list.Add(new WriteStorageObject()
			// {
			//     Collection = "saves",
			//     Key = "savegame",
			//     Value = saveGame
			// });
			List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4* L_42 = V_5;
			WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* L_43 = (WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0*)il2cpp_codegen_object_new(WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0_il2cpp_TypeInfo_var);
			NullCheck(L_43);
			WriteStorageObject__ctor_mEC9276C267CFC3DE7EE9284E2CA1C1E0374C5CC2(L_43, NULL);
			WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* L_44 = L_43;
			NullCheck(L_44);
			WriteStorageObject_set_Collection_m74F653EE92C1BF100B2ED0EBB66C29CD0BD877F9_inline(L_44, _stringLiteral88A68D437FF46A1910B0D96745A659684513804B, NULL);
			WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* L_45 = L_44;
			NullCheck(L_45);
			WriteStorageObject_set_Key_mF3B8267FFD54AA790BF20044E636CDF8AE875BE3_inline(L_45, _stringLiteralF02D738EE1C7F47C807EEE61B40B3C461CE6F483, NULL);
			WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* L_46 = L_45;
			String_t* L_47 = V_3;
			NullCheck(L_46);
			WriteStorageObject_set_Value_mF1A01653E4534448233BA02BF40ACBADFAEC6FD2_inline(L_46, L_47, NULL);
			NullCheck(L_42);
			List_1_Add_mA4166664A7EC154AD39CE44E9D66617A58D5996F_inline(L_42, L_46, List_1_Add_mA4166664A7EC154AD39CE44E9D66617A58D5996F_RuntimeMethod_var);
			// list.Add(new WriteStorageObject()
			// {
			//     Collection = "stats",
			//     Key = "skills",
			//     Value = myStats
			// });
			List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4* L_48 = V_5;
			WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* L_49 = (WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0*)il2cpp_codegen_object_new(WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0_il2cpp_TypeInfo_var);
			NullCheck(L_49);
			WriteStorageObject__ctor_mEC9276C267CFC3DE7EE9284E2CA1C1E0374C5CC2(L_49, NULL);
			WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* L_50 = L_49;
			NullCheck(L_50);
			WriteStorageObject_set_Collection_m74F653EE92C1BF100B2ED0EBB66C29CD0BD877F9_inline(L_50, _stringLiteral4EB38AF1EDE66F108D7E0BCA0C313F6DEB7B17D9, NULL);
			WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* L_51 = L_50;
			NullCheck(L_51);
			WriteStorageObject_set_Key_mF3B8267FFD54AA790BF20044E636CDF8AE875BE3_inline(L_51, _stringLiteralB6C7257B1F9AA5918E1B6EB477D23DC7634170F7, NULL);
			WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* L_52 = L_51;
			String_t* L_53 = V_4;
			NullCheck(L_52);
			WriteStorageObject_set_Value_mF1A01653E4534448233BA02BF40ACBADFAEC6FD2_inline(L_52, L_53, NULL);
			NullCheck(L_48);
			List_1_Add_mA4166664A7EC154AD39CE44E9D66617A58D5996F_inline(L_48, L_52, List_1_Add_mA4166664A7EC154AD39CE44E9D66617A58D5996F_RuntimeMethod_var);
			// var objectIds = await client.WriteStorageObjectsAsync(session, list.ToArray());
			Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074* L_54 = __this->___U3CclientU3E5__2_2;
			RuntimeObject* L_55 = V_2;
			List_1_t3FD1ECBDA6CB3EF803C501F6BA40C948898568F4* L_56 = V_5;
			NullCheck(L_56);
			IApiWriteStorageObjectU5BU5D_t29EBC64E432E5B13CE1698CC1C5156B3D76B5F12* L_57;
			L_57 = List_1_ToArray_m04128AADDD72DD0C0F588910E0747A8384E44366(L_56, List_1_ToArray_m04128AADDD72DD0C0F588910E0747A8384E44366_RuntimeMethod_var);
			il2cpp_codegen_initobj((&V_8), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_58 = V_8;
			NullCheck(L_54);
			Task_1_tBF9434A1D4E18A49F8645C272592082164BE22BB* L_59;
			L_59 = Client_WriteStorageObjectsAsync_m62124F8137C1550C2297057888FFCCFAD062C1D6(L_54, L_55, L_57, (RetryConfiguration_tCE062917A7A5F7680EA943F16461A2CD3A87E2CF*)NULL, L_58, NULL);
			NullCheck(L_59);
			TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E L_60;
			L_60 = Task_1_GetAwaiter_m5BC36E12C94D18440EE727E11CA9405F56E2638D(L_59, Task_1_GetAwaiter_m5BC36E12C94D18440EE727E11CA9405F56E2638D_RuntimeMethod_var);
			V_9 = L_60;
			bool L_61;
			L_61 = TaskAwaiter_1_get_IsCompleted_m751A3441654D412D24A6AB5A740994811EFA098B((&V_9), TaskAwaiter_1_get_IsCompleted_m751A3441654D412D24A6AB5A740994811EFA098B_RuntimeMethod_var);
			if (L_61)
			{
				goto IL_01fe_1;
			}
		}
		{
			int32_t L_62 = 1;
			V_0 = L_62;
			__this->___U3CU3E1__state_0 = L_62;
			TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E L_63 = V_9;
			__this->___U3CU3Eu__2_4 = L_63;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_64 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m7993DC7CC4B014D7C5A4125E47D788FA76ADAB8A(L_64, (&V_9), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E_TisU3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1_m7993DC7CC4B014D7C5A4125E47D788FA76ADAB8A_RuntimeMethod_var);
			goto IL_026b;
		}

IL_01e1_1:
		{
			TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E L_65 = __this->___U3CU3Eu__2_4;
			V_9 = L_65;
			TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E* L_66 = (&__this->___U3CU3Eu__2_4);
			il2cpp_codegen_initobj(L_66, sizeof(TaskAwaiter_1_tAB4E31655207E851E70EB4760E5A021D2AAB252E));
			int32_t L_67 = (-1);
			V_0 = L_67;
			__this->___U3CU3E1__state_0 = L_67;
		}

IL_01fe_1:
		{
			RuntimeObject* L_68;
			L_68 = TaskAwaiter_1_GetResult_m6F05F9733AB36E0CBA38705B3F518D918B7E070C((&V_9), TaskAwaiter_1_GetResult_m6F05F9733AB36E0CBA38705B3F518D918B7E070C_RuntimeMethod_var);
			V_6 = L_68;
			// Debug.LogFormat("Successfully stored objects: [{0}]", string.Join(",\n   ", objectIds));
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_69 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = L_69;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_71 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = L_71;
			RuntimeObject* L_73 = V_6;
			NullCheck(L_72);
			ArrayElementTypeCheck (L_72, L_73);
			(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_73);
			String_t* L_74;
			L_74 = String_Join_mECA40A7DE4809FEFAD4C00CC074EF5473D658135(_stringLiteral2D2E263A945BC08E972CDF91FA5E3FCF1BB8F881, L_72, NULL);
			NullCheck(L_70);
			ArrayElementTypeCheck (L_70, L_74);
			(L_70)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_74);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral704C806DFBFD6775B42B652BD17084BD4A120D33, L_70, NULL);
			goto IL_0251;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0231;
		}
		throw e;
	}

CATCH_0231:
	{// begin catch(System.Exception)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CclientU3E5__2_2 = (Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclientU3E5__2_2), (void*)(Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_75 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_76 = V_10;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_75, L_76, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_026b;
	}// end catch (depth: 1)

IL_0251:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CclientU3E5__2_2 = (Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclientU3E5__2_2), (void*)(Client_t14ED0869D6882B80233D7EAB7390ADF10A15B074*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_77 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_77, NULL);
	}

IL_026b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__0_MoveNext_m2F58A48614D1B358CC3250B353DBA792345D20A6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1*>(__this + _offset);
	U3CStartU3Ed__0_MoveNext_m2F58A48614D1B358CC3250B353DBA792345D20A6(_thisAdjusted, method);
}
// System.Void ProGraphGroup.Games.Hero.NewBehaviourScript/<Start>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__0_SetStateMachine_m026EB56B28EB904AAA58F8815A589D9393159893 (U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__0_SetStateMachine_m026EB56B28EB904AAA58F8815A589D9393159893_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartU3Ed__0_t5C332719AD3F6EDF6F9A8272A9115A65E72B48F1*>(__this + _offset);
	U3CStartU3Ed__0_SetStateMachine_m026EB56B28EB904AAA58F8815A589D9393159893(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m7F5E0C9343A23B643154C9A2F094F7C652A793D7_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_1 = __this->___runnerPromise_0;
		NullCheck(L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_Task() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		// else if (ex != null)
		Exception_t* L_3 = __this->___ex_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return UniTask.FromException(ex);
		Exception_t* L_4 = __this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_5;
		L_5 = UniTask_FromException_m69BFDD356DB02E84451A39D61ABC27D9E6D746CB(L_4, NULL);
		return L_5;
	}

IL_0028:
	{
		// return UniTask.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_6 = ((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var))->___CompletedTask_3;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null) return;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (task.source == null) return;
		return;
	}

IL_000e:
	{
		// task.source.GetResult(task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_2 = (&__this->___task_0);
		RuntimeObject* L_3 = L_2->___source_0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_4 = (&__this->___task_0);
		int16_t L_5 = L_4->___token_1;
		NullCheck(L_3);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::GetResult(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ex = exception;
		Exception_t* L_1 = ___exception0;
		__this->___ex_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_1);
		return;
	}

IL_0010:
	{
		// runnerPromise.SetException(exception);
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		Exception_t* L_3 = ___exception0;
		NullCheck(L_2);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetException(System.Exception) */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// runnerPromise.SetResult();
		RuntimeObject* L_1 = __this->___runnerPromise_0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetResult() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WriteStorageObject_set_Collection_m74F653EE92C1BF100B2ED0EBB66C29CD0BD877F9_inline (WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCollectionU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCollectionU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WriteStorageObject_set_Key_mF3B8267FFD54AA790BF20044E636CDF8AE875BE3_inline (WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CKeyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WriteStorageObject_set_Value_mF1A01653E4534448233BA02BF40ACBADFAEC6FD2_inline (WriteStorageObject_t97CB2ECC7EEF8752A9AC8F54D6C46DB2DC0027C0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_mBEDC31229CCEE1592A4EE75293315FA38E923B49_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* L_0 = ___stateMachine0;
		U3CShowU3Ed__8_MoveNext_mC606D2D52723D1629AB746F6C0FCDC81E3FFD5BD(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mCB36A7F05AFA556B117C8107E38FAC03F008B882_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* L_0 = ___stateMachine0;
		U3CHideU3Ed__9_MoveNext_mBB7C739827AB95059B871897708329A18BAD2539(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4_m6956882398B2B98DC6B10C0377AD666FF029B76B_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CInitBeforeShowU3Ed__10_t20605F4D5DD8017BDD4296BBBBC4F018C146BBF4* L_0 = ___stateMachine0;
		U3CInitBeforeShowU3Ed__10_MoveNext_m88CD20B9647C243E7455A7308E2EFB4E0952DF4D(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1_mFAF0DCC384388E95D23989AAF2C5CF33926683D2_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CInitAfterHideU3Ed__11_tA443A2C4CFE8439E69EBFBBF9B947584C4DDD6E1* L_0 = ___stateMachine0;
		U3CInitAfterHideU3Ed__11_MoveNext_mC90B2535ACDAA279B80CB8A2313034B7FD8E032F(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0E24B1A79AF68425D5008B9D63878B086E773822_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* ___awaiter0, U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_3 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		bool L_4 = (bool)L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_6 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int16_t L_7 = (int16_t)L_6->___token_2;
		NullCheck(L_5);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1_m0C035985C0A36057B75C4C9E1717330845BD576A_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CShowU3Ed__8_t52C535709F23761F1BAF59023D46706CD06DE0D1*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_mF60102E049A410BBFD22A882AC63C68FFB6C2650_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* ___awaiter0, U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6_m02BABCC06F3A6BEF17B21922C5D1A6D1FF0365AE_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CHideU3Ed__9_t07F35D8812B2E4A1121591553AD10DB7191989F6*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_m4C4B1AA86D7C7210D0317CD405329E1A939FE0D8_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* L_0 = ___stateMachine0;
		U3CChangeStateU3Ed__7_MoveNext_m7658A7E28BF4E984DF8851C07585148E9ECC463C(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_mB4B8B079780D23E56A9AA0763F4FAE7A29A38F64_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* L_0 = ___stateMachine0;
		U3CShowHideProfilePanelU3Ed__9_MoveNext_m7595BDB4C9E4141BD9170A4AF1636AAC319C32E4(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6_mDB4EE4271C92627C7D307D3863C501ACC93E66C9_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CChangeStateU3Ed__7_tD4D4659E8BEFC7D9C1030A0EDB7A4D338EC259C6*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B_m531555DF542683F1083BEEDA0F26C90FCBE9CAB8_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CShowHideProfilePanelU3Ed__9_t38387568192F6A5C43FDAA5184EDA405BC35120B*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = ___task0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = (*(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		RuntimeObject* L_0 = __this->___source_0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		return (int32_t)(1);
	}

IL_000a:
	{
		// return source.GetStatus(token);
		RuntimeObject* L_1 = __this->___source_0;
		int16_t L_2 = __this->___token_1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m591BAA410B462C513C72FA77886CA9DBBC1B8DAC_inline (int32_t ___status0, const RuntimeMethod* method) 
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___status0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null)
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___continuation0;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		return;
	}

IL_0014:
	{
		// task.source.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_3 = (&__this->___task_0);
		RuntimeObject* L_4 = L_3->___source_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___continuation0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_7 = (&__this->___task_0);
		int16_t L_8 = L_7->___token_1;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = ___task0;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = (*(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___continuation0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		return;
	}

IL_0016:
	{
		// s.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___continuation0;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_7 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, L_5, (RuntimeObject*)L_6, L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
