#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void ProGraphGroup.Packages.GeneralManagers.EventManager::RegisterEvent(System.String,UnityEngine.Events.UnityAction`1<System.Object>)
extern void EventManager_RegisterEvent_m1344063260020734D3496DF297BA4BCDBF5FADAD (void);
// 0x00000002 System.Void ProGraphGroup.Packages.GeneralManagers.EventManager::RemoveEvent(System.String,UnityEngine.Events.UnityAction`1<System.Object>)
extern void EventManager_RemoveEvent_m064E1585506D14DE2622F5CC9EE71D0E5C2A9D76 (void);
// 0x00000003 System.Void ProGraphGroup.Packages.GeneralManagers.EventManager::SendEvent(System.String,System.Object)
extern void EventManager_SendEvent_mFD7B429DEC4438BAF61679EC636DBD61A19EA022 (void);
// 0x00000004 System.Void ProGraphGroup.Packages.GeneralManagers.EventManager::.ctor()
extern void EventManager__ctor_m9895C3971653C265306D909D88A6C816471190EF (void);
// 0x00000005 System.Void ProGraphGroup.Packages.GeneralManagers.EventData`1::.ctor()
static Il2CppMethodPointer s_methodPointers[5] = 
{
	EventManager_RegisterEvent_m1344063260020734D3496DF297BA4BCDBF5FADAD,
	EventManager_RemoveEvent_m064E1585506D14DE2622F5CC9EE71D0E5C2A9D76,
	EventManager_SendEvent_mFD7B429DEC4438BAF61679EC636DBD61A19EA022,
	EventManager__ctor_m9895C3971653C265306D909D88A6C816471190EF,
	NULL,
};
static const int32_t s_InvokerIndices[5] = 
{
	4531,
	4531,
	4531,
	11024,
	0,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x02000003, { 0, 2 } },
};
extern const uint32_t g_rgctx_UnityEvent_1__ctor_mD3E340F4FB251CDD27FEC98E3C76026456CDD549;
extern const uint32_t g_rgctx_UnityEvent_1_t5083CFD86B19BDE64B5CEE999C5E0A6258B8331B;
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnityEvent_1__ctor_mD3E340F4FB251CDD27FEC98E3C76026456CDD549 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnityEvent_1_t5083CFD86B19BDE64B5CEE999C5E0A6258B8331B },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_ProGraphGroup_packages_GeneralManagers_CodeGenModule;
const Il2CppCodeGenModule g_ProGraphGroup_packages_GeneralManagers_CodeGenModule = 
{
	"ProGraphGroup.packages.GeneralManagers.dll",
	5,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
