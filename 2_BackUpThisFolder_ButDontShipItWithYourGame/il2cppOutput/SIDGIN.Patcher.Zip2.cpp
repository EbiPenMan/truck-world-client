#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.EventHandler`1<SIDGIN.Zip.Core.DirectoryEventArgs>
struct EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t606011D801075A525E02DDE2533126EA96831FCF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Text.RegularExpressions.Regex>
struct List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Text.RegularExpressions.Regex[]
struct RegexU5BU5D_t0CD81C6C88D55013C8DCC10E24EC650E6B589CD0;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// SIDGIN.Zip.Checksum.Adler32
struct Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// SIDGIN.Zip.Core.CompletedFileHandler
struct CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712;
// SIDGIN.Zip.Checksum.Crc32
struct Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// SIDGIN.Zip.Core.DirectoryEventArgs
struct DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427;
// SIDGIN.Zip.Core.DirectoryFailureHandler
struct DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F;
// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// SIDGIN.Zip.Core.ExtendedPathFilter
struct ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56;
// SIDGIN.Zip.Core.FileFailureHandler
struct FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9;
// SIDGIN.Zip.Core.FileSystemScanner
struct FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// SIDGIN.Zip.Core.IScanFilter
struct IScanFilter_tF122614DE507658AB33C2F4FEFEE44AFE9B7D8F9;
// SIDGIN.Zip.Compression.Inflater
struct Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D;
// SIDGIN.Zip.Compression.InflaterDynHeader
struct InflaterDynHeader_t986B1D963F6760E051A2EC81EB4FC82C05847087;
// SIDGIN.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t4E00F3B0BA0CC6EF87260F4495D989EBD63D420B;
// SIDGIN.Zip.Compression.Streams.InflaterInputBuffer
struct InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0;
// SIDGIN.Zip.Compression.Streams.InflaterInputStream
struct InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF;
// SIDGIN.Zip.Core.InvalidNameException
struct InvalidNameException_t224CC7A7034BF2ABFEE26A5A4C865100FA0E2E61;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// SIDGIN.Zip.Core.NameAndSizeFilter
struct NameAndSizeFilter_tFB5F19B756059592F51D0F91FB2DBE42FB9E960C;
// SIDGIN.Zip.Core.NameFilter
struct NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// SIDGIN.Zip.Compression.Streams.OutputWindow
struct OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4;
// SIDGIN.Zip.Core.PathFilter
struct PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F;
// SIDGIN.Zip.Core.ProcessFileHandler
struct ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658;
// SIDGIN.Zip.Core.ProgressEventArgs
struct ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5;
// SIDGIN.Zip.Core.ProgressHandler
struct ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SIDGIN.Zip.Core.ScanEventArgs
struct ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C;
// SIDGIN.Zip.Core.ScanFailureEventArgs
struct ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// SIDGIN.Zip.SharpZipBaseException
struct SharpZipBaseException_t6BD13B3FCD6411DBCB5EF82C2519154630AF5D25;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// SIDGIN.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D;
// SIDGIN.Zip.Core.StreamUtils
struct StreamUtils_tA6C790EE60BBDA33C94FC41CDAC491822A797161;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// SIDGIN.Zip.Core.WindowsPathUtils
struct WindowsPathUtils_tB8FAB6012D04370ABCC45F9696F785CF46F0D77D;
// SIDGIN.Zip.ZipException
struct ZipException_t942AFD0552EDF6D1D7E052B6728602864C754FA3;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t606011D801075A525E02DDE2533126EA96831FCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScanFilter_tF122614DE507658AB33C2F4FEFEE44AFE9B7D8F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SharpZipBaseException_t6BD13B3FCD6411DBCB5EF82C2519154630AF5D25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipException_t942AFD0552EDF6D1D7E052B6728602864C754FA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1C8139CAA97B9F649363C43079B32D1BC64B4098____373B494F210C656134C5728D551D4C97B013EB33_3_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0C5D82EC0DDFC2A751DB2B8E28F3256ABDE01270;
IL2CPP_EXTERN_C String_t* _stringLiteral19735335CA05EBD60664E496D17C7EF387AC7C8B;
IL2CPP_EXTERN_C String_t* _stringLiteral1B51DC7F7A299FDF20D4111AA6D04EFD1D4FDD6B;
IL2CPP_EXTERN_C String_t* _stringLiteral20B43C997D46773915E000B0A5DBB64316FDD2E8;
IL2CPP_EXTERN_C String_t* _stringLiteral30D44D3EB7B534CAF51AD514F18FE7DD626129FE;
IL2CPP_EXTERN_C String_t* _stringLiteral36919DB41559814DAA1900952B7D08BD1CA0C036;
IL2CPP_EXTERN_C String_t* _stringLiteral4046FC9D8EE8B385D68BF287D8DA3B1D580A7F9A;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4EB4BE55A4E968B39CF168F95F155F0CE9E4A4BC;
IL2CPP_EXTERN_C String_t* _stringLiteral51F1DBAC2A477B647C00F35F5067C191B5F39517;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral6C4EDBD234A5402CD712C85FC166D1EAC35BB543;
IL2CPP_EXTERN_C String_t* _stringLiteral6E211FC3D3E3E7F3871E0DFFD781ED6B15E23EFB;
IL2CPP_EXTERN_C String_t* _stringLiteral77B8FF6E0BFB09EB9D8A7585234E9561468125FD;
IL2CPP_EXTERN_C String_t* _stringLiteral782D00C466F1D00D11446EA24B66EF967DD6C8E8;
IL2CPP_EXTERN_C String_t* _stringLiteral85948862F786C2751182A35B5AD1B848AD33D6B1;
IL2CPP_EXTERN_C String_t* _stringLiteral8FF23D129BAAFF88D5BFD6399DCAA2557F8F2030;
IL2CPP_EXTERN_C String_t* _stringLiteralB9F5D6B4F1F6DAC8F4EEB3AB72C41EBAB801FE5C;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12;
IL2CPP_EXTERN_C String_t* _stringLiteralCBC3EE4B235C41540E696A527B41C2EB3D741A62;
IL2CPP_EXTERN_C String_t* _stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC926AD4C478A88A08B54B90CE3FF6A65ECEF876;
IL2CPP_EXTERN_C String_t* _stringLiteralE162D745F1E1183DAA54D9155EB11BEC6D2C8466;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEB8888654E6E6DAB9D241F334E7479F929DE3AE7;
IL2CPP_EXTERN_C String_t* _stringLiteralEE6DF8099AE75DD42F869879C18E332A6FC033EF;
IL2CPP_EXTERN_C String_t* _stringLiteralF0A45CCAC3B8CC663DC29BD756A86295833579C1;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C const RuntimeMethod* Adler32_Update_m3B59EB9A46EE07D3D5DD78C0450C44FE4C5C4D63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4A787DEEEEC5DE5929770973860FEC86B05B6780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m55FBDEFD87196AB04BCF609F8E9974786DBAD283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Crc32_Update_m8BFAB22EDFDC65158D895203F1D885D44D2F21DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Crc32_Update_mD20CDDBE547B5713BB8A21AFD8AF414454FEC99F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEF636C425930F33650152B9DE223E7EB434D4120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD0E04EE35ED978F62AF479D40923B1C0D53673A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6A8AA947B2871E1D1E0CB19A41E15A724FC671A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtendedPathFilter_set_MaxDate_mBBB2C018D792801CDAD503221ABC8BC6C479D74B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtendedPathFilter_set_MaxSize_m266317B881848E84B33FC924C8FC3AB13F62D05F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtendedPathFilter_set_MinDate_m874ADEA69B150E868AF1D668610ECE60105AC63E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExtendedPathFilter_set_MinSize_mAB19097C2DD164EB7DF8CBD2FCA07970942DF5A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_Fill_m1A1FDE96F661D0D0E2DF4470CCC79326BBFDA29C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_Read_m114953143006FA767C9DEFFD9FC5C0106F8503EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_Seek_m15B68351448718AB92D2392870CC050573949974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_SetLength_m66269B0D2083E8D3E48E90A8A643F3588118D8AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_Skip_mE9D42EEF73265155396DCB6950EE97ADA3BBB78B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_WriteByte_m290389A0225DE58AE9C23512ACBC5486728A82B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_Write_m2CD3DDB6D8CF33CC5A7C2EA4601DAAFBAEC8A105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream__ctor_mB209FCF39C40EA69CF7344C87A9DA51B906E79B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_get_Length_m7D3CE7B4879D72F289D5A368F6533A75E20F40CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflaterInputStream_set_Position_m458C2B7C5617817191A603156331CF65DCA72E72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m493C7305EFDDA9D516DEFDECDD0CD3DB2C199829_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD070FD0A3A71BA9B5F9BA4E9434E964C51FF1DB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBC1C5FFF45A99496F0628E87B28281A394199E16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3E95A1E10F56ADBC1EBC77B1D80D077795EACB7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameAndSizeFilter_set_MaxSize_m853470B8DC9B49ADB767687BF210217252981F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameAndSizeFilter_set_MinSize_m1FF70376FA468CD20BBF1156731C34D9E3E49C74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameFilter_SplitQuoted_m1DEC3D12A5F2DEFF0CBD5E09D2217717B2362DCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OutputWindow_CopyDict_mFBBA34538A0F5CE247BD9A491DAADA2CA2CF01A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OutputWindow_CopyOutput_m9E81AD8B3C6CDDA4C2F954E844BA1423F5DEF3C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OutputWindow_Repeat_mB1C34CBADC9D538E7D0E7683EE4091F9F45E4303_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OutputWindow_Write_m67157241885F2E7B7BF8DC833CCDF5F17DE2FFA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamManipulator_CopyBytes_m4F754E0CFE66AA7016D11DD32A3A292E7D022C0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamManipulator_SetInput_m2649835AC1333EB17929A03C8AB5F582C7F37D8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamUtils_Copy_m493AF436E809D9628D9D32D64C4515B9D3C934B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamUtils_Copy_m9ECB45F549FAA1968CA81766726614A38707ECA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamUtils_ReadFully_m2E5F75ADFF17593E9D44530508929FB2EDAC0300_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Collections.Generic.List`1<System.Text.RegularExpressions.Regex>
struct List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RegexU5BU5D_t0CD81C6C88D55013C8DCC10E24EC650E6B589CD0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RegexU5BU5D_t0CD81C6C88D55013C8DCC10E24EC650E6B589CD0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// SIDGIN.Zip.Checksum.Adler32
struct Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F  : public RuntimeObject
{
	// System.UInt32 SIDGIN.Zip.Checksum.Adler32::checkValue
	uint32_t ___checkValue_1;
};

struct Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_StaticFields
{
	// System.UInt32 SIDGIN.Zip.Checksum.Adler32::BASE
	uint32_t ___BASE_0;
};
struct Il2CppArrayBounds;

// SIDGIN.Zip.Checksum.Crc32
struct Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA  : public RuntimeObject
{
	// System.UInt32 SIDGIN.Zip.Checksum.Crc32::checkValue
	uint32_t ___checkValue_3;
};

struct Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_StaticFields
{
	// System.UInt32 SIDGIN.Zip.Checksum.Crc32::crcInit
	uint32_t ___crcInit_0;
	// System.UInt32 SIDGIN.Zip.Checksum.Crc32::crcXor
	uint32_t ___crcXor_1;
	// System.UInt32[] SIDGIN.Zip.Checksum.Crc32::crcTable
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crcTable_2;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// SIDGIN.Zip.Core.FileSystemScanner
struct FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962  : public RuntimeObject
{
	// System.EventHandler`1<SIDGIN.Zip.Core.DirectoryEventArgs> SIDGIN.Zip.Core.FileSystemScanner::ProcessDirectory
	EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* ___ProcessDirectory_0;
	// SIDGIN.Zip.Core.ProcessFileHandler SIDGIN.Zip.Core.FileSystemScanner::ProcessFile
	ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* ___ProcessFile_1;
	// SIDGIN.Zip.Core.CompletedFileHandler SIDGIN.Zip.Core.FileSystemScanner::CompletedFile
	CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* ___CompletedFile_2;
	// SIDGIN.Zip.Core.DirectoryFailureHandler SIDGIN.Zip.Core.FileSystemScanner::DirectoryFailure
	DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* ___DirectoryFailure_3;
	// SIDGIN.Zip.Core.FileFailureHandler SIDGIN.Zip.Core.FileSystemScanner::FileFailure
	FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* ___FileFailure_4;
	// SIDGIN.Zip.Core.IScanFilter SIDGIN.Zip.Core.FileSystemScanner::fileFilter_
	RuntimeObject* ___fileFilter__5;
	// SIDGIN.Zip.Core.IScanFilter SIDGIN.Zip.Core.FileSystemScanner::directoryFilter_
	RuntimeObject* ___directoryFilter__6;
	// System.Boolean SIDGIN.Zip.Core.FileSystemScanner::alive_
	bool ___alive__7;
};

// SIDGIN.Zip.Compression.Inflater
struct Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D  : public RuntimeObject
{
	// System.Int32 SIDGIN.Zip.Compression.Inflater::mode
	int32_t ___mode_17;
	// System.Int32 SIDGIN.Zip.Compression.Inflater::readAdler
	int32_t ___readAdler_18;
	// System.Int32 SIDGIN.Zip.Compression.Inflater::neededBits
	int32_t ___neededBits_19;
	// System.Int32 SIDGIN.Zip.Compression.Inflater::repLength
	int32_t ___repLength_20;
	// System.Int32 SIDGIN.Zip.Compression.Inflater::repDist
	int32_t ___repDist_21;
	// System.Int32 SIDGIN.Zip.Compression.Inflater::uncomprLen
	int32_t ___uncomprLen_22;
	// System.Boolean SIDGIN.Zip.Compression.Inflater::isLastBlock
	bool ___isLastBlock_23;
	// System.Int64 SIDGIN.Zip.Compression.Inflater::totalOut
	int64_t ___totalOut_24;
	// System.Int64 SIDGIN.Zip.Compression.Inflater::totalIn
	int64_t ___totalIn_25;
	// System.Boolean SIDGIN.Zip.Compression.Inflater::noHeader
	bool ___noHeader_26;
	// SIDGIN.Zip.Compression.Streams.StreamManipulator SIDGIN.Zip.Compression.Inflater::input
	StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* ___input_27;
	// SIDGIN.Zip.Compression.Streams.OutputWindow SIDGIN.Zip.Compression.Inflater::outputWindow
	OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4* ___outputWindow_28;
	// SIDGIN.Zip.Compression.InflaterDynHeader SIDGIN.Zip.Compression.Inflater::dynHeader
	InflaterDynHeader_t986B1D963F6760E051A2EC81EB4FC82C05847087* ___dynHeader_29;
	// SIDGIN.Zip.Compression.InflaterHuffmanTree SIDGIN.Zip.Compression.Inflater::litlenTree
	InflaterHuffmanTree_t4E00F3B0BA0CC6EF87260F4495D989EBD63D420B* ___litlenTree_30;
	// SIDGIN.Zip.Compression.InflaterHuffmanTree SIDGIN.Zip.Compression.Inflater::distTree
	InflaterHuffmanTree_t4E00F3B0BA0CC6EF87260F4495D989EBD63D420B* ___distTree_31;
	// SIDGIN.Zip.Checksum.Adler32 SIDGIN.Zip.Compression.Inflater::adler
	Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F* ___adler_32;
};

struct Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D_StaticFields
{
	// System.Int32[] SIDGIN.Zip.Compression.Inflater::CPLENS
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CPLENS_0;
	// System.Int32[] SIDGIN.Zip.Compression.Inflater::CPLEXT
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CPLEXT_1;
	// System.Int32[] SIDGIN.Zip.Compression.Inflater::CPDIST
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CPDIST_2;
	// System.Int32[] SIDGIN.Zip.Compression.Inflater::CPDEXT
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CPDEXT_3;
};

// SIDGIN.Zip.Compression.Streams.InflaterInputBuffer
struct InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0  : public RuntimeObject
{
	// System.Int32 SIDGIN.Zip.Compression.Streams.InflaterInputBuffer::rawLength
	int32_t ___rawLength_0;
	// System.Byte[] SIDGIN.Zip.Compression.Streams.InflaterInputBuffer::rawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawData_1;
	// System.Int32 SIDGIN.Zip.Compression.Streams.InflaterInputBuffer::clearTextLength
	int32_t ___clearTextLength_2;
	// System.Byte[] SIDGIN.Zip.Compression.Streams.InflaterInputBuffer::clearText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___clearText_3;
	// System.Int32 SIDGIN.Zip.Compression.Streams.InflaterInputBuffer::available
	int32_t ___available_4;
	// System.IO.Stream SIDGIN.Zip.Compression.Streams.InflaterInputBuffer::inputStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___inputStream_5;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// SIDGIN.Zip.Core.NameFilter
struct NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B  : public RuntimeObject
{
	// System.String SIDGIN.Zip.Core.NameFilter::filter_
	String_t* ___filter__0;
	// System.Collections.Generic.List`1<System.Text.RegularExpressions.Regex> SIDGIN.Zip.Core.NameFilter::inclusions_
	List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* ___inclusions__1;
	// System.Collections.Generic.List`1<System.Text.RegularExpressions.Regex> SIDGIN.Zip.Core.NameFilter::exclusions_
	List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* ___exclusions__2;
};

// SIDGIN.Zip.Compression.Streams.OutputWindow
struct OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4  : public RuntimeObject
{
	// System.Byte[] SIDGIN.Zip.Compression.Streams.OutputWindow::window
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___window_2;
	// System.Int32 SIDGIN.Zip.Compression.Streams.OutputWindow::windowEnd
	int32_t ___windowEnd_3;
	// System.Int32 SIDGIN.Zip.Compression.Streams.OutputWindow::windowFilled
	int32_t ___windowFilled_4;
};

// SIDGIN.Zip.Core.PathFilter
struct PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F  : public RuntimeObject
{
	// SIDGIN.Zip.Core.NameFilter SIDGIN.Zip.Core.PathFilter::nameFilter_
	NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* ___nameFilter__0;
};

// SIDGIN.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D  : public RuntimeObject
{
	// System.Byte[] SIDGIN.Zip.Compression.Streams.StreamManipulator::window_
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___window__0;
	// System.Int32 SIDGIN.Zip.Compression.Streams.StreamManipulator::windowStart_
	int32_t ___windowStart__1;
	// System.Int32 SIDGIN.Zip.Compression.Streams.StreamManipulator::windowEnd_
	int32_t ___windowEnd__2;
	// System.UInt32 SIDGIN.Zip.Compression.Streams.StreamManipulator::buffer_
	uint32_t ___buffer__3;
	// System.Int32 SIDGIN.Zip.Compression.Streams.StreamManipulator::bitsInBuffer_
	int32_t ___bitsInBuffer__4;
};

// SIDGIN.Zip.Core.StreamUtils
struct StreamUtils_tA6C790EE60BBDA33C94FC41CDAC491822A797161  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// SIDGIN.Zip.Core.WindowsPathUtils
struct WindowsPathUtils_tB8FAB6012D04370ABCC45F9696F785CF46F0D77D  : public RuntimeObject
{
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Text.RegularExpressions.Regex>
struct Enumerator_tF5EEAF85CFB94340971BB7C9A650F8EAAE74C0A1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____current_3;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
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

// SIDGIN.Zip.Core.NameAndSizeFilter
struct NameAndSizeFilter_tFB5F19B756059592F51D0F91FB2DBE42FB9E960C  : public PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F
{
	// System.Int64 SIDGIN.Zip.Core.NameAndSizeFilter::minSize_
	int64_t ___minSize__1;
	// System.Int64 SIDGIN.Zip.Core.NameAndSizeFilter::maxSize_
	int64_t ___maxSize__2;
};

// SIDGIN.Zip.Core.ProgressEventArgs
struct ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String SIDGIN.Zip.Core.ProgressEventArgs::name_
	String_t* ___name__1;
	// System.Int64 SIDGIN.Zip.Core.ProgressEventArgs::processed_
	int64_t ___processed__2;
	// System.Int64 SIDGIN.Zip.Core.ProgressEventArgs::target_
	int64_t ___target__3;
	// System.Boolean SIDGIN.Zip.Core.ProgressEventArgs::continueRunning_
	bool ___continueRunning__4;
};

// SIDGIN.Zip.Core.ScanEventArgs
struct ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String SIDGIN.Zip.Core.ScanEventArgs::name_
	String_t* ___name__1;
	// System.Boolean SIDGIN.Zip.Core.ScanEventArgs::continueRunning_
	bool ___continueRunning__2;
};

// SIDGIN.Zip.Core.ScanFailureEventArgs
struct ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String SIDGIN.Zip.Core.ScanFailureEventArgs::name_
	String_t* ___name__1;
	// System.Exception SIDGIN.Zip.Core.ScanFailureEventArgs::exception_
	Exception_t* ___exception__2;
	// System.Boolean SIDGIN.Zip.Core.ScanFailureEventArgs::continueRunning_
	bool ___continueRunning__3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct __StaticArrayInitTypeSizeU3D1024_tCB029B84A35F2A402B6BE59D6273F2EDDC860839 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_tCB029B84A35F2A402B6BE59D6273F2EDDC860839__padding[1024];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116
struct __StaticArrayInitTypeSizeU3D116_tD59E2AA99E5748E34B61275D31E22DDA5E1A38EA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D116_tD59E2AA99E5748E34B61275D31E22DDA5E1A38EA__padding[116];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_t9649FEA2036F7902E6D8BCF5C662855D794DD37F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t9649FEA2036F7902E6D8BCF5C662855D794DD37F__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t21D24D4BB955435D3FD62BA10A4AB894E0FDE90A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t21D24D4BB955435D3FD62BA10A4AB894E0FDE90A__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_tCBBFE7FDC0FC6DEA93656C4EA8B3CA8B6A194C4F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_tCBBFE7FDC0FC6DEA93656C4EA8B3CA8B6A194C4F__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
struct __StaticArrayInitTypeSizeU3D76_t3EF591C36E707B2861C486FFDA18F56A711F61ED 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t3EF591C36E707B2861C486FFDA18F56A711F61ED__padding[76];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=78
struct __StaticArrayInitTypeSizeU3D78_t9693A78E1D44C4786556E4F5B05675065D28088F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D78_t9693A78E1D44C4786556E4F5B05675065D28088F__padding[78];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t1C8139CAA97B9F649363C43079B32D1BC64B4098  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t1C8139CAA97B9F649363C43079B32D1BC64B4098_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::00C40B3F013EDA60390F2E849C4581815A9419E4
	__StaticArrayInitTypeSizeU3D40_tCBBFE7FDC0FC6DEA93656C4EA8B3CA8B6A194C4F ___00C40B3F013EDA60390F2E849C4581815A9419E4_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::03B569C38E3CD6B720388919D43735A904012C52
	__StaticArrayInitTypeSizeU3D40_tCBBFE7FDC0FC6DEA93656C4EA8B3CA8B6A194C4F ___03B569C38E3CD6B720388919D43735A904012C52_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38
	__StaticArrayInitTypeSizeU3D76_t3EF591C36E707B2861C486FFDA18F56A711F61ED ___1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::373B494F210C656134C5728D551D4C97B013EB33
	__StaticArrayInitTypeSizeU3D1024_tCB029B84A35F2A402B6BE59D6273F2EDDC860839 ___373B494F210C656134C5728D551D4C97B013EB33_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>::67C0E784F3654B008A81E2988588CF4956CCF3DA
	__StaticArrayInitTypeSizeU3D116_tD59E2AA99E5748E34B61275D31E22DDA5E1A38EA ___67C0E784F3654B008A81E2988588CF4956CCF3DA_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::6BC4EAB0D604C8D4599021AD611C5DBA7FF7E306
	__StaticArrayInitTypeSizeU3D40_tCBBFE7FDC0FC6DEA93656C4EA8B3CA8B6A194C4F ___6BC4EAB0D604C8D4599021AD611C5DBA7FF7E306_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::79D521E6E3E55103005E9CC3FA43B3174FAF090F
	__StaticArrayInitTypeSizeU3D120_t9649FEA2036F7902E6D8BCF5C662855D794DD37F ___79D521E6E3E55103005E9CC3FA43B3174FAF090F_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::89CE0E8EA590FD37283D6BEFD9E6805C8C47ADBD
	__StaticArrayInitTypeSizeU3D16_t21D24D4BB955435D3FD62BA10A4AB894E0FDE90A ___89CE0E8EA590FD37283D6BEFD9E6805C8C47ADBD_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=78 <PrivateImplementationDetails>::B9B7DC2B3046EDDA4191909521AEE129E259401C
	__StaticArrayInitTypeSizeU3D78_t9693A78E1D44C4786556E4F5B05675065D28088F ___B9B7DC2B3046EDDA4191909521AEE129E259401C_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::D068832E6B13A623916709C1E0E25ADCBE7B455F
	__StaticArrayInitTypeSizeU3D120_t9649FEA2036F7902E6D8BCF5C662855D794DD37F ___D068832E6B13A623916709C1E0E25ADCBE7B455F_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>::D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF
	__StaticArrayInitTypeSizeU3D116_tD59E2AA99E5748E34B61275D31E22DDA5E1A38EA ___D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::DB7C763C9670DD0F6ED34B75B3410A39D835F964
	__StaticArrayInitTypeSizeU3D40_tCBBFE7FDC0FC6DEA93656C4EA8B3CA8B6A194C4F ___DB7C763C9670DD0F6ED34B75B3410A39D835F964_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::ED032026472FF77A8A17BA4AFF3FC57AF4B4BF79
	__StaticArrayInitTypeSizeU3D40_tCBBFE7FDC0FC6DEA93656C4EA8B3CA8B6A194C4F ___ED032026472FF77A8A17BA4AFF3FC57AF4B4BF79_12;
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

// SIDGIN.Zip.Core.DirectoryEventArgs
struct DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427  : public ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C
{
	// System.Boolean SIDGIN.Zip.Core.DirectoryEventArgs::hasMatchingFiles_
	bool ___hasMatchingFiles__3;
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

// SIDGIN.Zip.Core.ExtendedPathFilter
struct ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56  : public PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F
{
	// System.Int64 SIDGIN.Zip.Core.ExtendedPathFilter::minSize_
	int64_t ___minSize__1;
	// System.Int64 SIDGIN.Zip.Core.ExtendedPathFilter::maxSize_
	int64_t ___maxSize__2;
	// System.DateTime SIDGIN.Zip.Core.ExtendedPathFilter::minDate_
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___minDate__3;
	// System.DateTime SIDGIN.Zip.Core.ExtendedPathFilter::maxDate_
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___maxDate__4;
};

// SIDGIN.Zip.Compression.Streams.InflaterInputStream
struct InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Boolean SIDGIN.Zip.Compression.Streams.InflaterInputStream::<IsStreamOwner>k__BackingField
	bool ___U3CIsStreamOwnerU3Ek__BackingField_4;
	// SIDGIN.Zip.Compression.Inflater SIDGIN.Zip.Compression.Streams.InflaterInputStream::inf
	Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* ___inf_5;
	// SIDGIN.Zip.Compression.Streams.InflaterInputBuffer SIDGIN.Zip.Compression.Streams.InflaterInputStream::inputBuffer
	InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0* ___inputBuffer_6;
	// System.IO.Stream SIDGIN.Zip.Compression.Streams.InflaterInputStream::baseInputStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseInputStream_7;
	// System.Int64 SIDGIN.Zip.Compression.Streams.InflaterInputStream::csize
	int64_t ___csize_8;
	// System.Boolean SIDGIN.Zip.Compression.Streams.InflaterInputStream::isClosed
	bool ___isClosed_9;
};

// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.IO.SeekOrigin
struct SeekOrigin_t7EB9AD0EDF26368A40F48FA2098F02160B1E8000 
{
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;
};

// Interop/Sys/FileStatusFlags
struct FileStatusFlags_tB53E2B9A54305CDCEA49884DEEDB8C62C8ACC9C9 
{
	// System.Int32 Interop/Sys/FileStatusFlags::value__
	int32_t ___value___2;
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

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// SIDGIN.Zip.SharpZipBaseException
struct SharpZipBaseException_t6BD13B3FCD6411DBCB5EF82C2519154630AF5D25  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.EventHandler`1<SIDGIN.Zip.Core.DirectoryEventArgs>
struct EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// SIDGIN.Zip.Core.CompletedFileHandler
struct CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712  : public MulticastDelegate_t
{
};

// SIDGIN.Zip.Core.DirectoryFailureHandler
struct DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F  : public MulticastDelegate_t
{
};

// SIDGIN.Zip.Core.FileFailureHandler
struct FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB  : public MulticastDelegate_t
{
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// SIDGIN.Zip.Core.InvalidNameException
struct InvalidNameException_t224CC7A7034BF2ABFEE26A5A4C865100FA0E2E61  : public SharpZipBaseException_t6BD13B3FCD6411DBCB5EF82C2519154630AF5D25
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// SIDGIN.Zip.Core.ProcessFileHandler
struct ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658  : public MulticastDelegate_t
{
};

// SIDGIN.Zip.Core.ProgressHandler
struct ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995  : public MulticastDelegate_t
{
};

// SIDGIN.Zip.ZipException
struct ZipException_t942AFD0552EDF6D1D7E052B6728602864C754FA3  : public SharpZipBaseException_t6BD13B3FCD6411DBCB5EF82C2519154630AF5D25
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
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


// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Char>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m55FBDEFD87196AB04BCF609F8E9974786DBAD283_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, Il2CppChar ___value1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.ArraySegment`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArraySegment_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4A787DEEEEC5DE5929770973860FEC86B05B6780_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;

// System.Void SIDGIN.Zip.Compression.Inflater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater__ctor_m92A891C3F327BE5AFBFF063B862F85B1B7082042 (Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* __this, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,SIDGIN.Zip.Compression.Inflater,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream__ctor_mB209FCF39C40EA69CF7344C87A9DA51B906E79B2 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseInputStream0, Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* ___inflater1, int32_t ___bufferSize2, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputBuffer::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputBuffer__ctor_m0C67E12C68FEF38CD1F61BD799ECE5B4524D6D5E (InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___bufferSize1, const RuntimeMethod* method) ;
// System.Boolean SIDGIN.Zip.Compression.Inflater::get_IsFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_get_IsFinished_m7BFFF18388468483811B7835E250AF4F186FAAF0 (Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* __this, const RuntimeMethod* method) ;
// System.Int32 SIDGIN.Zip.Compression.Streams.InflaterInputBuffer::get_Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflaterInputBuffer_get_Available_m40E6965E81140B07A791EC0950D411D48E1B90EE (InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0* __this, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputBuffer::Fill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputBuffer_Fill_m9BECFAE7B4346F05A93D4CB22A8E5EDC320A8FC8 (InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0* __this, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.SharpZipBaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharpZipBaseException__ctor_m3C00EF79B79E007897B73AD4EE0CF70475A9465C (SharpZipBaseException_t6BD13B3FCD6411DBCB5EF82C2519154630AF5D25* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputBuffer::SetInflaterInput(SIDGIN.Zip.Compression.Inflater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputBuffer_SetInflaterInput_mA751E729660E47223B45953B57DB9A86CBFE1EA3 (InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0* __this, Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* ___inflater0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean SIDGIN.Zip.Compression.Streams.InflaterInputStream::get_IsStreamOwner()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InflaterInputStream_get_IsStreamOwner_m738FAE723906D26C8E1A976C82732FF163C165D9_inline (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Boolean SIDGIN.Zip.Compression.Inflater::get_IsNeedingDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_get_IsNeedingDictionary_m8E46A2A5700A71D123C50E0DC7CEC09F9A76B838 (Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* __this, const RuntimeMethod* method) ;
// System.Int32 SIDGIN.Zip.Compression.Inflater::Inflate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflater_Inflate_mC45796066F02E2766AFD9F62817DB881B1C44D5F (Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Boolean SIDGIN.Zip.Compression.Inflater::get_IsNeedingInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_get_IsNeedingInput_m2BBAFDE7A06B35F181A29C342D5C94927B9C0703 (Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* __this, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputStream::Fill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_Fill_m1A1FDE96F661D0D0E2DF4470CCC79326BBFDA29C (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.ZipException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipException__ctor_m45005345F34D2F38AFD990FBAF1EB9F603782049 (ZipException_t942AFD0552EDF6D1D7E052B6728602864C754FA3* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Compression.Streams.OutputWindow::SlowRepeat(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_SlowRepeat_m7F39323E70FDA375748C9E4B45ED4095BB62E906 (OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4* __this, int32_t ___repStart0, int32_t ___length1, int32_t ___distance2, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 SIDGIN.Zip.Compression.Streams.StreamManipulator::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_get_AvailableBytes_mFEA0C2B31F2F278BD1D67FA1170AB636E3BCFA93 (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, const RuntimeMethod* method) ;
// System.Int32 SIDGIN.Zip.Compression.Streams.StreamManipulator::CopyBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_CopyBytes_m4F754E0CFE66AA7016D11DD32A3A292E7D022C0F (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 SIDGIN.Zip.Compression.Streams.StreamManipulator::PeekBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_PeekBits_m00AD51BE99D51B80E1AE95DC3ABECC7F0F33EF70 (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, int32_t ___bitCount0, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Compression.Streams.StreamManipulator::DropBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamManipulator_DropBits_mECE477A75423050DB042D3C3A45E0AB2234AE504 (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, int32_t ___bitCount0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.ScanEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScanEventArgs__ctor_m64F74914347A0170BF5AF433B48A8BD6F053FE72 (ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.PathFilter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathFilter__ctor_mD1AEFBF119BD4C84CCBD17CF0CB225BB23946819 (PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F* __this, String_t* ___filter0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.ScanFailureEventArgs::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScanFailureEventArgs__ctor_m9F6061EAA99B109CCD32CB249E152360C87DEBCF (ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* __this, String_t* ___name0, Exception_t* ___e1, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.DirectoryFailureHandler::Invoke(System.Object,SIDGIN.Zip.Core.ScanFailureEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_inline (DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method) ;
// System.Boolean SIDGIN.Zip.Core.ScanFailureEventArgs::get_ContinueRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScanFailureEventArgs_get_ContinueRunning_m8174BE721C17E242B63D9E5C31D893ED1C5D65E4 (ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* __this, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.FileFailureHandler::Invoke(System.Object,SIDGIN.Zip.Core.ScanFailureEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_inline (FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.ProcessFileHandler::Invoke(System.Object,SIDGIN.Zip.Core.ScanEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_inline (ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method) ;
// System.Boolean SIDGIN.Zip.Core.ScanEventArgs::get_ContinueRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScanEventArgs_get_ContinueRunning_mE8AEA58321232E515D40FF03C05376FC304A79DB (ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* __this, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.CompletedFileHandler::Invoke(System.Object,SIDGIN.Zip.Core.ScanEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_inline (CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.DirectoryEventArgs::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryEventArgs__ctor_mCF44AAFA905196B9BAD56DA8D38C0BA6594B841D (DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427* __this, String_t* ___name0, bool ___hasMatchingFiles1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<SIDGIN.Zip.Core.DirectoryEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m2D9DCBA40FED04CD9BCC237A53B79A53770C4185_inline (EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* __this, RuntimeObject* ___sender0, DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2*, RuntimeObject*, DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void SIDGIN.Zip.Core.FileSystemScanner::ScanDir(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner_ScanDir_mE402D3B17DECC02FFC59434EEC7A7B3C0C7742FB (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___directory0, bool ___recurse1, const RuntimeMethod* method) ;
// System.String[] System.IO.Directory::GetFiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Directory_GetFiles_m4B12F04FB52DA5311463669EBB83321CB0CF284B (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.FileSystemScanner::OnProcessDirectory(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner_OnProcessDirectory_m91A62D2A1554C75802BB5993D74BF384B440215F (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___directory0, bool ___hasMatchingFiles1, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.FileSystemScanner::OnProcessFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner_OnProcessFile_m015AE2E0445C1E2BE90D319F0DF68D814E01DADB (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___file0, const RuntimeMethod* method) ;
// System.Boolean SIDGIN.Zip.Core.FileSystemScanner::OnFileFailure(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystemScanner_OnFileFailure_m72077C4C61AFA5A0C3C927EDB0C00C333ADBAC2B (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___file0, Exception_t* ___e1, const RuntimeMethod* method) ;
// System.Boolean SIDGIN.Zip.Core.FileSystemScanner::OnDirectoryFailure(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystemScanner_OnDirectoryFailure_mC1ACDB81D8A8987480EF2A3059A97681A293FC53 (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___directory0, Exception_t* ___e1, const RuntimeMethod* method) ;
// System.String[] System.IO.Directory::GetDirectories(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Directory_GetDirectories_m94C31CB11C7AFC316D40DC06C122C2A45F42EC51 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.SharpZipBaseException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharpZipBaseException__ctor_m6138A4CCE598F9FE766DBB8905EBFC76AAF661DD (SharpZipBaseException_t6BD13B3FCD6411DBCB5EF82C2519154630AF5D25* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.Regex>::.ctor()
inline void List_1__ctor_mBC1C5FFF45A99496F0628E87B28281A394199E16 (List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void SIDGIN.Zip.Core.NameFilter::Compile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameFilter_Compile_mD4FFA6C401B9AA48DD1F4F69E18D3AC72451EB4F (NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String[] SIDGIN.Zip.Core.NameFilter::SplitQuoted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameFilter_SplitQuoted_m1DEC3D12A5F2DEFF0CBD5E09D2217717B2362DCF (String_t* ___original0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Char>(T[],T)
inline int32_t Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m55FBDEFD87196AB04BCF609F8E9974786DBAD283 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, Il2CppChar, const RuntimeMethod*))Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m55FBDEFD87196AB04BCF609F8E9974786DBAD283_gshared)(___array0, ___value1, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Text.RegularExpressions.Regex>::get_Count()
inline int32_t List_1_get_Count_m3E95A1E10F56ADBC1EBC77B1D80D077795EACB7A_inline (List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Text.RegularExpressions.Regex>::GetEnumerator()
inline Enumerator_tF5EEAF85CFB94340971BB7C9A650F8EAAE74C0A1 List_1_GetEnumerator_mD070FD0A3A71BA9B5F9BA4E9434E964C51FF1DB1 (List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF5EEAF85CFB94340971BB7C9A650F8EAAE74C0A1 (*) (List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Text.RegularExpressions.Regex>::Dispose()
inline void Enumerator_Dispose_mEF636C425930F33650152B9DE223E7EB434D4120 (Enumerator_tF5EEAF85CFB94340971BB7C9A650F8EAAE74C0A1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5EEAF85CFB94340971BB7C9A650F8EAAE74C0A1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Text.RegularExpressions.Regex>::get_Current()
inline Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* Enumerator_get_Current_m6A8AA947B2871E1D1E0CB19A41E15A724FC671A3_inline (Enumerator_tF5EEAF85CFB94340971BB7C9A650F8EAAE74C0A1* __this, const RuntimeMethod* method)
{
	return ((  Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* (*) (Enumerator_tF5EEAF85CFB94340971BB7C9A650F8EAAE74C0A1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Text.RegularExpressions.Regex>::MoveNext()
inline bool Enumerator_MoveNext_mD0E04EE35ED978F62AF479D40923B1C0D53673A2 (Enumerator_tF5EEAF85CFB94340971BB7C9A650F8EAAE74C0A1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5EEAF85CFB94340971BB7C9A650F8EAAE74C0A1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean SIDGIN.Zip.Core.NameFilter::IsIncluded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameFilter_IsIncluded_m8C847D32EF59D5B09F60056A6570A9F8CD931C6D (NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean SIDGIN.Zip.Core.NameFilter::IsExcluded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameFilter_IsExcluded_m9252F6ED52CDAD819C85CC9436BAC88A114F81DA (NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.RegularExpressions.Regex>::Add(T)
inline void List_1_Add_m493C7305EFDDA9D516DEFDECDD0CD3DB2C199829_inline (List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* __this, Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863*, Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void SIDGIN.Zip.Core.NameFilter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameFilter__ctor_mE959901F91FD2E38BADEDDBD114D64C524BF84F8 (NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* __this, String_t* ___filter0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFullPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFullPath_m17A1AD4E216D884E3DF3208BF44F4E40823BAA23 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean SIDGIN.Zip.Core.NameFilter::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameFilter_IsMatch_mD16A90D98AE20A48A65F4CB675025492D184F5AC (NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.ExtendedPathFilter::set_MinSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedPathFilter_set_MinSize_mAB19097C2DD164EB7DF8CBD2FCA07970942DF5A0 (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.ExtendedPathFilter::set_MaxSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedPathFilter_set_MaxSize_m266317B881848E84B33FC924C8FC3AB13F62D05F (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.ExtendedPathFilter::set_MinDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedPathFilter_set_MinDate_m874ADEA69B150E868AF1D668610ECE60105AC63E (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.ExtendedPathFilter::set_MaxDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedPathFilter_set_MaxDate_mBBB2C018D792801CDAD503221ABC8BC6C479D74B (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Boolean SIDGIN.Zip.Core.PathFilter::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathFilter_IsMatch_m2FAF0EBC84280117E6046C0D12A98C9C58AE7A79 (PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___fileName0, const RuntimeMethod* method) ;
// System.Int64 SIDGIN.Zip.Core.ExtendedPathFilter::get_MinSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ExtendedPathFilter_get_MinSize_m37E96CEF3A4FF5C915C93B40DD1D0B525FDE8429 (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, const RuntimeMethod* method) ;
// System.Int64 System.IO.FileInfo::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, const RuntimeMethod* method) ;
// System.Int64 SIDGIN.Zip.Core.ExtendedPathFilter::get_MaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ExtendedPathFilter_get_MaxSize_m86F3984E00FBBF5FB0EBE2CAF75747C20E563FDE (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, const RuntimeMethod* method) ;
// System.DateTime SIDGIN.Zip.Core.ExtendedPathFilter::get_MinDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ExtendedPathFilter_get_MinDate_m487187AE5AAEB8B6E475F32BA908EC3210C538AE (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, const RuntimeMethod* method) ;
// System.DateTime System.IO.FileSystemInfo::get_LastWriteTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D FileSystemInfo_get_LastWriteTime_m5009457B3D837E929AF4FBC9E2738F15BB6476C5 (FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_LessThanOrEqual_m458241757285ECEABEDA1F8105546FBFCD9ECB80 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t21, const RuntimeMethod* method) ;
// System.DateTime SIDGIN.Zip.Core.ExtendedPathFilter::get_MaxDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ExtendedPathFilter_get_MaxDate_m252DA3B70035365AF0007BDC6941CEC8AE30A98F (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_GreaterThanOrEqual_mBEEE5CB06F515D621E03D91F54AB26EEA73F1D09 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t21, const RuntimeMethod* method) ;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_GreaterThan_mA9021939CEE6D93308C1CFB63C7E6D5CA58F7B92 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___t21, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.NameAndSizeFilter::set_MinSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameAndSizeFilter_set_MinSize_m1FF70376FA468CD20BBF1156731C34D9E3E49C74 (NameAndSizeFilter_tFB5F19B756059592F51D0F91FB2DBE42FB9E960C* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.NameAndSizeFilter::set_MaxSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameAndSizeFilter_set_MaxSize_m853470B8DC9B49ADB767687BF210217252981F94 (NameAndSizeFilter_tFB5F19B756059592F51D0F91FB2DBE42FB9E960C* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Int64 SIDGIN.Zip.Core.NameAndSizeFilter::get_MinSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NameAndSizeFilter_get_MinSize_m032B4FC10C23FBC56C12086FFE316162E8088144 (NameAndSizeFilter_tFB5F19B756059592F51D0F91FB2DBE42FB9E960C* __this, const RuntimeMethod* method) ;
// System.Int64 SIDGIN.Zip.Core.NameAndSizeFilter::get_MaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NameAndSizeFilter_get_MaxSize_mD388CE8B4FF93A3CE56FC938800C8B0ED57E44D8 (NameAndSizeFilter_tFB5F19B756059592F51D0F91FB2DBE42FB9E960C* __this, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.StreamUtils::ReadFully(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamUtils_ReadFully_m2E5F75ADFF17593E9D44530508929FB2EDAC0300 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Void System.IO.EndOfStreamException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m154EAE9BDAE2A8EB0EE6714D881FA7075628C582 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.StreamUtils::Copy(System.IO.Stream,System.IO.Stream,System.Byte[],SIDGIN.Zip.Core.ProgressHandler,System.TimeSpan,System.Object,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamUtils_Copy_m493AF436E809D9628D9D32D64C4515B9D3C934B7 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___source0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___destination1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer2, ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* ___progressHandler3, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___updateInterval4, RuntimeObject* ___sender5, String_t* ___name6, int64_t ___fixedTarget7, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.ProgressEventArgs::.ctor(System.String,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressEventArgs__ctor_mC12B116D837718BA8141C6374371800BD43BB79A (ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* __this, String_t* ___name0, int64_t ___processed1, int64_t ___target2, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Core.ProgressHandler::Invoke(System.Object,SIDGIN.Zip.Core.ProgressEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_inline (ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___sender0, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* ___e1, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_GreaterThan_m8DAC0E8CCA11AFD73BAA4BE5BFB2FA4D65CFB78B (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t10, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t21, const RuntimeMethod* method) ;
// System.Boolean SIDGIN.Zip.Core.ProgressEventArgs::get_ContinueRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProgressEventArgs_get_ContinueRunning_m5BA74D9AF41DF3546314CB7ED4F395C9DE4F3E2F (ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Checksum.Adler32::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32_Reset_mB4D01A80E6279CC52C4E8FDF94A3555F6BC5F1AB (Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Void SIDGIN.Zip.Checksum.Adler32::Update(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32_Update_m3DC84D4FF75CFF2E6374B450B0339EE067C539C5 (Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Void SIDGIN.Zip.Checksum.Crc32::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Reset_mA0F66B7373F11EB8CCB8E261F12A6242B8C0DE69 (Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA* __this, const RuntimeMethod* method) ;
// System.Void SIDGIN.Zip.Checksum.Crc32::Update(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Update_m2623447595663DE0D7268214811E38F14A15E262 (Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.ArraySegment`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
inline RuntimeObject* ArraySegment_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4A787DEEEEC5DE5929770973860FEC86B05B6780 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4A787DEEEEC5DE5929770973860FEC86B05B6780_gshared)(__this, method);
}
// System.Void SIDGIN.Zip.Checksum.Crc32::Update(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Update_mD20CDDBE547B5713BB8A21AFD8AF414454FEC99F (Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA* __this, int32_t ___bval0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream__ctor_m31E735E621BFBB15EBC2F7CCE8DE8EA5954338C4 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseInputStream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___baseInputStream0;
		Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* L_1 = (Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D*)il2cpp_codegen_object_new(Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Inflater__ctor_m92A891C3F327BE5AFBFF063B862F85B1B7082042(L_1, NULL);
		InflaterInputStream__ctor_mB209FCF39C40EA69CF7344C87A9DA51B906E79B2(__this, L_0, L_1, ((int32_t)4096), NULL);
		return;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,SIDGIN.Zip.Compression.Inflater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream__ctor_m34BA85A48FB4855E68E4AABA3334BE3895B4E0A1 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseInputStream0, Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* ___inf1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___baseInputStream0;
		Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* L_1 = ___inf1;
		InflaterInputStream__ctor_mB209FCF39C40EA69CF7344C87A9DA51B906E79B2(__this, L_0, L_1, ((int32_t)4096), NULL);
		return;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,SIDGIN.Zip.Compression.Inflater,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream__ctor_mB209FCF39C40EA69CF7344C87A9DA51B906E79B2 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseInputStream0, Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* ___inflater1, int32_t ___bufferSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		__this->___U3CIsStreamOwnerU3Ek__BackingField_4 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___baseInputStream0;
		V_0 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE6DF8099AE75DD42F869879C18E332A6FC033EF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream__ctor_mB209FCF39C40EA69CF7344C87A9DA51B906E79B2_RuntimeMethod_var)));
	}

IL_0023:
	{
		Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* L_3 = ___inflater1;
		V_1 = (bool)((((RuntimeObject*)(Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC926AD4C478A88A08B54B90CE3FF6A65ECEF876)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream__ctor_mB209FCF39C40EA69CF7344C87A9DA51B906E79B2_RuntimeMethod_var)));
	}

IL_0037:
	{
		int32_t L_6 = ___bufferSize2;
		V_2 = (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream__ctor_mB209FCF39C40EA69CF7344C87A9DA51B906E79B2_RuntimeMethod_var)));
	}

IL_004e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = ___baseInputStream0;
		__this->___baseInputStream_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseInputStream_7), (void*)L_9);
		Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* L_10 = ___inflater1;
		__this->___inf_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inf_5), (void*)L_10);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = ___baseInputStream0;
		int32_t L_12 = ___bufferSize2;
		InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0* L_13 = (InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0*)il2cpp_codegen_object_new(InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		InflaterInputBuffer__ctor_m0C67E12C68FEF38CD1F61BD799ECE5B4524D6D5E(L_13, L_11, L_12, NULL);
		__this->___inputBuffer_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputBuffer_6), (void*)L_13);
		return;
	}
}
// System.Boolean SIDGIN.Zip.Compression.Streams.InflaterInputStream::get_IsStreamOwner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InflaterInputStream_get_IsStreamOwner_m738FAE723906D26C8E1A976C82732FF163C165D9 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsStreamOwnerU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputStream::set_IsStreamOwner(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_set_IsStreamOwner_m88CC5D305964DDDE8082B10F1A67A56D3EA6BA69 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsStreamOwnerU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 SIDGIN.Zip.Compression.Streams.InflaterInputStream::Skip(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t InflaterInputStream_Skip_mE9D42EEF73265155396DCB6950EE97ADA3BBB78B (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, int64_t ___count0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B13_0 = 0;
	{
		int64_t L_0 = ___count0;
		V_0 = (bool)((((int32_t)((((int64_t)L_0) > ((int64_t)((int64_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_Skip_mE9D42EEF73265155396DCB6950EE97ADA3BBB78B_RuntimeMethod_var)));
	}

IL_0019:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___baseInputStream_7;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_3);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->___baseInputStream_7;
		int64_t L_7 = ___count0;
		NullCheck(L_6);
		int64_t L_8;
		L_8 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_6, L_7, 1);
		int64_t L_9 = ___count0;
		V_2 = L_9;
		goto IL_00aa;
	}

IL_003b:
	{
		V_3 = ((int32_t)2048);
		int64_t L_10 = ___count0;
		int32_t L_11 = V_3;
		V_7 = (bool)((((int64_t)L_10) < ((int64_t)((int64_t)L_11)))? 1 : 0);
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		int64_t L_13 = ___count0;
		V_3 = ((int32_t)L_13);
	}

IL_0052:
	{
		int32_t L_14 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_14);
		V_4 = L_15;
		V_5 = 1;
		int64_t L_16 = ___count0;
		V_6 = L_16;
		goto IL_008f;
	}

IL_0062:
	{
		int64_t L_17 = V_6;
		int32_t L_18 = V_3;
		V_8 = (bool)((((int64_t)L_17) < ((int64_t)((int64_t)L_18)))? 1 : 0);
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int64_t L_20 = V_6;
		V_3 = ((int32_t)L_20);
	}

IL_0075:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = __this->___baseInputStream_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
		int32_t L_23 = V_3;
		NullCheck(L_21);
		int32_t L_24;
		L_24 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_21, L_22, 0, L_23);
		V_5 = L_24;
		int64_t L_25 = V_6;
		int32_t L_26 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_25, ((int64_t)L_26)));
	}

IL_008f:
	{
		int64_t L_27 = V_6;
		if ((((int64_t)L_27) <= ((int64_t)((int64_t)0))))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_28 = V_5;
		G_B13_0 = ((((int32_t)L_28) > ((int32_t)0))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B13_0 = 0;
	}

IL_009d:
	{
		V_9 = (bool)G_B13_0;
		bool L_29 = V_9;
		if (L_29)
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_30 = ___count0;
		int64_t L_31 = V_6;
		V_2 = ((int64_t)il2cpp_codegen_subtract(L_30, L_31));
		goto IL_00aa;
	}

IL_00aa:
	{
		int64_t L_32 = V_2;
		return L_32;
	}
}
// System.Int32 SIDGIN.Zip.Compression.Streams.InflaterInputStream::get_Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflaterInputStream_get_Available_m52CC7063E93671F049A7EC1348F53C1458592C23 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* L_0 = __this->___inf_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = Inflater_get_IsFinished_m7BFFF18388468483811B7835E250AF4F186FAAF0(L_0, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputStream::Fill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_Fill_m1A1FDE96F661D0D0E2DF4470CCC79326BBFDA29C (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0* L_0 = __this->___inputBuffer_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InflaterInputBuffer_get_Available_m40E6965E81140B07A791EC0950D411D48E1B90EE(L_0, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0* L_3 = __this->___inputBuffer_6;
		NullCheck(L_3);
		InflaterInputBuffer_Fill_m9BECFAE7B4346F05A93D4CB22A8E5EDC320A8FC8(L_3, NULL);
		InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0* L_4 = __this->___inputBuffer_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InflaterInputBuffer_get_Available_m40E6965E81140B07A791EC0950D411D48E1B90EE(L_4, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		SharpZipBaseException_t6BD13B3FCD6411DBCB5EF82C2519154630AF5D25* L_7 = (SharpZipBaseException_t6BD13B3FCD6411DBCB5EF82C2519154630AF5D25*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharpZipBaseException_t6BD13B3FCD6411DBCB5EF82C2519154630AF5D25_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		SharpZipBaseException__ctor_m3C00EF79B79E007897B73AD4EE0CF70475A9465C(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EB4BE55A4E968B39CF168F95F155F0CE9E4A4BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_Fill_m1A1FDE96F661D0D0E2DF4470CCC79326BBFDA29C_RuntimeMethod_var)));
	}

IL_0044:
	{
	}

IL_0045:
	{
		InflaterInputBuffer_tDD82DC5523D6E0418D9CA8F14256E135F2FB0CC0* L_8 = __this->___inputBuffer_6;
		Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* L_9 = __this->___inf_5;
		NullCheck(L_8);
		InflaterInputBuffer_SetInflaterInput_mA751E729660E47223B45953B57DB9A86CBFE1EA3(L_8, L_9, NULL);
		return;
	}
}
// System.Boolean SIDGIN.Zip.Compression.Streams.InflaterInputStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InflaterInputStream_get_CanRead_m9DD943AECB7AFCA55EA168EC9BFA072DC80582CA (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseInputStream_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean SIDGIN.Zip.Compression.Streams.InflaterInputStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InflaterInputStream_get_CanSeek_m8A61DF6B5E2238DB07D807D18ABB3F1B41663C2D (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean SIDGIN.Zip.Compression.Streams.InflaterInputStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InflaterInputStream_get_CanWrite_mDD66BDC13A82B84ABB6FE942183D26D4A41BA6B9 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int64 SIDGIN.Zip.Compression.Streams.InflaterInputStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t InflaterInputStream_get_Length_m7D3CE7B4879D72F289D5A368F6533A75E20F40CF (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51F1DBAC2A477B647C00F35F5067C191B5F39517)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_get_Length_m7D3CE7B4879D72F289D5A368F6533A75E20F40CF_RuntimeMethod_var)));
	}
}
// System.Int64 SIDGIN.Zip.Compression.Streams.InflaterInputStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t InflaterInputStream_get_Position_m1C435998F77AE206145A1E684E56BFD128721977 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseInputStream_7;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_set_Position_m458C2B7C5617817191A603156331CF65DCA72E72 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C5D82EC0DDFC2A751DB2B8E28F3256ABDE01270)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_set_Position_m458C2B7C5617817191A603156331CF65DCA72E72_RuntimeMethod_var)));
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_Flush_m06725C9DD0D2EF48D9C69CBEDEA9D791617F2B80 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___baseInputStream_7;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(21 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 SIDGIN.Zip.Compression.Streams.InflaterInputStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t InflaterInputStream_Seek_m15B68351448718AB92D2392870CC050573949974 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBC3EE4B235C41540E696A527B41C2EB3D741A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_Seek_m15B68351448718AB92D2392870CC050573949974_RuntimeMethod_var)));
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_SetLength_m66269B0D2083E8D3E48E90A8A643F3588118D8AF (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E211FC3D3E3E7F3871E0DFFD781ED6B15E23EFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_SetLength_m66269B0D2083E8D3E48E90A8A643F3588118D8AF_RuntimeMethod_var)));
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_Write_m2CD3DDB6D8CF33CC5A7C2EA4601DAAFBAEC8A105 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B51DC7F7A299FDF20D4111AA6D04EFD1D4FDD6B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_Write_m2CD3DDB6D8CF33CC5A7C2EA4601DAAFBAEC8A105_RuntimeMethod_var)));
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputStream::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_WriteByte_m290389A0225DE58AE9C23512ACBC5486728A82B0 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19735335CA05EBD60664E496D17C7EF387AC7C8B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_WriteByte_m290389A0225DE58AE9C23512ACBC5486728A82B0_RuntimeMethod_var)));
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.InflaterInputStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream_Dispose_m051ACC1BAB25C89170333735AD35F59423F4EDC0 (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->___isClosed_9;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		__this->___isClosed_9 = (bool)1;
		bool L_2;
		L_2 = InflaterInputStream_get_IsStreamOwner_m738FAE723906D26C8E1A976C82732FF163C165D9_inline(__this, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___baseInputStream_7;
		NullCheck(L_4);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_4, NULL);
	}

IL_002e:
	{
	}

IL_002f:
	{
		return;
	}
}
// System.Int32 SIDGIN.Zip.Compression.Streams.InflaterInputStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflaterInputStream_Read_m114953143006FA767C9DEFFD9FC5C0106F8503EC (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t G_B6_0 = 0;
	{
		Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* L_0 = __this->___inf_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = Inflater_get_IsNeedingDictionary_m8E46A2A5700A71D123C50E0DC7CEC09F9A76B838(L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		SharpZipBaseException_t6BD13B3FCD6411DBCB5EF82C2519154630AF5D25* L_3 = (SharpZipBaseException_t6BD13B3FCD6411DBCB5EF82C2519154630AF5D25*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharpZipBaseException_t6BD13B3FCD6411DBCB5EF82C2519154630AF5D25_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		SharpZipBaseException__ctor_m3C00EF79B79E007897B73AD4EE0CF70475A9465C(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8FF23D129BAAFF88D5BFD6399DCAA2557F8F2030)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_Read_m114953143006FA767C9DEFFD9FC5C0106F8503EC_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_4 = ___count2;
		V_0 = L_4;
		goto IL_0084;
	}

IL_0020:
	{
		Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* L_5 = __this->___inf_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer0;
		int32_t L_7 = ___offset1;
		int32_t L_8 = V_0;
		NullCheck(L_5);
		int32_t L_9;
		L_9 = Inflater_Inflate_mC45796066F02E2766AFD9F62817DB881B1C44D5F(L_5, L_6, L_7, L_8, NULL);
		V_2 = L_9;
		int32_t L_10 = ___offset1;
		int32_t L_11 = V_2;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		int32_t L_12 = V_0;
		int32_t L_13 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, L_13));
		int32_t L_14 = V_0;
		if (!L_14)
		{
			goto IL_0049;
		}
	}
	{
		Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* L_15 = __this->___inf_5;
		NullCheck(L_15);
		bool L_16;
		L_16 = Inflater_get_IsFinished_m7BFFF18388468483811B7835E250AF4F186FAAF0(L_15, NULL);
		G_B6_0 = ((int32_t)(L_16));
		goto IL_004a;
	}

IL_0049:
	{
		G_B6_0 = 1;
	}

IL_004a:
	{
		V_3 = (bool)G_B6_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0089;
	}

IL_0051:
	{
		Inflater_tE92307A25E03BF2E3BD70E81D19F2D5B1176431D* L_18 = __this->___inf_5;
		NullCheck(L_18);
		bool L_19;
		L_19 = Inflater_get_IsNeedingInput_m2BBAFDE7A06B35F181A29C342D5C94927B9C0703(L_18, NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_006d;
		}
	}
	{
		InflaterInputStream_Fill_m1A1FDE96F661D0D0E2DF4470CCC79326BBFDA29C(__this, NULL);
		goto IL_0083;
	}

IL_006d:
	{
		int32_t L_21 = V_2;
		V_5 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_0083;
		}
	}
	{
		ZipException_t942AFD0552EDF6D1D7E052B6728602864C754FA3* L_23 = (ZipException_t942AFD0552EDF6D1D7E052B6728602864C754FA3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipException_t942AFD0552EDF6D1D7E052B6728602864C754FA3_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		ZipException__ctor_m45005345F34D2F38AFD990FBAF1EB9F603782049(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B8FF6E0BFB09EB9D8A7585234E9561468125FD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflaterInputStream_Read_m114953143006FA767C9DEFFD9FC5C0106F8503EC_RuntimeMethod_var)));
	}

IL_0083:
	{
	}

IL_0084:
	{
		V_6 = (bool)1;
		goto IL_0020;
	}

IL_0089:
	{
		int32_t L_24 = ___count2;
		int32_t L_25 = V_0;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_24, L_25));
		goto IL_0090;
	}

IL_0090:
	{
		int32_t L_26 = V_7;
		return L_26;
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
// System.Void SIDGIN.Zip.Compression.Streams.OutputWindow::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_Write_m67157241885F2E7B7BF8DC833CCDF5F17DE2FFA2 (OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___windowFilled_4;
		V_1 = L_0;
		int32_t L_1 = V_1;
		__this->___windowFilled_4 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_1;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)32768)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20B43C997D46773915E000B0A5DBB64316FDD2E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutputWindow_Write_m67157241885F2E7B7BF8DC833CCDF5F17DE2FFA2_RuntimeMethod_var)));
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___window_2;
		int32_t L_6 = __this->___windowEnd_3;
		V_1 = L_6;
		int32_t L_7 = V_1;
		__this->___windowEnd_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_1;
		int32_t L_9 = ___value0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)L_9));
		int32_t L_10 = __this->___windowEnd_3;
		__this->___windowEnd_3 = ((int32_t)(L_10&((int32_t)32767)));
		return;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.OutputWindow::SlowRepeat(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_SlowRepeat_m7F39323E70FDA375748C9E4B45ED4095BB62E906 (OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4* __this, int32_t ___repStart0, int32_t ___length1, int32_t ___distance2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		goto IL_0045;
	}

IL_0003:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___window_2;
		int32_t L_1 = __this->___windowEnd_3;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___windowEnd_3 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___window_2;
		int32_t L_5 = ___repStart0;
		int32_t L_6 = L_5;
		___repStart0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_8);
		int32_t L_9 = __this->___windowEnd_3;
		__this->___windowEnd_3 = ((int32_t)(L_9&((int32_t)32767)));
		int32_t L_10 = ___repStart0;
		___repStart0 = ((int32_t)(L_10&((int32_t)32767)));
	}

IL_0045:
	{
		int32_t L_11 = ___length1;
		int32_t L_12 = L_11;
		___length1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		V_1 = (bool)((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_0003;
		}
	}
	{
		return;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.OutputWindow::Repeat(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_Repeat_mB1C34CBADC9D538E7D0E7683EE4091F9F45E4303 (OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4* __this, int32_t ___length0, int32_t ___distance1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->___windowFilled_4;
		int32_t L_1 = ___length0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		V_3 = L_2;
		__this->___windowFilled_4 = L_2;
		int32_t L_3 = V_3;
		V_2 = (bool)((((int32_t)L_3) > ((int32_t)((int32_t)32768)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral20B43C997D46773915E000B0A5DBB64316FDD2E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutputWindow_Repeat_mB1C34CBADC9D538E7D0E7683EE4091F9F45E4303_RuntimeMethod_var)));
	}

IL_0029:
	{
		int32_t L_6 = __this->___windowEnd_3;
		int32_t L_7 = ___distance1;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, L_7))&((int32_t)32767)));
		int32_t L_8 = ___length0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_8));
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) > ((int32_t)L_10)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = __this->___windowEnd_3;
		int32_t L_12 = V_1;
		G_B5_0 = ((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 0;
	}

IL_0050:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_14 = ___length0;
		int32_t L_15 = ___distance1;
		V_5 = (bool)((((int32_t)((((int32_t)L_14) > ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___window_2;
		int32_t L_18 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___window_2;
		int32_t L_20 = __this->___windowEnd_3;
		int32_t L_21 = ___length0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_17, L_18, (RuntimeArray*)L_19, L_20, L_21, NULL);
		int32_t L_22 = __this->___windowEnd_3;
		int32_t L_23 = ___length0;
		__this->___windowEnd_3 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		goto IL_00c9;
	}

IL_0090:
	{
		goto IL_00b9;
	}

IL_0093:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___window_2;
		int32_t L_25 = __this->___windowEnd_3;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___windowEnd_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		int32_t L_27 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___window_2;
		int32_t L_29 = V_0;
		int32_t L_30 = L_29;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		NullCheck(L_28);
		int32_t L_31 = L_30;
		uint8_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)L_32);
	}

IL_00b9:
	{
		int32_t L_33 = ___length0;
		int32_t L_34 = L_33;
		___length0 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		V_6 = (bool)((((int32_t)L_34) > ((int32_t)0))? 1 : 0);
		bool L_35 = V_6;
		if (L_35)
		{
			goto IL_0093;
		}
	}
	{
	}

IL_00c9:
	{
		goto IL_00d8;
	}

IL_00cc:
	{
		int32_t L_36 = V_0;
		int32_t L_37 = ___length0;
		int32_t L_38 = ___distance1;
		OutputWindow_SlowRepeat_m7F39323E70FDA375748C9E4B45ED4095BB62E906(__this, L_36, L_37, L_38, NULL);
	}

IL_00d8:
	{
		return;
	}
}
// System.Int32 SIDGIN.Zip.Compression.Streams.OutputWindow::CopyStored(SIDGIN.Zip.Compression.Streams.StreamManipulator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_CopyStored_m47F7C6272ABD355CA0B67D1C1D22C485A693C43A (OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4* __this, StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* ___input0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = __this->___windowFilled_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_1)), NULL);
		StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* L_3 = ___input0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = StreamManipulator_get_AvailableBytes_mFEA0C2B31F2F278BD1D67FA1170AB636E3BCFA93(L_3, NULL);
		int32_t L_5;
		L_5 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_2, L_4, NULL);
		___length1 = L_5;
		int32_t L_6 = __this->___windowEnd_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_6));
		int32_t L_7 = ___length1;
		int32_t L_8 = V_1;
		V_2 = (bool)((((int32_t)L_7) > ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* L_10 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___window_2;
		int32_t L_12 = __this->___windowEnd_3;
		int32_t L_13 = V_1;
		NullCheck(L_10);
		int32_t L_14;
		L_14 = StreamManipulator_CopyBytes_m4F754E0CFE66AA7016D11DD32A3A292E7D022C0F(L_10, L_11, L_12, L_13, NULL);
		V_0 = L_14;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_18 = V_0;
		StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* L_19 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___window_2;
		int32_t L_21 = ___length1;
		int32_t L_22 = V_1;
		NullCheck(L_19);
		int32_t L_23;
		L_23 = StreamManipulator_CopyBytes_m4F754E0CFE66AA7016D11DD32A3A292E7D022C0F(L_19, L_20, 0, ((int32_t)il2cpp_codegen_subtract(L_21, L_22)), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, L_23));
	}

IL_0067:
	{
		goto IL_0080;
	}

IL_006a:
	{
		StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* L_24 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___window_2;
		int32_t L_26 = __this->___windowEnd_3;
		int32_t L_27 = ___length1;
		NullCheck(L_24);
		int32_t L_28;
		L_28 = StreamManipulator_CopyBytes_m4F754E0CFE66AA7016D11DD32A3A292E7D022C0F(L_24, L_25, L_26, L_27, NULL);
		V_0 = L_28;
	}

IL_0080:
	{
		int32_t L_29 = __this->___windowEnd_3;
		int32_t L_30 = V_0;
		__this->___windowEnd_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_29, L_30))&((int32_t)32767)));
		int32_t L_31 = __this->___windowFilled_4;
		int32_t L_32 = V_0;
		__this->___windowFilled_4 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
		int32_t L_33 = V_0;
		V_4 = L_33;
		goto IL_00a7;
	}

IL_00a7:
	{
		int32_t L_34 = V_4;
		return L_34;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.OutputWindow::CopyDict(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_CopyDict_mFBBA34538A0F5CE247BD9A491DAADA2CA2CF01A9 (OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dictionary0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___dictionary0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutputWindow_CopyDict_mFBBA34538A0F5CE247BD9A491DAADA2CA2CF01A9_RuntimeMethod_var)));
	}

IL_0015:
	{
		int32_t L_3 = __this->___windowFilled_4;
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutputWindow_CopyDict_mFBBA34538A0F5CE247BD9A491DAADA2CA2CF01A9_RuntimeMethod_var)));
	}

IL_0029:
	{
		int32_t L_6 = ___length2;
		V_2 = (bool)((((int32_t)L_6) > ((int32_t)((int32_t)32768)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = ___offset1;
		int32_t L_9 = ___length2;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)32768)))));
		___length2 = ((int32_t)32768);
	}

IL_0049:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___dictionary0;
		int32_t L_11 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___window_2;
		int32_t L_13 = ___length2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, L_13, NULL);
		int32_t L_14 = ___length2;
		__this->___windowEnd_3 = ((int32_t)(L_14&((int32_t)32767)));
		return;
	}
}
// System.Int32 SIDGIN.Zip.Compression.Streams.OutputWindow::GetFreeSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_GetFreeSpace_m906C8E28A0EFBC8A640C864AB87F60F4C533395A (OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___windowFilled_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_0));
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 SIDGIN.Zip.Compression.Streams.OutputWindow::GetAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_GetAvailable_mB048120612B9ACD8507009F8A5E62774765C2C78 (OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___windowFilled_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 SIDGIN.Zip.Compression.Streams.OutputWindow::CopyOutput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_CopyOutput_m9E81AD8B3C6CDDA4C2F954E844BA1423F5DEF3C3 (OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int32_t ___len2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->___windowEnd_3;
		V_0 = L_0;
		int32_t L_1 = ___len2;
		int32_t L_2 = __this->___windowFilled_4;
		V_3 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = __this->___windowFilled_4;
		___len2 = L_4;
		goto IL_0039;
	}

IL_0021:
	{
		int32_t L_5 = __this->___windowEnd_3;
		int32_t L_6 = __this->___windowFilled_4;
		int32_t L_7 = ___len2;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_5, L_6)), L_7))&((int32_t)32767)));
	}

IL_0039:
	{
		int32_t L_8 = ___len2;
		V_1 = L_8;
		int32_t L_9 = ___len2;
		int32_t L_10 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, L_10));
		int32_t L_11 = V_2;
		V_4 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___window_2;
		int32_t L_14 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___output0;
		int32_t L_16 = ___offset1;
		int32_t L_17 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_13, ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_14)), (RuntimeArray*)L_15, L_16, L_17, NULL);
		int32_t L_18 = ___offset1;
		int32_t L_19 = V_2;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		int32_t L_20 = V_0;
		___len2 = L_20;
	}

IL_0069:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___window_2;
		int32_t L_22 = V_0;
		int32_t L_23 = ___len2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___output0;
		int32_t L_25 = ___offset1;
		int32_t L_26 = ___len2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_subtract(L_22, L_23)), (RuntimeArray*)L_24, L_25, L_26, NULL);
		int32_t L_27 = __this->___windowFilled_4;
		int32_t L_28 = V_1;
		__this->___windowFilled_4 = ((int32_t)il2cpp_codegen_subtract(L_27, L_28));
		int32_t L_29 = __this->___windowFilled_4;
		V_5 = (bool)((((int32_t)L_29) < ((int32_t)0))? 1 : 0);
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_009f;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_31 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_31);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_31, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutputWindow_CopyOutput_m9E81AD8B3C6CDDA4C2F954E844BA1423F5DEF3C3_RuntimeMethod_var)));
	}

IL_009f:
	{
		int32_t L_32 = V_1;
		V_6 = L_32;
		goto IL_00a4;
	}

IL_00a4:
	{
		int32_t L_33 = V_6;
		return L_33;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.OutputWindow::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_Reset_mDABEB04F53729E0252D1F30AD1BE250C43E81234 (OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = 0;
		V_0 = L_0;
		__this->___windowEnd_3 = L_0;
		int32_t L_1 = V_0;
		__this->___windowFilled_4 = L_1;
		return;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.OutputWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow__ctor_m33F6568A1CBC332C0A387F484862DB21BE621342 (OutputWindow_tEDBE32ED9A45DF641888B1E7539E98F65F17A6B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768));
		__this->___window_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_2), (void*)L_0);
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
// System.Int32 SIDGIN.Zip.Compression.Streams.StreamManipulator::PeekBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_PeekBits_m00AD51BE99D51B80E1AE95DC3ABECC7F0F33EF70 (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, int32_t ___bitCount0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___bitsInBuffer__4;
		int32_t L_1 = ___bitCount0;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_3 = __this->___windowStart__1;
		int32_t L_4 = __this->___windowEnd__2;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		V_2 = (-1);
		goto IL_00a1;
	}

IL_0026:
	{
		uint32_t L_6 = __this->___buffer__3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___window__0;
		int32_t L_8 = __this->___windowStart__1;
		V_3 = L_8;
		int32_t L_9 = V_3;
		__this->___windowStart__1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_3;
		NullCheck(L_7);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___window__0;
		int32_t L_14 = __this->___windowStart__1;
		V_3 = L_14;
		int32_t L_15 = V_3;
		__this->___windowStart__1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_3;
		NullCheck(L_13);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = __this->___bitsInBuffer__4;
		__this->___buffer__3 = ((int32_t)((int32_t)L_6|((int32_t)(((int32_t)(((int32_t)((int32_t)L_12&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_18&((int32_t)255)))<<8))))<<((int32_t)(L_19&((int32_t)31)))))));
		int32_t L_20 = __this->___bitsInBuffer__4;
		__this->___bitsInBuffer__4 = ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)16)));
	}

IL_008c:
	{
		uint32_t L_21 = __this->___buffer__3;
		int32_t L_22 = ___bitCount0;
		V_2 = ((int32_t)((int64_t)(((int64_t)(uint64_t)L_21)&((int64_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_22&((int32_t)31))))), 1))))));
		goto IL_00a1;
	}

IL_00a1:
	{
		int32_t L_23 = V_2;
		return L_23;
	}
}
// System.Boolean SIDGIN.Zip.Compression.Streams.StreamManipulator::TryGetBits(System.Int32,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamManipulator_TryGetBits_m93A0C041C952058321F1A4975DD934505182635F (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, int32_t ___bitCount0, int32_t* ___output1, int32_t ___outputOffset2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___bitCount0;
		int32_t L_1;
		L_1 = StreamManipulator_PeekBits_m00AD51BE99D51B80E1AE95DC3ABECC7F0F33EF70(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0027;
	}

IL_0016:
	{
		int32_t* L_4 = ___output1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___outputOffset2;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(L_5, L_6));
		int32_t L_7 = ___bitCount0;
		StreamManipulator_DropBits_mECE477A75423050DB042D3C3A45E0AB2234AE504(__this, L_7, NULL);
		V_2 = (bool)1;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean SIDGIN.Zip.Compression.Streams.StreamManipulator::TryGetBits(System.Int32,System.Byte[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamManipulator_TryGetBits_m37910678EC617121D087CFC80F816D7F8F1E001D (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, int32_t ___bitCount0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___array1, int32_t ___index2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___bitCount0;
		int32_t L_1;
		L_1 = StreamManipulator_PeekBits_m00AD51BE99D51B80E1AE95DC3ABECC7F0F33EF70(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0028;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_4 = ___array1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = *((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)L_4);
		int32_t L_6 = ___index2;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((int32_t)(uint8_t)L_7));
		int32_t L_8 = ___bitCount0;
		StreamManipulator_DropBits_mECE477A75423050DB042D3C3A45E0AB2234AE504(__this, L_8, NULL);
		V_2 = (bool)1;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.StreamManipulator::DropBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamManipulator_DropBits_mECE477A75423050DB042D3C3A45E0AB2234AE504 (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, int32_t ___bitCount0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___buffer__3;
		int32_t L_1 = ___bitCount0;
		__this->___buffer__3 = ((int32_t)((uint32_t)L_0>>((int32_t)(L_1&((int32_t)31)))));
		int32_t L_2 = __this->___bitsInBuffer__4;
		int32_t L_3 = ___bitCount0;
		__this->___bitsInBuffer__4 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		return;
	}
}
// System.Int32 SIDGIN.Zip.Compression.Streams.StreamManipulator::GetBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_GetBits_mBE08A3126764F9AF262F72B9AB040515ACA45D92 (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, int32_t ___bitCount0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___bitCount0;
		int32_t L_1;
		L_1 = StreamManipulator_PeekBits_m00AD51BE99D51B80E1AE95DC3ABECC7F0F33EF70(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_4 = ___bitCount0;
		StreamManipulator_DropBits_mECE477A75423050DB042D3C3A45E0AB2234AE504(__this, L_4, NULL);
	}

IL_001e:
	{
		int32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0022;
	}

IL_0022:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Int32 SIDGIN.Zip.Compression.Streams.StreamManipulator::get_AvailableBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_get_AvailableBits_m6BF44D420196EDBED46657AB9DAF5010FE131AB3 (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bitsInBuffer__4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 SIDGIN.Zip.Compression.Streams.StreamManipulator::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_get_AvailableBytes_mFEA0C2B31F2F278BD1D67FA1170AB636E3BCFA93 (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___windowEnd__2;
		int32_t L_1 = __this->___windowStart__1;
		int32_t L_2 = __this->___bitsInBuffer__4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), ((int32_t)(L_2>>3))));
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.StreamManipulator::SkipToByteBoundary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamManipulator_SkipToByteBoundary_mF64F9664927372F70D9D23215AAF6D3AD2380AAA (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___buffer__3;
		int32_t L_1 = __this->___bitsInBuffer__4;
		__this->___buffer__3 = ((int32_t)((uint32_t)L_0>>((int32_t)(((int32_t)(L_1&7))&((int32_t)31)))));
		int32_t L_2 = __this->___bitsInBuffer__4;
		__this->___bitsInBuffer__4 = ((int32_t)(L_2&((int32_t)-8)));
		return;
	}
}
// System.Boolean SIDGIN.Zip.Compression.Streams.StreamManipulator::get_IsNeedingInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamManipulator_get_IsNeedingInput_m8B9A9BEF16D726F856BBE0B36072D0F4A92FB753 (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___windowStart__1;
		int32_t L_1 = __this->___windowEnd__2;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 SIDGIN.Zip.Compression.Streams.StreamManipulator::CopyBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamManipulator_CopyBytes_m4F754E0CFE66AA7016D11DD32A3A292E7D022C0F (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = ___length2;
		V_2 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_CopyBytes_m4F754E0CFE66AA7016D11DD32A3A292E7D022C0F_RuntimeMethod_var)));
	}

IL_0015:
	{
		int32_t L_3 = __this->___bitsInBuffer__4;
		V_3 = (bool)((!(((uint32_t)((int32_t)(L_3&7))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36919DB41559814DAA1900952B7D08BD1CA0C036)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_CopyBytes_m4F754E0CFE66AA7016D11DD32A3A292E7D022C0F_RuntimeMethod_var)));
	}

IL_0030:
	{
		V_0 = 0;
		goto IL_006a;
	}

IL_0034:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___output0;
		int32_t L_7 = ___offset1;
		int32_t L_8 = L_7;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint32_t L_9 = __this->___buffer__3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)L_9));
		uint32_t L_10 = __this->___buffer__3;
		__this->___buffer__3 = ((int32_t)((uint32_t)L_10>>8));
		int32_t L_11 = __this->___bitsInBuffer__4;
		__this->___bitsInBuffer__4 = ((int32_t)il2cpp_codegen_subtract(L_11, 8));
		int32_t L_12 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_006a:
	{
		int32_t L_14 = __this->___bitsInBuffer__4;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_15 = ___length2;
		G_B9_0 = ((((int32_t)L_15) > ((int32_t)0))? 1 : 0);
		goto IL_007a;
	}

IL_0079:
	{
		G_B9_0 = 0;
	}

IL_007a:
	{
		V_4 = (bool)G_B9_0;
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_17 = ___length2;
		V_5 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_19 = V_0;
		V_6 = L_19;
		goto IL_0122;
	}

IL_0093:
	{
		int32_t L_20 = __this->___windowEnd__2;
		int32_t L_21 = __this->___windowStart__1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_20, L_21));
		int32_t L_22 = ___length2;
		int32_t L_23 = V_1;
		V_7 = (bool)((((int32_t)L_22) > ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_25 = V_1;
		___length2 = L_25;
	}

IL_00b0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___window__0;
		int32_t L_27 = __this->___windowStart__1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___output0;
		int32_t L_29 = ___offset1;
		int32_t L_30 = ___length2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_26, L_27, (RuntimeArray*)L_28, L_29, L_30, NULL);
		int32_t L_31 = __this->___windowStart__1;
		int32_t L_32 = ___length2;
		__this->___windowStart__1 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
		int32_t L_33 = __this->___windowStart__1;
		int32_t L_34 = __this->___windowEnd__2;
		V_8 = (bool)((!(((uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_33, L_34))&1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_011b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___window__0;
		int32_t L_37 = __this->___windowStart__1;
		V_9 = L_37;
		int32_t L_38 = V_9;
		__this->___windowStart__1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39 = V_9;
		NullCheck(L_36);
		int32_t L_40 = L_39;
		uint8_t L_41 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		__this->___buffer__3 = ((int32_t)((int32_t)L_41&((int32_t)255)));
		__this->___bitsInBuffer__4 = 8;
	}

IL_011b:
	{
		int32_t L_42 = V_0;
		int32_t L_43 = ___length2;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		goto IL_0122;
	}

IL_0122:
	{
		int32_t L_44 = V_6;
		return L_44;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.StreamManipulator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamManipulator_Reset_m7D1269E27F9020B66E653EA3AA1B93EBB5B41B32 (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__this->___buffer__3 = 0;
		int32_t L_0 = 0;
		V_0 = L_0;
		__this->___bitsInBuffer__4 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->___windowEnd__2 = L_2;
		int32_t L_3 = V_0;
		__this->___windowStart__1 = L_3;
		return;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.StreamManipulator::SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamManipulator_SetInput_m2649835AC1333EB17929A03C8AB5F582C7F37D8E (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B11_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_SetInput_m2649835AC1333EB17929A03C8AB5F582C7F37D8E_RuntimeMethod_var)));
	}

IL_0015:
	{
		int32_t L_3 = ___offset1;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0A45CCAC3B8CC663DC29BD756A86295833579C1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_SetInput_m2649835AC1333EB17929A03C8AB5F582C7F37D8E_RuntimeMethod_var)));
	}

IL_002e:
	{
		int32_t L_6 = ___count2;
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0A45CCAC3B8CC663DC29BD756A86295833579C1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_SetInput_m2649835AC1333EB17929A03C8AB5F582C7F37D8E_RuntimeMethod_var)));
	}

IL_0047:
	{
		int32_t L_9 = __this->___windowStart__1;
		int32_t L_10 = __this->___windowEnd__2;
		V_4 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30D44D3EB7B534CAF51AD514F18FE7DD626129FE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_SetInput_m2649835AC1333EB17929A03C8AB5F582C7F37D8E_RuntimeMethod_var)));
	}

IL_0067:
	{
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___count2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		int32_t L_15 = ___offset1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) > ((int32_t)L_16)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___buffer0;
		NullCheck(L_18);
		G_B11_0 = ((((int32_t)L_17) > ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B11_0 = 1;
	}

IL_0078:
	{
		V_5 = (bool)G_B11_0;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_008a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_20 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamManipulator_SetInput_m2649835AC1333EB17929A03C8AB5F582C7F37D8E_RuntimeMethod_var)));
	}

IL_008a:
	{
		int32_t L_21 = ___count2;
		V_6 = (bool)((!(((uint32_t)((int32_t)(L_21&1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		uint32_t L_23 = __this->___buffer__3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___buffer0;
		int32_t L_25 = ___offset1;
		int32_t L_26 = L_25;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = __this->___bitsInBuffer__4;
		__this->___buffer__3 = ((int32_t)((int32_t)L_23|((int32_t)(((int32_t)((int32_t)L_28&((int32_t)255)))<<((int32_t)(L_29&((int32_t)31)))))));
		int32_t L_30 = __this->___bitsInBuffer__4;
		__this->___bitsInBuffer__4 = ((int32_t)il2cpp_codegen_add(L_30, 8));
	}

IL_00cb:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___buffer0;
		__this->___window__0 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window__0), (void*)L_31);
		int32_t L_32 = ___offset1;
		__this->___windowStart__1 = L_32;
		int32_t L_33 = V_0;
		__this->___windowEnd__2 = L_33;
		return;
	}
}
// System.Void SIDGIN.Zip.Compression.Streams.StreamManipulator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamManipulator__ctor_m7B69CA6D33276D69C9A9810B36D3F1067349D679 (StreamManipulator_t90CF337A5236A88A01F6D594814D38B62164B94D* __this, const RuntimeMethod* method) 
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
// System.Void SIDGIN.Zip.Core.ScanEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScanEventArgs__ctor_m64F74914347A0170BF5AF433B48A8BD6F053FE72 (ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___continueRunning__2 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___name__1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name__1), (void*)L_0);
		return;
	}
}
// System.String SIDGIN.Zip.Core.ScanEventArgs::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScanEventArgs_get_Name_mC7CEE8D29CEA80B1C0CA67D46AA92B8FC000777C (ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___name__1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean SIDGIN.Zip.Core.ScanEventArgs::get_ContinueRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScanEventArgs_get_ContinueRunning_mE8AEA58321232E515D40FF03C05376FC304A79DB (ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___continueRunning__2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SIDGIN.Zip.Core.ScanEventArgs::set_ContinueRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScanEventArgs_set_ContinueRunning_m2B3D03D00B532D3DAA42BCF5A8814F4EDC1B9130 (ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___continueRunning__2 = L_0;
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
// System.Void SIDGIN.Zip.Core.ProgressEventArgs::.ctor(System.String,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressEventArgs__ctor_mC12B116D837718BA8141C6374371800BD43BB79A (ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* __this, String_t* ___name0, int64_t ___processed1, int64_t ___target2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___continueRunning__4 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___name__1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name__1), (void*)L_0);
		int64_t L_1 = ___processed1;
		__this->___processed__2 = L_1;
		int64_t L_2 = ___target2;
		__this->___target__3 = L_2;
		return;
	}
}
// System.String SIDGIN.Zip.Core.ProgressEventArgs::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProgressEventArgs_get_Name_m18532B1608DFAB1EEE266DC1FE9B19D5ACE53EA6 (ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___name__1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean SIDGIN.Zip.Core.ProgressEventArgs::get_ContinueRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProgressEventArgs_get_ContinueRunning_m5BA74D9AF41DF3546314CB7ED4F395C9DE4F3E2F (ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___continueRunning__4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SIDGIN.Zip.Core.ProgressEventArgs::set_ContinueRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressEventArgs_set_ContinueRunning_mCFA7B980AD4F6895ECE72CA5140D97B4CC640FE0 (ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___continueRunning__4 = L_0;
		return;
	}
}
// System.Single SIDGIN.Zip.Core.ProgressEventArgs::get_PercentComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProgressEventArgs_get_PercentComplete_mBE8958EC70C7A7EC12FE1980E3F7EBFA2B506AB7 (ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		int64_t L_0 = __this->___target__3;
		V_1 = (bool)((((int32_t)((((int64_t)L_0) > ((int64_t)((int64_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (0.0f);
		goto IL_0034;
	}

IL_001c:
	{
		int64_t L_2 = __this->___processed__2;
		int64_t L_3 = __this->___target__3;
		V_0 = ((float)il2cpp_codegen_multiply(((float)(((float)L_2)/((float)L_3))), (100.0f)));
	}

IL_0034:
	{
		float L_4 = V_0;
		V_2 = L_4;
		goto IL_0038;
	}

IL_0038:
	{
		float L_5 = V_2;
		return L_5;
	}
}
// System.Int64 SIDGIN.Zip.Core.ProgressEventArgs::get_Processed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ProgressEventArgs_get_Processed_mDC482BBBCC1CFA16EF6BF13460413A657C800F63 (ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->___processed__2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Int64 SIDGIN.Zip.Core.ProgressEventArgs::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ProgressEventArgs_get_Target_m5358EEF71306B43A9A4B667FD3AD321FE41C42CA (ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->___target__3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
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
// System.Void SIDGIN.Zip.Core.DirectoryEventArgs::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryEventArgs__ctor_mCF44AAFA905196B9BAD56DA8D38C0BA6594B841D (DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427* __this, String_t* ___name0, bool ___hasMatchingFiles1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		ScanEventArgs__ctor_m64F74914347A0170BF5AF433B48A8BD6F053FE72(__this, L_0, NULL);
		bool L_1 = ___hasMatchingFiles1;
		__this->___hasMatchingFiles__3 = L_1;
		return;
	}
}
// System.Boolean SIDGIN.Zip.Core.DirectoryEventArgs::get_HasMatchingFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DirectoryEventArgs_get_HasMatchingFiles_m04116B3527657DEA3E1F9576FB2748176F8B29AF (DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___hasMatchingFiles__3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
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
// System.Void SIDGIN.Zip.Core.ScanFailureEventArgs::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScanFailureEventArgs__ctor_m9F6061EAA99B109CCD32CB249E152360C87DEBCF (ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* __this, String_t* ___name0, Exception_t* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___name__1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name__1), (void*)L_0);
		Exception_t* L_1 = ___e1;
		__this->___exception__2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exception__2), (void*)L_1);
		__this->___continueRunning__3 = (bool)1;
		return;
	}
}
// System.String SIDGIN.Zip.Core.ScanFailureEventArgs::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScanFailureEventArgs_get_Name_mC8713074BDA7AC77E1A40ED7B90DDE5E0025C17C (ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___name__1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Exception SIDGIN.Zip.Core.ScanFailureEventArgs::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ScanFailureEventArgs_get_Exception_mF39AD4A7D7A7C9B8D555EF6209314277062F8B89 (ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* __this, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	{
		Exception_t* L_0 = __this->___exception__2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Exception_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean SIDGIN.Zip.Core.ScanFailureEventArgs::get_ContinueRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScanFailureEventArgs_get_ContinueRunning_m8174BE721C17E242B63D9E5C31D893ED1C5D65E4 (ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___continueRunning__3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SIDGIN.Zip.Core.ScanFailureEventArgs::set_ContinueRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScanFailureEventArgs_set_ContinueRunning_m31B49046FB96B244575E22E01AC927525D9CFAC1 (ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___continueRunning__3 = L_0;
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
void ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_Multicast(ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* currentDelegate = reinterpret_cast<ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_Open(ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_OpenStaticInvoker(ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___e1);
}
void ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_ClosedStaticInvoker(ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___e1);
}
void ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_OpenVirtual(ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___e1);
}
void ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_OpenInterface(ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___e1);
}
void ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_OpenGenericVirtual(ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* >::Invoke(method, ___sender0, ___e1);
}
void ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_OpenGenericInterface(ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* >::Invoke(method, ___sender0, ___e1);
}
// System.Void SIDGIN.Zip.Core.ProcessFileHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessFileHandler__ctor_m015208979AB2A55F3F60616D3E91C81FBE13FFE7 (ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_Multicast;
}
// System.Void SIDGIN.Zip.Core.ProcessFileHandler::Invoke(System.Object,SIDGIN.Zip.Core.ScanEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB (ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SIDGIN.Zip.Core.ProcessFileHandler::BeginInvoke(System.Object,SIDGIN.Zip.Core.ScanEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProcessFileHandler_BeginInvoke_mEA10576C184317E098F9F264D9E37E1460E6BFA1 (ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SIDGIN.Zip.Core.ProcessFileHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessFileHandler_EndInvoke_m0F31F50636CCEEA5819DDC73500107A0A0E7B90A (ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_Multicast(ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___sender0, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* currentDelegate = reinterpret_cast<ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_Open(ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___sender0, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_OpenStaticInvoker(ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___sender0, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___e1);
}
void ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_ClosedStaticInvoker(ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___sender0, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___e1);
}
void ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_OpenVirtual(ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___sender0, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* ___e1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___e1);
}
void ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_OpenInterface(ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___sender0, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* ___e1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___e1);
}
void ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_OpenGenericVirtual(ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___sender0, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* ___e1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* >::Invoke(method, ___sender0, ___e1);
}
void ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_OpenGenericInterface(ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___sender0, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* ___e1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* >::Invoke(method, ___sender0, ___e1);
}
// System.Void SIDGIN.Zip.Core.ProgressHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressHandler__ctor_m6B18EAF8FB4CDE00D9CE4DDB0B5E18354F8D5802 (ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_Multicast;
}
// System.Void SIDGIN.Zip.Core.ProgressHandler::Invoke(System.Object,SIDGIN.Zip.Core.ProgressEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473 (ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___sender0, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SIDGIN.Zip.Core.ProgressHandler::BeginInvoke(System.Object,SIDGIN.Zip.Core.ProgressEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProgressHandler_BeginInvoke_mEC2697797A40A1798D55BC9124ECD717ACE9A66C (ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___sender0, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* ___e1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SIDGIN.Zip.Core.ProgressHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressHandler_EndInvoke_m0E7191503757E374D0699B1BCBC12CE87E66D1E1 (ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_Multicast(CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* currentDelegate = reinterpret_cast<CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_Open(CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_OpenStaticInvoker(CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___e1);
}
void CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_ClosedStaticInvoker(CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___e1);
}
void CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_OpenVirtual(CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___e1);
}
void CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_OpenInterface(CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___e1);
}
void CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_OpenGenericVirtual(CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* >::Invoke(method, ___sender0, ___e1);
}
void CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_OpenGenericInterface(CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* >::Invoke(method, ___sender0, ___e1);
}
// System.Void SIDGIN.Zip.Core.CompletedFileHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletedFileHandler__ctor_m1B867EAE294B90C5279D42F219A91E96A909E4C3 (CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_Multicast;
}
// System.Void SIDGIN.Zip.Core.CompletedFileHandler::Invoke(System.Object,SIDGIN.Zip.Core.ScanEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020 (CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SIDGIN.Zip.Core.CompletedFileHandler::BeginInvoke(System.Object,SIDGIN.Zip.Core.ScanEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompletedFileHandler_BeginInvoke_m56ECD71B8DC959814FF8BFA295B4A529D7ABE508 (CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SIDGIN.Zip.Core.CompletedFileHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletedFileHandler_EndInvoke_m52C2A8EE503A2F33730563B8B0AB9FE54B2A5082 (CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_Multicast(DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* currentDelegate = reinterpret_cast<DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_Open(DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_OpenStaticInvoker(DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___e1);
}
void DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_ClosedStaticInvoker(DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___e1);
}
void DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_OpenVirtual(DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___e1);
}
void DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_OpenInterface(DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___e1);
}
void DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_OpenGenericVirtual(DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* >::Invoke(method, ___sender0, ___e1);
}
void DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_OpenGenericInterface(DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* >::Invoke(method, ___sender0, ___e1);
}
// System.Void SIDGIN.Zip.Core.DirectoryFailureHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryFailureHandler__ctor_m42FB4ED786D9C9EFE5358BB3E7ED4CDA09D05F90 (DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_Multicast;
}
// System.Void SIDGIN.Zip.Core.DirectoryFailureHandler::Invoke(System.Object,SIDGIN.Zip.Core.ScanFailureEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3 (DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SIDGIN.Zip.Core.DirectoryFailureHandler::BeginInvoke(System.Object,SIDGIN.Zip.Core.ScanFailureEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DirectoryFailureHandler_BeginInvoke_m863C0B673C96B19CF5CA8A9652D276D7628A00ED (DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SIDGIN.Zip.Core.DirectoryFailureHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryFailureHandler_EndInvoke_mF46E51C93A545BAF8311B791CF7644263C9DDFD9 (DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_Multicast(FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* currentDelegate = reinterpret_cast<FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_Open(FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_OpenStaticInvoker(FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___e1);
}
void FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_ClosedStaticInvoker(FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___e1);
}
void FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_OpenVirtual(FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___e1);
}
void FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_OpenInterface(FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___e1);
}
void FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_OpenGenericVirtual(FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* >::Invoke(method, ___sender0, ___e1);
}
void FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_OpenGenericInterface(FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* >::Invoke(method, ___sender0, ___e1);
}
// System.Void SIDGIN.Zip.Core.FileFailureHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileFailureHandler__ctor_m8A7D3ACF09497882E1F74BC80ADC3B6D25A28F06 (FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_Multicast;
}
// System.Void SIDGIN.Zip.Core.FileFailureHandler::Invoke(System.Object,SIDGIN.Zip.Core.ScanFailureEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9 (FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SIDGIN.Zip.Core.FileFailureHandler::BeginInvoke(System.Object,SIDGIN.Zip.Core.ScanFailureEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileFailureHandler_BeginInvoke_m47032A9504D33045D7BEA5A420AC69A5C41CCBA0 (FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SIDGIN.Zip.Core.FileFailureHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileFailureHandler_EndInvoke_mD27C3CC0126B258F5513B052EE1589FAC33D066A (FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void SIDGIN.Zip.Core.FileSystemScanner::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner__ctor_mFA2B1212D1CB4C4C3BC426F1C4CC97DD8CD6058F (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___filter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___filter0;
		PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F* L_1 = (PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F*)il2cpp_codegen_object_new(PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PathFilter__ctor_mD1AEFBF119BD4C84CCBD17CF0CB225BB23946819(L_1, L_0, NULL);
		__this->___fileFilter__5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileFilter__5), (void*)L_1);
		return;
	}
}
// System.Void SIDGIN.Zip.Core.FileSystemScanner::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner__ctor_m66A5158174A079229BF101E0C417FEBA348850FF (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___fileFilter0, String_t* ___directoryFilter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___fileFilter0;
		PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F* L_1 = (PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F*)il2cpp_codegen_object_new(PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PathFilter__ctor_mD1AEFBF119BD4C84CCBD17CF0CB225BB23946819(L_1, L_0, NULL);
		__this->___fileFilter__5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileFilter__5), (void*)L_1);
		String_t* L_2 = ___directoryFilter1;
		PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F* L_3 = (PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F*)il2cpp_codegen_object_new(PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PathFilter__ctor_mD1AEFBF119BD4C84CCBD17CF0CB225BB23946819(L_3, L_2, NULL);
		__this->___directoryFilter__6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___directoryFilter__6), (void*)L_3);
		return;
	}
}
// System.Void SIDGIN.Zip.Core.FileSystemScanner::.ctor(SIDGIN.Zip.Core.IScanFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner__ctor_m5E457C821A98894F91DE37A6F8EFE423DAFDE68F (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, RuntimeObject* ___fileFilter0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___fileFilter0;
		__this->___fileFilter__5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileFilter__5), (void*)L_0);
		return;
	}
}
// System.Void SIDGIN.Zip.Core.FileSystemScanner::.ctor(SIDGIN.Zip.Core.IScanFilter,SIDGIN.Zip.Core.IScanFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner__ctor_mCA8A742896A5C30842865C3D47E8B8E9918FB9E1 (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, RuntimeObject* ___fileFilter0, RuntimeObject* ___directoryFilter1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___fileFilter0;
		__this->___fileFilter__5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileFilter__5), (void*)L_0);
		RuntimeObject* L_1 = ___directoryFilter1;
		__this->___directoryFilter__6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___directoryFilter__6), (void*)L_1);
		return;
	}
}
// System.Void SIDGIN.Zip.Core.FileSystemScanner::add_ProcessDirectory(System.EventHandler`1<SIDGIN.Zip.Core.DirectoryEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner_add_ProcessDirectory_m5C51C58F23EFC3821118B0BB9B5F53FA92ACE700 (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* V_0 = NULL;
	EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* V_1 = NULL;
	EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* V_2 = NULL;
	{
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_0 = __this->___ProcessDirectory_0;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_2 = V_1;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2*)Castclass((RuntimeObject*)L_4, EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2_il2cpp_TypeInfo_var));
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2** L_5 = (&__this->___ProcessDirectory_0);
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_6 = V_2;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_7 = V_1;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_9 = V_0;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2*)L_9) == ((RuntimeObject*)(EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SIDGIN.Zip.Core.FileSystemScanner::remove_ProcessDirectory(System.EventHandler`1<SIDGIN.Zip.Core.DirectoryEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner_remove_ProcessDirectory_m280F19689D2DB0BBE8D17251301CF066D255CA09 (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* V_0 = NULL;
	EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* V_1 = NULL;
	EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* V_2 = NULL;
	{
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_0 = __this->___ProcessDirectory_0;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_2 = V_1;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2*)Castclass((RuntimeObject*)L_4, EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2_il2cpp_TypeInfo_var));
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2** L_5 = (&__this->___ProcessDirectory_0);
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_6 = V_2;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_7 = V_1;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_9 = V_0;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2*)L_9) == ((RuntimeObject*)(EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean SIDGIN.Zip.Core.FileSystemScanner::OnDirectoryFailure(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystemScanner_OnDirectoryFailure_mC1ACDB81D8A8987480EF2A3059A97681A293FC53 (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___directory0, Exception_t* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* V_3 = NULL;
	bool V_4 = false;
	{
		DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* L_0 = __this->___DirectoryFailure_3;
		V_0 = L_0;
		DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_4 = ___directory0;
		Exception_t* L_5 = ___e1;
		ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* L_6 = (ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981*)il2cpp_codegen_object_new(ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ScanFailureEventArgs__ctor_m9F6061EAA99B109CCD32CB249E152360C87DEBCF(L_6, L_4, L_5, NULL);
		V_3 = L_6;
		DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* L_7 = V_0;
		ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* L_8 = V_3;
		NullCheck(L_7);
		DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_inline(L_7, __this, L_8, NULL);
		ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* L_9 = V_3;
		NullCheck(L_9);
		bool L_10;
		L_10 = ScanFailureEventArgs_get_ContinueRunning_m8174BE721C17E242B63D9E5C31D893ED1C5D65E4(L_9, NULL);
		__this->___alive__7 = L_10;
	}

IL_0031:
	{
		bool L_11 = V_1;
		V_4 = L_11;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_12 = V_4;
		return L_12;
	}
}
// System.Boolean SIDGIN.Zip.Core.FileSystemScanner::OnFileFailure(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystemScanner_OnFileFailure_m72077C4C61AFA5A0C3C927EDB0C00C333ADBAC2B (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___file0, Exception_t* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* V_3 = NULL;
	bool V_4 = false;
	{
		FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* L_0 = __this->___FileFailure_4;
		V_0 = L_0;
		FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_4 = ___file0;
		Exception_t* L_5 = ___e1;
		ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* L_6 = (ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981*)il2cpp_codegen_object_new(ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ScanFailureEventArgs__ctor_m9F6061EAA99B109CCD32CB249E152360C87DEBCF(L_6, L_4, L_5, NULL);
		V_3 = L_6;
		FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* L_7 = __this->___FileFailure_4;
		ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* L_8 = V_3;
		NullCheck(L_7);
		FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_inline(L_7, __this, L_8, NULL);
		ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* L_9 = V_3;
		NullCheck(L_9);
		bool L_10;
		L_10 = ScanFailureEventArgs_get_ContinueRunning_m8174BE721C17E242B63D9E5C31D893ED1C5D65E4(L_9, NULL);
		__this->___alive__7 = L_10;
	}

IL_0036:
	{
		bool L_11 = V_1;
		V_4 = L_11;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_12 = V_4;
		return L_12;
	}
}
// System.Void SIDGIN.Zip.Core.FileSystemScanner::OnProcessFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner_OnProcessFile_m015AE2E0445C1E2BE90D319F0DF68D814E01DADB (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___file0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* V_0 = NULL;
	bool V_1 = false;
	ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* V_2 = NULL;
	{
		ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* L_0 = __this->___ProcessFile_1;
		V_0 = L_0;
		ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = ___file0;
		ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* L_4 = (ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C*)il2cpp_codegen_object_new(ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ScanEventArgs__ctor_m64F74914347A0170BF5AF433B48A8BD6F053FE72(L_4, L_3, NULL);
		V_2 = L_4;
		ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* L_5 = V_0;
		ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* L_6 = V_2;
		NullCheck(L_5);
		ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_inline(L_5, __this, L_6, NULL);
		ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* L_7 = V_2;
		NullCheck(L_7);
		bool L_8;
		L_8 = ScanEventArgs_get_ContinueRunning_mE8AEA58321232E515D40FF03C05376FC304A79DB(L_7, NULL);
		__this->___alive__7 = L_8;
	}

IL_002e:
	{
		return;
	}
}
// System.Void SIDGIN.Zip.Core.FileSystemScanner::OnCompleteFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner_OnCompleteFile_mBE37380761412707D4DE1D22E90E5479C9CF79F7 (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___file0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* V_0 = NULL;
	bool V_1 = false;
	ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* V_2 = NULL;
	{
		CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* L_0 = __this->___CompletedFile_2;
		V_0 = L_0;
		CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = ___file0;
		ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* L_4 = (ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C*)il2cpp_codegen_object_new(ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ScanEventArgs__ctor_m64F74914347A0170BF5AF433B48A8BD6F053FE72(L_4, L_3, NULL);
		V_2 = L_4;
		CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* L_5 = V_0;
		ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* L_6 = V_2;
		NullCheck(L_5);
		CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_inline(L_5, __this, L_6, NULL);
		ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* L_7 = V_2;
		NullCheck(L_7);
		bool L_8;
		L_8 = ScanEventArgs_get_ContinueRunning_mE8AEA58321232E515D40FF03C05376FC304A79DB(L_7, NULL);
		__this->___alive__7 = L_8;
	}

IL_002e:
	{
		return;
	}
}
// System.Void SIDGIN.Zip.Core.FileSystemScanner::OnProcessDirectory(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner_OnProcessDirectory_m91A62D2A1554C75802BB5993D74BF384B440215F (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___directory0, bool ___hasMatchingFiles1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* V_0 = NULL;
	bool V_1 = false;
	DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427* V_2 = NULL;
	{
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_0 = __this->___ProcessDirectory_0;
		V_0 = L_0;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3 = ___directory0;
		bool L_4 = ___hasMatchingFiles1;
		DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427* L_5 = (DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427*)il2cpp_codegen_object_new(DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		DirectoryEventArgs__ctor_mCF44AAFA905196B9BAD56DA8D38C0BA6594B841D(L_5, L_3, L_4, NULL);
		V_2 = L_5;
		EventHandler_1_t18711AF8672EA1AAF380DF547EB8823A1F5BBAD2* L_6 = V_0;
		DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427* L_7 = V_2;
		NullCheck(L_6);
		EventHandler_1_Invoke_m2D9DCBA40FED04CD9BCC237A53B79A53770C4185_inline(L_6, __this, L_7, NULL);
		DirectoryEventArgs_tE63C7DC78128D85B99396736889C79D74479A427* L_8 = V_2;
		NullCheck(L_8);
		bool L_9;
		L_9 = ScanEventArgs_get_ContinueRunning_mE8AEA58321232E515D40FF03C05376FC304A79DB(L_8, NULL);
		__this->___alive__7 = L_9;
	}

IL_002f:
	{
		return;
	}
}
// System.Void SIDGIN.Zip.Core.FileSystemScanner::Scan(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner_Scan_m454201C6B08189C0865C964CBB09799FEE6D5EF7 (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___directory0, bool ___recurse1, const RuntimeMethod* method) 
{
	{
		__this->___alive__7 = (bool)1;
		String_t* L_0 = ___directory0;
		bool L_1 = ___recurse1;
		FileSystemScanner_ScanDir_mE402D3B17DECC02FFC59434EEC7A7B3C0C7742FB(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void SIDGIN.Zip.Core.FileSystemScanner::ScanDir(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemScanner_ScanDir_mE402D3B17DECC02FFC59434EEC7A7B3C0C7742FB (FileSystemScanner_t8F4F4F9846C6AAE42B2ABE49A12BCD4C248DF962* __this, String_t* ___directory0, bool ___recurse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScanFilter_tF122614DE507658AB33C2F4FEFEE44AFE9B7D8F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	Exception_t* V_11 = NULL;
	bool V_12 = false;
	Exception_t* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_16 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_17 = NULL;
	int32_t V_18 = 0;
	String_t* V_19 = NULL;
	bool V_20 = false;
	bool V_21 = false;
	Exception_t* V_22 = NULL;
	bool V_23 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	int32_t G_B31_0 = 0;
	{
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_0 = ___directory0;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
			L_1 = Directory_GetFiles_m4B12F04FB52DA5311463669EBB83321CB0CF284B(L_0, NULL);
			V_0 = L_1;
			V_1 = (bool)0;
			V_2 = 0;
			goto IL_0036_1;
		}

IL_000f_1:
		{
			RuntimeObject* L_2 = __this->___fileFilter__5;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
			int32_t L_4 = V_2;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			NullCheck(L_2);
			bool L_7;
			L_7 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean SIDGIN.Zip.Core.IScanFilter::IsMatch(System.String) */, IScanFilter_tF122614DE507658AB33C2F4FEFEE44AFE9B7D8F9_il2cpp_TypeInfo_var, L_2, L_6);
			V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
			bool L_8 = V_3;
			if (!L_8)
			{
				goto IL_002d_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
			int32_t L_10 = V_2;
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, NULL);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (String_t*)NULL);
			goto IL_0031_1;
		}

IL_002d_1:
		{
			V_1 = (bool)1;
		}

IL_0031_1:
		{
			int32_t L_11 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		}

IL_0036_1:
		{
			int32_t L_12 = V_2;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
			NullCheck(L_13);
			V_4 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
			bool L_14 = V_4;
			if (L_14)
			{
				goto IL_000f_1;
			}
		}
		{
			String_t* L_15 = ___directory0;
			bool L_16 = V_1;
			FileSystemScanner_OnProcessDirectory_m91A62D2A1554C75802BB5993D74BF384B440215F(__this, L_15, L_16, NULL);
			bool L_17 = __this->___alive__7;
			bool L_18 = V_1;
			V_5 = (bool)((int32_t)((int32_t)L_17&(int32_t)L_18));
			bool L_19 = V_5;
			if (!L_19)
			{
				goto IL_00c3_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_0;
			V_6 = L_20;
			V_7 = 0;
			goto IL_00ba_1;
		}

IL_0063_1:
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_6;
			int32_t L_22 = V_7;
			NullCheck(L_21);
			int32_t L_23 = L_22;
			String_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
			V_8 = L_24;
		}
		try
		{// begin try (depth: 2)
			{
				String_t* L_25 = V_8;
				V_9 = (bool)((!(((RuntimeObject*)(String_t*)L_25) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_26 = V_9;
				if (!L_26)
				{
					goto IL_0094_2;
				}
			}
			{
				String_t* L_27 = V_8;
				FileSystemScanner_OnProcessFile_m015AE2E0445C1E2BE90D319F0DF68D814E01DADB(__this, L_27, NULL);
				bool L_28 = __this->___alive__7;
				V_10 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
				bool L_29 = V_10;
				if (!L_29)
				{
					goto IL_0093_2;
				}
			}
			{
				goto IL_00c2_1;
			}

IL_0093_2:
			{
			}

IL_0094_2:
			{
				goto IL_00b3_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0097_1;
			}
			throw e;
		}

CATCH_0097_1:
		{// begin catch(System.Exception)
			{
				V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				String_t* L_30 = V_8;
				Exception_t* L_31 = V_11;
				bool L_32;
				L_32 = FileSystemScanner_OnFileFailure_m72077C4C61AFA5A0C3C927EDB0C00C333ADBAC2B(__this, L_30, L_31, NULL);
				V_12 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
				bool L_33 = V_12;
				if (!L_33)
				{
					goto IL_00b0_1;
				}
			}
			{
				IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			}

IL_00b0_1:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00b3_1;
			}
		}// end catch (depth: 2)

IL_00b3_1:
		{
			int32_t L_34 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		}

IL_00ba_1:
		{
			int32_t L_35 = V_7;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = V_6;
			NullCheck(L_36);
			if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
			{
				goto IL_0063_1;
			}
		}

IL_00c2_1:
		{
		}

IL_00c3_1:
		{
			goto IL_00e1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c6;
		}
		throw e;
	}

CATCH_00c6:
	{// begin catch(System.Exception)
		{
			V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			String_t* L_37 = ___directory0;
			Exception_t* L_38 = V_13;
			bool L_39;
			L_39 = FileSystemScanner_OnDirectoryFailure_mC1ACDB81D8A8987480EF2A3059A97681A293FC53(__this, L_37, L_38, NULL);
			V_14 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
			bool L_40 = V_14;
			if (!L_40)
			{
				goto IL_00de;
			}
		}
		{
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}

IL_00de:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00e1;
		}
	}// end catch (depth: 1)

IL_00e1:
	{
		bool L_41 = __this->___alive__7;
		bool L_42 = ___recurse1;
		V_15 = (bool)((int32_t)((int32_t)L_41&(int32_t)L_42));
		bool L_43 = V_15;
		if (!L_43)
		{
			goto IL_0178;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_44 = ___directory0;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45;
			L_45 = Directory_GetDirectories_m94C31CB11C7AFC316D40DC06C122C2A45F42EC51(L_44, NULL);
			V_16 = L_45;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = V_16;
			V_17 = L_46;
			V_18 = 0;
			goto IL_0151_1;
		}

IL_0106_1:
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = V_17;
			int32_t L_48 = V_18;
			NullCheck(L_47);
			int32_t L_49 = L_48;
			String_t* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
			V_19 = L_50;
			RuntimeObject* L_51 = __this->___directoryFilter__6;
			if (!L_51)
			{
				goto IL_0125_1;
			}
		}
		{
			RuntimeObject* L_52 = __this->___directoryFilter__6;
			String_t* L_53 = V_19;
			NullCheck(L_52);
			bool L_54;
			L_54 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean SIDGIN.Zip.Core.IScanFilter::IsMatch(System.String) */, IScanFilter_tF122614DE507658AB33C2F4FEFEE44AFE9B7D8F9_il2cpp_TypeInfo_var, L_52, L_53);
			G_B31_0 = ((int32_t)(L_54));
			goto IL_0126_1;
		}

IL_0125_1:
		{
			G_B31_0 = 1;
		}

IL_0126_1:
		{
			V_20 = (bool)G_B31_0;
			bool L_55 = V_20;
			if (!L_55)
			{
				goto IL_014a_1;
			}
		}
		{
			String_t* L_56 = V_19;
			FileSystemScanner_ScanDir_mE402D3B17DECC02FFC59434EEC7A7B3C0C7742FB(__this, L_56, (bool)1, NULL);
			bool L_57 = __this->___alive__7;
			V_21 = (bool)((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
			bool L_58 = V_21;
			if (!L_58)
			{
				goto IL_0149_1;
			}
		}
		{
			goto IL_0159_1;
		}

IL_0149_1:
		{
		}

IL_014a_1:
		{
			int32_t L_59 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		}

IL_0151_1:
		{
			int32_t L_60 = V_18;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = V_17;
			NullCheck(L_61);
			if ((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length)))))
			{
				goto IL_0106_1;
			}
		}

IL_0159_1:
		{
			goto IL_0177;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_015c;
		}
		throw e;
	}

CATCH_015c:
	{// begin catch(System.Exception)
		{
			V_22 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			String_t* L_62 = ___directory0;
			Exception_t* L_63 = V_22;
			bool L_64;
			L_64 = FileSystemScanner_OnDirectoryFailure_mC1ACDB81D8A8987480EF2A3059A97681A293FC53(__this, L_62, L_63, NULL);
			V_23 = (bool)((((int32_t)L_64) == ((int32_t)0))? 1 : 0);
			bool L_65 = V_23;
			if (!L_65)
			{
				goto IL_0174;
			}
		}
		{
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}

IL_0174:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0177;
		}
	}// end catch (depth: 1)

IL_0177:
	{
	}

IL_0178:
	{
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
// System.Void SIDGIN.Zip.Core.InvalidNameException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNameException__ctor_mA361BE28F508CFE02E7FCDF00034EAEAC6B4D8E7 (InvalidNameException_t224CC7A7034BF2ABFEE26A5A4C865100FA0E2E61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral782D00C466F1D00D11446EA24B66EF967DD6C8E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		SharpZipBaseException__ctor_m3C00EF79B79E007897B73AD4EE0CF70475A9465C(__this, _stringLiteral782D00C466F1D00D11446EA24B66EF967DD6C8E8, NULL);
		return;
	}
}
// System.Void SIDGIN.Zip.Core.InvalidNameException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNameException__ctor_m193E49104D395847D8640575D36262E0777C7556 (InvalidNameException_t224CC7A7034BF2ABFEE26A5A4C865100FA0E2E61* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		SharpZipBaseException__ctor_m3C00EF79B79E007897B73AD4EE0CF70475A9465C(__this, L_0, NULL);
		return;
	}
}
// System.Void SIDGIN.Zip.Core.InvalidNameException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNameException__ctor_mCBCD4CC6D3F1DF9BDDC7FA301727621B8DCB4285 (InvalidNameException_t224CC7A7034BF2ABFEE26A5A4C865100FA0E2E61* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		SharpZipBaseException__ctor_m6138A4CCE598F9FE766DBB8905EBFC76AAF661DD(__this, L_0, L_1, NULL);
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
// System.Void SIDGIN.Zip.Core.NameFilter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameFilter__ctor_mE959901F91FD2E38BADEDDBD114D64C524BF84F8 (NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* __this, String_t* ___filter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBC1C5FFF45A99496F0628E87B28281A394199E16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___filter0;
		__this->___filter__0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___filter__0), (void*)L_0);
		List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* L_1 = (List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863*)il2cpp_codegen_object_new(List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mBC1C5FFF45A99496F0628E87B28281A394199E16(L_1, List_1__ctor_mBC1C5FFF45A99496F0628E87B28281A394199E16_RuntimeMethod_var);
		__this->___inclusions__1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inclusions__1), (void*)L_1);
		List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* L_2 = (List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863*)il2cpp_codegen_object_new(List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mBC1C5FFF45A99496F0628E87B28281A394199E16(L_2, List_1__ctor_mBC1C5FFF45A99496F0628E87B28281A394199E16_RuntimeMethod_var);
		__this->___exclusions__2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exclusions__2), (void*)L_2);
		NameFilter_Compile_mD4FFA6C401B9AA48DD1F4F69E18D3AC72451EB4F(__this, NULL);
		return;
	}
}
// System.Boolean SIDGIN.Zip.Core.NameFilter::IsValidExpression(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameFilter_IsValidExpression_mB4A92B32E1C1375D91FFC6FC73EA103A54219A3C (String_t* ___expression0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)1;
	}
	try
	{// begin try (depth: 1)
		String_t* L_0 = ___expression0;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_1, L_0, ((int32_t)17), NULL);
		V_1 = L_1;
		goto IL_0017;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.ArgumentException)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0017;
	}// end catch (depth: 1)

IL_0017:
	{
		bool L_2 = V_0;
		V_2 = L_2;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_2;
		return L_3;
	}
}
// System.Boolean SIDGIN.Zip.Core.NameFilter::IsValidFilterExpression(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameFilter_IsValidFilterExpression_m8F41E792E566669E007927D6B61F3640E52D5F66 (String_t* ___toTest0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	String_t* V_5 = NULL;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B6_0 = 0;
	{
		V_0 = (bool)1;
	}
	try
	{// begin try (depth: 1)
		{
			String_t* L_0 = ___toTest0;
			V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_1 = V_1;
			if (!L_1)
			{
				goto IL_00b9_1;
			}
		}
		{
			String_t* L_2 = ___toTest0;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
			L_3 = NameFilter_SplitQuoted_m1DEC3D12A5F2DEFF0CBD5E09D2217717B2362DCF(L_2, NULL);
			V_2 = L_3;
			V_3 = 0;
			goto IL_00a9_1;
		}

IL_001e_1:
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_2;
			int32_t L_5 = V_3;
			NullCheck(L_4);
			int32_t L_6 = L_5;
			String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
			if (!L_7)
			{
				goto IL_0031_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_2;
			int32_t L_9 = V_3;
			NullCheck(L_8);
			int32_t L_10 = L_9;
			String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			NullCheck(L_11);
			int32_t L_12;
			L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
			G_B6_0 = ((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
			goto IL_0032_1;
		}

IL_0031_1:
		{
			G_B6_0 = 0;
		}

IL_0032_1:
		{
			V_4 = (bool)G_B6_0;
			bool L_13 = V_4;
			if (!L_13)
			{
				goto IL_00a4_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_2;
			int32_t L_15 = V_3;
			NullCheck(L_14);
			int32_t L_16 = L_15;
			String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			NullCheck(L_17);
			Il2CppChar L_18;
			L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_17, 0, NULL);
			V_7 = (bool)((((int32_t)L_18) == ((int32_t)((int32_t)43)))? 1 : 0);
			bool L_19 = V_7;
			if (!L_19)
			{
				goto IL_0065_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_2;
			int32_t L_21 = V_3;
			NullCheck(L_20);
			int32_t L_22 = L_21;
			String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_2;
			int32_t L_25 = V_3;
			NullCheck(L_24);
			int32_t L_26 = L_25;
			String_t* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			NullCheck(L_27);
			int32_t L_28;
			L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_27, NULL);
			NullCheck(L_23);
			String_t* L_29;
			L_29 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_23, 1, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), NULL);
			V_5 = L_29;
			goto IL_0098_1;
		}

IL_0065_1:
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_2;
			int32_t L_31 = V_3;
			NullCheck(L_30);
			int32_t L_32 = L_31;
			String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
			NullCheck(L_33);
			Il2CppChar L_34;
			L_34 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_33, 0, NULL);
			V_8 = (bool)((((int32_t)L_34) == ((int32_t)((int32_t)45)))? 1 : 0);
			bool L_35 = V_8;
			if (!L_35)
			{
				goto IL_0091_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = V_2;
			int32_t L_37 = V_3;
			NullCheck(L_36);
			int32_t L_38 = L_37;
			String_t* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = V_2;
			int32_t L_41 = V_3;
			NullCheck(L_40);
			int32_t L_42 = L_41;
			String_t* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
			NullCheck(L_43);
			int32_t L_44;
			L_44 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_43, NULL);
			NullCheck(L_39);
			String_t* L_45;
			L_45 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_39, 1, ((int32_t)il2cpp_codegen_subtract(L_44, 1)), NULL);
			V_5 = L_45;
			goto IL_0098_1;
		}

IL_0091_1:
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = V_2;
			int32_t L_47 = V_3;
			NullCheck(L_46);
			int32_t L_48 = L_47;
			String_t* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
			V_5 = L_49;
		}

IL_0098_1:
		{
			String_t* L_50 = V_5;
			Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_51 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
			NullCheck(L_51);
			Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_51, L_50, ((int32_t)17), NULL);
			V_6 = L_51;
		}

IL_00a4_1:
		{
			int32_t L_52 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		}

IL_00a9_1:
		{
			int32_t L_53 = V_3;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = V_2;
			NullCheck(L_54);
			V_9 = (bool)((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))? 1 : 0);
			bool L_55 = V_9;
			if (L_55)
			{
				goto IL_001e_1;
			}
		}
		{
		}

IL_00b9_1:
		{
			goto IL_00c3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bc;
		}
		throw e;
	}

CATCH_00bc:
	{// begin catch(System.ArgumentException)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c3;
	}// end catch (depth: 1)

IL_00c3:
	{
		bool L_56 = V_0;
		V_10 = L_56;
		goto IL_00c8;
	}

IL_00c8:
	{
		bool L_57 = V_10;
		return L_57;
	}
}
// System.String[] SIDGIN.Zip.Core.NameFilter::SplitQuoted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NameFilter_SplitQuoted_m1DEC3D12A5F2DEFF0CBD5E09D2217717B2362DCF (String_t* ___original0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m55FBDEFD87196AB04BCF609F8E9974786DBAD283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	StringBuilder_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_12 = NULL;
	{
		V_0 = ((int32_t)92);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)59));
		V_1 = L_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_2 = L_2;
		String_t* L_3 = ___original0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0132;
		}
	}
	{
		V_4 = (-1);
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_5 = L_6;
		goto IL_011e;
	}

IL_0036:
	{
		int32_t L_7 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_4;
		String_t* L_9 = ___original0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_2;
		StringBuilder_t* L_13 = V_5;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_14, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_011d;
	}

IL_0065:
	{
		String_t* L_15 = ___original0;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, L_16, NULL);
		Il2CppChar L_18 = V_0;
		V_7 = (bool)((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_4;
		String_t* L_22 = ___original0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_22, NULL);
		V_8 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)L_23))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_00a1;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB8888654E6E6DAB9D241F334E7479F929DE3AE7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE162D745F1E1183DAA54D9155EB11BEC6D2C8466)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameFilter_SplitQuoted_m1DEC3D12A5F2DEFF0CBD5E09D2217717B2362DCF_RuntimeMethod_var)));
	}

IL_00a1:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_1;
		String_t* L_27 = ___original0;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		Il2CppChar L_29;
		L_29 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_27, L_28, NULL);
		int32_t L_30;
		L_30 = Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m55FBDEFD87196AB04BCF609F8E9974786DBAD283(L_26, L_29, Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m55FBDEFD87196AB04BCF609F8E9974786DBAD283_RuntimeMethod_var);
		V_9 = (bool)((((int32_t)L_30) < ((int32_t)0))? 1 : 0);
		bool L_31 = V_9;
		if (!L_31)
		{
			goto IL_00c1;
		}
	}
	{
		StringBuilder_t* L_32 = V_5;
		Il2CppChar L_33 = V_0;
		NullCheck(L_32);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, L_33, NULL);
	}

IL_00c1:
	{
		StringBuilder_t* L_35 = V_5;
		String_t* L_36 = ___original0;
		int32_t L_37 = V_4;
		NullCheck(L_36);
		Il2CppChar L_38;
		L_38 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_36, L_37, NULL);
		NullCheck(L_35);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_35, L_38, NULL);
		goto IL_011d;
	}

IL_00d4:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = V_1;
		String_t* L_41 = ___original0;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		Il2CppChar L_43;
		L_43 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_41, L_42, NULL);
		int32_t L_44;
		L_44 = Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m55FBDEFD87196AB04BCF609F8E9974786DBAD283(L_40, L_43, Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m55FBDEFD87196AB04BCF609F8E9974786DBAD283_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_10;
		if (!L_45)
		{
			goto IL_010a;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_46 = V_2;
		StringBuilder_t* L_47 = V_5;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_47);
		NullCheck(L_46);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_46, L_48, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		StringBuilder_t* L_49 = V_5;
		NullCheck(L_49);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_49, 0, NULL);
		goto IL_011c;
	}

IL_010a:
	{
		StringBuilder_t* L_50 = V_5;
		String_t* L_51 = ___original0;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Il2CppChar L_53;
		L_53 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_51, L_52, NULL);
		NullCheck(L_50);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_50, L_53, NULL);
	}

IL_011c:
	{
	}

IL_011d:
	{
	}

IL_011e:
	{
		int32_t L_55 = V_4;
		String_t* L_56 = ___original0;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_56, NULL);
		V_11 = (bool)((((int32_t)L_55) < ((int32_t)L_57))? 1 : 0);
		bool L_58 = V_11;
		if (L_58)
		{
			goto IL_0036;
		}
	}
	{
	}

IL_0132:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_59 = V_2;
		NullCheck(L_59);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60;
		L_60 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_59, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		V_12 = L_60;
		goto IL_013c;
	}

IL_013c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = V_12;
		return L_61;
	}
}
// System.String SIDGIN.Zip.Core.NameFilter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameFilter_ToString_m0CC1A4C6ACDF7BEC3B3997CC7D62F08C04DC0F76 (NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___filter__0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean SIDGIN.Zip.Core.NameFilter::IsIncluded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameFilter_IsIncluded_m8C847D32EF59D5B09F60056A6570A9F8CD931C6D (NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEF636C425930F33650152B9DE223E7EB434D4120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD0E04EE35ED978F62AF479D40923B1C0D53673A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6A8AA947B2871E1D1E0CB19A41E15A724FC671A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD070FD0A3A71BA9B5F9BA4E9434E964C51FF1DB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3E95A1E10F56ADBC1EBC77B1D80D077795EACB7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_tF5EEAF85CFB94340971BB7C9A650F8EAAE74C0A1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	{
		V_0 = (bool)0;
		List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* L_0 = __this->___inclusions__1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m3E95A1E10F56ADBC1EBC77B1D80D077795EACB7A_inline(L_0, List_1_get_Count_m3E95A1E10F56ADBC1EBC77B1D80D077795EACB7A_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0062;
	}

IL_001b:
	{
		List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* L_3 = __this->___inclusions__1;
		NullCheck(L_3);
		Enumerator_tF5EEAF85CFB94340971BB7C9A650F8EAAE74C0A1 L_4;
		L_4 = List_1_GetEnumerator_mD070FD0A3A71BA9B5F9BA4E9434E964C51FF1DB1(L_3, List_1_GetEnumerator_mD070FD0A3A71BA9B5F9BA4E9434E964C51FF1DB1_RuntimeMethod_var);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEF636C425930F33650152B9DE223E7EB434D4120((&V_2), Enumerator_Dispose_mEF636C425930F33650152B9DE223E7EB434D4120_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0047_1;
			}

IL_002b_1:
			{
				Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_5;
				L_5 = Enumerator_get_Current_m6A8AA947B2871E1D1E0CB19A41E15A724FC671A3_inline((&V_2), Enumerator_get_Current_m6A8AA947B2871E1D1E0CB19A41E15A724FC671A3_RuntimeMethod_var);
				V_3 = L_5;
				Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_6 = V_3;
				String_t* L_7 = ___name0;
				NullCheck(L_6);
				bool L_8;
				L_8 = Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49(L_6, L_7, NULL);
				V_4 = L_8;
				bool L_9 = V_4;
				if (!L_9)
				{
					goto IL_0046_1;
				}
			}
			{
				V_0 = (bool)1;
				goto IL_0050_1;
			}

IL_0046_1:
			{
			}

IL_0047_1:
			{
				bool L_10;
				L_10 = Enumerator_MoveNext_mD0E04EE35ED978F62AF479D40923B1C0D53673A2((&V_2), Enumerator_MoveNext_mD0E04EE35ED978F62AF479D40923B1C0D53673A2_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_002b_1;
				}
			}

IL_0050_1:
			{
				goto IL_0061;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
	}

IL_0062:
	{
		bool L_11 = V_0;
		V_5 = L_11;
		goto IL_0067;
	}

IL_0067:
	{
		bool L_12 = V_5;
		return L_12;
	}
}
// System.Boolean SIDGIN.Zip.Core.NameFilter::IsExcluded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameFilter_IsExcluded_m9252F6ED52CDAD819C85CC9436BAC88A114F81DA (NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEF636C425930F33650152B9DE223E7EB434D4120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD0E04EE35ED978F62AF479D40923B1C0D53673A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6A8AA947B2871E1D1E0CB19A41E15A724FC671A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD070FD0A3A71BA9B5F9BA4E9434E964C51FF1DB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tF5EEAF85CFB94340971BB7C9A650F8EAAE74C0A1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		V_0 = (bool)0;
		List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* L_0 = __this->___exclusions__2;
		NullCheck(L_0);
		Enumerator_tF5EEAF85CFB94340971BB7C9A650F8EAAE74C0A1 L_1;
		L_1 = List_1_GetEnumerator_mD070FD0A3A71BA9B5F9BA4E9434E964C51FF1DB1(L_0, List_1_GetEnumerator_mD070FD0A3A71BA9B5F9BA4E9434E964C51FF1DB1_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEF636C425930F33650152B9DE223E7EB434D4120((&V_1), Enumerator_Dispose_mEF636C425930F33650152B9DE223E7EB434D4120_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002c_1;
			}

IL_0012_1:
			{
				Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_2;
				L_2 = Enumerator_get_Current_m6A8AA947B2871E1D1E0CB19A41E15A724FC671A3_inline((&V_1), Enumerator_get_Current_m6A8AA947B2871E1D1E0CB19A41E15A724FC671A3_RuntimeMethod_var);
				V_2 = L_2;
				Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_3 = V_2;
				String_t* L_4 = ___name0;
				NullCheck(L_3);
				bool L_5;
				L_5 = Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49(L_3, L_4, NULL);
				V_3 = L_5;
				bool L_6 = V_3;
				if (!L_6)
				{
					goto IL_002b_1;
				}
			}
			{
				V_0 = (bool)1;
				goto IL_0035_1;
			}

IL_002b_1:
			{
			}

IL_002c_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_mD0E04EE35ED978F62AF479D40923B1C0D53673A2((&V_1), Enumerator_MoveNext_mD0E04EE35ED978F62AF479D40923B1C0D53673A2_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0012_1;
				}
			}

IL_0035_1:
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		bool L_8 = V_0;
		V_4 = L_8;
		goto IL_004b;
	}

IL_004b:
	{
		bool L_9 = V_4;
		return L_9;
	}
}
// System.Boolean SIDGIN.Zip.Core.NameFilter::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameFilter_IsMatch_mD16A90D98AE20A48A65F4CB675025492D184F5AC (NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = NameFilter_IsIncluded_m8C847D32EF59D5B09F60056A6570A9F8CD931C6D(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ___name0;
		bool L_3;
		L_3 = NameFilter_IsExcluded_m9252F6ED52CDAD819C85CC9436BAC88A114F81DA(__this, L_2, NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void SIDGIN.Zip.Core.NameFilter::Compile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameFilter_Compile_mD4FFA6C401B9AA48DD1F4F69E18D3AC72451EB4F (NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m493C7305EFDDA9D516DEFDECDD0CD3DB2C199829_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	{
		String_t* L_0 = __this->___filter__0;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0101;
	}

IL_0014:
	{
		String_t* L_2 = __this->___filter__0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = NameFilter_SplitQuoted_m1DEC3D12A5F2DEFF0CBD5E09D2217717B2362DCF(L_2, NULL);
		V_0 = L_3;
		V_2 = 0;
		goto IL_00f2;
	}

IL_0027:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		G_B6_0 = ((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
		goto IL_003b;
	}

IL_003a:
	{
		G_B6_0 = 0;
	}

IL_003b:
	{
		V_3 = (bool)G_B6_0;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_00ed;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_17, 0, NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_18) == ((int32_t)((int32_t)45)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_0;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Il2CppChar L_23;
		L_23 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_22, 0, NULL);
		V_6 = (bool)((((int32_t)L_23) == ((int32_t)((int32_t)43)))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_0081;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		String_t* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = V_0;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		String_t* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_32, NULL);
		NullCheck(L_28);
		String_t* L_34;
		L_34 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_28, 1, ((int32_t)il2cpp_codegen_subtract(L_33, 1)), NULL);
		V_5 = L_34;
		goto IL_00b4;
	}

IL_0081:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = V_0;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		String_t* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		Il2CppChar L_39;
		L_39 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_38, 0, NULL);
		V_7 = (bool)((((int32_t)L_39) == ((int32_t)((int32_t)45)))? 1 : 0);
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_00ad;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = V_0;
		int32_t L_42 = V_2;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		String_t* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = V_0;
		int32_t L_46 = V_2;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		String_t* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		int32_t L_49;
		L_49 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_48, NULL);
		NullCheck(L_44);
		String_t* L_50;
		L_50 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_44, 1, ((int32_t)il2cpp_codegen_subtract(L_49, 1)), NULL);
		V_5 = L_50;
		goto IL_00b4;
	}

IL_00ad:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = V_0;
		int32_t L_52 = V_2;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		String_t* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_5 = L_54;
	}

IL_00b4:
	{
		bool L_55 = V_4;
		V_8 = L_55;
		bool L_56 = V_8;
		if (!L_56)
		{
			goto IL_00d5;
		}
	}
	{
		List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* L_57 = __this->___inclusions__1;
		String_t* L_58 = V_5;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_59 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_59, L_58, ((int32_t)25), NULL);
		NullCheck(L_57);
		List_1_Add_m493C7305EFDDA9D516DEFDECDD0CD3DB2C199829_inline(L_57, L_59, List_1_Add_m493C7305EFDDA9D516DEFDECDD0CD3DB2C199829_RuntimeMethod_var);
		goto IL_00ec;
	}

IL_00d5:
	{
		List_1_tF2F425C8A5E27957B90BCB0082E8BCD3A0A46863* L_60 = __this->___exclusions__2;
		String_t* L_61 = V_5;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_62 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_62, L_61, ((int32_t)25), NULL);
		NullCheck(L_60);
		List_1_Add_m493C7305EFDDA9D516DEFDECDD0CD3DB2C199829_inline(L_60, L_62, List_1_Add_m493C7305EFDDA9D516DEFDECDD0CD3DB2C199829_RuntimeMethod_var);
	}

IL_00ec:
	{
	}

IL_00ed:
	{
		int32_t L_63 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_00f2:
	{
		int32_t L_64 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = V_0;
		NullCheck(L_65);
		V_9 = (bool)((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length))))? 1 : 0);
		bool L_66 = V_9;
		if (L_66)
		{
			goto IL_0027;
		}
	}

IL_0101:
	{
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
// System.Void SIDGIN.Zip.Core.PathFilter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathFilter__ctor_mD1AEFBF119BD4C84CCBD17CF0CB225BB23946819 (PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F* __this, String_t* ___filter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___filter0;
		NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* L_1 = (NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B*)il2cpp_codegen_object_new(NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NameFilter__ctor_mE959901F91FD2E38BADEDDBD114D64C524BF84F8(L_1, L_0, NULL);
		__this->___nameFilter__0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nameFilter__0), (void*)L_1);
		return;
	}
}
// System.Boolean SIDGIN.Zip.Core.PathFilter::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathFilter_IsMatch_m2FAF0EBC84280117E6046C0D12A98C9C58AE7A79 (PathFilter_t1936DCB3CC76E375F669B38D8C9352CAA3456B7F* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* G_B4_0 = NULL;
	{
		V_0 = (bool)0;
		String_t* L_0 = ___name0;
		V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = ___name0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0022;
	}

IL_001c:
	{
		String_t* L_4 = ___name0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Path_GetFullPath_m17A1AD4E216D884E3DF3208BF44F4E40823BAA23(L_4, NULL);
		G_B4_0 = L_5;
	}

IL_0022:
	{
		V_2 = G_B4_0;
		NameFilter_tD8E876FDAEEC3A0D1D827A8D2EB22D5C4BA35C5B* L_6 = __this->___nameFilter__0;
		String_t* L_7 = V_2;
		NullCheck(L_6);
		bool L_8;
		L_8 = NameFilter_IsMatch_mD16A90D98AE20A48A65F4CB675025492D184F5AC(L_6, L_7, NULL);
		V_0 = L_8;
	}

IL_0031:
	{
		bool L_9 = V_0;
		V_3 = L_9;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_3;
		return L_10;
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
// System.Void SIDGIN.Zip.Core.ExtendedPathFilter::.ctor(System.String,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedPathFilter__ctor_mB9560D40E86859DA17ECBE5C774B0282B6E0E235 (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, String_t* ___filter0, int64_t ___minSize1, int64_t ___maxSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___maxSize__2 = ((int64_t)(std::numeric_limits<int64_t>::max)());
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		__this->___minDate__3 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MaxValue_33;
		__this->___maxDate__4 = L_1;
		String_t* L_2 = ___filter0;
		PathFilter__ctor_mD1AEFBF119BD4C84CCBD17CF0CB225BB23946819(__this, L_2, NULL);
		int64_t L_3 = ___minSize1;
		ExtendedPathFilter_set_MinSize_mAB19097C2DD164EB7DF8CBD2FCA07970942DF5A0(__this, L_3, NULL);
		int64_t L_4 = ___maxSize2;
		ExtendedPathFilter_set_MaxSize_m266317B881848E84B33FC924C8FC3AB13F62D05F(__this, L_4, NULL);
		return;
	}
}
// System.Void SIDGIN.Zip.Core.ExtendedPathFilter::.ctor(System.String,System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedPathFilter__ctor_m31CEEF5904A61911043DF6FDF429CB2EF03A7D78 (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, String_t* ___filter0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___minDate1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___maxDate2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___maxSize__2 = ((int64_t)(std::numeric_limits<int64_t>::max)());
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		__this->___minDate__3 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MaxValue_33;
		__this->___maxDate__4 = L_1;
		String_t* L_2 = ___filter0;
		PathFilter__ctor_mD1AEFBF119BD4C84CCBD17CF0CB225BB23946819(__this, L_2, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = ___minDate1;
		ExtendedPathFilter_set_MinDate_m874ADEA69B150E868AF1D668610ECE60105AC63E(__this, L_3, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = ___maxDate2;
		ExtendedPathFilter_set_MaxDate_mBBB2C018D792801CDAD503221ABC8BC6C479D74B(__this, L_4, NULL);
		return;
	}
}
// System.Void SIDGIN.Zip.Core.ExtendedPathFilter::.ctor(System.String,System.Int64,System.Int64,System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedPathFilter__ctor_mE50968AB80DF8BF9E709F5119AAA2FAAC07BFD7D (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, String_t* ___filter0, int64_t ___minSize1, int64_t ___maxSize2, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___minDate3, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___maxDate4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___maxSize__2 = ((int64_t)(std::numeric_limits<int64_t>::max)());
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		__this->___minDate__3 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MaxValue_33;
		__this->___maxDate__4 = L_1;
		String_t* L_2 = ___filter0;
		PathFilter__ctor_mD1AEFBF119BD4C84CCBD17CF0CB225BB23946819(__this, L_2, NULL);
		int64_t L_3 = ___minSize1;
		ExtendedPathFilter_set_MinSize_mAB19097C2DD164EB7DF8CBD2FCA07970942DF5A0(__this, L_3, NULL);
		int64_t L_4 = ___maxSize2;
		ExtendedPathFilter_set_MaxSize_m266317B881848E84B33FC924C8FC3AB13F62D05F(__this, L_4, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = ___minDate3;
		ExtendedPathFilter_set_MinDate_m874ADEA69B150E868AF1D668610ECE60105AC63E(__this, L_5, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = ___maxDate4;
		ExtendedPathFilter_set_MaxDate_mBBB2C018D792801CDAD503221ABC8BC6C479D74B(__this, L_6, NULL);
		return;
	}
}
// System.Boolean SIDGIN.Zip.Core.ExtendedPathFilter::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtendedPathFilter_IsMatch_m6A4D59D6DB17FD435F6ED331CBBA521E6BBE3188 (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	{
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = PathFilter_IsMatch_m2FAF0EBC84280117E6046C0D12A98C9C58AE7A79(__this, L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_4 = ___name0;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_5 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_5, L_4, NULL);
		V_2 = L_5;
		int64_t L_6;
		L_6 = ExtendedPathFilter_get_MinSize_m37E96CEF3A4FF5C915C93B40DD1D0B525FDE8429(__this, NULL);
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_7 = V_2;
		NullCheck(L_7);
		int64_t L_8;
		L_8 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_7, NULL);
		if ((((int64_t)L_6) > ((int64_t)L_8)))
		{
			goto IL_0058;
		}
	}
	{
		int64_t L_9;
		L_9 = ExtendedPathFilter_get_MaxSize_m86F3984E00FBBF5FB0EBE2CAF75747C20E563FDE(__this, NULL);
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_10 = V_2;
		NullCheck(L_10);
		int64_t L_11;
		L_11 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_10, NULL);
		if ((((int64_t)L_9) < ((int64_t)L_11)))
		{
			goto IL_0058;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12;
		L_12 = ExtendedPathFilter_get_MinDate_m487187AE5AAEB8B6E475F32BA908EC3210C538AE(__this, NULL);
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_13 = V_2;
		NullCheck(L_13);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14;
		L_14 = FileSystemInfo_get_LastWriteTime_m5009457B3D837E929AF4FBC9E2738F15BB6476C5(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = DateTime_op_LessThanOrEqual_m458241757285ECEABEDA1F8105546FBFCD9ECB80(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0058;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16;
		L_16 = ExtendedPathFilter_get_MaxDate_m252DA3B70035365AF0007BDC6941CEC8AE30A98F(__this, NULL);
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_17 = V_2;
		NullCheck(L_17);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_18;
		L_18 = FileSystemInfo_get_LastWriteTime_m5009457B3D837E929AF4FBC9E2738F15BB6476C5(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = DateTime_op_GreaterThanOrEqual_mBEEE5CB06F515D621E03D91F54AB26EEA73F1D09(L_16, L_18, NULL);
		G_B6_0 = ((int32_t)(L_19));
		goto IL_0059;
	}

IL_0058:
	{
		G_B6_0 = 0;
	}

IL_0059:
	{
		V_0 = (bool)G_B6_0;
	}

IL_005b:
	{
		bool L_20 = V_0;
		V_3 = L_20;
		goto IL_005f;
	}

IL_005f:
	{
		bool L_21 = V_3;
		return L_21;
	}
}
// System.Int64 SIDGIN.Zip.Core.ExtendedPathFilter::get_MinSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ExtendedPathFilter_get_MinSize_m37E96CEF3A4FF5C915C93B40DD1D0B525FDE8429 (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->___minSize__1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SIDGIN.Zip.Core.ExtendedPathFilter::set_MinSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedPathFilter_set_MinSize_mAB19097C2DD164EB7DF8CBD2FCA07970942DF5A0 (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int64_t L_0 = ___value0;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)0))))
		{
			goto IL_0011;
		}
	}
	{
		int64_t L_1 = __this->___maxSize__2;
		int64_t L_2 = ___value0;
		G_B3_0 = ((((int64_t)L_1) < ((int64_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExtendedPathFilter_set_MinSize_mAB19097C2DD164EB7DF8CBD2FCA07970942DF5A0_RuntimeMethod_var)));
	}

IL_0022:
	{
		int64_t L_5 = ___value0;
		__this->___minSize__1 = L_5;
		return;
	}
}
// System.Int64 SIDGIN.Zip.Core.ExtendedPathFilter::get_MaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ExtendedPathFilter_get_MaxSize_m86F3984E00FBBF5FB0EBE2CAF75747C20E563FDE (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->___maxSize__2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SIDGIN.Zip.Core.ExtendedPathFilter::set_MaxSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedPathFilter_set_MaxSize_m266317B881848E84B33FC924C8FC3AB13F62D05F (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int64_t L_0 = ___value0;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)0))))
		{
			goto IL_0011;
		}
	}
	{
		int64_t L_1 = __this->___minSize__1;
		int64_t L_2 = ___value0;
		G_B3_0 = ((((int64_t)L_1) > ((int64_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExtendedPathFilter_set_MaxSize_m266317B881848E84B33FC924C8FC3AB13F62D05F_RuntimeMethod_var)));
	}

IL_0022:
	{
		int64_t L_5 = ___value0;
		__this->___maxSize__2 = L_5;
		return;
	}
}
// System.DateTime SIDGIN.Zip.Core.ExtendedPathFilter::get_MinDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ExtendedPathFilter_get_MinDate_m487187AE5AAEB8B6E475F32BA908EC3210C538AE (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___minDate__3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = V_0;
		return L_1;
	}
}
// System.Void SIDGIN.Zip.Core.ExtendedPathFilter::set_MinDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedPathFilter_set_MinDate_m874ADEA69B150E868AF1D668610ECE60105AC63E (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = __this->___maxDate__4;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = DateTime_op_GreaterThan_mA9021939CEE6D93308C1CFB63C7E6D5CA58F7B92(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85948862F786C2751182A35B5AD1B848AD33D6B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExtendedPathFilter_set_MinDate_m874ADEA69B150E868AF1D668610ECE60105AC63E_RuntimeMethod_var)));
	}

IL_0022:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = ___value0;
		__this->___minDate__3 = L_5;
		return;
	}
}
// System.DateTime SIDGIN.Zip.Core.ExtendedPathFilter::get_MaxDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ExtendedPathFilter_get_MaxDate_m252DA3B70035365AF0007BDC6941CEC8AE30A98F (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___maxDate__4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = V_0;
		return L_1;
	}
}
// System.Void SIDGIN.Zip.Core.ExtendedPathFilter::set_MaxDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendedPathFilter_set_MaxDate_mBBB2C018D792801CDAD503221ABC8BC6C479D74B (ExtendedPathFilter_t2F8310F1E5643C430A56C1227861CF41F93BBE56* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___minDate__3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = DateTime_op_GreaterThan_mA9021939CEE6D93308C1CFB63C7E6D5CA58F7B92(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4046FC9D8EE8B385D68BF287D8DA3B1D580A7F9A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExtendedPathFilter_set_MaxDate_mBBB2C018D792801CDAD503221ABC8BC6C479D74B_RuntimeMethod_var)));
	}

IL_0022:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = ___value0;
		__this->___maxDate__4 = L_5;
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
// System.Void SIDGIN.Zip.Core.NameAndSizeFilter::.ctor(System.String,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameAndSizeFilter__ctor_m7D19627C7474945456B30492FCBDAA6D79E9652F (NameAndSizeFilter_tFB5F19B756059592F51D0F91FB2DBE42FB9E960C* __this, String_t* ___filter0, int64_t ___minSize1, int64_t ___maxSize2, const RuntimeMethod* method) 
{
	{
		__this->___maxSize__2 = ((int64_t)(std::numeric_limits<int64_t>::max)());
		String_t* L_0 = ___filter0;
		PathFilter__ctor_mD1AEFBF119BD4C84CCBD17CF0CB225BB23946819(__this, L_0, NULL);
		int64_t L_1 = ___minSize1;
		NameAndSizeFilter_set_MinSize_m1FF70376FA468CD20BBF1156731C34D9E3E49C74(__this, L_1, NULL);
		int64_t L_2 = ___maxSize2;
		NameAndSizeFilter_set_MaxSize_m853470B8DC9B49ADB767687BF210217252981F94(__this, L_2, NULL);
		return;
	}
}
// System.Boolean SIDGIN.Zip.Core.NameAndSizeFilter::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NameAndSizeFilter_IsMatch_mA5C704AC2F0881F93F2D8C5E46C8656EAEC38D09 (NameAndSizeFilter_tFB5F19B756059592F51D0F91FB2DBE42FB9E960C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* V_2 = NULL;
	int64_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = PathFilter_IsMatch_m2FAF0EBC84280117E6046C0D12A98C9C58AE7A79(__this, L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_4 = ___name0;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_5 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_5, L_4, NULL);
		V_2 = L_5;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_6 = V_2;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_6, NULL);
		V_3 = L_7;
		int64_t L_8;
		L_8 = NameAndSizeFilter_get_MinSize_m032B4FC10C23FBC56C12086FFE316162E8088144(__this, NULL);
		int64_t L_9 = V_3;
		if ((((int64_t)L_8) > ((int64_t)L_9)))
		{
			goto IL_0034;
		}
	}
	{
		int64_t L_10;
		L_10 = NameAndSizeFilter_get_MaxSize_mD388CE8B4FF93A3CE56FC938800C8B0ED57E44D8(__this, NULL);
		int64_t L_11 = V_3;
		G_B4_0 = ((((int32_t)((((int64_t)L_10) < ((int64_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B4_0 = 0;
	}

IL_0035:
	{
		V_0 = (bool)G_B4_0;
	}

IL_0037:
	{
		bool L_12 = V_0;
		V_4 = L_12;
		goto IL_003c;
	}

IL_003c:
	{
		bool L_13 = V_4;
		return L_13;
	}
}
// System.Int64 SIDGIN.Zip.Core.NameAndSizeFilter::get_MinSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NameAndSizeFilter_get_MinSize_m032B4FC10C23FBC56C12086FFE316162E8088144 (NameAndSizeFilter_tFB5F19B756059592F51D0F91FB2DBE42FB9E960C* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->___minSize__1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SIDGIN.Zip.Core.NameAndSizeFilter::set_MinSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameAndSizeFilter_set_MinSize_m1FF70376FA468CD20BBF1156731C34D9E3E49C74 (NameAndSizeFilter_tFB5F19B756059592F51D0F91FB2DBE42FB9E960C* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int64_t L_0 = ___value0;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)0))))
		{
			goto IL_0011;
		}
	}
	{
		int64_t L_1 = __this->___maxSize__2;
		int64_t L_2 = ___value0;
		G_B3_0 = ((((int64_t)L_1) < ((int64_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameAndSizeFilter_set_MinSize_m1FF70376FA468CD20BBF1156731C34D9E3E49C74_RuntimeMethod_var)));
	}

IL_0022:
	{
		int64_t L_5 = ___value0;
		__this->___minSize__1 = L_5;
		return;
	}
}
// System.Int64 SIDGIN.Zip.Core.NameAndSizeFilter::get_MaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NameAndSizeFilter_get_MaxSize_mD388CE8B4FF93A3CE56FC938800C8B0ED57E44D8 (NameAndSizeFilter_tFB5F19B756059592F51D0F91FB2DBE42FB9E960C* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->___maxSize__2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SIDGIN.Zip.Core.NameAndSizeFilter::set_MaxSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameAndSizeFilter_set_MaxSize_m853470B8DC9B49ADB767687BF210217252981F94 (NameAndSizeFilter_tFB5F19B756059592F51D0F91FB2DBE42FB9E960C* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int64_t L_0 = ___value0;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)0))))
		{
			goto IL_0011;
		}
	}
	{
		int64_t L_1 = __this->___minSize__1;
		int64_t L_2 = ___value0;
		G_B3_0 = ((((int64_t)L_1) > ((int64_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NameAndSizeFilter_set_MaxSize_m853470B8DC9B49ADB767687BF210217252981F94_RuntimeMethod_var)));
	}

IL_0022:
	{
		int64_t L_5 = ___value0;
		__this->___maxSize__2 = L_5;
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
// System.Void SIDGIN.Zip.Core.StreamUtils::ReadFully(System.IO.Stream,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamUtils_ReadFully_m1CA3D3823E1D75B9B34B35C22EBDBAD35786D3E6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer1;
		NullCheck(L_2);
		StreamUtils_ReadFully_m2E5F75ADFF17593E9D44530508929FB2EDAC0300(L_0, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		return;
	}
}
// System.Void SIDGIN.Zip.Core.StreamUtils::ReadFully(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamUtils_ReadFully_m2E5F75ADFF17593E9D44530508929FB2EDAC0300 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___count3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		V_0 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadFully_m2E5F75ADFF17593E9D44530508929FB2EDAC0300_RuntimeMethod_var)));
	}

IL_0015:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer1;
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadFully_m2E5F75ADFF17593E9D44530508929FB2EDAC0300_RuntimeMethod_var)));
	}

IL_0029:
	{
		int32_t L_6 = ___offset2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = ___offset2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___buffer1;
		NullCheck(L_8);
		G_B7_0 = ((((int32_t)L_7) > ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0);
		goto IL_0036;
	}

IL_0035:
	{
		G_B7_0 = 1;
	}

IL_0036:
	{
		V_2 = (bool)G_B7_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadFully_m2E5F75ADFF17593E9D44530508929FB2EDAC0300_RuntimeMethod_var)));
	}

IL_0046:
	{
		int32_t L_11 = ___count3;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_12 = ___offset2;
		int32_t L_13 = ___count3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___buffer1;
		NullCheck(L_14);
		G_B12_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, L_13))) > ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B12_0 = 1;
	}

IL_0055:
	{
		V_3 = (bool)G_B12_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadFully_m2E5F75ADFF17593E9D44530508929FB2EDAC0300_RuntimeMethod_var)));
	}

IL_0065:
	{
		goto IL_0095;
	}

IL_0067:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = ___stream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___buffer1;
		int32_t L_19 = ___offset2;
		int32_t L_20 = ___count3;
		NullCheck(L_17);
		int32_t L_21;
		L_21 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, L_19, L_20);
		V_4 = L_21;
		int32_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_22) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0088;
		}
	}
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_24 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		EndOfStreamException__ctor_m154EAE9BDAE2A8EB0EE6714D881FA7075628C582(L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_ReadFully_m2E5F75ADFF17593E9D44530508929FB2EDAC0300_RuntimeMethod_var)));
	}

IL_0088:
	{
		int32_t L_25 = ___offset2;
		int32_t L_26 = V_4;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		int32_t L_27 = ___count3;
		int32_t L_28 = V_4;
		___count3 = ((int32_t)il2cpp_codegen_subtract(L_27, L_28));
	}

IL_0095:
	{
		int32_t L_29 = ___count3;
		V_6 = (bool)((((int32_t)L_29) > ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (L_30)
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
// System.Void SIDGIN.Zip.Core.StreamUtils::Copy(System.IO.Stream,System.IO.Stream,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamUtils_Copy_m9ECB45F549FAA1968CA81766726614A38707ECA2 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___source0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___destination1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___source0;
		V_1 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_Copy_m9ECB45F549FAA1968CA81766726614A38707ECA2_RuntimeMethod_var)));
	}

IL_0015:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___destination1;
		V_2 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_Copy_m9ECB45F549FAA1968CA81766726614A38707ECA2_RuntimeMethod_var)));
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer2;
		V_3 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_8 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_Copy_m9ECB45F549FAA1968CA81766726614A38707ECA2_RuntimeMethod_var)));
	}

IL_003d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___buffer2;
		NullCheck(L_9);
		V_4 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) < ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9F5D6B4F1F6DAC8F4EEB3AB72C41EBAB801FE5C)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_Copy_m9ECB45F549FAA1968CA81766726614A38707ECA2_RuntimeMethod_var)));
	}

IL_005e:
	{
		V_0 = (bool)1;
		goto IL_0096;
	}

IL_0062:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = ___source0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___buffer2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___buffer2;
		NullCheck(L_14);
		NullCheck(L_12);
		int32_t L_15;
		L_15 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_12, L_13, 0, ((int32_t)(((RuntimeArray*)L_14)->max_length)));
		V_5 = L_15;
		int32_t L_16 = V_5;
		V_6 = (bool)((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_008a;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18 = ___destination1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___buffer2;
		int32_t L_20 = V_5;
		NullCheck(L_18);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_18, L_19, 0, L_20);
		goto IL_0095;
	}

IL_008a:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = ___destination1;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(21 /* System.Void System.IO.Stream::Flush() */, L_21);
		V_0 = (bool)0;
	}

IL_0095:
	{
	}

IL_0096:
	{
		bool L_22 = V_0;
		V_7 = L_22;
		bool L_23 = V_7;
		if (L_23)
		{
			goto IL_0062;
		}
	}
	{
		return;
	}
}
// System.Void SIDGIN.Zip.Core.StreamUtils::Copy(System.IO.Stream,System.IO.Stream,System.Byte[],SIDGIN.Zip.Core.ProgressHandler,System.TimeSpan,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamUtils_Copy_m8B0496702919B628357042B477AF25E4A3E6EB7B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___source0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___destination1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer2, ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* ___progressHandler3, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___updateInterval4, RuntimeObject* ___sender5, String_t* ___name6, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___source0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___destination1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer2;
		ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* L_3 = ___progressHandler3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = ___updateInterval4;
		RuntimeObject* L_5 = ___sender5;
		String_t* L_6 = ___name6;
		StreamUtils_Copy_m493AF436E809D9628D9D32D64C4515B9D3C934B7(L_0, L_1, L_2, L_3, L_4, L_5, L_6, ((int64_t)(-1)), NULL);
		return;
	}
}
// System.Void SIDGIN.Zip.Core.StreamUtils::Copy(System.IO.Stream,System.IO.Stream,System.Byte[],SIDGIN.Zip.Core.ProgressHandler,System.TimeSpan,System.Object,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamUtils_Copy_m493AF436E809D9628D9D32D64C4515B9D3C934B7 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___source0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___destination1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer2, ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* ___progressHandler3, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___updateInterval4, RuntimeObject* ___sender5, String_t* ___name6, int64_t ___fixedTarget7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___source0;
		V_6 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_Copy_m493AF436E809D9628D9D32D64C4515B9D3C934B7_RuntimeMethod_var)));
	}

IL_0017:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___destination1;
		V_7 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_7;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_Copy_m493AF436E809D9628D9D32D64C4515B9D3C934B7_RuntimeMethod_var)));
	}

IL_002d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___buffer2;
		V_8 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_8;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_8 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_Copy_m493AF436E809D9628D9D32D64C4515B9D3C934B7_RuntimeMethod_var)));
	}

IL_0043:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___buffer2;
		NullCheck(L_9);
		V_9 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) < ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_10 = V_9;
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9F5D6B4F1F6DAC8F4EEB3AB72C41EBAB801FE5C)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_Copy_m493AF436E809D9628D9D32D64C4515B9D3C934B7_RuntimeMethod_var)));
	}

IL_0064:
	{
		ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* L_12 = ___progressHandler3;
		V_10 = (bool)((((RuntimeObject*)(ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_14 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C4EDBD234A5402CD712C85FC166D1EAC35BB543)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamUtils_Copy_m493AF436E809D9628D9D32D64C4515B9D3C934B7_RuntimeMethod_var)));
	}

IL_007a:
	{
		V_0 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15;
		L_15 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_1 = L_15;
		V_2 = ((int64_t)0);
		V_3 = ((int64_t)0);
		int64_t L_16 = ___fixedTarget7;
		V_11 = (bool)((((int32_t)((((int64_t)L_16) < ((int64_t)((int64_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_11;
		if (!L_17)
		{
			goto IL_009e;
		}
	}
	{
		int64_t L_18 = ___fixedTarget7;
		V_3 = L_18;
		goto IL_00ba;
	}

IL_009e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19 = ___source0;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_19);
		V_12 = L_20;
		bool L_21 = V_12;
		if (!L_21)
		{
			goto IL_00ba;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = ___source0;
		NullCheck(L_22);
		int64_t L_23;
		L_23 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_22);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = ___source0;
		NullCheck(L_24);
		int64_t L_25;
		L_25 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_24);
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_23, L_25));
	}

IL_00ba:
	{
		String_t* L_26 = ___name6;
		int64_t L_27 = V_2;
		int64_t L_28 = V_3;
		ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* L_29 = (ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5*)il2cpp_codegen_object_new(ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		ProgressEventArgs__ctor_mC12B116D837718BA8141C6374371800BD43BB79A(L_29, L_26, L_27, L_28, NULL);
		V_4 = L_29;
		ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* L_30 = ___progressHandler3;
		RuntimeObject* L_31 = ___sender5;
		ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* L_32 = V_4;
		NullCheck(L_30);
		ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_inline(L_30, L_31, L_32, NULL);
		V_5 = (bool)1;
		goto IL_0153;
	}

IL_00d5:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_33 = ___source0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___buffer2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___buffer2;
		NullCheck(L_35);
		NullCheck(L_33);
		int32_t L_36;
		L_36 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_33, L_34, 0, ((int32_t)(((RuntimeArray*)L_35)->max_length)));
		V_13 = L_36;
		int32_t L_37 = V_13;
		V_14 = (bool)((((int32_t)L_37) > ((int32_t)0))? 1 : 0);
		bool L_38 = V_14;
		if (!L_38)
		{
			goto IL_0106;
		}
	}
	{
		int64_t L_39 = V_2;
		int32_t L_40 = V_13;
		V_2 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)L_40)));
		V_5 = (bool)0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_41 = ___destination1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___buffer2;
		int32_t L_43 = V_13;
		NullCheck(L_41);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_41, L_42, 0, L_43);
		goto IL_0111;
	}

IL_0106:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_44 = ___destination1;
		NullCheck(L_44);
		VirtualActionInvoker0::Invoke(21 /* System.Void System.IO.Stream::Flush() */, L_44);
		V_0 = (bool)0;
	}

IL_0111:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_45;
		L_45 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_46 = V_1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_47;
		L_47 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_45, L_46, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_48 = ___updateInterval4;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = TimeSpan_op_GreaterThan_m8DAC0E8CCA11AFD73BAA4BE5BFB2FA4D65CFB78B(L_47, L_48, NULL);
		V_15 = L_49;
		bool L_50 = V_15;
		if (!L_50)
		{
			goto IL_0152;
		}
	}
	{
		V_5 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_51;
		L_51 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_1 = L_51;
		String_t* L_52 = ___name6;
		int64_t L_53 = V_2;
		int64_t L_54 = V_3;
		ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* L_55 = (ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5*)il2cpp_codegen_object_new(ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		ProgressEventArgs__ctor_mC12B116D837718BA8141C6374371800BD43BB79A(L_55, L_52, L_53, L_54, NULL);
		V_4 = L_55;
		ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* L_56 = ___progressHandler3;
		RuntimeObject* L_57 = ___sender5;
		ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* L_58 = V_4;
		NullCheck(L_56);
		ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_inline(L_56, L_57, L_58, NULL);
		ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* L_59 = V_4;
		NullCheck(L_59);
		bool L_60;
		L_60 = ProgressEventArgs_get_ContinueRunning_m5BA74D9AF41DF3546314CB7ED4F395C9DE4F3E2F(L_59, NULL);
		V_0 = L_60;
	}

IL_0152:
	{
	}

IL_0153:
	{
		bool L_61 = V_0;
		V_16 = L_61;
		bool L_62 = V_16;
		if (L_62)
		{
			goto IL_00d5;
		}
	}
	{
		bool L_63 = V_5;
		V_17 = (bool)((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
		bool L_64 = V_17;
		if (!L_64)
		{
			goto IL_0180;
		}
	}
	{
		String_t* L_65 = ___name6;
		int64_t L_66 = V_2;
		int64_t L_67 = V_3;
		ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* L_68 = (ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5*)il2cpp_codegen_object_new(ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		ProgressEventArgs__ctor_mC12B116D837718BA8141C6374371800BD43BB79A(L_68, L_65, L_66, L_67, NULL);
		V_4 = L_68;
		ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* L_69 = ___progressHandler3;
		RuntimeObject* L_70 = ___sender5;
		ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* L_71 = V_4;
		NullCheck(L_69);
		ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_inline(L_69, L_70, L_71, NULL);
	}

IL_0180:
	{
		return;
	}
}
// System.Void SIDGIN.Zip.Core.StreamUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamUtils__ctor_m6125E385DAF8A38920F8ACC016CBC3DA69C2D88F (StreamUtils_tA6C790EE60BBDA33C94FC41CDAC491822A797161* __this, const RuntimeMethod* method) 
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
// System.Void SIDGIN.Zip.Core.WindowsPathUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsPathUtils__ctor_m255CDC81908407B9245AE97D05B8E4B4A92BD902 (WindowsPathUtils_tB8FAB6012D04370ABCC45F9696F785CF46F0D77D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String SIDGIN.Zip.Core.WindowsPathUtils::DropPathRoot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsPathUtils_DropPathRoot_m9FB7EE0FB637055A7691010314E2B6EB7BC06ED1 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	String_t* V_11 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B37_0 = 0;
	{
		String_t* L_0 = ___path0;
		V_0 = L_0;
		String_t* L_1 = ___path0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0133;
		}
	}
	{
		String_t* L_4 = ___path0;
		NullCheck(L_4);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, 0, NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)92))))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_6 = ___path0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 0, NULL);
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 1;
	}

IL_002d:
	{
		V_2 = (bool)G_B4_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_00d6;
		}
	}
	{
		String_t* L_9 = ___path0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)1)))
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_11 = ___path0;
		NullCheck(L_11);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, 1, NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)92))))
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13 = ___path0;
		NullCheck(L_13);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, 1, NULL);
		G_B9_0 = ((((int32_t)L_14) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = 1;
	}

IL_0057:
	{
		G_B11_0 = G_B9_0;
		goto IL_005a;
	}

IL_0059:
	{
		G_B11_0 = 0;
	}

IL_005a:
	{
		V_3 = (bool)G_B11_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00d3;
		}
	}
	{
		V_4 = 2;
		V_5 = 2;
		goto IL_006f;
	}

IL_0067:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_006f:
	{
		int32_t L_17 = V_4;
		String_t* L_18 = ___path0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		if ((((int32_t)L_17) > ((int32_t)L_19)))
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_20 = ___path0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, L_21, NULL);
		if ((((int32_t)L_22) == ((int32_t)((int32_t)92))))
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_23 = ___path0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_009d;
		}
	}

IL_0091:
	{
		int32_t L_26 = V_5;
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		V_5 = L_27;
		G_B19_0 = ((((int32_t)L_27) > ((int32_t)0))? 1 : 0);
		goto IL_009e;
	}

IL_009d:
	{
		G_B19_0 = 1;
	}

IL_009e:
	{
		G_B21_0 = G_B19_0;
		goto IL_00a1;
	}

IL_00a0:
	{
		G_B21_0 = 0;
	}

IL_00a1:
	{
		V_6 = (bool)G_B21_0;
		bool L_28 = V_6;
		if (L_28)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = V_4;
		String_t* L_31 = ___path0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_31, NULL);
		V_7 = (bool)((((int32_t)L_30) < ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00ca;
		}
	}
	{
		String_t* L_34 = ___path0;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		String_t* L_36;
		L_36 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_34, L_35, NULL);
		V_0 = L_36;
		goto IL_00d2;
	}

IL_00ca:
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_00d2:
	{
	}

IL_00d3:
	{
		goto IL_0132;
	}

IL_00d6:
	{
		String_t* L_37 = ___path0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		if ((((int32_t)L_38) <= ((int32_t)1)))
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_39 = ___path0;
		NullCheck(L_39);
		Il2CppChar L_40;
		L_40 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_39, 1, NULL);
		G_B30_0 = ((((int32_t)L_40) == ((int32_t)((int32_t)58)))? 1 : 0);
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B30_0 = 0;
	}

IL_00ed:
	{
		V_8 = (bool)G_B30_0;
		bool L_41 = V_8;
		if (!L_41)
		{
			goto IL_0132;
		}
	}
	{
		V_9 = 2;
		String_t* L_42 = ___path0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_42, NULL);
		if ((((int32_t)L_43) <= ((int32_t)2)))
		{
			goto IL_011b;
		}
	}
	{
		String_t* L_44 = ___path0;
		NullCheck(L_44);
		Il2CppChar L_45;
		L_45 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_44, 2, NULL);
		if ((((int32_t)L_45) == ((int32_t)((int32_t)92))))
		{
			goto IL_0118;
		}
	}
	{
		String_t* L_46 = ___path0;
		NullCheck(L_46);
		Il2CppChar L_47;
		L_47 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_46, 2, NULL);
		G_B35_0 = ((((int32_t)L_47) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_0119;
	}

IL_0118:
	{
		G_B35_0 = 1;
	}

IL_0119:
	{
		G_B37_0 = G_B35_0;
		goto IL_011c;
	}

IL_011b:
	{
		G_B37_0 = 0;
	}

IL_011c:
	{
		V_10 = (bool)G_B37_0;
		bool L_48 = V_10;
		if (!L_48)
		{
			goto IL_0127;
		}
	}
	{
		V_9 = 3;
	}

IL_0127:
	{
		String_t* L_49 = V_0;
		int32_t L_50 = V_9;
		NullCheck(L_49);
		String_t* L_51;
		L_51 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_49, 0, L_50, NULL);
		V_0 = L_51;
	}

IL_0132:
	{
	}

IL_0133:
	{
		String_t* L_52 = V_0;
		V_11 = L_52;
		goto IL_0138;
	}

IL_0138:
	{
		String_t* L_53 = V_11;
		return L_53;
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
// System.Void SIDGIN.Zip.Checksum.Adler32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32__ctor_mD841DA5715082DF405E9DD4B6D8C55E74CB96DB7 (Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Adler32_Reset_mB4D01A80E6279CC52C4E8FDF94A3555F6BC5F1AB(__this, NULL);
		return;
	}
}
// System.Void SIDGIN.Zip.Checksum.Adler32::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32_Reset_mB4D01A80E6279CC52C4E8FDF94A3555F6BC5F1AB (Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F* __this, const RuntimeMethod* method) 
{
	{
		__this->___checkValue_1 = 1;
		return;
	}
}
// System.Int64 SIDGIN.Zip.Checksum.Adler32::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Adler32_get_Value_m8DE38DEB48C277ECA49BD1E95CBDBCECDBF899FD (Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		uint32_t L_0 = __this->___checkValue_1;
		V_0 = ((int64_t)(uint64_t)L_0);
		goto IL_000b;
	}

IL_000b:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SIDGIN.Zip.Checksum.Adler32::Update(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32_Update_mF0759C8D673ED3CCFA59CFD4FA3493F6B7CC5437 (Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F* __this, int32_t ___bval0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = __this->___checkValue_1;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)65535)));
		uint32_t L_1 = __this->___checkValue_1;
		V_1 = ((int32_t)((uint32_t)L_1>>((int32_t)16)));
		uint32_t L_2 = V_0;
		int32_t L_3 = ___bval0;
		il2cpp_codegen_runtime_class_init_inline(Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_il2cpp_TypeInfo_var);
		uint32_t L_4 = ((Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_StaticFields*)il2cpp_codegen_static_fields_for(Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_il2cpp_TypeInfo_var))->___BASE_0;
		V_0 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, ((int32_t)(L_3&((int32_t)255)))))%(uint32_t)(int32_t)L_4));
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_1;
		uint32_t L_7 = ((Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_StaticFields*)il2cpp_codegen_static_fields_for(Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_il2cpp_TypeInfo_var))->___BASE_0;
		V_1 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6))%(uint32_t)(int32_t)L_7));
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_0;
		__this->___checkValue_1 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_8<<((int32_t)16))), (int32_t)L_9));
		return;
	}
}
// System.Void SIDGIN.Zip.Checksum.Adler32::Update(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32_Update_m3B59EB9A46EE07D3D5DD78C0450C44FE4C5C4D63 (Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Adler32_Update_m3B59EB9A46EE07D3D5DD78C0450C44FE4C5C4D63_RuntimeMethod_var)));
	}

IL_0015:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___buffer0;
		NullCheck(L_4);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_5), L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		Adler32_Update_m3DC84D4FF75CFF2E6374B450B0339EE067C539C5(__this, L_5, NULL);
		return;
	}
}
// System.Void SIDGIN.Zip.Checksum.Adler32::Update(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32_Update_m3DC84D4FF75CFF2E6374B450B0339EE067C539C5 (Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		uint32_t L_0 = __this->___checkValue_1;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)65535)));
		uint32_t L_1 = __this->___checkValue_1;
		V_1 = ((int32_t)((uint32_t)L_1>>((int32_t)16)));
		int32_t L_2;
		L_2 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___segment0), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		V_2 = L_2;
		int32_t L_3;
		L_3 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___segment0), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		V_3 = L_3;
		goto IL_0089;
	}

IL_002a:
	{
		V_4 = ((int32_t)3800);
		int32_t L_4 = V_4;
		int32_t L_5 = V_2;
		V_5 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = V_2;
		V_4 = L_7;
	}

IL_0042:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
		goto IL_0065;
	}

IL_0049:
	{
		uint32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___segment0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_12 = V_3;
		int32_t L_13 = L_12;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		NullCheck(L_11);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, ((int32_t)((int32_t)L_15&((int32_t)255)))));
		uint32_t L_16 = V_1;
		uint32_t L_17 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17));
	}

IL_0065:
	{
		int32_t L_18 = V_4;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		V_4 = L_19;
		V_6 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_6;
		if (L_20)
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_il2cpp_TypeInfo_var);
		uint32_t L_22 = ((Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_StaticFields*)il2cpp_codegen_static_fields_for(Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_il2cpp_TypeInfo_var))->___BASE_0;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_21%(uint32_t)(int32_t)L_22));
		uint32_t L_23 = V_1;
		uint32_t L_24 = ((Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_StaticFields*)il2cpp_codegen_static_fields_for(Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_il2cpp_TypeInfo_var))->___BASE_0;
		V_1 = ((int32_t)((uint32_t)(int32_t)L_23%(uint32_t)(int32_t)L_24));
	}

IL_0089:
	{
		int32_t L_25 = V_2;
		V_7 = (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
		bool L_26 = V_7;
		if (L_26)
		{
			goto IL_002a;
		}
	}
	{
		uint32_t L_27 = V_1;
		uint32_t L_28 = V_0;
		__this->___checkValue_1 = ((int32_t)(((int32_t)((int32_t)L_27<<((int32_t)16)))|(int32_t)L_28));
		return;
	}
}
// System.Void SIDGIN.Zip.Checksum.Adler32::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32__cctor_m47FBC06815BA38EF0C62BCC5FD176E335213E689 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_StaticFields*)il2cpp_codegen_static_fields_for(Adler32_t40C007C107FE67180B17D19726F90B54BA5CF00F_il2cpp_TypeInfo_var))->___BASE_0 = ((int32_t)65521);
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
// System.UInt32 SIDGIN.Zip.Checksum.Crc32::ComputeCrc32(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Crc32_ComputeCrc32_mF176357C28ACE1CE279287E3573F515428ABC586 (uint32_t ___oldCrc0, uint8_t ___bval1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var))->___crcTable_2;
		uint32_t L_1 = ___oldCrc0;
		uint8_t L_2 = ___bval1;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)(((int32_t)((int32_t)L_1^(int32_t)L_2))&((int32_t)255)));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = ___oldCrc0;
		V_0 = ((int32_t)((int32_t)L_4^((int32_t)((uint32_t)L_5>>8))));
		goto IL_0017;
	}

IL_0017:
	{
		uint32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void SIDGIN.Zip.Checksum.Crc32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32__ctor_m20B776DDCB88B1838D9765398556D24E6E008CAB (Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Crc32_Reset_mA0F66B7373F11EB8CCB8E261F12A6242B8C0DE69(__this, NULL);
		return;
	}
}
// System.Void SIDGIN.Zip.Checksum.Crc32::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Reset_mA0F66B7373F11EB8CCB8E261F12A6242B8C0DE69 (Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var);
		uint32_t L_0 = ((Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var))->___crcInit_0;
		__this->___checkValue_3 = L_0;
		return;
	}
}
// System.Int64 SIDGIN.Zip.Checksum.Crc32::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Crc32_get_Value_m698E93B16B034A646EE2CF069FB6F37BA748EAE6 (Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		uint32_t L_0 = __this->___checkValue_3;
		il2cpp_codegen_runtime_class_init_inline(Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var);
		uint32_t L_1 = ((Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var))->___crcXor_1;
		V_0 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_0^(int32_t)L_1))));
		goto IL_0011;
	}

IL_0011:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
// System.Void SIDGIN.Zip.Checksum.Crc32::Update(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Update_mD20CDDBE547B5713BB8A21AFD8AF414454FEC99F (Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA* __this, int32_t ___bval0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_Update_mD20CDDBE547B5713BB8A21AFD8AF414454FEC99F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var))->___crcTable_2;
		uint32_t L_1 = __this->___checkValue_3;
		int32_t L_2 = ___bval0;
		if ((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)L_1)^((int64_t)L_2)))&((int64_t)((int32_t)255))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Crc32_Update_mD20CDDBE547B5713BB8A21AFD8AF414454FEC99F_RuntimeMethod_var);
		NullCheck(L_0);
		intptr_t L_3 = ((intptr_t)((int64_t)(((int64_t)(((int64_t)(uint64_t)L_1)^((int64_t)L_2)))&((int64_t)((int32_t)255)))));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = __this->___checkValue_3;
		__this->___checkValue_3 = ((int32_t)((int32_t)L_4^((int32_t)((uint32_t)L_5>>8))));
		return;
	}
}
// System.Void SIDGIN.Zip.Checksum.Crc32::Update(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Update_m8BFAB22EDFDC65158D895203F1D885D44D2F21DA (Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Crc32_Update_m8BFAB22EDFDC65158D895203F1D885D44D2F21DA_RuntimeMethod_var)));
	}

IL_0015:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___buffer0;
		NullCheck(L_4);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_5), L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		Crc32_Update_m2623447595663DE0D7268214811E38F14A15E262(__this, L_5, NULL);
		return;
	}
}
// System.Void SIDGIN.Zip.Checksum.Crc32::Update(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32_Update_m2623447595663DE0D7268214811E38F14A15E262 (Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___segment0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4A787DEEEEC5DE5929770973860FEC86B05B6780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t606011D801075A525E02DDE2533126EA96831FCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		RuntimeObject* L_0;
		L_0 = ArraySegment_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4A787DEEEEC5DE5929770973860FEC86B05B6780((&___segment0), ArraySegment_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4A787DEEEEC5DE5929770973860FEC86B05B6780_RuntimeMethod_var);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0037;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0037:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_0012_1:
			{
				RuntimeObject* L_3 = V_0;
				NullCheck(L_3);
				uint8_t L_4;
				L_4 = InterfaceFuncInvoker0< uint8_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Byte>::get_Current() */, IEnumerator_1_t606011D801075A525E02DDE2533126EA96831FCF_il2cpp_TypeInfo_var, L_3);
				V_1 = L_4;
				uint8_t L_5 = V_1;
				Crc32_Update_mD20CDDBE547B5713BB8A21AFD8AF414454FEC99F(__this, L_5, NULL);
			}

IL_0023_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				if (L_7)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		return;
	}
}
// System.Void SIDGIN.Zip.Checksum.Crc32::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32__cctor_mE2F8C601A28885BEE3F645824B5986B85C04F24B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1C8139CAA97B9F649363C43079B32D1BC64B4098____373B494F210C656134C5728D551D4C97B013EB33_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var))->___crcInit_0 = (-1);
		((Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var))->___crcXor_1 = (-1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1C8139CAA97B9F649363C43079B32D1BC64B4098____373B494F210C656134C5728D551D4C97B013EB33_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var))->___crcTable_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_StaticFields*)il2cpp_codegen_static_fields_for(Crc32_t83A8785DDBF81B907AAD94D6AF5AFC886A5F2DDA_il2cpp_TypeInfo_var))->___crcTable_2), (void*)L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InflaterInputStream_get_IsStreamOwner_m738FAE723906D26C8E1A976C82732FF163C165D9_inline (InflaterInputStream_tA731C575A4B1F532DE618A770452A88E5F6DDCEF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsStreamOwnerU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DirectoryFailureHandler_Invoke_m48555412BE7CF78A76FAA5028C607E5DC034A1B3_inline (DirectoryFailureHandler_tFDD94010D0B64CBFF596E592988D576925AA313F* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileFailureHandler_Invoke_m5A1FC30DF3588FDF22BFDBBD84FE8EDF0F6B5FC9_inline (FileFailureHandler_t2DE9A2DA28FD94864990EEDE2ED9B7CD659310DB* __this, RuntimeObject* ___sender0, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ScanFailureEventArgs_tD911876F26B820F4513A4E10D0A7E69651499981*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessFileHandler_Invoke_m13C228D2AADD84DD8236AD692E8683EC5200F6CB_inline (ProcessFileHandler_tC89C03329E22B4D2B59D1C99624E6BEB12341658* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompletedFileHandler_Invoke_m5ED8C705F85AD79D9055A6D2C59858C17959D020_inline (CompletedFileHandler_t244B1DEB5348514F72B0E74A3EDC1295D6C79712* __this, RuntimeObject* ___sender0, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ScanEventArgs_t368BB137CEF42E8203E83CB80AF1775AC774028C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProgressHandler_Invoke_m345BAA87A9C2A5FAAB22C5F5E64FE863F5DA9473_inline (ProgressHandler_t615437FAE015878B4AE44E4EEFC6F640587BF995* __this, RuntimeObject* ___sender0, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ProgressEventArgs_t93AC1C4D8AA54278AE5C840E0C68F0A33A0C72D5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____array_1;
		return L_0;
	}
}
