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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t99645769CE679BC507C0D8F0C572B4E324C834D9;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Mapbox.IO.Compression.CompressionTracingSwitch
struct CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29;
// Mapbox.IO.Compression.CopyEncoder
struct CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868;
// Mapbox.IO.Compression.DeflateInput
struct DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568;
// Mapbox.IO.Compression.DeflateStream
struct DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638;
// Mapbox.IO.Compression.DeflateStreamAsyncResult
struct DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E;
// Mapbox.IO.Compression.DeflaterManaged
struct DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// Mapbox.IO.Compression.FastEncoder
struct FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97;
// Mapbox.IO.Compression.FastEncoderWindow
struct FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5;
// Mapbox.IO.Compression.GZipDecoder
struct GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A;
// Mapbox.IO.Compression.GZipFormatter
struct GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766;
// Mapbox.IO.Compression.GZipStream
struct GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E;
// Mapbox.IO.Compression.HuffmanTree
struct HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Mapbox.IO.Compression.IDeflater
struct IDeflater_tA9935A8304CBFE66EAC6D3040AFD8380CB27E403;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Mapbox.IO.Compression.IFileFormatReader
struct IFileFormatReader_t3F74F1C2BFE9E987E33D8D9C74837B2C3DFAC2F7;
// Mapbox.IO.Compression.IFileFormatWriter
struct IFileFormatWriter_t524F7975DC5257AA74B9ECF2A6D598EEACCB2E84;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// Mapbox.IO.Compression.Inflater
struct Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623;
// Mapbox.IO.Compression.InputBuffer
struct InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E;
// Mapbox.IO.Compression.InvalidDataException
struct InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// Mapbox.IO.Compression.Match
struct Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// Mapbox.IO.Compression.OutputBuffer
struct OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D;
// Mapbox.IO.Compression.OutputWindow
struct OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4;
// Mapbox.IO.Compression.SR
struct SR_t22C3359BFAF30BB82CBD9A640D61509C570DC178;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Diagnostics.Switch
struct Switch_t9C3FB6E0121B928798EA7C18AAB5DFC8F3A09412;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
// Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate
struct AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflaterState_tE87FE8CBF3EFC8EB3671C8C17528F6151F627731_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDeflater_tA9935A8304CBFE66EAC6D3040AFD8380CB27E403_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFileFormatReader_t3F74F1C2BFE9E987E33D8D9C74837B2C3DFAC2F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFileFormatWriter_t524F7975DC5257AA74B9ECF2A6D598EEACCB2E84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Switch_t9C3FB6E0121B928798EA7C18AAB5DFC8F3A09412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____2492606636F4A4666E0D617B51116A5A68539881_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____373B494F210C656134C5728D551D4C97B013EB33_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____C31FD54E9E8CFB2BC8835475B92A0D179827B581_10_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA4B30AD24F5B4E2579117D84F879B0C60CE3F8;
IL2CPP_EXTERN_C String_t* _stringLiteral0ECF86EA93D4F92036A429C0359578EA574C786C;
IL2CPP_EXTERN_C String_t* _stringLiteral0ED4D712B21E2F101127EAF7B91F0D73AB41809F;
IL2CPP_EXTERN_C String_t* _stringLiteral10FD9642E7ACB04ED69F426A8E578F98FE4B20DD;
IL2CPP_EXTERN_C String_t* _stringLiteral163C3DED22CE392C8A1B4C506AB01BBEB6723CA7;
IL2CPP_EXTERN_C String_t* _stringLiteral1699893850CFEE56496C8D279CA733207A899E92;
IL2CPP_EXTERN_C String_t* _stringLiteral175AF943E8C780500BB6737145BBBE0BA4A35DD3;
IL2CPP_EXTERN_C String_t* _stringLiteral19D47A5312FE25416B96E64DB07299182A488CDD;
IL2CPP_EXTERN_C String_t* _stringLiteral1BAB371171E70FE198F89E69A8E43AE0C36E4601;
IL2CPP_EXTERN_C String_t* _stringLiteral1BE165E0E4E9346DA1888C972077A4BEFF2E3368;
IL2CPP_EXTERN_C String_t* _stringLiteral20CE60EA3E450A03EA17B3AA9245E467705D5A19;
IL2CPP_EXTERN_C String_t* _stringLiteral215E7389CFC4724D02E42EABC72E0403D31CF637;
IL2CPP_EXTERN_C String_t* _stringLiteral24E5BF9C3F6A409BBD8886942C11DF531662BE9C;
IL2CPP_EXTERN_C String_t* _stringLiteral26D8CE9FE2015E7788C95222F757DBD0FFCA067A;
IL2CPP_EXTERN_C String_t* _stringLiteral2723474D1F331B4FF511B1819E392A4051A32AFA;
IL2CPP_EXTERN_C String_t* _stringLiteral2851F3758A9A10BD699302519A55CE27C334FEEF;
IL2CPP_EXTERN_C String_t* _stringLiteral28A2F47C431541E8C6C7DC36FE14CC30D56B13D6;
IL2CPP_EXTERN_C String_t* _stringLiteral2C743C875078F8C0513325ED4E9171AC6D4B4DAE;
IL2CPP_EXTERN_C String_t* _stringLiteral319B80E8ADC4EAB9C7A135DCEFD23ECDB203BFBD;
IL2CPP_EXTERN_C String_t* _stringLiteral32ABEBB1F95BCEB7EA8A0016EAA3C740C514AC8F;
IL2CPP_EXTERN_C String_t* _stringLiteral3351F4504223173C7A5AA816C29AD8A199461EAA;
IL2CPP_EXTERN_C String_t* _stringLiteral35BFDEE211261605558130258CBD2499BD6546D1;
IL2CPP_EXTERN_C String_t* _stringLiteral3A211A45BE5BBF07891D1769619F24F013279182;
IL2CPP_EXTERN_C String_t* _stringLiteral3A46861F502859D61F566A451B736EE48725C754;
IL2CPP_EXTERN_C String_t* _stringLiteral3C7448C7123F21DE7996D5E505FF15795F7E3406;
IL2CPP_EXTERN_C String_t* _stringLiteral4451CD074D52851117B66787CD1C4ED164A359F2;
IL2CPP_EXTERN_C String_t* _stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5;
IL2CPP_EXTERN_C String_t* _stringLiteral4D2E6B73549B8F487C653D431108C7D89FF4514C;
IL2CPP_EXTERN_C String_t* _stringLiteral4DA490CA6A9F70C8AFCBE8CB3CB47F96773F1B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5;
IL2CPP_EXTERN_C String_t* _stringLiteral58AEA0CFCAEBE62F65EEAF7033FF9A7641169066;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8B047C6745895948A00EBAA806CB7C0F1F0954;
IL2CPP_EXTERN_C String_t* _stringLiteral6FC50567C608356789F168FAB22BFF661DEE3513;
IL2CPP_EXTERN_C String_t* _stringLiteral704FBA8309D79E032485BB8BA966C3FCD5614B4E;
IL2CPP_EXTERN_C String_t* _stringLiteral70B5BDCED641CEE45F2FAFA3C0E91AC23A1D8B9A;
IL2CPP_EXTERN_C String_t* _stringLiteral71941A6CD1B2B7C0B750E2D670E2625BB278E19B;
IL2CPP_EXTERN_C String_t* _stringLiteral71C28F1E716C64C485CEDD7929D586241D1FA89B;
IL2CPP_EXTERN_C String_t* _stringLiteral741151246679D1B14A39D2821A64B26BBAF31827;
IL2CPP_EXTERN_C String_t* _stringLiteral74B6D1787D88E73449E00137F1A1CDDA4737D85A;
IL2CPP_EXTERN_C String_t* _stringLiteral827FB9B81D37440B2A0AD644005CF071D59080D5;
IL2CPP_EXTERN_C String_t* _stringLiteral82F08919641B79AB61608B2AAA086EE79385F70C;
IL2CPP_EXTERN_C String_t* _stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638;
IL2CPP_EXTERN_C String_t* _stringLiteral985A1732EF5F957F008D3779CF47BBF2B21D3798;
IL2CPP_EXTERN_C String_t* _stringLiteral9B3E23BEBC37E841B92530E780C1587A1D04A323;
IL2CPP_EXTERN_C String_t* _stringLiteralA03D2FB83BEF8B66E42EA7EE3FEC45067F5863C6;
IL2CPP_EXTERN_C String_t* _stringLiteralA465E00C713E7E72045D2EFF274E985042DD1E2E;
IL2CPP_EXTERN_C String_t* _stringLiteralA63DD7EB8A588570079DA49C861495FFA1981EC1;
IL2CPP_EXTERN_C String_t* _stringLiteralA772D2D655EFD5780BE5B0CC76ECC49947AA2D43;
IL2CPP_EXTERN_C String_t* _stringLiteralABDBE2717F62037C4CA1A77B2864BC2457804361;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB35DE45BF13FD662B11D547D43F796EC31AFD6B8;
IL2CPP_EXTERN_C String_t* _stringLiteralB646107306B4C954FBAB60DFA719BF11291B7988;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBDB5B65098C5E7E595009BB3FC45594C192D82CD;
IL2CPP_EXTERN_C String_t* _stringLiteralC156D24D9629AA45DAC9B7C975434CCCA93C9CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralC4F83E3BD187DA4E615AE86429BC0A3235C54C53;
IL2CPP_EXTERN_C String_t* _stringLiteralC7C15A7AB70C5E950073A69AB67A6B7C48196F01;
IL2CPP_EXTERN_C String_t* _stringLiteralCE0BC7CA7559FF98833686B7E0FB03B44A717E72;
IL2CPP_EXTERN_C String_t* _stringLiteralD441F6A551BEC4597643C445F810EFB1FBBCB0F5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1;
IL2CPP_EXTERN_C String_t* _stringLiteralF0AA069E2ECAA3C78085B48D7771C42F4D451722;
IL2CPP_EXTERN_C String_t* _stringLiteralF662EE1DF2B55F36C4CB700B246D3C4E4661AF3E;
IL2CPP_EXTERN_C String_t* _stringLiteralF67ED7DAD13B0CEEB11470752C36F31095045C60;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E147DD30C395A3CDE2EF30D1102DF4D8E8D539;
IL2CPP_EXTERN_C String_t* _stringLiteralF90090070287EF4C6E39DC038F7B5015EBDABCEA;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginRead_m792CD099DD6D65EBE08C8273974962D5E4850B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginWrite_m0E1D3120FACA417A81EA31500F6E6BCF7D6697F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_CheckEndXxxxLegalStateAndParams_mCD521B91AA5C5E3D87D61840F54C6B6FD87094B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_CreateDeflater_m699F4CE250F7048DA6A364E82AA9416AE33DB2D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndRead_m35A49366DE7F748E31B3BF79914C75215CBE50D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndWrite_m45F55830DC52C399998C75815768EDE9F1461D47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EnsureCompressionMode_mCD6BDF7EA2B0E0C564D8AC866D235B5FAB200CB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EnsureDecompressionMode_m6D7A9193274702FA5AD97592B06B5605A6386225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EnsureNotDisposed_m1B0AD39699B7304AC096E6ED27BDBD681A86AEF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_InternalWrite_mE494E65F5EFD2F231B445DEDF01E67CB22D73C36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_ReadCallback_mF619AC7F8DADEA755114F7752A2CB4C816702169_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Seek_m402341035116957A031103284D82E836EE6F585E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_SetLength_m8F76D6D377EB31AF2915554A9F48F157734E2484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_ValidateParameters_m65FE74EC4AC4FB5F0F2A6C98E2D7A6553F643178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_WriteCallback_m6C00E14B49BA552815722230D9AD8D1313977B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream__ctor_m327DF465D1B3D291AAEB668B5BBA24BF6A958BE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream__ctor_mD453D25491166073A56A57EB8D4922384EBD2430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Length_mDC53EF7373D4DA9F9F37C3141209C11BCFD662DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Position_mD46970FA05CE536EB24577012D822B2929481D83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Position_mFE4C60D679CE77D840070C9264BE5CDE83EBFB09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipDecoder_ReadHeader_m24ABDEC832D0A37C8F1429994B7E61F2B3EEB5F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipDecoder_Validate_m244026D98FD8B7748D1622709D806B38BB6EB9CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_BeginRead_mA0AA1FEC22306085F62CCF4CAC300D96AE3BCDF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_BeginWrite_m8832D3AB32129778F12A7C4428FD5C922DF2F46F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_EndRead_mB47540B17FD985D1CB80C9CCA755FC1FA339F4D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_EndWrite_m175665AEF7C478666F3CD16A84291D249D0BD1A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Flush_m21B209D54740F7BEE558A610D976BB776A5007F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Read_m4923FBB5CCEB7CB2EA53165F0F1F3DA6195A40A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Seek_m388A587032D2D93ADAC597AC10A64D633E6B0116_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_SetLength_m74F237EE861266A3A9A548E548638B72A5C5B418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Write_m8DE90F4C746EAED819EBA2B55169153C4A5C3277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Length_m8D7B82E020A998C1966F5A871FE20F1F8EF78C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Position_mF08FEFB3BD495368EFFEFFCFB1FF7552C4B2C387_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_Position_m2E6BE1AE611B2D19ECCD0FAB6CBD8812DD8BD6B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HuffmanTree_CreateTable_mBA3D487FA8112E589960B3A12FA5CD1566F3B95B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HuffmanTree_GetNextSymbol_m0963B6501A1F8E1F03296582F05F7E48354F1447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Inflater_DecodeBlock_mACC6605F3D5192300863753EF00F8A8EA7EF327F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Inflater_DecodeDynamicBlockHeader_m9A9DEEB9DFBC34B4DCBBFD984E3360144204BC6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Inflater_DecodeUncompressedBlock_m9B99CDA2EE6803EBECFD13FBC49FD493ACF4FFD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Inflater_Decode_m09B0C5EDF78C72BC8420398503C12172C12C6A44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m5D9178A13289462B7E41FD7029255CA10B2B59C7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6FF5B3109B2061BAC9CDA235EA829B867BD5ECCA 
{
};
struct Il2CppArrayBounds;

// Mapbox.IO.Compression.CopyEncoder
struct CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868  : public RuntimeObject
{
};

// Mapbox.IO.Compression.Crc32Helper
struct Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6  : public RuntimeObject
{
};

struct Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_StaticFields
{
	// System.UInt32[] Mapbox.IO.Compression.Crc32Helper::crcTable
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crcTable_0;
};

// Mapbox.IO.Compression.DeflateInput
struct DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568  : public RuntimeObject
{
	// System.Byte[] Mapbox.IO.Compression.DeflateInput::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_0;
	// System.Int32 Mapbox.IO.Compression.DeflateInput::count
	int32_t ___count_1;
	// System.Int32 Mapbox.IO.Compression.DeflateInput::startIndex
	int32_t ___startIndex_2;
};

// Mapbox.IO.Compression.DeflateStreamAsyncResult
struct DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E  : public RuntimeObject
{
	// System.Byte[] Mapbox.IO.Compression.DeflateStreamAsyncResult::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_0;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::offset
	int32_t ___offset_1;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::count
	int32_t ___count_2;
	// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::isWrite
	bool ___isWrite_3;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_AsyncObject
	RuntimeObject* ___m_AsyncObject_4;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_AsyncState
	RuntimeObject* ___m_AsyncState_5;
	// System.AsyncCallback Mapbox.IO.Compression.DeflateStreamAsyncResult::m_AsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___m_AsyncCallback_6;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_Result
	RuntimeObject* ___m_Result_7;
	// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::m_CompletedSynchronously
	bool ___m_CompletedSynchronously_8;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::m_InvokedCallback
	int32_t ___m_InvokedCallback_9;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::m_Completed
	int32_t ___m_Completed_10;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_Event
	RuntimeObject* ___m_Event_11;
};

// Mapbox.IO.Compression.DeflaterManaged
struct DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED  : public RuntimeObject
{
	// Mapbox.IO.Compression.FastEncoder Mapbox.IO.Compression.DeflaterManaged::deflateEncoder
	FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* ___deflateEncoder_4;
	// Mapbox.IO.Compression.CopyEncoder Mapbox.IO.Compression.DeflaterManaged::copyEncoder
	CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868* ___copyEncoder_5;
	// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.DeflaterManaged::input
	DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* ___input_6;
	// Mapbox.IO.Compression.OutputBuffer Mapbox.IO.Compression.DeflaterManaged::output
	OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output_7;
	// Mapbox.IO.Compression.DeflaterManaged/DeflaterState Mapbox.IO.Compression.DeflaterManaged::processingState
	int32_t ___processingState_8;
	// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.DeflaterManaged::inputFromHistory
	DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* ___inputFromHistory_9;
};

// Mapbox.IO.Compression.FastEncoder
struct FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97  : public RuntimeObject
{
	// Mapbox.IO.Compression.FastEncoderWindow Mapbox.IO.Compression.FastEncoder::inputWindow
	FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* ___inputWindow_0;
	// Mapbox.IO.Compression.Match Mapbox.IO.Compression.FastEncoder::currentMatch
	Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* ___currentMatch_1;
	// System.Double Mapbox.IO.Compression.FastEncoder::lastCompressionRatio
	double ___lastCompressionRatio_2;
};

// Mapbox.IO.Compression.FastEncoderStatics
struct FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E  : public RuntimeObject
{
};

struct FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields
{
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::FastEncoderTreeStructureData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FastEncoderTreeStructureData_0;
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::BFinalFastEncoderTreeStructureData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___BFinalFastEncoderTreeStructureData_1;
	// System.UInt32[] Mapbox.IO.Compression.FastEncoderStatics::FastEncoderLiteralCodeInfo
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___FastEncoderLiteralCodeInfo_2;
	// System.UInt32[] Mapbox.IO.Compression.FastEncoderStatics::FastEncoderDistanceCodeInfo
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___FastEncoderDistanceCodeInfo_3;
	// System.UInt32[] Mapbox.IO.Compression.FastEncoderStatics::BitMask
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___BitMask_4;
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::ExtraLengthBits
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ExtraLengthBits_5;
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::ExtraDistanceBits
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ExtraDistanceBits_6;
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::distLookup
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___distLookup_17;
};

// Mapbox.IO.Compression.FastEncoderWindow
struct FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5  : public RuntimeObject
{
	// System.Byte[] Mapbox.IO.Compression.FastEncoderWindow::window
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___window_0;
	// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::bufPos
	int32_t ___bufPos_1;
	// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::bufEnd
	int32_t ___bufEnd_2;
	// System.UInt16[] Mapbox.IO.Compression.FastEncoderWindow::prev
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___prev_15;
	// System.UInt16[] Mapbox.IO.Compression.FastEncoderWindow::lookup
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___lookup_16;
};

// Mapbox.IO.Compression.GZipConstants
struct GZipConstants_tB92D8E2645C71A11BA363AE7E70A34251F0BB376  : public RuntimeObject
{
};

// Mapbox.IO.Compression.GZipDecoder
struct GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A  : public RuntimeObject
{
	// Mapbox.IO.Compression.GZipDecoder/GzipHeaderState Mapbox.IO.Compression.GZipDecoder::gzipHeaderSubstate
	int32_t ___gzipHeaderSubstate_0;
	// Mapbox.IO.Compression.GZipDecoder/GzipHeaderState Mapbox.IO.Compression.GZipDecoder::gzipFooterSubstate
	int32_t ___gzipFooterSubstate_1;
	// System.Int32 Mapbox.IO.Compression.GZipDecoder::gzip_header_flag
	int32_t ___gzip_header_flag_2;
	// System.Int32 Mapbox.IO.Compression.GZipDecoder::gzip_header_xlen
	int32_t ___gzip_header_xlen_3;
	// System.UInt32 Mapbox.IO.Compression.GZipDecoder::expectedCrc32
	uint32_t ___expectedCrc32_4;
	// System.UInt32 Mapbox.IO.Compression.GZipDecoder::expectedOutputStreamSizeModulo
	uint32_t ___expectedOutputStreamSizeModulo_5;
	// System.Int32 Mapbox.IO.Compression.GZipDecoder::loopCounter
	int32_t ___loopCounter_6;
	// System.UInt32 Mapbox.IO.Compression.GZipDecoder::actualCrc32
	uint32_t ___actualCrc32_7;
	// System.Int64 Mapbox.IO.Compression.GZipDecoder::actualStreamSizeModulo
	int64_t ___actualStreamSizeModulo_8;
};

// Mapbox.IO.Compression.GZipFormatter
struct GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766  : public RuntimeObject
{
	// System.Byte[] Mapbox.IO.Compression.GZipFormatter::headerBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___headerBytes_0;
	// System.UInt32 Mapbox.IO.Compression.GZipFormatter::_crc32
	uint32_t ____crc32_1;
	// System.Int64 Mapbox.IO.Compression.GZipFormatter::_inputStreamSizeModulo
	int64_t ____inputStreamSizeModulo_2;
};

// Mapbox.IO.Compression.HuffmanTree
struct HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881  : public RuntimeObject
{
	// System.Int32 Mapbox.IO.Compression.HuffmanTree::tableBits
	int32_t ___tableBits_4;
	// System.Int16[] Mapbox.IO.Compression.HuffmanTree::table
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___table_5;
	// System.Int16[] Mapbox.IO.Compression.HuffmanTree::left
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___left_6;
	// System.Int16[] Mapbox.IO.Compression.HuffmanTree::right
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___right_7;
	// System.Byte[] Mapbox.IO.Compression.HuffmanTree::codeLengthArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___codeLengthArray_8;
	// System.UInt32[] Mapbox.IO.Compression.HuffmanTree::codeArrayDebug
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___codeArrayDebug_9;
	// System.Int32 Mapbox.IO.Compression.HuffmanTree::tableMask
	int32_t ___tableMask_10;
};

struct HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_StaticFields
{
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::staticLiteralLengthTree
	HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* ___staticLiteralLengthTree_11;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::staticDistanceTree
	HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* ___staticDistanceTree_12;
};

// Mapbox.IO.Compression.Inflater
struct Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623  : public RuntimeObject
{
	// Mapbox.IO.Compression.OutputWindow Mapbox.IO.Compression.Inflater::output
	OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* ___output_5;
	// Mapbox.IO.Compression.InputBuffer Mapbox.IO.Compression.Inflater::input
	InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* ___input_6;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.Inflater::literalLengthTree
	HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* ___literalLengthTree_7;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.Inflater::distanceTree
	HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* ___distanceTree_8;
	// Mapbox.IO.Compression.InflaterState Mapbox.IO.Compression.Inflater::state
	int32_t ___state_9;
	// System.Boolean Mapbox.IO.Compression.Inflater::hasFormatReader
	bool ___hasFormatReader_10;
	// System.Int32 Mapbox.IO.Compression.Inflater::bfinal
	int32_t ___bfinal_11;
	// Mapbox.IO.Compression.BlockType Mapbox.IO.Compression.Inflater::blockType
	int32_t ___blockType_12;
	// System.Byte[] Mapbox.IO.Compression.Inflater::blockLengthBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blockLengthBuffer_13;
	// System.Int32 Mapbox.IO.Compression.Inflater::blockLength
	int32_t ___blockLength_14;
	// System.Int32 Mapbox.IO.Compression.Inflater::length
	int32_t ___length_15;
	// System.Int32 Mapbox.IO.Compression.Inflater::distanceCode
	int32_t ___distanceCode_16;
	// System.Int32 Mapbox.IO.Compression.Inflater::extraBits
	int32_t ___extraBits_17;
	// System.Int32 Mapbox.IO.Compression.Inflater::loopCounter
	int32_t ___loopCounter_18;
	// System.Int32 Mapbox.IO.Compression.Inflater::literalLengthCodeCount
	int32_t ___literalLengthCodeCount_19;
	// System.Int32 Mapbox.IO.Compression.Inflater::distanceCodeCount
	int32_t ___distanceCodeCount_20;
	// System.Int32 Mapbox.IO.Compression.Inflater::codeLengthCodeCount
	int32_t ___codeLengthCodeCount_21;
	// System.Int32 Mapbox.IO.Compression.Inflater::codeArraySize
	int32_t ___codeArraySize_22;
	// System.Int32 Mapbox.IO.Compression.Inflater::lengthCode
	int32_t ___lengthCode_23;
	// System.Byte[] Mapbox.IO.Compression.Inflater::codeList
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___codeList_24;
	// System.Byte[] Mapbox.IO.Compression.Inflater::codeLengthTreeCodeLength
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___codeLengthTreeCodeLength_25;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.Inflater::codeLengthTree
	HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* ___codeLengthTree_26;
	// Mapbox.IO.Compression.IFileFormatReader Mapbox.IO.Compression.Inflater::formatReader
	RuntimeObject* ___formatReader_27;
};

struct Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields
{
	// System.Byte[] Mapbox.IO.Compression.Inflater::extraLengthBits
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extraLengthBits_0;
	// System.Int32[] Mapbox.IO.Compression.Inflater::lengthBase
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___lengthBase_1;
	// System.Int32[] Mapbox.IO.Compression.Inflater::distanceBasePosition
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___distanceBasePosition_2;
	// System.Byte[] Mapbox.IO.Compression.Inflater::codeOrder
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___codeOrder_3;
	// System.Byte[] Mapbox.IO.Compression.Inflater::staticDistanceTreeTable
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___staticDistanceTreeTable_4;
};

// Mapbox.IO.Compression.InputBuffer
struct InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E  : public RuntimeObject
{
	// System.Byte[] Mapbox.IO.Compression.InputBuffer::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_0;
	// System.Int32 Mapbox.IO.Compression.InputBuffer::start
	int32_t ___start_1;
	// System.Int32 Mapbox.IO.Compression.InputBuffer::end
	int32_t ___end_2;
	// System.UInt32 Mapbox.IO.Compression.InputBuffer::bitBuffer
	uint32_t ___bitBuffer_3;
	// System.Int32 Mapbox.IO.Compression.InputBuffer::bitsInBuffer
	int32_t ___bitsInBuffer_4;
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

// Mapbox.IO.Compression.Match
struct Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE  : public RuntimeObject
{
	// MatchState Mapbox.IO.Compression.Match::state
	int32_t ___state_0;
	// System.Int32 Mapbox.IO.Compression.Match::pos
	int32_t ___pos_1;
	// System.Int32 Mapbox.IO.Compression.Match::len
	int32_t ___len_2;
	// System.Byte Mapbox.IO.Compression.Match::symbol
	uint8_t ___symbol_3;
};

// Mapbox.IO.Compression.OutputBuffer
struct OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D  : public RuntimeObject
{
	// System.Byte[] Mapbox.IO.Compression.OutputBuffer::byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteBuffer_0;
	// System.Int32 Mapbox.IO.Compression.OutputBuffer::pos
	int32_t ___pos_1;
	// System.UInt32 Mapbox.IO.Compression.OutputBuffer::bitBuf
	uint32_t ___bitBuf_2;
	// System.Int32 Mapbox.IO.Compression.OutputBuffer::bitCount
	int32_t ___bitCount_3;
};

// Mapbox.IO.Compression.OutputWindow
struct OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4  : public RuntimeObject
{
	// System.Byte[] Mapbox.IO.Compression.OutputWindow::window
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___window_2;
	// System.Int32 Mapbox.IO.Compression.OutputWindow::end
	int32_t ___end_3;
	// System.Int32 Mapbox.IO.Compression.OutputWindow::bytesUsed
	int32_t ___bytesUsed_4;
};

// Mapbox.IO.Compression.SR
struct SR_t22C3359BFAF30BB82CBD9A640D61509C570DC178  : public RuntimeObject
{
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
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

// System.Diagnostics.Switch
struct Switch_t9C3FB6E0121B928798EA7C18AAB5DFC8F3A09412  : public RuntimeObject
{
	// System.Object System.Diagnostics.Switch::switchSettings
	RuntimeObject* ___switchSettings_0;
	// System.String System.Diagnostics.Switch::description
	String_t* ___description_1;
	// System.String System.Diagnostics.Switch::displayName
	String_t* ___displayName_2;
	// System.Int32 System.Diagnostics.Switch::switchSetting
	int32_t ___switchSetting_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Switch::initialized
	bool ___initialized_4;
	// System.Boolean System.Diagnostics.Switch::initializing
	bool ___initializing_5;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Switch::switchValueString
	String_t* ___switchValueString_6;
	// System.String System.Diagnostics.Switch::defaultValue
	String_t* ___defaultValue_7;
	// System.Object System.Diagnostics.Switch::m_intializedLock
	RuntimeObject* ___m_intializedLock_8;
};

struct Switch_t9C3FB6E0121B928798EA7C18AAB5DFC8F3A09412_StaticFields
{
	// System.Collections.Generic.List`1<System.WeakReference> System.Diagnostics.Switch::switches
	List_1_t99645769CE679BC507C0D8F0C572B4E324C834D9* ___switches_9;
	// System.Int32 System.Diagnostics.Switch::s_LastCollectionCount
	int32_t ___s_LastCollectionCount_10;
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

// System.Nullable`1<Mapbox.IO.Compression.CompressionLevel>
struct Nullable_1_t792760F1B19FBB80AD15F9F1280C539DB95534BF 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// Mapbox.IO.Compression.CompressionTracingSwitch
struct CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29  : public Switch_t9C3FB6E0121B928798EA7C18AAB5DFC8F3A09412
{
};

struct CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_StaticFields
{
	// Mapbox.IO.Compression.CompressionTracingSwitch Mapbox.IO.Compression.CompressionTracingSwitch::tracingSwitch
	CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29* ___tracingSwitch_11;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10_tE53D4C1E01E5566DF01ABD803B08C6CC79819B2D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_tE53D4C1E01E5566DF01ABD803B08C6CC79819B2D__padding[10];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1024_tD650EBEC6F3ECD10F175AF2B222926D7A51C8E7A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_tD650EBEC6F3ECD10F175AF2B222926D7A51C8E7A__padding[1024];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D116_t670572D1A967D19B637B425036B310F10C035F26 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D116_t670572D1A967D19B637B425036B310F10C035F26__padding[116];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_tB9EE7EE09BB5C6023FEEE0FBE04716F064504D0E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tB9EE7EE09BB5C6023FEEE0FBE04716F064504D0E__padding[128];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D19_t17485504D060598E54CD281EC5AC93D0063BA3D3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D19_t17485504D060598E54CD281EC5AC93D0063BA3D3__padding[19];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2052
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2052_t1518452FE75B2CC0C5DCE8AE10B03AB0EE9CACD0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2052_t1518452FE75B2CC0C5DCE8AE10B03AB0EE9CACD0__padding[2052];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=29
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D29_tA23609FAE4B3FA3A57BF73E9A916819B172A0049 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D29_tA23609FAE4B3FA3A57BF73E9A916819B172A0049__padding[29];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t1E29E4CF210CCD0562BE69F0341B636139D0C034 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t1E29E4CF210CCD0562BE69F0341B636139D0C034__padding[32];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_t088C4D4E42A53F0036570B6AD5B8E45D877697C9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t088C4D4E42A53F0036570B6AD5B8E45D877697C9__padding[64];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=98
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D98_t50CC7FF0D7F5BCDADD5B5D2339F1C1B36A0F1338 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D98_t50CC7FF0D7F5BCDADD5B5D2339F1C1B36A0F1338__padding[98];
	};
};
#pragma pack(pop, tp)

// Mapbox.IO.Compression.DeflateInput/InputState
struct InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 
{
	// System.Int32 Mapbox.IO.Compression.DeflateInput/InputState::count
	int32_t ___count_0;
	// System.Int32 Mapbox.IO.Compression.DeflateInput/InputState::startIndex
	int32_t ___startIndex_1;
};

// Mapbox.IO.Compression.OutputBuffer/BufferState
struct BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA 
{
	// System.Int32 Mapbox.IO.Compression.OutputBuffer/BufferState::pos
	int32_t ___pos_0;
	// System.UInt32 Mapbox.IO.Compression.OutputBuffer/BufferState::bitBuf
	uint32_t ___bitBuf_1;
	// System.Int32 Mapbox.IO.Compression.OutputBuffer/BufferState::bitCount
	int32_t ___bitCount_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2492606636F4A4666E0D617B51116A5A68539881
	__StaticArrayInitTypeSizeU3D32_t1E29E4CF210CCD0562BE69F0341B636139D0C034 ___2492606636F4A4666E0D617B51116A5A68539881_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=29 <PrivateImplementationDetails>::2DAF59AD82CBE58E893B0C025E68180B6C4037B4
	__StaticArrayInitTypeSizeU3D29_tA23609FAE4B3FA3A57BF73E9A916819B172A0049 ___2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=98 <PrivateImplementationDetails>::345AD00C4B31ADE2765BCF63BC137F7F7E6819B8
	__StaticArrayInitTypeSizeU3D98_t50CC7FF0D7F5BCDADD5B5D2339F1C1B36A0F1338 ___345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::373B494F210C656134C5728D551D4C97B013EB33
	__StaticArrayInitTypeSizeU3D1024_tD650EBEC6F3ECD10F175AF2B222926D7A51C8E7A ___373B494F210C656134C5728D551D4C97B013EB33_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=98 <PrivateImplementationDetails>::5001D1286D6CE39FFA3E67C66D5D68A487F49D0D
	__StaticArrayInitTypeSizeU3D98_t50CC7FF0D7F5BCDADD5B5D2339F1C1B36A0F1338 ___5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::6A94F0C3DCA389344CEDB99F171FA1E092E842E6
	__StaticArrayInitTypeSizeU3D128_tB9EE7EE09BB5C6023FEEE0FBE04716F064504D0E ___6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6
	__StaticArrayInitTypeSizeU3D32_t1E29E4CF210CCD0562BE69F0341B636139D0C034 ___794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::8ED4E99B936B26A09EDFAB9E336CF75F4913B454
	__StaticArrayInitTypeSizeU3D64_t088C4D4E42A53F0036570B6AD5B8E45D877697C9 ___8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19 <PrivateImplementationDetails>::9F8365E9D6C62D3B47026EC465B05A7B5526B5CD
	__StaticArrayInitTypeSizeU3D19_t17485504D060598E54CD281EC5AC93D0063BA3D3 ___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2052 <PrivateImplementationDetails>::C0C10EC6AF4A4101F894B153E1CD493ADC01A67F
	__StaticArrayInitTypeSizeU3D2052_t1518452FE75B2CC0C5DCE8AE10B03AB0EE9CACD0 ___C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::C31FD54E9E8CFB2BC8835475B92A0D179827B581
	__StaticArrayInitTypeSizeU3D10_tE53D4C1E01E5566DF01ABD803B08C6CC79819B2D ___C31FD54E9E8CFB2BC8835475B92A0D179827B581_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>::D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF
	__StaticArrayInitTypeSizeU3D116_t670572D1A967D19B637B425036B310F10C035F26 ___D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::FD5BE77C4372533D7C16BF67D58A3ABBE604ED81
	__StaticArrayInitTypeSizeU3D128_tB9EE7EE09BB5C6023FEEE0FBE04716F064504D0E ___FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12;
};

// Mapbox.IO.Compression.DeflateStream
struct DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream Mapbox.IO.Compression.DeflateStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_6;
	// Mapbox.IO.Compression.CompressionMode Mapbox.IO.Compression.DeflateStream::_mode
	int32_t ____mode_7;
	// System.Boolean Mapbox.IO.Compression.DeflateStream::_leaveOpen
	bool ____leaveOpen_8;
	// Mapbox.IO.Compression.Inflater Mapbox.IO.Compression.DeflateStream::inflater
	Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* ___inflater_9;
	// Mapbox.IO.Compression.IDeflater Mapbox.IO.Compression.DeflateStream::deflater
	RuntimeObject* ___deflater_10;
	// System.Byte[] Mapbox.IO.Compression.DeflateStream::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_11;
	// System.Int32 Mapbox.IO.Compression.DeflateStream::asyncOperations
	int32_t ___asyncOperations_12;
	// System.AsyncCallback Mapbox.IO.Compression.DeflateStream::m_CallBack
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___m_CallBack_13;
	// Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate Mapbox.IO.Compression.DeflateStream::m_AsyncWriterDelegate
	AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* ___m_AsyncWriterDelegate_14;
	// Mapbox.IO.Compression.IFileFormatWriter Mapbox.IO.Compression.DeflateStream::formatWriter
	RuntimeObject* ___formatWriter_15;
	// System.Boolean Mapbox.IO.Compression.DeflateStream::wroteHeader
	bool ___wroteHeader_16;
	// System.Boolean Mapbox.IO.Compression.DeflateStream::wroteBytes
	bool ___wroteBytes_17;
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

// Mapbox.IO.Compression.GZipStream
struct GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// Mapbox.IO.Compression.DeflateStream Mapbox.IO.Compression.GZipStream::deflateStream
	DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* ___deflateStream_5;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
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

// Mapbox.IO.Compression.InvalidDataException
struct InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate
struct AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E  : public MulticastDelegate_t
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

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
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
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___value0, const RuntimeMethod* method) ;

// System.Void System.Diagnostics.Switch::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch__ctor_mA295E111B6A7F4B8D2B6AF796926017759669EA7 (Switch_t9C3FB6E0121B928798EA7C18AAB5DFC8F3A09412* __this, String_t* ___displayName0, String_t* ___description1, const RuntimeMethod* method) ;
// System.Int32 System.Diagnostics.Switch::get_SwitchSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Switch_get_SwitchSetting_mC2067A1816CC3DB4EFDADFAC3CB5AED4794C42FE (Switch_t9C3FB6E0121B928798EA7C18AAB5DFC8F3A09412* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.CompressionTracingSwitch::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionTracingSwitch__ctor_mC342108E011F3EDCCC1265947EDED27D359BF861 (CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29* __this, String_t* ___displayName0, String_t* ___description1, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F (bool ___condition0, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_FreeBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputBuffer_get_FreeBytes_m45F4719ECF04C49E0F14F59242B7D60CD4B2AB19 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.DeflateInput::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateInput_get_Count_mDD3216661C54FDED40E2D11988E0440CC79C06CE (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_BitsInBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputBuffer_get_BitsInBuffer_m9CFD0218BE5BF6225AAD58BD10321387040097E5 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBits(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteBits_mBB044A7EB630478018D9452C2260346489DFF7C0 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, int32_t ___n0, uint32_t ___bits1, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.OutputBuffer::FlushBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_FlushBits_m52E15CB4F0197987A0D02E897011FA6FAE77765D (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.CopyEncoder::WriteLenNLen(System.UInt16,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyEncoder_WriteLenNLen_mCDF999431737F6D2EFD4F3721FBF3F57C3FB7121 (CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868* __this, uint16_t ___len0, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output1, const RuntimeMethod* method) ;
// System.Byte[] Mapbox.IO.Compression.DeflateInput::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DeflateInput_get_Buffer_mAA7AE73A334D0A7B02E140F8523E376798AA7809 (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.DeflateInput::get_StartIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateInput_get_StartIndex_m7023A405F9069498A3C7051E1CFAD562E27E80FB (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteBytes_m58E21972B6D60FDD61B3AAC3997ACEC0388E9586 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteArray0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateInput::ConsumeBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_ConsumeBytes_mD110B71F9DFEEEA97101E3974B57A85A2D9B2FAC (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, int32_t ___n0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteUInt16(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteUInt16_m640BCE61B62609F72B436DBDA1B52EA4679CE7D4 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37 (bool ___condition0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder__ctor_m6874DDF4DEB1AB4F2F87E4547D29A8CA7E736445 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.CopyEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyEncoder__ctor_m3A9F9A265A9D46484C697D4F5547BFA6DA41857F (CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput__ctor_mF2307B24AD6747550A881841B3D7B0EF026EA01F (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.OutputBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer__ctor_mCEE68945A7585B46ED2CB69C3B37900B9E501F91 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.FastEncoder::get_BytesInHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoder_get_BytesInHistory_m38F0312A931648A4D9F028D346FF430BC767461F (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateInput::set_Buffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_set_Buffer_mFCE8511EBF6FB65672E7F9E3B648D9543103A956 (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateInput::set_Count(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_set_Count_mF3073E716D079F59719C6200BB4E7B040913497E (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateInput::set_StartIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_set_StartIndex_m0352D8927B5A344B3DA7F3C84DDB63CAAFD4DD2D (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterManaged_NeedsInput_m71BC2149E95E66654958B26B7ED1D93A791D10BB (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.OutputBuffer::UpdateBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_UpdateBuffer_m505322686FF9BA1F0AEBBB1479881ED4377EE1BF (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, const RuntimeMethod* method) ;
// Mapbox.IO.Compression.DeflateInput/InputState Mapbox.IO.Compression.DeflateInput::DumpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 DeflateInput_DumpState_m9E12AB6F63357BCC155DE085F165CDABFFEF57FC (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, const RuntimeMethod* method) ;
// Mapbox.IO.Compression.OutputBuffer/BufferState Mapbox.IO.Compression.OutputBuffer::DumpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA OutputBuffer_DumpState_m4D1016D2222845451F2E02499DF4C88BD3BC7CCD (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlockHeader(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetBlockHeader_m24B2F8A5FF71D86D0C7A6EF1425EC0F73637B333 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedData(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetCompressedData_m2EB640052DF87FAD5B4650E2D1ACAE43B3E29C8F (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* ___input0, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output1, const RuntimeMethod* method) ;
// System.Double Mapbox.IO.Compression.FastEncoder::get_LastCompressionRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FastEncoder_get_LastCompressionRatio_mC641A2F386036711496C864A033E4D2F00423304 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::UseCompressed(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterManaged_UseCompressed_mF70EE8B436619DB8BF6260D627F86ACA426CE324 (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, double ___ratio0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateInput::RestoreState(Mapbox.IO.Compression.DeflateInput/InputState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_RestoreState_mFD0C540B57D4D08D4301D435593A68E8247C337A (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 ___state0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.OutputBuffer::RestoreState(Mapbox.IO.Compression.OutputBuffer/BufferState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_RestoreState_m3B31645FF28A697F9178D92A41F276B04BFDB4D5 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA ___state0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.CopyEncoder::GetBlock(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyEncoder_GetBlock_m58FF54065D9C18C553F6A02786C56EA66954CFB8 (CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868* __this, DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* ___input0, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output1, bool ___isFinal2, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflaterManaged::FlushInputWindows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged_FlushInputWindows_m1435913A9CAF93DDE8694F1C5E7A80230CEE5546 (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, const RuntimeMethod* method) ;
// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.FastEncoder::get_UnprocessedInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* FastEncoder_get_UnprocessedInput_mEEFFB5FA96B92813EFDAD6DDA0728377FC4BEF35 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlockFooter(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetBlockFooter_mC3B8BFE76844CA6EE167BCC3F4221ECEBF4613B6 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoder::FlushInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_FlushInput_mCE0077A0FA5EF14B8013205AAF1EF63A056DDEEB (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlock(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetBlock_mD7A05FA00362DA2D0CA8F6D2C0CADE0F47F05B0C (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* ___input0, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output1, int32_t ___maxBytesToCopy2, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_BytesWritten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputBuffer_get_BytesWritten_m690E9E94BD2CA4405F345DCFA939DBA6EB5B2FC9 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflaterManaged::WriteFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged_WriteFinal_mB60C47854884712AA383E278FBF32F4E526843CB (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mD453D25491166073A56A57EB8D4922384EBD2430 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String Mapbox.IO.Compression.SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2 (String_t* ___p0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.Inflater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater__ctor_mCB225D9EA432D1FF30595E2D79A4A38F1B46950B (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) ;
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Mapbox.IO.Compression.IDeflater Mapbox.IO.Compression.DeflateStream::CreateDeflater(System.Nullable`1<Mapbox.IO.Compression.CompressionLevel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_CreateDeflater_m699F4CE250F7048DA6A364E82AA9416AE33DB2D7 (Nullable_1_t792760F1B19FBB80AD15F9F1280C539DB95534BF ___compressionLevel0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncWriteDelegate__ctor_m2685B5DFD1195EF2B44BB3CB3036920D0593F815 (AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m327DF465D1B3D291AAEB668B5BBA24BF6A958BE4 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___compressionLevel1, bool ___leaveOpen2, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Mapbox.IO.Compression.CompressionLevel>::.ctor(T)
inline void Nullable_1__ctor_m5D9178A13289462B7E41FD7029255CA10B2B59C7 (Nullable_1_t792760F1B19FBB80AD15F9F1280C539DB95534BF* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t792760F1B19FBB80AD15F9F1280C539DB95534BF*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___value0, method);
}
// Mapbox.IO.Compression.DeflateStream/WorkerType Mapbox.IO.Compression.DeflateStream::GetDeflaterType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t DeflateStream_GetDeflaterType_m5B8DB20DC19A86FB9930B94A40574C0C4A21FBC0 (const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflaterManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged__ctor_m2022721742809F44DD79D40539F2373589EAEFB9 (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.Inflater::SetFileFormatReader(Mapbox.IO.Compression.IFileFormatReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater_SetFileFormatReader_mC25CFDAE1F752A245F3DC0E0001ABE3E56E7EA46 (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, RuntimeObject* ___reader0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EnsureNotDisposed_m1B0AD39699B7304AC096E6ED27BDBD681A86AEF3 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureDecompressionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EnsureDecompressionMode_m6D7A9193274702FA5AD97592B06B5605A6386225 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::ValidateParameters(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_ValidateParameters_m65FE74EC4AC4FB5F0F2A6C98E2D7A6553F643178 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.Inflater::Inflate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflater_Inflate_m1A3DDCA030A23AF6D2CB0D0266F27353AD2D601E (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.Inflater::Finished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_Finished_m580DBA6373FE81BB3D7711C925E0547B00D675D6 (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.Inflater::get_AvailableOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflater_get_AvailableOutput_m5E699B066F68AC3EB1C27DFEC231EE734E7224BD (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.Inflater::NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_NeedsInput_mE7D59E29E78279ED592612274C0CA2C906A4E4A2 (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.Inflater::SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater_SetInput_m897D9DE958E7F49822A09AA14DDAD66C0853219B (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___location0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::.ctor(System.Object,System.Object,System.AsyncCallback,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult__ctor_m4532FFB3DB17238E035D66D43088C75A66683EF9 (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, RuntimeObject* ___asyncObject0, RuntimeObject* ___asyncState1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___offset4, int32_t ___count5, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_InvokeCallback_m4BD516C4A6690F14E70E87A6553CF553185D9472 (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, bool ___completedSynchronously0, RuntimeObject* ___result1, const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStreamAsyncResult_get_IsCompleted_mFF614595920297A1BD5CB6A296F88AC34C434F36 (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_m6AFAD2E874CBDA373B1EF7572F11D6E91813E75D (int32_t* ___location0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_InvokeCallback_m76478D38A156401F23CB17847817AEFC23B05EF6 (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::CheckEndXxxxLegalStateAndParams(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_CheckEndXxxxLegalStateAndParams_mCD521B91AA5C5E3D87D61840F54C6B6FD87094B6 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::AwaitAsyncResultCompletion(Mapbox.IO.Compression.DeflateStreamAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_AwaitAsyncResultCompletion_m2983E6426A3B05AE4CBB5E9E3F3783F7157FB9D2 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* ___asyncResult0, const RuntimeMethod* method) ;
// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStreamAsyncResult_get_Result_m6F3BB3735AF5F915630F320A70081DB31B4FE2B0 (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureCompressionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EnsureCompressionMode_mCD6BDF7EA2B0E0C564D8AC866D235B5FAB200CB9 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::InternalWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_InternalWrite_mE494E65F5EFD2F231B445DEDF01E67CB22D73C36 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::DoMaintenance(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_DoMaintenance_m6A3CC4632CE1F086091E20BD5013F4E5B410E16E (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::WriteDeflaterOutput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteDeflaterOutput_m150396F4C1DBA2DC9C3D6ADE72F8CF09E9D58262 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, bool ___isAsync0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::DoWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_DoWrite_m9ED94DAAC75E313A30133C587A36EE2A3FD31EB1 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::PurgeBuffers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_PurgeBuffers_m38E7F42A25F36509A0E933437A22BD8376457C28 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.IAsyncResult Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncWriteDelegate_BeginInvoke_m6BFE27A81614BA95217F16ABF61B3C60F8C19031 (AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncWriteDelegate_EndInvoke_mAACD8772AA8D8D01D316433039D5AAF8C9A7D0D2 (AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_Close_mDE3221F5FA885F441EBB0EEBA6BD5028207DFB7D (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, const RuntimeMethod* method) ;
// System.Threading.WaitHandle Mapbox.IO.Compression.DeflateStreamAsyncResult::get_AsyncWaitHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* DeflateStreamAsyncResult_get_AsyncWaitHandle_m2B50F65E5C21737FF2FE4CCA4273E6DB853FF75D (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* __this, bool ___initialState0, const RuntimeMethod* method) ;
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___location10, RuntimeObject* ___value1, RuntimeObject* ___comparand2, const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Complete(System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_Complete_mCC833A9B43717D6F2933EDA7B1B6096AFF6ADD41 (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, bool ___completedSynchronously0, RuntimeObject* ___result1, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Complete(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_Complete_m74665C48FBF96DD00CCAF050B0AEF42D3004689C (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow__ctor_m5EBEB7CC7BB01B3A95DA1A362163147F4CF74B38 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.Match::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match__ctor_mEC516DCEF316ACCEEA99D913DD94E8BC1BB5D6C8 (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::get_BytesAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderWindow_get_BytesAvailable_m84A9B44988104D4F9A9D2D83116A8614BBEAD0AC (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) ;
// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.FastEncoderWindow::get_UnprocessedInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* FastEncoderWindow_get_UnprocessedInput_mAF13CAD3309CF92110BB47CE4CDD1B08F2FD569C (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::FlushWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_FlushWindow_mFB54632D12E247648901B003BF0E84376665A38F (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.FastEncoder::InputAvailable(Mapbox.IO.Compression.DeflateInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastEncoder_InputAvailable_mD37638C00F19B2DA754F1AAF66FA433371178096 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* ___input0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoder::WriteDeflatePreamble(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteDeflatePreamble_m90F6A7E32FB8D4F8BA2D3EA0E0414B6DA58CB05B (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedOutput(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetCompressedOutput_m1218C71E65452B59120ACCA5D99B6550CAE2E0FE (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* ___input0, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output1, int32_t ___maxBytesToCopy2, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoder::WriteEndOfBlock(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteEndOfBlock_mA379581E939C7437CEF2A5E4E3A3008CFA21AD88 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output0, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::get_FreeWindowSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderWindow_get_FreeWindowSpace_mA592D9E81E684A51CE11081DA595D5D335A36F66 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::CopyBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_CopyBytes_m1BB83C85C87C0C898E239C83C8D18BCB8BB32E8C (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedOutput(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetCompressedOutput_m28E79A0B066B6477AFB477B6BDDB75E83E5E4C98 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output0, const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.FastEncoder::SafeToWriteTo(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastEncoder_SafeToWriteTo_m63955AB537BCCFE8CA51E34EE350143111061CE7 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output0, const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.FastEncoderWindow::GetNextSymbolOrMatch(Mapbox.IO.Compression.Match)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastEncoderWindow_GetNextSymbolOrMatch_mD8BF1D9F3D6D435EF774B81E2FEE75D83A844941 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* ___match0, const RuntimeMethod* method) ;
// MatchState Mapbox.IO.Compression.Match::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match_get_State_mA9B0E46FBC1C129A587F702BEE0E86977943F4FF (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, const RuntimeMethod* method) ;
// System.Byte Mapbox.IO.Compression.Match::get_Symbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Match_get_Symbol_m1491E93E28C3E8F8D66A215B04606E671C25D1CC (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoder::WriteChar(System.Byte,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteChar_mF942C3E336D462A024DCFDA1636FEACD8DCD7714 (uint8_t ___b0, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output1, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.Match::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match_get_Length_mEE750F33EE8E6D25E2704B12A7F7C3495C5F25BD (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.Match::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match_get_Position_m7E9F273B0C6434465F2BD89EBD41B504E78F1480 (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoder::WriteMatch(System.Int32,System.Int32,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteMatch_mA93FFA3073B6046FAE68318845EA6A28052C4071 (int32_t ___matchLen0, int32_t ___matchPos1, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output2, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.FastEncoderStatics::GetSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderStatics_GetSlot_m7F1B01FDE9FED244B40BAC04F5A51726EA0C6FC2 (int32_t ___pos0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::ResetWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_ResetWindow_m79CA3DD758C9E11FDF5BB9EC1D7C918A9FCE73FB (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::VerifyHashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_VerifyHashes_m4068CA9CFF58E2ACE0FA1813596AAC15021E8B31 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::HashValue(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderWindow_HashValue_mB6BDA7FD70D75B9533381553377B61D2CD034DDB (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, uint32_t ___hash0, uint8_t ___b1, const RuntimeMethod* method) ;
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::InsertString(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderWindow_InsertString_m73B1DB08AD4B3C95C31ACCFB7A6BD7B6999BB9F4 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, uint32_t* ___hash0, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::FindMatch(System.Int32,System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderWindow_FindMatch_mC0B08C846EF2E441A20E3779B84E11A2EB116BA3 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, int32_t ___search0, int32_t* ___matchPos1, int32_t ___searchDepth2, int32_t ___niceLength3, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.Match::set_State(MatchState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_State_m1983564F65AA86C308A37231440EADAEA203C223 (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.Match::set_Symbol(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_Symbol_m23A2F461208BB113691D801467EF4A546EC16DEE (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.Match::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_Position_m4C42A83DC27EF57137CCB5505778962D5596B78C (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.Match::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_Length_m5EB8B04BA1302A494F38CE8E3F748661DE61E562 (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::InsertStrings(System.UInt32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_InsertStrings_mF1CA691F3F35D4E019343EA03240959FCA6BEB89 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, uint32_t* ___hash0, int32_t ___matchLen1, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::MoveWindows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_MoveWindows_mF2DF609EA59462F217FA3A074AC302A6DF5F892D (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) ;
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::RecalculateHash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderWindow_RecalculateHash_m95CACEC8E86D17EC3BAA6F7207C8485C67539720 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, int32_t ___position0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.GZipDecoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipDecoder_Reset_m3EEA013F877314107FC2DFA03529484A4248297F (GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.InputBuffer::GetBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68 (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.InputBuffer::SkipToByteBoundary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer_SkipToByteBoundary_m6D66238637C2C43C69B26F118BED039EA5469F96 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, const RuntimeMethod* method) ;
// System.UInt32 Mapbox.IO.Compression.Crc32Helper::UpdateCrc32(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Crc32Helper_UpdateCrc32_m8A85F19282CFCD8FAC023327934DA941D01984BC (uint32_t ___crc320, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m7DED8FC1CFDBAFF3DFDA075BC79D0547084D2DAB (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.GZipStream::SetDeflateStreamFileFormatter(Mapbox.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_SetDeflateStreamFileFormatter_m142A633114E227E01719FBD1B786BA454AB4CEB6 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mE5D0201B2402063776015FD608B8A780A9B51E49 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___compressionLevel1, bool ___leaveOpen2, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.GZipFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter__ctor_m4ADF588488A9CE332C4D50794896A657D59CCFDB (GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::SetFileFormatWriter(Mapbox.IO.Compression.IFileFormatWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetFileFormatWriter_m91494A9488A72719579004328CE03CD7A6EEB9EF (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, RuntimeObject* ___writer0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.GZipDecoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipDecoder__ctor_m16ABAB5457140F8757DFA1B9CA6F4295BAB8C76B (GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.DeflateStream::SetFileFormatReader(Mapbox.IO.Compression.IFileFormatReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetFileFormatReader_m90FABE16D59786FA57F0DB7FCE28C98A77C91316 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, RuntimeObject* ___reader0, const RuntimeMethod* method) ;
// System.IO.Stream Mapbox.IO.Compression.DeflateStream::get_BaseStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* DeflateStream_get_BaseStream_mECFB576ADDEAEED96AB580F430990E7245E92823 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.GZipFormatter::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter__ctor_mBBCC296777FB0B31658E22EA410FD168385398F1 (GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766* __this, int32_t ___compressionLevel0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.GZipFormatter::WriteUInt32(System.Byte[],System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter_WriteUInt32_m035B659D6486511725BDBA983BA27D10BE51A9A1 (GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, uint32_t ___value1, int32_t ___startIndex2, const RuntimeMethod* method) ;
// System.Byte[] Mapbox.IO.Compression.HuffmanTree::GetStaticLiteralTreeLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HuffmanTree_GetStaticLiteralTreeLength_m973D6EA6F1678CE35FA8F4C9EFAC7A116AFF600E (const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.HuffmanTree::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HuffmanTree__ctor_mE69681D6A66A5D315F65E5173F057A82C1762139 (HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___codeLengths0, const RuntimeMethod* method) ;
// System.Byte[] Mapbox.IO.Compression.HuffmanTree::GetStaticDistanceTreeLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HuffmanTree_GetStaticDistanceTreeLength_mA5E2D26A6A9F5E807DB8D1EEBF78F35BC37BCEF2 (const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.HuffmanTree::CreateTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HuffmanTree_CreateTable_mBA3D487FA8112E589960B3A12FA5CD1566F3B95B (HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* __this, const RuntimeMethod* method) ;
// System.UInt32 Mapbox.IO.Compression.FastEncoderStatics::BitReverse(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderStatics_BitReverse_mC67B5F697B79AD8ED64B981472E6EAA3A94C9391 (uint32_t ___code0, int32_t ___length1, const RuntimeMethod* method) ;
// System.UInt32[] Mapbox.IO.Compression.HuffmanTree::CalculateHuffmanCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* HuffmanTree_CalculateHuffmanCode_m80191F321F3F1867EDE3BD690E422E0F86B49199 (HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* __this, const RuntimeMethod* method) ;
// System.UInt32 Mapbox.IO.Compression.InputBuffer::TryLoad16Bits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputBuffer_TryLoad16Bits_m2918035ABDDFC03F962CA4D7904E14EFE36B964A (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.InputBuffer::get_AvailableBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_get_AvailableBits_mAE1E4F5C31D1FBE2E51EEDDE343F1249ED6853E8 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.InputBuffer::SkipBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer_SkipBits_m2D4AC7BB37041E06B81FCB6655E44EA7746EE1F4 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, int32_t ___n0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.OutputWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow__ctor_mAD92ABCC3584FA158089D13E76AAE2C94626A179 (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.InputBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer__ctor_m02FA7242E6D9ABAF8522D3AEEC5823160EFA53AD (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.Inflater::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater_Reset_m62602B3B8299F8A708360C6E4C4001513B50C6A8 (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.InputBuffer::SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer_SetInput_m1D57D9EBFFBEB01344FD66AC4164637CAC1B7DE4 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.OutputWindow::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_get_AvailableBytes_m5E288A82D33B9F417879C768770A876D9CAE1052 (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.InputBuffer::NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputBuffer_NeedsInput_m65B019693BC2690818A827A6509D8DDD2180360A (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.OutputWindow::CopyTo(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_CopyTo_mD47721B6BBB430A1E6FD46C2BD94F96CCF8E5B19 (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.Inflater::Decode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_Decode_m09B0C5EDF78C72BC8420398503C12172C12C6A44 (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.InputBuffer::EnsureBitsAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputBuffer_EnsureBitsAvailable_mA2340114DDD4F3519738B6939BC97805C82C1752 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, int32_t ___count0, const RuntimeMethod* method) ;
// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::get_StaticLiteralLengthTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* HuffmanTree_get_StaticLiteralLengthTree_m2FF0234A10D1194B00B4BA8AC63AA391DA55F2BA (const RuntimeMethod* method) ;
// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::get_StaticDistanceTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* HuffmanTree_get_StaticDistanceTree_m383FCA4999BB18DCE35BE0272D2C98B28919012B (const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeDynamicBlockHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_DecodeDynamicBlockHeader_m9A9DEEB9DFBC34B4DCBBFD984E3360144204BC6A (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeBlock(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_DecodeBlock_mACC6605F3D5192300863753EF00F8A8EA7EF327F (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, bool* ___end_of_block_code_seen0, const RuntimeMethod* method) ;
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeUncompressedBlock(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_DecodeUncompressedBlock_m9B99CDA2EE6803EBECFD13FBC49FD493ACF4FFD1 (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, bool* ___end_of_block0, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.OutputWindow::CopyFrom(Mapbox.IO.Compression.InputBuffer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_CopyFrom_m4ABB062840FCEC3ED1878C02D684DDCE5E691EDA (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* ___input0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.OutputWindow::get_FreeBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_get_FreeBytes_mB1E9BCD46AE900C54B1D18A9BB0A17A799C40554 (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.HuffmanTree::GetNextSymbol(Mapbox.IO.Compression.InputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HuffmanTree_GetNextSymbol_m0963B6501A1F8E1F03296582F05F7E48354F1447 (HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* __this, InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* ___input0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.OutputWindow::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_Write_m086FF0522310C924F364A3A715D3046C231A530A (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, uint8_t ___b0, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.OutputWindow::WriteLengthDistance(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_WriteLengthDistance_m3AA7C190F1B221E704C83060F21B57A1C28B3216 (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, int32_t ___length0, int32_t ___distance1, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_m583FC070D6C3AB06B93B4762B9EA86E8383249B2 (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.UInt32 Mapbox.IO.Compression.InputBuffer::GetBitMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputBuffer_GetBitMask_m1ED6BF4B44E2F47A93823F5325E112A6D546EB17 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBytesUnaligned(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteBytesUnaligned_m69374E158A11AE566676E5AFECE404B8E4C9C67A (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteArray0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteByteUnaligned(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteByteUnaligned_mEEF6833E7739B3A1AF64393DB246C9538582E5A8 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, uint8_t ___b0, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.InputBuffer::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_get_AvailableBytes_mC08F1E6928F82FFB0FE74172937E805EFFFD703E (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.IO.Compression.InputBuffer::CopyTo(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_CopyTo_mC4233012372441594DF0801E1298A95B8E42EB55 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void Mapbox.IO.Compression.CompressionTracingSwitch::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionTracingSwitch__ctor_mC342108E011F3EDCCC1265947EDED27D359BF861 (CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29* __this, String_t* ___displayName0, String_t* ___description1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Switch_t9C3FB6E0121B928798EA7C18AAB5DFC8F3A09412_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___displayName0;
		String_t* L_1 = ___description1;
		il2cpp_codegen_runtime_class_init_inline(Switch_t9C3FB6E0121B928798EA7C18AAB5DFC8F3A09412_il2cpp_TypeInfo_var);
		Switch__ctor_mA295E111B6A7F4B8D2B6AF796926017759669EA7(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.CompressionTracingSwitch::get_Verbose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompressionTracingSwitch_get_Verbose_m20B6101C601AF8F97E37991CFCF87A65E0EA8734 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_il2cpp_TypeInfo_var);
		CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29* L_0 = ((CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_StaticFields*)il2cpp_codegen_static_fields_for(CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_il2cpp_TypeInfo_var))->___tracingSwitch_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Switch_get_SwitchSetting_mC2067A1816CC3DB4EFDADFAC3CB5AED4794C42FE(L_0, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.IO.Compression.CompressionTracingSwitch::get_Informational()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompressionTracingSwitch_get_Informational_m90F24CBB0CAD360DDC8240953FE11518C5471DDE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_il2cpp_TypeInfo_var);
		CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29* L_0 = ((CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_StaticFields*)il2cpp_codegen_static_fields_for(CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_il2cpp_TypeInfo_var))->___tracingSwitch_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Switch_get_SwitchSetting_mC2067A1816CC3DB4EFDADFAC3CB5AED4794C42FE(L_0, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.IO.Compression.CompressionTracingSwitch::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressionTracingSwitch__cctor_mC8ACC826CBC1775E367995183681393C1926C58F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BE165E0E4E9346DA1888C972077A4BEFF2E3368);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2851F3758A9A10BD699302519A55CE27C334FEEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29* L_0 = (CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29*)il2cpp_codegen_object_new(CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CompressionTracingSwitch__ctor_mC342108E011F3EDCCC1265947EDED27D359BF861(L_0, _stringLiteral1BE165E0E4E9346DA1888C972077A4BEFF2E3368, _stringLiteral2851F3758A9A10BD699302519A55CE27C334FEEF, NULL);
		((CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_StaticFields*)il2cpp_codegen_static_fields_for(CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_il2cpp_TypeInfo_var))->___tracingSwitch_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_StaticFields*)il2cpp_codegen_static_fields_for(CompressionTracingSwitch_t84CA01ACD8F70373FFD644C35E47853098E6EC29_il2cpp_TypeInfo_var))->___tracingSwitch_11), (void*)L_0);
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
// System.Void Mapbox.IO.Compression.CopyEncoder::GetBlock(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyEncoder_GetBlock_m58FF54065D9C18C553F6A02786C56EA66954CFB8 (CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868* __this, DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* ___input0, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output1, bool ___isFinal2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B10_0 = 0;
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_0 = ___output1;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((!(((RuntimeObject*)(OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_1 = ___output1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = OutputBuffer_get_FreeBytes_m45F4719ECF04C49E0F14F59242B7D60CD4B2AB19(L_1, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)((((int32_t)L_2) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		V_0 = 0;
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_3 = ___input0;
		V_1 = (bool)((!(((RuntimeObject*)(DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_5 = ___input0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = DeflateInput_get_Count_mDD3216661C54FDED40E2D11988E0440CC79C06CE(L_5, NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_7 = ___output1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = OutputBuffer_get_FreeBytes_m45F4719ECF04C49E0F14F59242B7D60CD4B2AB19(L_7, NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_9 = ___output1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = OutputBuffer_get_BitsInBuffer_m9CFD0218BE5BF6225AAD58BD10321387040097E5(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_6, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_8, 5)), L_10)), NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		V_2 = (bool)((((int32_t)L_12) > ((int32_t)((int32_t)65531)))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		V_0 = ((int32_t)65531);
	}

IL_0057:
	{
	}

IL_0058:
	{
		bool L_14 = ___isFinal2;
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_16 = ___output1;
		NullCheck(L_16);
		OutputBuffer_WriteBits_mBB044A7EB630478018D9452C2260346489DFF7C0(L_16, 3, 1, NULL);
		goto IL_0075;
	}

IL_006a:
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_17 = ___output1;
		NullCheck(L_17);
		OutputBuffer_WriteBits_mBB044A7EB630478018D9452C2260346489DFF7C0(L_17, 3, 0, NULL);
	}

IL_0075:
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_18 = ___output1;
		NullCheck(L_18);
		OutputBuffer_FlushBits_m52E15CB4F0197987A0D02E897011FA6FAE77765D(L_18, NULL);
		int32_t L_19 = V_0;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_20 = ___output1;
		CopyEncoder_WriteLenNLen_mCDF999431737F6D2EFD4F3721FBF3F57C3FB7121(__this, (uint16_t)((int32_t)(uint16_t)L_19), L_20, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_21 = ___input0;
		if (!L_21)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_22 = V_0;
		G_B10_0 = ((((int32_t)L_22) > ((int32_t)0))? 1 : 0);
		goto IL_0090;
	}

IL_008f:
	{
		G_B10_0 = 0;
	}

IL_0090:
	{
		V_4 = (bool)G_B10_0;
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00b4;
		}
	}
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_24 = ___output1;
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_25 = ___input0;
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = DeflateInput_get_Buffer_mAA7AE73A334D0A7B02E140F8523E376798AA7809(L_25, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_27 = ___input0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = DeflateInput_get_StartIndex_m7023A405F9069498A3C7051E1CFAD562E27E80FB(L_27, NULL);
		int32_t L_29 = V_0;
		NullCheck(L_24);
		OutputBuffer_WriteBytes_m58E21972B6D60FDD61B3AAC3997ACEC0388E9586(L_24, L_26, L_28, L_29, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_30 = ___input0;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		DeflateInput_ConsumeBytes_mD110B71F9DFEEEA97101E3974B57A85A2D9B2FAC(L_30, L_31, NULL);
	}

IL_00b4:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.CopyEncoder::WriteLenNLen(System.UInt16,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyEncoder_WriteLenNLen_mCDF999431737F6D2EFD4F3721FBF3F57C3FB7121 (CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868* __this, uint16_t ___len0, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output1, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_0 = ___output1;
		uint16_t L_1 = ___len0;
		NullCheck(L_0);
		OutputBuffer_WriteUInt16_m640BCE61B62609F72B436DBDA1B52EA4679CE7D4(L_0, L_1, NULL);
		uint16_t L_2 = ___len0;
		V_0 = (uint16_t)((int32_t)(uint16_t)((~L_2)));
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_3 = ___output1;
		uint16_t L_4 = V_0;
		NullCheck(L_3);
		OutputBuffer_WriteUInt16_m640BCE61B62609F72B436DBDA1B52EA4679CE7D4(L_3, L_4, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.CopyEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyEncoder__ctor_m3A9F9A265A9D46484C697D4F5547BFA6DA41857F (CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868* __this, const RuntimeMethod* method) 
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
// System.UInt32 Mapbox.IO.Compression.Crc32Helper::UpdateCrc32(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Crc32Helper_UpdateCrc32_m8A85F19282CFCD8FAC023327934DA941D01984BC (uint32_t ___crc320, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35BFDEE211261605558130258CBD2499BD6546D1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer1;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ___offset2;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___length3;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = ___offset2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___buffer1;
		NullCheck(L_4);
		int32_t L_5 = ___length3;
		G_B5_0 = ((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B5_0 = 0;
	}

IL_001a:
	{
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)G_B5_0, _stringLiteral35BFDEE211261605558130258CBD2499BD6546D1, NULL);
		uint32_t L_6 = ___crc320;
		___crc320 = ((int32_t)((int32_t)L_6^(-1)));
		goto IL_004a;
	}

IL_002c:
	{
		il2cpp_codegen_runtime_class_init_inline(Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_StaticFields*)il2cpp_codegen_static_fields_for(Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_il2cpp_TypeInfo_var))->___crcTable_0;
		uint32_t L_8 = ___crc320;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___buffer1;
		int32_t L_10 = ___offset2;
		int32_t L_11 = L_10;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_7);
		int32_t L_14 = ((int32_t)(((int32_t)((int32_t)L_8^(int32_t)L_13))&((int32_t)255)));
		uint32_t L_15 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		uint32_t L_16 = ___crc320;
		___crc320 = ((int32_t)((int32_t)L_15^((int32_t)((uint32_t)L_16>>8))));
	}

IL_004a:
	{
		int32_t L_17 = ___length3;
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		___length3 = L_18;
		V_0 = (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_20 = ___crc320;
		___crc320 = ((int32_t)((int32_t)L_20^(-1)));
		uint32_t L_21 = ___crc320;
		V_1 = L_21;
		goto IL_0063;
	}

IL_0063:
	{
		uint32_t L_22 = V_1;
		return L_22;
	}
}
// System.Void Mapbox.IO.Compression.Crc32Helper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crc32Helper__cctor_m982635ADF5DF27648E67001F90B8149602371B60 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____373B494F210C656134C5728D551D4C97B013EB33_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____373B494F210C656134C5728D551D4C97B013EB33_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_StaticFields*)il2cpp_codegen_static_fields_for(Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_il2cpp_TypeInfo_var))->___crcTable_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_StaticFields*)il2cpp_codegen_static_fields_for(Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_il2cpp_TypeInfo_var))->___crcTable_0), (void*)L_1);
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
// System.Byte[] Mapbox.IO.Compression.DeflateInput::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DeflateInput_get_Buffer_mAA7AE73A334D0A7B02E140F8523E376798AA7809 (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___buffer_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::set_Buffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_set_Buffer_mFCE8511EBF6FB65672E7F9E3B648D9543103A956 (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___buffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_0), (void*)L_0);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.DeflateInput::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateInput_get_Count_mDD3216661C54FDED40E2D11988E0440CC79C06CE (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___count_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::set_Count(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_set_Count_mF3073E716D079F59719C6200BB4E7B040913497E (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___count_1 = L_0;
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.DeflateInput::get_StartIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateInput_get_StartIndex_m7023A405F9069498A3C7051E1CFAD562E27E80FB (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___startIndex_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::set_StartIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_set_StartIndex_m0352D8927B5A344B3DA7F3C84DDB63CAAFD4DD2D (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___startIndex_2 = L_0;
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::ConsumeBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_ConsumeBytes_mD110B71F9DFEEEA97101E3974B57A85A2D9B2FAC (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, int32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BAB371171E70FE198F89E69A8E43AE0C36E4601);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70B5BDCED641CEE45F2FAFA3C0E91AC23A1D8B9A);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___n0;
		int32_t L_1 = __this->___count_1;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral1BAB371171E70FE198F89E69A8E43AE0C36E4601, NULL);
		int32_t L_2 = __this->___startIndex_2;
		int32_t L_3 = ___n0;
		__this->___startIndex_2 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		int32_t L_4 = __this->___count_1;
		int32_t L_5 = ___n0;
		__this->___count_1 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		int32_t L_6 = __this->___startIndex_2;
		int32_t L_7 = __this->___count_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___buffer_0;
		NullCheck(L_8);
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) > ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral70B5BDCED641CEE45F2FAFA3C0E91AC23A1D8B9A, NULL);
		return;
	}
}
// Mapbox.IO.Compression.DeflateInput/InputState Mapbox.IO.Compression.DeflateInput::DumpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 DeflateInput_DumpState_m9E12AB6F63357BCC155DE085F165CDABFFEF57FC (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, const RuntimeMethod* method) 
{
	InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 V_0;
	memset((&V_0), 0, sizeof(V_0));
	InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->___count_1;
		(&V_0)->___count_0 = L_0;
		int32_t L_1 = __this->___startIndex_2;
		(&V_0)->___startIndex_1 = L_1;
		InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 L_2 = V_0;
		V_1 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 L_3 = V_1;
		return L_3;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::RestoreState(Mapbox.IO.Compression.DeflateInput/InputState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput_RestoreState_mFD0C540B57D4D08D4301D435593A68E8247C337A (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 ___state0, const RuntimeMethod* method) 
{
	{
		InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 L_0 = ___state0;
		int32_t L_1 = L_0.___count_0;
		__this->___count_1 = L_1;
		InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 L_2 = ___state0;
		int32_t L_3 = L_2.___startIndex_1;
		__this->___startIndex_2 = L_3;
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateInput__ctor_mF2307B24AD6747550A881841B3D7B0EF026EA01F (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.IO.Compression.DeflaterManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged__ctor_m2022721742809F44DD79D40539F2373589EAEFB9 (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_0 = (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97*)il2cpp_codegen_object_new(FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FastEncoder__ctor_m6874DDF4DEB1AB4F2F87E4547D29A8CA7E736445(L_0, NULL);
		__this->___deflateEncoder_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deflateEncoder_4), (void*)L_0);
		CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868* L_1 = (CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868*)il2cpp_codegen_object_new(CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CopyEncoder__ctor_m3A9F9A265A9D46484C697D4F5547BFA6DA41857F(L_1, NULL);
		__this->___copyEncoder_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___copyEncoder_5), (void*)L_1);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_2 = (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568*)il2cpp_codegen_object_new(DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DeflateInput__ctor_mF2307B24AD6747550A881841B3D7B0EF026EA01F(L_2, NULL);
		__this->___input_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_6), (void*)L_2);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_3 = (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D*)il2cpp_codegen_object_new(OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OutputBuffer__ctor_mCEE68945A7585B46ED2CB69C3B37900B9E501F91(L_3, NULL);
		__this->___output_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___output_7), (void*)L_3);
		__this->___processingState_8 = 0;
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterManaged_NeedsInput_m71BC2149E95E66654958B26B7ED1D93A791D10BB (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDeflater_tA9935A8304CBFE66EAC6D3040AFD8380CB27E403_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Mapbox.IO.Compression.IDeflater::NeedsInput() */, IDeflater_tA9935A8304CBFE66EAC6D3040AFD8380CB27E403_il2cpp_TypeInfo_var, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::Mapbox.IO.Compression.IDeflater.NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterManaged_Mapbox_IO_Compression_IDeflater_NeedsInput_mC9216D25E5C401938688B915EFA579C75D593913 (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_0 = __this->___input_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DeflateInput_get_Count_mDD3216661C54FDED40E2D11988E0440CC79C06CE(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_2 = __this->___deflateEncoder_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FastEncoder_get_BytesInHistory_m38F0312A931648A4D9F028D346FF430BC767461F(L_2, NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Mapbox.IO.Compression.DeflaterManaged::Mapbox.IO.Compression.IDeflater.SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged_Mapbox_IO_Compression_IDeflater_SetInput_m4371FA874955703EE4131662DDE0ED0D63DAE8BE (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58AEA0CFCAEBE62F65EEAF7033FF9A7641169066);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_0 = __this->___input_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DeflateInput_get_Count_mDD3216661C54FDED40E2D11988E0440CC79C06CE(L_0, NULL);
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), _stringLiteral58AEA0CFCAEBE62F65EEAF7033FF9A7641169066, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_2 = __this->___input_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___inputBuffer0;
		NullCheck(L_2);
		DeflateInput_set_Buffer_mFCE8511EBF6FB65672E7F9E3B648D9543103A956(L_2, L_3, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_4 = __this->___input_6;
		int32_t L_5 = ___count2;
		NullCheck(L_4);
		DeflateInput_set_Count_mF3073E716D079F59719C6200BB4E7B040913497E(L_4, L_5, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_6 = __this->___input_6;
		int32_t L_7 = ___startIndex1;
		NullCheck(L_6);
		DeflateInput_set_StartIndex_m0352D8927B5A344B3DA7F3C84DDB63CAAFD4DD2D(L_6, L_7, NULL);
		int32_t L_8 = ___count2;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_9 = ___count2;
		G_B3_0 = ((((int32_t)L_9) < ((int32_t)((int32_t)256)))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B3_0 = 0;
	}

IL_0050:
	{
		V_0 = (bool)G_B3_0;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_11 = __this->___processingState_8;
		V_1 = L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_0061;
	}

IL_0061:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_0076;
		}
	}
	{
		goto IL_0067;
	}

IL_0067:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)5)))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_007f;
	}

IL_006d:
	{
		__this->___processingState_8 = 3;
		goto IL_007f;
	}

IL_0076:
	{
		__this->___processingState_8 = 6;
		goto IL_007f;
	}

IL_007f:
	{
	}

IL_0080:
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.DeflaterManaged::Mapbox.IO.Compression.IDeflater.GetDeflateOutput(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflaterManaged_Mapbox_IO_Compression_IDeflater_GetDeflateOutput_m3F2F3227577832D6DFB68DE0252BDCF8DF15DD6A (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outputBuffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral741151246679D1B14A39D2821A64B26BBAF31827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B3E23BEBC37E841B92530E780C1587A1D04A323);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF90090070287EF4C6E39DC038F7B5015EBDABCEA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 V_7;
	memset((&V_7), 0, sizeof(V_7));
	BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t V_10 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___outputBuffer0;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), _stringLiteralF90090070287EF4C6E39DC038F7B5015EBDABCEA, NULL);
		bool L_1;
		L_1 = DeflaterManaged_NeedsInput_m71BC2149E95E66654958B26B7ED1D93A791D10BB(__this, NULL);
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), _stringLiteral9B3E23BEBC37E841B92530E780C1587A1D04A323, NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_2 = __this->___output_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___outputBuffer0;
		NullCheck(L_2);
		OutputBuffer_UpdateBuffer_m505322686FF9BA1F0AEBBB1479881ED4377EE1BF(L_2, L_3, NULL);
		int32_t L_4 = __this->___processingState_8;
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_005f;
			}
			case 1:
			{
				goto IL_0178;
			}
			case 2:
			{
				goto IL_0194;
			}
			case 3:
			{
				goto IL_029d;
			}
			case 4:
			{
				goto IL_0126;
			}
			case 5:
			{
				goto IL_01f2;
			}
			case 6:
			{
				goto IL_02b9;
			}
		}
	}
	{
		goto IL_02d4;
	}

IL_005f:
	{
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_6 = __this->___deflateEncoder_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = FastEncoder_get_BytesInHistory_m38F0312A931648A4D9F028D346FF430BC767461F(L_6, NULL);
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0), _stringLiteral741151246679D1B14A39D2821A64B26BBAF31827, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_8 = __this->___input_6;
		NullCheck(L_8);
		InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 L_9;
		L_9 = DeflateInput_DumpState_m9E12AB6F63357BCC155DE085F165CDABFFEF57FC(L_8, NULL);
		V_1 = L_9;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_10 = __this->___output_7;
		NullCheck(L_10);
		BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA L_11;
		L_11 = OutputBuffer_DumpState_m4D1016D2222845451F2E02499DF4C88BD3BC7CCD(L_10, NULL);
		V_2 = L_11;
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_12 = __this->___deflateEncoder_4;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_13 = __this->___output_7;
		NullCheck(L_12);
		FastEncoder_GetBlockHeader_m24B2F8A5FF71D86D0C7A6EF1425EC0F73637B333(L_12, L_13, NULL);
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_14 = __this->___deflateEncoder_4;
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_15 = __this->___input_6;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_16 = __this->___output_7;
		NullCheck(L_14);
		FastEncoder_GetCompressedData_m2EB640052DF87FAD5B4650E2D1ACAE43B3E29C8F(L_14, L_15, L_16, NULL);
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_17 = __this->___deflateEncoder_4;
		NullCheck(L_17);
		double L_18;
		L_18 = FastEncoder_get_LastCompressionRatio_mC641A2F386036711496C864A033E4D2F00423304(L_17, NULL);
		bool L_19;
		L_19 = DeflaterManaged_UseCompressed_mF70EE8B436619DB8BF6260D627F86ACA426CE324(__this, L_18, NULL);
		V_3 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_0118;
		}
	}
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_21 = __this->___input_6;
		InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 L_22 = V_1;
		NullCheck(L_21);
		DeflateInput_RestoreState_mFD0C540B57D4D08D4301D435593A68E8247C337A(L_21, L_22, NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_23 = __this->___output_7;
		BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA L_24 = V_2;
		NullCheck(L_23);
		OutputBuffer_RestoreState_m3B31645FF28A697F9178D92A41F276B04BFDB4D5(L_23, L_24, NULL);
		CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868* L_25 = __this->___copyEncoder_5;
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_26 = __this->___input_6;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_27 = __this->___output_7;
		NullCheck(L_25);
		CopyEncoder_GetBlock_m58FF54065D9C18C553F6A02786C56EA66954CFB8(L_25, L_26, L_27, (bool)0, NULL);
		DeflaterManaged_FlushInputWindows_m1435913A9CAF93DDE8694F1C5E7A80230CEE5546(__this, NULL);
		__this->___processingState_8 = 5;
		goto IL_0121;
	}

IL_0118:
	{
		__this->___processingState_8 = 4;
	}

IL_0121:
	{
		goto IL_02d4;
	}

IL_0126:
	{
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_28 = __this->___deflateEncoder_4;
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_29 = __this->___input_6;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_30 = __this->___output_7;
		NullCheck(L_28);
		FastEncoder_GetCompressedData_m2EB640052DF87FAD5B4650E2D1ACAE43B3E29C8F(L_28, L_29, L_30, NULL);
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_31 = __this->___deflateEncoder_4;
		NullCheck(L_31);
		double L_32;
		L_32 = FastEncoder_get_LastCompressionRatio_mC641A2F386036711496C864A033E4D2F00423304(L_31, NULL);
		bool L_33;
		L_33 = DeflaterManaged_UseCompressed_mF70EE8B436619DB8BF6260D627F86ACA426CE324(__this, L_32, NULL);
		V_4 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_4;
		if (!L_34)
		{
			goto IL_0173;
		}
	}
	{
		__this->___processingState_8 = 1;
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_35 = __this->___deflateEncoder_4;
		NullCheck(L_35);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_36;
		L_36 = FastEncoder_get_UnprocessedInput_mEEFFB5FA96B92813EFDAD6DDA0728377FC4BEF35(L_35, NULL);
		__this->___inputFromHistory_9 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputFromHistory_9), (void*)L_36);
	}

IL_0173:
	{
		goto IL_02d4;
	}

IL_0178:
	{
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_37 = __this->___deflateEncoder_4;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_38 = __this->___output_7;
		NullCheck(L_37);
		FastEncoder_GetBlockFooter_mC3B8BFE76844CA6EE167BCC3F4221ECEBF4613B6(L_37, L_38, NULL);
		__this->___processingState_8 = 2;
		goto IL_0194;
	}

IL_0194:
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_39 = __this->___inputFromHistory_9;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = DeflateInput_get_Count_mDD3216661C54FDED40E2D11988E0440CC79C06CE(L_39, NULL);
		V_5 = (bool)((((int32_t)L_40) > ((int32_t)0))? 1 : 0);
		bool L_41 = V_5;
		if (!L_41)
		{
			goto IL_01c4;
		}
	}
	{
		CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868* L_42 = __this->___copyEncoder_5;
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_43 = __this->___inputFromHistory_9;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_44 = __this->___output_7;
		NullCheck(L_42);
		CopyEncoder_GetBlock_m58FF54065D9C18C553F6A02786C56EA66954CFB8(L_42, L_43, L_44, (bool)0, NULL);
	}

IL_01c4:
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_45 = __this->___inputFromHistory_9;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = DeflateInput_get_Count_mDD3216661C54FDED40E2D11988E0440CC79C06CE(L_45, NULL);
		V_6 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_6;
		if (!L_47)
		{
			goto IL_01ed;
		}
	}
	{
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_48 = __this->___deflateEncoder_4;
		NullCheck(L_48);
		FastEncoder_FlushInput_mCE0077A0FA5EF14B8013205AAF1EF63A056DDEEB(L_48, NULL);
		__this->___processingState_8 = 5;
	}

IL_01ed:
	{
		goto IL_02d4;
	}

IL_01f2:
	{
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_49 = __this->___deflateEncoder_4;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = FastEncoder_get_BytesInHistory_m38F0312A931648A4D9F028D346FF430BC767461F(L_49, NULL);
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0), _stringLiteral741151246679D1B14A39D2821A64B26BBAF31827, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_51 = __this->___input_6;
		NullCheck(L_51);
		InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 L_52;
		L_52 = DeflateInput_DumpState_m9E12AB6F63357BCC155DE085F165CDABFFEF57FC(L_51, NULL);
		V_7 = L_52;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_53 = __this->___output_7;
		NullCheck(L_53);
		BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA L_54;
		L_54 = OutputBuffer_DumpState_m4D1016D2222845451F2E02499DF4C88BD3BC7CCD(L_53, NULL);
		V_8 = L_54;
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_55 = __this->___deflateEncoder_4;
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_56 = __this->___input_6;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_57 = __this->___output_7;
		NullCheck(L_55);
		FastEncoder_GetBlock_mD7A05FA00362DA2D0CA8F6D2C0CADE0F47F05B0C(L_55, L_56, L_57, ((int32_t)8072), NULL);
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_58 = __this->___deflateEncoder_4;
		NullCheck(L_58);
		double L_59;
		L_59 = FastEncoder_get_LastCompressionRatio_mC641A2F386036711496C864A033E4D2F00423304(L_58, NULL);
		bool L_60;
		L_60 = DeflaterManaged_UseCompressed_mF70EE8B436619DB8BF6260D627F86ACA426CE324(__this, L_59, NULL);
		V_9 = (bool)((((int32_t)L_60) == ((int32_t)0))? 1 : 0);
		bool L_61 = V_9;
		if (!L_61)
		{
			goto IL_029b;
		}
	}
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_62 = __this->___input_6;
		InputState_tDEAA266AB1DF34EF02502730BD486A816124CB24 L_63 = V_7;
		NullCheck(L_62);
		DeflateInput_RestoreState_mFD0C540B57D4D08D4301D435593A68E8247C337A(L_62, L_63, NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_64 = __this->___output_7;
		BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA L_65 = V_8;
		NullCheck(L_64);
		OutputBuffer_RestoreState_m3B31645FF28A697F9178D92A41F276B04BFDB4D5(L_64, L_65, NULL);
		CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868* L_66 = __this->___copyEncoder_5;
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_67 = __this->___input_6;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_68 = __this->___output_7;
		NullCheck(L_66);
		CopyEncoder_GetBlock_m58FF54065D9C18C553F6A02786C56EA66954CFB8(L_66, L_67, L_68, (bool)0, NULL);
		DeflaterManaged_FlushInputWindows_m1435913A9CAF93DDE8694F1C5E7A80230CEE5546(__this, NULL);
	}

IL_029b:
	{
		goto IL_02d4;
	}

IL_029d:
	{
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_69 = __this->___deflateEncoder_4;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_70 = __this->___output_7;
		NullCheck(L_69);
		FastEncoder_GetBlockHeader_m24B2F8A5FF71D86D0C7A6EF1425EC0F73637B333(L_69, L_70, NULL);
		__this->___processingState_8 = 6;
		goto IL_02b9;
	}

IL_02b9:
	{
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_71 = __this->___deflateEncoder_4;
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_72 = __this->___input_6;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_73 = __this->___output_7;
		NullCheck(L_71);
		FastEncoder_GetCompressedData_m2EB640052DF87FAD5B4650E2D1ACAE43B3E29C8F(L_71, L_72, L_73, NULL);
		goto IL_02d4;
	}

IL_02d4:
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_74 = __this->___output_7;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = OutputBuffer_get_BytesWritten_m690E9E94BD2CA4405F345DCFA939DBA6EB5B2FC9(L_74, NULL);
		V_10 = L_75;
		goto IL_02e3;
	}

IL_02e3:
	{
		int32_t L_76 = V_10;
		return L_76;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::Mapbox.IO.Compression.IDeflater.Finish(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterManaged_Mapbox_IO_Compression_IDeflater_Finish_mAD63DFD27BA0A29A320220191E915B3E909F436D (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outputBuffer0, int32_t* ___bytesRead1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflaterState_tE87FE8CBF3EFC8EB3671C8C17528F6151F627731_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA03D2FB83BEF8B66E42EA7EE3FEC45067F5863C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF90090070287EF4C6E39DC038F7B5015EBDABCEA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___outputBuffer0;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), _stringLiteralF90090070287EF4C6E39DC038F7B5015EBDABCEA, NULL);
		int32_t L_1 = __this->___processingState_8;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_2 = __this->___processingState_8;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = __this->___processingState_8;
		if ((((int32_t)L_3) == ((int32_t)6)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = __this->___processingState_8;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_5 = __this->___processingState_8;
		G_B6_0 = ((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 1;
	}

IL_003f:
	{
		int32_t L_6 = __this->___processingState_8;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(DeflaterState_tE87FE8CBF3EFC8EB3671C8C17528F6151F627731_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteralA03D2FB83BEF8B66E42EA7EE3FEC45067F5863C6, L_8, NULL);
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)G_B6_0, L_9, NULL);
		bool L_10;
		L_10 = DeflaterManaged_NeedsInput_m71BC2149E95E66654958B26B7ED1D93A791D10BB(__this, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F(L_10, NULL);
		int32_t L_11 = __this->___processingState_8;
		V_0 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		int32_t* L_13 = ___bytesRead1;
		*((int32_t*)L_13) = (int32_t)0;
		V_1 = (bool)1;
		goto IL_00d6;
	}

IL_007b:
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_14 = __this->___output_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___outputBuffer0;
		NullCheck(L_14);
		OutputBuffer_UpdateBuffer_m505322686FF9BA1F0AEBBB1479881ED4377EE1BF(L_14, L_15, NULL);
		int32_t L_16 = __this->___processingState_8;
		if ((((int32_t)L_16) == ((int32_t)4)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_17 = __this->___processingState_8;
		if ((((int32_t)L_17) == ((int32_t)6)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_18 = __this->___processingState_8;
		G_B12_0 = ((((int32_t)L_18) == ((int32_t)1))? 1 : 0);
		goto IL_00a6;
	}

IL_00a5:
	{
		G_B12_0 = 1;
	}

IL_00a6:
	{
		V_2 = (bool)G_B12_0;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00be;
		}
	}
	{
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_20 = __this->___deflateEncoder_4;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_21 = __this->___output_7;
		NullCheck(L_20);
		FastEncoder_GetBlockFooter_mC3B8BFE76844CA6EE167BCC3F4221ECEBF4613B6(L_20, L_21, NULL);
	}

IL_00be:
	{
		DeflaterManaged_WriteFinal_mB60C47854884712AA383E278FBF32F4E526843CB(__this, NULL);
		int32_t* L_22 = ___bytesRead1;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_23 = __this->___output_7;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = OutputBuffer_get_BytesWritten_m690E9E94BD2CA4405F345DCFA939DBA6EB5B2FC9(L_23, NULL);
		*((int32_t*)L_22) = (int32_t)L_24;
		V_1 = (bool)1;
		goto IL_00d6;
	}

IL_00d6:
	{
		bool L_25 = V_1;
		return L_25;
	}
}
// System.Void Mapbox.IO.Compression.DeflaterManaged::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged_System_IDisposable_Dispose_m4C63905C4115A3F2D30887D4DCC3C4859679C0CC (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflaterManaged::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged_Dispose_m74C624E62CB6F2D309DF0BB2900A9C85F4FED35C (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::UseCompressed(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflaterManaged_UseCompressed_mF70EE8B436619DB8BF6260D627F86ACA426CE324 (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, double ___ratio0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		double L_0 = ___ratio0;
		V_0 = (bool)((((int32_t)((!(((double)L_0) <= ((double)(1.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflaterManaged::FlushInputWindows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged_FlushInputWindows_m1435913A9CAF93DDE8694F1C5E7A80230CEE5546 (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, const RuntimeMethod* method) 
{
	{
		FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* L_0 = __this->___deflateEncoder_4;
		NullCheck(L_0);
		FastEncoder_FlushInput_mCE0077A0FA5EF14B8013205AAF1EF63A056DDEEB(L_0, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflaterManaged::WriteFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflaterManaged_WriteFinal_mB60C47854884712AA383E278FBF32F4E526843CB (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* __this, const RuntimeMethod* method) 
{
	{
		CopyEncoder_t2AF247C32101418F49203060465CCD45224C8868* L_0 = __this->___copyEncoder_5;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_1 = __this->___output_7;
		NullCheck(L_0);
		CopyEncoder_GetBlock_m58FF54065D9C18C553F6A02786C56EA66954CFB8(L_0, (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568*)NULL, L_1, (bool)1, NULL);
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
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mD9B2FD9402D5739823C2B3D36E9E2C414AF70D8D (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		DeflateStream__ctor_mD453D25491166073A56A57EB8D4922384EBD2430(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mD453D25491166073A56A57EB8D4922384EBD2430 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_InternalWrite_mE494E65F5EFD2F231B445DEDF01E67CB22D73C36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_ReadCallback_mF619AC7F8DADEA755114F7752A2CB4C816702169_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_WriteCallback_m6C00E14B49BA552815722230D9AD8D1313977B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Nullable_1_t792760F1B19FBB80AD15F9F1280C539DB95534BF V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B5_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		V_0 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_mD453D25491166073A56A57EB8D4922384EBD2430_RuntimeMethod_var)));
	}

IL_001b:
	{
		int32_t L_3 = ___mode1;
		if ((((int32_t)1) == ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = ___mode1;
		G_B5_0 = ((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B5_0 = 0;
	}

IL_0026:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_6;
		L_6 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral28A2F47C431541E8C6C7DC36FE14CC30D56B13D6)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_mD453D25491166073A56A57EB8D4922384EBD2430_RuntimeMethod_var)));
	}

IL_003f:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___stream0;
		__this->____stream_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_6), (void*)L_8);
		int32_t L_9 = ___mode1;
		__this->____mode_7 = L_9;
		bool L_10 = ___leaveOpen2;
		__this->____leaveOpen_8 = L_10;
		int32_t L_11 = __this->____mode_7;
		V_2 = L_11;
		int32_t L_12 = V_2;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		goto IL_0060;
	}

IL_0060:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0115;
	}

IL_0069:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = __this->____stream_6;
		NullCheck(L_14);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_14);
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_17;
		L_17 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral163C3DED22CE392C8A1B4C506AB01BBEB6723CA7)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_mD453D25491166073A56A57EB8D4922384EBD2430_RuntimeMethod_var)));
	}

IL_0091:
	{
		Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* L_19 = (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623*)il2cpp_codegen_object_new(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Inflater__ctor_mCB225D9EA432D1FF30595E2D79A4A38F1B46950B(L_19, NULL);
		__this->___inflater_9 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inflater_9), (void*)L_19);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_20, __this, (intptr_t)((void*)DeflateStream_ReadCallback_mF619AC7F8DADEA755114F7752A2CB4C816702169_RuntimeMethod_var), NULL);
		__this->___m_CallBack_13 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallBack_13), (void*)L_20);
		goto IL_0115;
	}

IL_00b0:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = __this->____stream_6;
		NullCheck(L_21);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_21);
		V_4 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_24;
		L_24 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral215E7389CFC4724D02E42EABC72E0403D31CF637)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_25, L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_mD453D25491166073A56A57EB8D4922384EBD2430_RuntimeMethod_var)));
	}

IL_00da:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t792760F1B19FBB80AD15F9F1280C539DB95534BF));
		Nullable_1_t792760F1B19FBB80AD15F9F1280C539DB95534BF L_26 = V_5;
		RuntimeObject* L_27;
		L_27 = DeflateStream_CreateDeflater_m699F4CE250F7048DA6A364E82AA9416AE33DB2D7(L_26, NULL);
		__this->___deflater_10 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deflater_10), (void*)L_27);
		AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* L_28 = (AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E*)il2cpp_codegen_object_new(AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		AsyncWriteDelegate__ctor_m2685B5DFD1195EF2B44BB3CB3036920D0593F815(L_28, __this, (intptr_t)((void*)DeflateStream_InternalWrite_mE494E65F5EFD2F231B445DEDF01E67CB22D73C36_RuntimeMethod_var), NULL);
		__this->___m_AsyncWriterDelegate_14 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AsyncWriterDelegate_14), (void*)L_28);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_29 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_29, __this, (intptr_t)((void*)DeflateStream_WriteCallback_m6C00E14B49BA552815722230D9AD8D1313977B6C_RuntimeMethod_var), NULL);
		__this->___m_CallBack_13 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallBack_13), (void*)L_29);
		goto IL_0115;
	}

IL_0115:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		__this->___buffer_11 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_11), (void*)L_30);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m09E547CEC9280AC42DF880BD5A28F5BB5A120904 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___compressionLevel1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___compressionLevel1;
		DeflateStream__ctor_m327DF465D1B3D291AAEB668B5BBA24BF6A958BE4(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m327DF465D1B3D291AAEB668B5BBA24BF6A958BE4 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___compressionLevel1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_InternalWrite_mE494E65F5EFD2F231B445DEDF01E67CB22D73C36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_WriteCallback_m6C00E14B49BA552815722230D9AD8D1313977B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m5D9178A13289462B7E41FD7029255CA10B2B59C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		V_0 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m327DF465D1B3D291AAEB668B5BBA24BF6A958BE4_RuntimeMethod_var)));
	}

IL_001b:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___stream0;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_6;
		L_6 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral215E7389CFC4724D02E42EABC72E0403D31CF637)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m327DF465D1B3D291AAEB668B5BBA24BF6A958BE4_RuntimeMethod_var)));
	}

IL_003d:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___stream0;
		__this->____stream_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_6), (void*)L_8);
		__this->____mode_7 = 1;
		bool L_9 = ___leaveOpen2;
		__this->____leaveOpen_8 = L_9;
		int32_t L_10 = ___compressionLevel1;
		Nullable_1_t792760F1B19FBB80AD15F9F1280C539DB95534BF L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m5D9178A13289462B7E41FD7029255CA10B2B59C7((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_m5D9178A13289462B7E41FD7029255CA10B2B59C7_RuntimeMethod_var);
		RuntimeObject* L_12;
		L_12 = DeflateStream_CreateDeflater_m699F4CE250F7048DA6A364E82AA9416AE33DB2D7(L_11, NULL);
		__this->___deflater_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deflater_10), (void*)L_12);
		AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* L_13 = (AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E*)il2cpp_codegen_object_new(AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		AsyncWriteDelegate__ctor_m2685B5DFD1195EF2B44BB3CB3036920D0593F815(L_13, __this, (intptr_t)((void*)DeflateStream_InternalWrite_mE494E65F5EFD2F231B445DEDF01E67CB22D73C36_RuntimeMethod_var), NULL);
		__this->___m_AsyncWriterDelegate_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AsyncWriterDelegate_14), (void*)L_13);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_14 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_14, __this, (intptr_t)((void*)DeflateStream_WriteCallback_m6C00E14B49BA552815722230D9AD8D1313977B6C_RuntimeMethod_var), NULL);
		__this->___m_CallBack_13 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallBack_13), (void*)L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		__this->___buffer_11 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_11), (void*)L_15);
		return;
	}
}
// Mapbox.IO.Compression.IDeflater Mapbox.IO.Compression.DeflateStream::CreateDeflater(System.Nullable`1<Mapbox.IO.Compression.CompressionLevel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_CreateDeflater_m699F4CE250F7048DA6A364E82AA9416AE33DB2D7 (Nullable_1_t792760F1B19FBB80AD15F9F1280C539DB95534BF ___compressionLevel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		uint8_t L_0;
		L_0 = DeflateStream_GetDeflaterType_m5B8DB20DC19A86FB9930B94A40574C0C4A21FBC0(NULL);
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0014;
	}

IL_000c:
	{
		DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED* L_2 = (DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED*)il2cpp_codegen_object_new(DeflaterManaged_tE1780A3650AAB037E9C155BF861E2C5BE08FF7ED_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DeflaterManaged__ctor_m2022721742809F44DD79D40539F2373589EAEFB9(L_2, NULL);
		V_1 = L_2;
		goto IL_001f;
	}

IL_0014:
	{
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_3 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0AA069E2ECAA3C78085B48D7771C42F4D451722)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_CreateDeflater_m699F4CE250F7048DA6A364E82AA9416AE33DB2D7_RuntimeMethod_var)));
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// Mapbox.IO.Compression.DeflateStream/WorkerType Mapbox.IO.Compression.DeflateStream::GetDeflaterType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t DeflateStream_GetDeflaterType_m5B8DB20DC19A86FB9930B94A40574C0C4A21FBC0 (const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		uint8_t L_0 = V_0;
		return L_0;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::SetFileFormatReader(Mapbox.IO.Compression.IFileFormatReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetFileFormatReader_m90FABE16D59786FA57F0DB7FCE28C98A77C91316 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, RuntimeObject* ___reader0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___reader0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* L_2 = __this->___inflater_9;
		RuntimeObject* L_3 = ___reader0;
		NullCheck(L_2);
		Inflater_SetFileFormatReader_mC25CFDAE1F752A245F3DC0E0001ABE3E56E7EA46(L_2, L_3, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::SetFileFormatWriter(Mapbox.IO.Compression.IFileFormatWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetFileFormatWriter_m91494A9488A72719579004328CE03CD7A6EEB9EF (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, RuntimeObject* ___writer0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___writer0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_2 = ___writer0;
		__this->___formatWriter_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___formatWriter_15), (void*)L_2);
	}

IL_0012:
	{
		return;
	}
}
// System.IO.Stream Mapbox.IO.Compression.DeflateStream::get_BaseStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* DeflateStream_get_BaseStream_mECFB576ADDEAEED96AB580F430990E7245E92823 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) 
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanRead_m2B8A1E3012CC5DABF0B5350DC5727D6519373D6E (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream_6;
		V_0 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_002c;
	}

IL_0013:
	{
		int32_t L_2 = __this->____mode_7;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->____stream_6;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B5_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanWrite_mA371A8C84058DDCD3C4A3E74FB1968F70B61109A (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream_6;
		V_0 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_002d;
	}

IL_0013:
	{
		int32_t L_2 = __this->____mode_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->____stream_6;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 0;
	}

IL_002a:
	{
		V_1 = (bool)G_B5_0;
		goto IL_002d;
	}

IL_002d:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanSeek_m4631500F912C590C2FEBF9368B6298546B1E69D2 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) 
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
// System.Int64 Mapbox.IO.Compression.DeflateStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Length_mDC53EF7373D4DA9F9F37C3141209C11BCFD662DD (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Length_mDC53EF7373D4DA9F9F37C3141209C11BCFD662DD_RuntimeMethod_var)));
	}
}
// System.Int64 Mapbox.IO.Compression.DeflateStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Position_mD46970FA05CE536EB24577012D822B2929481D83 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Position_mD46970FA05CE536EB24577012D822B2929481D83_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Position_mFE4C60D679CE77D840070C9264BE5CDE83EBFB09 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Position_mFE4C60D679CE77D840070C9264BE5CDE83EBFB09_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Flush_m58784CB80920954CFFF0DB43D21162223B940324 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) 
{
	{
		DeflateStream_EnsureNotDisposed_m1B0AD39699B7304AC096E6ED27BDBD681A86AEF3(__this, NULL);
		goto IL_000a;
	}

IL_000a:
	{
		return;
	}
}
// System.Int64 Mapbox.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_Seek_m402341035116957A031103284D82E836EE6F585E (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Seek_m402341035116957A031103284D82E836EE6F585E_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetLength_m8F76D6D377EB31AF2915554A9F48F157734E2484 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_SetLength_m8F76D6D377EB31AF2915554A9F48F157734E2484_RuntimeMethod_var)));
	}
}
// System.Int32 Mapbox.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_m02DE820B90E4FD5DC32A3A4437DEDD2B48F19D9A (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral175AF943E8C780500BB6737145BBBE0BA4A35DD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C743C875078F8C0513325ED4E9171AC6D4B4DAE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	{
		DeflateStream_EnsureDecompressionMode_m6D7A9193274702FA5AD97592B06B5605A6386225(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		DeflateStream_ValidateParameters_m65FE74EC4AC4FB5F0F2A6C98E2D7A6553F643178(__this, L_0, L_1, L_2, NULL);
		DeflateStream_EnsureNotDisposed_m1B0AD39699B7304AC096E6ED27BDBD681A86AEF3(__this, NULL);
		int32_t L_3 = ___offset1;
		V_1 = L_3;
		int32_t L_4 = ___count2;
		V_2 = L_4;
		goto IL_00ca;
	}

IL_0022:
	{
		Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* L_5 = __this->___inflater_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___array0;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_5);
		int32_t L_9;
		L_9 = Inflater_Inflate_m1A3DDCA030A23AF6D2CB0D0266F27353AD2D601E(L_5, L_6, L_7, L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, L_13));
		int32_t L_14 = V_2;
		V_4 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_004a;
		}
	}
	{
		goto IL_00d2;
	}

IL_004a:
	{
		Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* L_16 = __this->___inflater_9;
		NullCheck(L_16);
		bool L_17;
		L_17 = Inflater_Finished_m580DBA6373FE81BB3D7711C925E0547B00D675D6(L_16, NULL);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0077;
		}
	}
	{
		Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* L_19 = __this->___inflater_9;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Inflater_get_AvailableOutput_m5E699B066F68AC3EB1C27DFEC231EE734E7224BD(L_19, NULL);
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0), _stringLiteral2C743C875078F8C0513325ED4E9171AC6D4B4DAE, NULL);
		goto IL_00d2;
	}

IL_0077:
	{
		Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* L_21 = __this->___inflater_9;
		NullCheck(L_21);
		bool L_22;
		L_22 = Inflater_NeedsInput_mE7D59E29E78279ED592612274C0CA2C906A4E4A2(L_21, NULL);
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37(L_22, _stringLiteral175AF943E8C780500BB6737145BBBE0BA4A35DD3, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_23 = __this->____stream_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___buffer_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___buffer_11;
		NullCheck(L_25);
		NullCheck(L_23);
		int32_t L_26;
		L_26 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, ((int32_t)(((RuntimeArray*)L_25)->max_length)));
		V_3 = L_26;
		int32_t L_27 = V_3;
		V_6 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00d2;
	}

IL_00b5:
	{
		Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* L_29 = __this->___inflater_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___buffer_11;
		int32_t L_31 = V_3;
		NullCheck(L_29);
		Inflater_SetInput_m897D9DE958E7F49822A09AA14DDAD66C0853219B(L_29, L_30, 0, L_31, NULL);
	}

IL_00ca:
	{
		V_7 = (bool)1;
		goto IL_0022;
	}

IL_00d2:
	{
		int32_t L_32 = ___count2;
		int32_t L_33 = V_2;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_32, L_33));
		goto IL_00d9;
	}

IL_00d9:
	{
		int32_t L_34 = V_8;
		return L_34;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::ValidateParameters(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_ValidateParameters_m65FE74EC4AC4FB5F0F2A6C98E2D7A6553F643178 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_ValidateParameters_m65FE74EC4AC4FB5F0F2A6C98E2D7A6553F643178_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___offset1;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_ValidateParameters_m65FE74EC4AC4FB5F0F2A6C98E2D7A6553F643178_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___count2;
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_ValidateParameters_m65FE74EC4AC4FB5F0F2A6C98E2D7A6553F643178_RuntimeMethod_var)));
	}

IL_003a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___count2;
		V_3 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDB5B65098C5E7E595009BB3FC45594C192D82CD)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_ValidateParameters_m65FE74EC4AC4FB5F0F2A6C98E2D7A6553F643178_RuntimeMethod_var)));
	}

IL_0056:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EnsureNotDisposed_m1B0AD39699B7304AC096E6ED27BDBD681A86AEF3 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream_6;
		V_0 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_3, (String_t*)NULL, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EnsureNotDisposed_m1B0AD39699B7304AC096E6ED27BDBD681A86AEF3_RuntimeMethod_var)));
	}

IL_001f:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureDecompressionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EnsureDecompressionMode_m6D7A9193274702FA5AD97592B06B5605A6386225 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->____mode_7;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82F08919641B79AB61608B2AAA086EE79385F70C)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EnsureDecompressionMode_m6D7A9193274702FA5AD97592B06B5605A6386225_RuntimeMethod_var)));
	}

IL_001e:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureCompressionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EnsureCompressionMode_mCD6BDF7EA2B0E0C564D8AC866D235B5FAB200CB9 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->____mode_7;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC156D24D9629AA45DAC9B7C975434CCCA93C9CC8)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EnsureCompressionMode_mCD6BDF7EA2B0E0C564D8AC866D235B5FAB200CB9_RuntimeMethod_var)));
	}

IL_0021:
	{
		return;
	}
}
// System.IAsyncResult Mapbox.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginRead_m792CD099DD6D65EBE08C8273974962D5E4850B90 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		DeflateStream_EnsureDecompressionMode_m6D7A9193274702FA5AD97592B06B5605A6386225(__this, NULL);
		int32_t L_0 = __this->___asyncOperations_12;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA465E00C713E7E72045D2EFF274E985042DD1E2E)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m792CD099DD6D65EBE08C8273974962D5E4850B90_RuntimeMethod_var)));
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		int32_t L_5 = ___offset1;
		int32_t L_6 = ___count2;
		DeflateStream_ValidateParameters_m65FE74EC4AC4FB5F0F2A6C98E2D7A6553F643178(__this, L_4, L_5, L_6, NULL);
		DeflateStream_EnsureNotDisposed_m1B0AD39699B7304AC096E6ED27BDBD681A86AEF3(__this, NULL);
		int32_t* L_7 = (&__this->___asyncOperations_12);
		int32_t L_8;
		L_8 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_7, NULL);
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_9 = ___asyncState4;
			AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_10 = ___asyncCallback3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___array0;
			int32_t L_12 = ___offset1;
			int32_t L_13 = ___count2;
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_14 = (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E*)il2cpp_codegen_object_new(DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var);
			NullCheck(L_14);
			DeflateStreamAsyncResult__ctor_m4532FFB3DB17238E035D66D43088C75A66683EF9(L_14, __this, L_9, L_10, L_11, L_12, L_13, NULL);
			V_1 = L_14;
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_15 = V_1;
			NullCheck(L_15);
			L_15->___isWrite_3 = (bool)0;
			Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* L_16 = __this->___inflater_9;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___array0;
			int32_t L_18 = ___offset1;
			int32_t L_19 = ___count2;
			NullCheck(L_16);
			int32_t L_20;
			L_20 = Inflater_Inflate_m1A3DDCA030A23AF6D2CB0D0266F27353AD2D601E(L_16, L_17, L_18, L_19, NULL);
			V_2 = L_20;
			int32_t L_21 = V_2;
			V_3 = (bool)((!(((uint32_t)L_21) <= ((uint32_t)0)))? 1 : 0);
			bool L_22 = V_3;
			if (!L_22)
			{
				goto IL_0083_1;
			}
		}
		{
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_23 = V_1;
			int32_t L_24 = V_2;
			int32_t L_25 = L_24;
			RuntimeObject* L_26 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_25);
			NullCheck(L_23);
			DeflateStreamAsyncResult_InvokeCallback_m4BD516C4A6690F14E70E87A6553CF553185D9472(L_23, (bool)1, L_26, NULL);
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_27 = V_1;
			V_4 = L_27;
			goto IL_00f2;
		}

IL_0083_1:
		{
			Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* L_28 = __this->___inflater_9;
			NullCheck(L_28);
			bool L_29;
			L_29 = Inflater_Finished_m580DBA6373FE81BB3D7711C925E0547B00D675D6(L_28, NULL);
			V_5 = L_29;
			bool L_30 = V_5;
			if (!L_30)
			{
				goto IL_00a8_1;
			}
		}
		{
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_31 = V_1;
			int32_t L_32 = 0;
			RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
			NullCheck(L_31);
			DeflateStreamAsyncResult_InvokeCallback_m4BD516C4A6690F14E70E87A6553CF553185D9472(L_31, (bool)1, L_33, NULL);
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_34 = V_1;
			V_4 = L_34;
			goto IL_00f2;
		}

IL_00a8_1:
		{
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_35 = __this->____stream_6;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___buffer_11;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = __this->___buffer_11;
			NullCheck(L_37);
			AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_38 = __this->___m_CallBack_13;
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_39 = V_1;
			NullCheck(L_35);
			RuntimeObject* L_40;
			L_40 = VirtualFuncInvoker5< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*, RuntimeObject* >::Invoke(21 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_35, L_36, 0, ((int32_t)(((RuntimeArray*)L_37)->max_length)), L_38, L_39);
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_41 = V_1;
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_42 = L_41;
			NullCheck(L_42);
			bool L_43 = L_42->___m_CompletedSynchronously_8;
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_44 = V_1;
			NullCheck(L_44);
			bool L_45;
			L_45 = DeflateStreamAsyncResult_get_IsCompleted_mFF614595920297A1BD5CB6A296F88AC34C434F36(L_44, NULL);
			NullCheck(L_42);
			L_42->___m_CompletedSynchronously_8 = (bool)((int32_t)((int32_t)L_43&(int32_t)L_45));
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_46 = V_1;
			V_4 = L_46;
			goto IL_00f2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e2;
		}
		throw e;
	}

CATCH_00e2:
	{// begin catch(System.Object)
		int32_t* L_47 = (&__this->___asyncOperations_12);
		int32_t L_48;
		L_48 = Interlocked_Decrement_m6AFAD2E874CBDA373B1EF7572F11D6E91813E75D(L_47, NULL);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_00f2:
	{
		RuntimeObject* L_49 = V_4;
		return L_49;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::ReadCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_ReadCallback_mF619AC7F8DADEA755114F7752A2CB4C816702169 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, RuntimeObject* ___baseStreamResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B6_0 = 0;
	{
		RuntimeObject* L_0 = ___baseStreamResult0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
		V_0 = ((DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E*)CastclassClass((RuntimeObject*)L_1, DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_2 = V_0;
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_3 = L_2;
		NullCheck(L_3);
		bool L_4 = L_3->___m_CompletedSynchronously_8;
		RuntimeObject* L_5 = ___baseStreamResult0;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		L_3->___m_CompletedSynchronously_8 = (bool)((int32_t)((int32_t)L_4&(int32_t)L_6));
		V_1 = 0;
	}
	try
	{// begin try (depth: 1)
		{
			DeflateStream_EnsureNotDisposed_m1B0AD39699B7304AC096E6ED27BDBD681A86AEF3(__this, NULL);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->____stream_6;
			RuntimeObject* L_8 = ___baseStreamResult0;
			NullCheck(L_7);
			int32_t L_9;
			L_9 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(22 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_7, L_8);
			V_1 = L_9;
			int32_t L_10 = V_1;
			V_2 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_11 = V_2;
			if (!L_11)
			{
				goto IL_0055_1;
			}
		}
		{
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_12 = V_0;
			int32_t L_13 = 0;
			RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
			NullCheck(L_12);
			DeflateStreamAsyncResult_InvokeCallback_m76478D38A156401F23CB17847817AEFC23B05EF6(L_12, L_14, NULL);
			goto IL_00e5;
		}

IL_0055_1:
		{
			Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* L_15 = __this->___inflater_9;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___buffer_11;
			int32_t L_17 = V_1;
			NullCheck(L_15);
			Inflater_SetInput_m897D9DE958E7F49822A09AA14DDAD66C0853219B(L_15, L_16, 0, L_17, NULL);
			Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* L_18 = __this->___inflater_9;
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_19 = V_0;
			NullCheck(L_19);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = L_19->___buffer_0;
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_21 = V_0;
			NullCheck(L_21);
			int32_t L_22 = L_21->___offset_1;
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_23 = V_0;
			NullCheck(L_23);
			int32_t L_24 = L_23->___count_2;
			NullCheck(L_18);
			int32_t L_25;
			L_25 = Inflater_Inflate_m1A3DDCA030A23AF6D2CB0D0266F27353AD2D601E(L_18, L_20, L_22, L_24, NULL);
			V_1 = L_25;
			int32_t L_26 = V_1;
			if (L_26)
			{
				goto IL_009a_1;
			}
		}
		{
			Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* L_27 = __this->___inflater_9;
			NullCheck(L_27);
			bool L_28;
			L_28 = Inflater_Finished_m580DBA6373FE81BB3D7711C925E0547B00D675D6(L_27, NULL);
			G_B6_0 = ((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
			goto IL_009b_1;
		}

IL_009a_1:
		{
			G_B6_0 = 0;
		}

IL_009b_1:
		{
			V_3 = (bool)G_B6_0;
			bool L_29 = V_3;
			if (!L_29)
			{
				goto IL_00c5_1;
			}
		}
		{
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_30 = __this->____stream_6;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->___buffer_11;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___buffer_11;
			NullCheck(L_32);
			AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_33 = __this->___m_CallBack_13;
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_34 = V_0;
			NullCheck(L_30);
			RuntimeObject* L_35;
			L_35 = VirtualFuncInvoker5< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*, RuntimeObject* >::Invoke(21 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_30, L_31, 0, ((int32_t)(((RuntimeArray*)L_32)->max_length)), L_33, L_34);
			goto IL_00d4_1;
		}

IL_00c5_1:
		{
			DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_36 = V_0;
			int32_t L_37 = V_1;
			int32_t L_38 = L_37;
			RuntimeObject* L_39 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_38);
			NullCheck(L_36);
			DeflateStreamAsyncResult_InvokeCallback_m76478D38A156401F23CB17847817AEFC23B05EF6(L_36, L_39, NULL);
		}

IL_00d4_1:
		{
			goto IL_00e5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d7;
		}
		throw e;
	}

CATCH_00d7:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_40 = V_0;
		Exception_t* L_41 = V_4;
		NullCheck(L_40);
		DeflateStreamAsyncResult_InvokeCallback_m76478D38A156401F23CB17847817AEFC23B05EF6(L_40, L_41, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e5;
	}// end catch (depth: 1)

IL_00e5:
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_EndRead_m35A49366DE7F748E31B3BF79914C75215CBE50D7 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* V_0 = NULL;
	Exception_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		DeflateStream_EnsureDecompressionMode_m6D7A9193274702FA5AD97592B06B5605A6386225(__this, NULL);
		RuntimeObject* L_0 = ___asyncResult0;
		DeflateStream_CheckEndXxxxLegalStateAndParams_mCD521B91AA5C5E3D87D61840F54C6B6FD87094B6(__this, L_0, NULL);
		RuntimeObject* L_1 = ___asyncResult0;
		V_0 = ((DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E*)CastclassClass((RuntimeObject*)L_1, DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_2 = V_0;
		DeflateStream_AwaitAsyncResultCompletion_m2983E6426A3B05AE4CBB5E9E3F3783F7157FB9D2(__this, L_2, NULL);
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = DeflateStreamAsyncResult_get_Result_m6F3BB3735AF5F915630F320A70081DB31B4FE2B0(L_3, NULL);
		V_1 = ((Exception_t*)IsInstClass((RuntimeObject*)L_4, Exception_t_il2cpp_TypeInfo_var));
		Exception_t* L_5 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Exception_t* L_7 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m35A49366DE7F748E31B3BF79914C75215CBE50D7_RuntimeMethod_var)));
	}

IL_0036:
	{
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = DeflateStreamAsyncResult_get_Result_m6F3BB3735AF5F915630F320A70081DB31B4FE2B0(L_8, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_9, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_0044;
	}

IL_0044:
	{
		int32_t L_10 = V_3;
		return L_10;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Write_m28930C89503CE7195FFF7EE99C3BE00592A41C74 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		DeflateStream_EnsureCompressionMode_mCD6BDF7EA2B0E0C564D8AC866D235B5FAB200CB9(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		DeflateStream_ValidateParameters_m65FE74EC4AC4FB5F0F2A6C98E2D7A6553F643178(__this, L_0, L_1, L_2, NULL);
		DeflateStream_EnsureNotDisposed_m1B0AD39699B7304AC096E6ED27BDBD681A86AEF3(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___array0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		DeflateStream_InternalWrite_mE494E65F5EFD2F231B445DEDF01E67CB22D73C36(__this, L_3, L_4, L_5, (bool)0, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::InternalWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_InternalWrite_mE494E65F5EFD2F231B445DEDF01E67CB22D73C36 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDeflater_tA9935A8304CBFE66EAC6D3040AFD8380CB27E403_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		DeflateStream_DoMaintenance_m6A3CC4632CE1F086091E20BD5013F4E5B410E16E(__this, L_0, L_1, L_2, NULL);
		bool L_3 = ___isAsync3;
		DeflateStream_WriteDeflaterOutput_m150396F4C1DBA2DC9C3D6ADE72F8CF09E9D58262(__this, L_3, NULL);
		RuntimeObject* L_4 = __this->___deflater_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(1 /* System.Void Mapbox.IO.Compression.IDeflater::SetInput(System.Byte[],System.Int32,System.Int32) */, IDeflater_tA9935A8304CBFE66EAC6D3040AFD8380CB27E403_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
		bool L_8 = ___isAsync3;
		DeflateStream_WriteDeflaterOutput_m150396F4C1DBA2DC9C3D6ADE72F8CF09E9D58262(__this, L_8, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::WriteDeflaterOutput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteDeflaterOutput_m150396F4C1DBA2DC9C3D6ADE72F8CF09E9D58262 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, bool ___isAsync0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDeflater_tA9935A8304CBFE66EAC6D3040AFD8380CB27E403_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		goto IL_002f;
	}

IL_0003:
	{
		RuntimeObject* L_0 = __this->___deflater_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buffer_11;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Int32 Mapbox.IO.Compression.IDeflater::GetDeflateOutput(System.Byte[]) */, IDeflater_tA9935A8304CBFE66EAC6D3040AFD8380CB27E403_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___buffer_11;
		int32_t L_6 = V_0;
		bool L_7 = ___isAsync0;
		DeflateStream_DoWrite_m9ED94DAAC75E313A30133C587A36EE2A3FD31EB1(__this, L_5, 0, L_6, L_7, NULL);
	}

IL_002e:
	{
	}

IL_002f:
	{
		RuntimeObject* L_8 = __this->___deflater_10;
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Mapbox.IO.Compression.IDeflater::NeedsInput() */, IDeflater_tA9935A8304CBFE66EAC6D3040AFD8380CB27E403_il2cpp_TypeInfo_var, L_8);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0003;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::DoWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_DoWrite_m9ED94DAAC75E313A30133C587A36EE2A3FD31EB1 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		int32_t L_1 = ___count2;
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0), NULL);
		bool L_2 = ___isAsync3;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->____stream_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker5< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*, RuntimeObject* >::Invoke(25 /* System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_4, L_5, L_6, L_7, (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)NULL, NULL);
		V_1 = L_8;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = __this->____stream_6;
		RuntimeObject* L_10 = V_1;
		NullCheck(L_9);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(26 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, L_9, L_10);
		goto IL_004e;
	}

IL_003d:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->____stream_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___array0;
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___count2;
		NullCheck(L_11);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, L_13, L_14);
	}

IL_004e:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::DoMaintenance(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_DoMaintenance_m6A3CC4632CE1F086091E20BD5013F4E5B410E16E (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileFormatWriter_t524F7975DC5257AA74B9ECF2A6D598EEACCB2E84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		int32_t L_0 = ___count2;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_0066;
	}

IL_000e:
	{
		__this->___wroteBytes_17 = (bool)1;
		RuntimeObject* L_2 = __this->___formatWriter_15;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0066;
	}

IL_0024:
	{
		bool L_4 = __this->___wroteHeader_16;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_6 = __this->___formatWriter_15;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Byte[] Mapbox.IO.Compression.IFileFormatWriter::GetHeader() */, IFileFormatWriter_t524F7975DC5257AA74B9ECF2A6D598EEACCB2E84_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->____stream_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		NullCheck(L_10);
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)));
		__this->___wroteHeader_16 = (bool)1;
	}

IL_0057:
	{
		RuntimeObject* L_11 = __this->___formatWriter_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___array0;
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___count2;
		NullCheck(L_11);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(1 /* System.Void Mapbox.IO.Compression.IFileFormatWriter::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32) */, IFileFormatWriter_t524F7975DC5257AA74B9ECF2A6D598EEACCB2E84_il2cpp_TypeInfo_var, L_11, L_12, L_13, L_14);
	}

IL_0066:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::PurgeBuffers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_PurgeBuffers_m38E7F42A25F36509A0E933437A22BD8376457C28 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDeflater_tA9935A8304CBFE66EAC6D3040AFD8380CB27E403_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileFormatWriter_t524F7975DC5257AA74B9ECF2A6D598EEACCB2E84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	int32_t G_B15_0 = 0;
	{
		bool L_0 = ___disposing0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_00c7;
	}

IL_000e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->____stream_6;
		V_1 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_00c7;
	}

IL_0020:
	{
		VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Flush() */, __this);
		int32_t L_4 = __this->____mode_7;
		V_2 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00c7;
	}

IL_003c:
	{
		bool L_6 = __this->___wroteBytes_17;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_008e;
		}
	}
	{
		DeflateStream_WriteDeflaterOutput_m150396F4C1DBA2DC9C3D6ADE72F8CF09E9D58262(__this, (bool)0, NULL);
	}

IL_004f:
	{
		RuntimeObject* L_8 = __this->___deflater_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___buffer_11;
		NullCheck(L_8);
		bool L_10;
		L_10 = InterfaceFuncInvoker2< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t* >::Invoke(3 /* System.Boolean Mapbox.IO.Compression.IDeflater::Finish(System.Byte[],System.Int32&) */, IDeflater_tA9935A8304CBFE66EAC6D3040AFD8380CB27E403_il2cpp_TypeInfo_var, L_8, L_9, (&V_5));
		V_4 = L_10;
		int32_t L_11 = V_5;
		V_6 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0081;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___buffer_11;
		int32_t L_14 = V_5;
		DeflateStream_DoWrite_m9ED94DAAC75E313A30133C587A36EE2A3FD31EB1(__this, L_13, 0, L_14, (bool)0, NULL);
	}

IL_0081:
	{
		bool L_15 = V_4;
		V_7 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_7;
		if (L_16)
		{
			goto IL_004f;
		}
	}
	{
	}

IL_008e:
	{
		RuntimeObject* L_17 = __this->___formatWriter_15;
		if (!L_17)
		{
			goto IL_009e;
		}
	}
	{
		bool L_18 = __this->___wroteHeader_16;
		G_B15_0 = ((int32_t)(L_18));
		goto IL_009f;
	}

IL_009e:
	{
		G_B15_0 = 0;
	}

IL_009f:
	{
		V_8 = (bool)G_B15_0;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_00c7;
		}
	}
	{
		RuntimeObject* L_20 = __this->___formatWriter_15;
		NullCheck(L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2 /* System.Byte[] Mapbox.IO.Compression.IFileFormatWriter::GetFooter() */, IFileFormatWriter_t524F7975DC5257AA74B9ECF2A6D598EEACCB2E84_il2cpp_TypeInfo_var, L_20);
		V_9 = L_21;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = __this->____stream_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_9;
		NullCheck(L_24);
		NullCheck(L_22);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_22, L_23, 0, ((int32_t)(((RuntimeArray*)L_24)->max_length)));
	}

IL_00c7:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Dispose_m4FD7CB14120B1B505D51D65B74381AEF44ED063A (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				{
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0039:
						{// begin finally (depth: 2)
							{
								__this->____stream_6 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
								Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_6), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_005e:
									{// begin finally (depth: 3)
										__this->___deflater_10 = (RuntimeObject*)NULL;
										Il2CppCodeGenWriteBarrier((void**)(&__this->___deflater_10), (void*)(RuntimeObject*)NULL);
										bool L_0 = ___disposing0;
										Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
										return;
									}// end finally (depth: 3)
								});
								try
								{// begin try (depth: 3)
									{
										RuntimeObject* L_1 = __this->___deflater_10;
										V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
										bool L_2 = V_1;
										if (!L_2)
										{
											goto IL_005b_1;
										}
									}
									{
										RuntimeObject* L_3 = __this->___deflater_10;
										NullCheck(L_3);
										InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
									}

IL_005b_1:
									{
										goto IL_0070;
									}
								}// end try (depth: 3)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}

IL_0070:
							{
								return;
							}
						}// end finally (depth: 2)
					});
					try
					{// begin try (depth: 2)
						{
							bool L_4 = ___disposing0;
							if (!L_4)
							{
								goto IL_0025_1;
							}
						}
						{
							bool L_5 = __this->____leaveOpen_8;
							if (L_5)
							{
								goto IL_0025_1;
							}
						}
						{
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->____stream_6;
							G_B7_0 = ((!(((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
							goto IL_0026_1;
						}

IL_0025_1:
						{
							G_B7_0 = 0;
						}

IL_0026_1:
						{
							V_0 = (bool)G_B7_0;
							bool L_7 = V_0;
							if (!L_7)
							{
								goto IL_0036_1;
							}
						}
						{
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->____stream_6;
							NullCheck(L_8);
							VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_8);
						}

IL_0036_1:
						{
							goto IL_0072;
						}
					}// end try (depth: 2)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			bool L_9 = ___disposing0;
			DeflateStream_PurgeBuffers_m38E7F42A25F36509A0E933437A22BD8376457C28(__this, L_9, NULL);
			goto IL_0074;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0074:
	{
		return;
	}
}
// System.IAsyncResult Mapbox.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginWrite_m0E1D3120FACA417A81EA31500F6E6BCF7D6697F8 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		DeflateStream_EnsureCompressionMode_mCD6BDF7EA2B0E0C564D8AC866D235B5FAB200CB9(__this, NULL);
		int32_t L_0 = __this->___asyncOperations_12;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA465E00C713E7E72045D2EFF274E985042DD1E2E)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m0E1D3120FACA417A81EA31500F6E6BCF7D6697F8_RuntimeMethod_var)));
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		int32_t L_5 = ___offset1;
		int32_t L_6 = ___count2;
		DeflateStream_ValidateParameters_m65FE74EC4AC4FB5F0F2A6C98E2D7A6553F643178(__this, L_4, L_5, L_6, NULL);
		DeflateStream_EnsureNotDisposed_m1B0AD39699B7304AC096E6ED27BDBD681A86AEF3(__this, NULL);
		int32_t* L_7 = (&__this->___asyncOperations_12);
		int32_t L_8;
		L_8 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_7, NULL);
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_9 = ___asyncState4;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_10 = ___asyncCallback3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___array0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = ___count2;
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_14 = (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E*)il2cpp_codegen_object_new(DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		DeflateStreamAsyncResult__ctor_m4532FFB3DB17238E035D66D43088C75A66683EF9(L_14, __this, L_9, L_10, L_11, L_12, L_13, NULL);
		V_1 = L_14;
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_15 = V_1;
		NullCheck(L_15);
		L_15->___isWrite_3 = (bool)1;
		AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* L_16 = __this->___m_AsyncWriterDelegate_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___array0;
		int32_t L_18 = ___offset1;
		int32_t L_19 = ___count2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = __this->___m_CallBack_13;
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_21 = V_1;
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = AsyncWriteDelegate_BeginInvoke_m6BFE27A81614BA95217F16ABF61B3C60F8C19031(L_16, L_17, L_18, L_19, (bool)1, L_20, L_21, NULL);
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_23 = V_1;
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_24 = L_23;
		NullCheck(L_24);
		bool L_25 = L_24->___m_CompletedSynchronously_8;
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_26 = V_1;
		NullCheck(L_26);
		bool L_27;
		L_27 = DeflateStreamAsyncResult_get_IsCompleted_mFF614595920297A1BD5CB6A296F88AC34C434F36(L_26, NULL);
		NullCheck(L_24);
		L_24->___m_CompletedSynchronously_8 = (bool)((int32_t)((int32_t)L_25&(int32_t)L_27));
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_28 = V_1;
		V_2 = L_28;
		goto IL_0096;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0086;
		}
		throw e;
	}

CATCH_0086:
	{// begin catch(System.Object)
		int32_t* L_29 = (&__this->___asyncOperations_12);
		int32_t L_30;
		L_30 = Interlocked_Decrement_m6AFAD2E874CBDA373B1EF7572F11D6E91813E75D(L_29, NULL);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_0096:
	{
		RuntimeObject* L_31 = V_2;
		return L_31;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::WriteCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteCallback_m6C00E14B49BA552815722230D9AD8D1313977B6C (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___asyncResult0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
		V_0 = ((DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E*)CastclassClass((RuntimeObject*)L_1, DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_2 = V_0;
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_3 = L_2;
		NullCheck(L_3);
		bool L_4 = L_3->___m_CompletedSynchronously_8;
		RuntimeObject* L_5 = ___asyncResult0;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		L_3->___m_CompletedSynchronously_8 = (bool)((int32_t)((int32_t)L_4&(int32_t)L_6));
	}
	try
	{// begin try (depth: 1)
		AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* L_7 = __this->___m_AsyncWriterDelegate_14;
		RuntimeObject* L_8 = ___asyncResult0;
		NullCheck(L_7);
		AsyncWriteDelegate_EndInvoke_mAACD8772AA8D8D01D316433039D5AAF8C9A7D0D2(L_7, L_8, NULL);
		goto IL_003d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0031;
		}
		throw e;
	}

CATCH_0031:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_9 = V_0;
		Exception_t* L_10 = V_1;
		NullCheck(L_9);
		DeflateStreamAsyncResult_InvokeCallback_m76478D38A156401F23CB17847817AEFC23B05EF6(L_9, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0045;
	}// end catch (depth: 1)

IL_003d:
	{
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_11 = V_0;
		NullCheck(L_11);
		DeflateStreamAsyncResult_InvokeCallback_m76478D38A156401F23CB17847817AEFC23B05EF6(L_11, NULL, NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EndWrite_m45F55830DC52C399998C75815768EDE9F1461D47 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* V_0 = NULL;
	Exception_t* V_1 = NULL;
	bool V_2 = false;
	{
		DeflateStream_EnsureCompressionMode_mCD6BDF7EA2B0E0C564D8AC866D235B5FAB200CB9(__this, NULL);
		RuntimeObject* L_0 = ___asyncResult0;
		DeflateStream_CheckEndXxxxLegalStateAndParams_mCD521B91AA5C5E3D87D61840F54C6B6FD87094B6(__this, L_0, NULL);
		RuntimeObject* L_1 = ___asyncResult0;
		V_0 = ((DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E*)CastclassClass((RuntimeObject*)L_1, DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_2 = V_0;
		DeflateStream_AwaitAsyncResultCompletion_m2983E6426A3B05AE4CBB5E9E3F3783F7157FB9D2(__this, L_2, NULL);
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = DeflateStreamAsyncResult_get_Result_m6F3BB3735AF5F915630F320A70081DB31B4FE2B0(L_3, NULL);
		V_1 = ((Exception_t*)IsInstClass((RuntimeObject*)L_4, Exception_t_il2cpp_TypeInfo_var));
		Exception_t* L_5 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Exception_t* L_7 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m45F55830DC52C399998C75815768EDE9F1461D47_RuntimeMethod_var)));
	}

IL_0036:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::CheckEndXxxxLegalStateAndParams(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_CheckEndXxxxLegalStateAndParams_mCD521B91AA5C5E3D87D61840F54C6B6FD87094B6 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		int32_t L_0 = __this->___asyncOperations_12;
		V_1 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0CA4B30AD24F5B4E2579117D84F879B0C60CE3F8)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_CheckEndXxxxLegalStateAndParams_mCD521B91AA5C5E3D87D61840F54C6B6FD87094B6_RuntimeMethod_var)));
	}

IL_0021:
	{
		RuntimeObject* L_4 = ___asyncResult0;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_CheckEndXxxxLegalStateAndParams_mCD521B91AA5C5E3D87D61840F54C6B6FD87094B6_RuntimeMethod_var)));
	}

IL_0034:
	{
		DeflateStream_EnsureNotDisposed_m1B0AD39699B7304AC096E6ED27BDBD681A86AEF3(__this, NULL);
		RuntimeObject* L_7 = ___asyncResult0;
		V_0 = ((DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E*)IsInstClass((RuntimeObject*)L_7, DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_8 = V_0;
		V_3 = (bool)((((RuntimeObject*)(DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_10 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_CheckEndXxxxLegalStateAndParams_mCD521B91AA5C5E3D87D61840F54C6B6FD87094B6_RuntimeMethod_var)));
	}

IL_0055:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::AwaitAsyncResultCompletion(Mapbox.IO.Compression.DeflateStreamAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_AwaitAsyncResultCompletion_m2983E6426A3B05AE4CBB5E9E3F3783F7157FB9D2 (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* __this, DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* ___asyncResult0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{// begin finally (depth: 1)
				int32_t* L_0 = (&__this->___asyncOperations_12);
				int32_t L_1;
				L_1 = Interlocked_Decrement_m6AFAD2E874CBDA373B1EF7572F11D6E91813E75D(L_0, NULL);
				DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_2 = ___asyncResult0;
				NullCheck(L_2);
				DeflateStreamAsyncResult_Close_mDE3221F5FA885F441EBB0EEBA6BD5028207DFB7D(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_3 = ___asyncResult0;
				NullCheck(L_3);
				bool L_4;
				L_4 = DeflateStreamAsyncResult_get_IsCompleted_mFF614595920297A1BD5CB6A296F88AC34C434F36(L_3, NULL);
				V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_0;
				if (!L_5)
				{
					goto IL_001b_1;
				}
			}
			{
				DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* L_6 = ___asyncResult0;
				NullCheck(L_6);
				WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* L_7;
				L_7 = DeflateStreamAsyncResult_get_AsyncWaitHandle_m2B50F65E5C21737FF2FE4CCA4273E6DB853FF75D(L_6, NULL);
				NullCheck(L_7);
				bool L_8;
				L_8 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_7);
			}

IL_001b_1:
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
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
void AsyncWriteDelegate_Invoke_m0E50750F87D56509ADEC86D763F5C81EA4E2BD05_Multicast(AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* currentDelegate = reinterpret_cast<AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___array0, ___offset1, ___count2, ___isAsync3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AsyncWriteDelegate_Invoke_m0E50750F87D56509ADEC86D763F5C81EA4E2BD05_OpenInst(AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
{
	NullCheck(___array0);
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, ___isAsync3, method);
}
void AsyncWriteDelegate_Invoke_m0E50750F87D56509ADEC86D763F5C81EA4E2BD05_OpenStatic(AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___array0, ___offset1, ___count2, ___isAsync3, method);
}
void AsyncWriteDelegate_Invoke_m0E50750F87D56509ADEC86D763F5C81EA4E2BD05_OpenStaticInvoker(AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___array0, ___offset1, ___count2, ___isAsync3);
}
void AsyncWriteDelegate_Invoke_m0E50750F87D56509ADEC86D763F5C81EA4E2BD05_ClosedStaticInvoker(AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___array0, ___offset1, ___count2, ___isAsync3);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E (AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___array0' to native representation
	uint8_t* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<uint8_t*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____array0_marshaled, ___offset1, ___count2, static_cast<int32_t>(___isAsync3));

}
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncWriteDelegate__ctor_m2685B5DFD1195EF2B44BB3CB3036920D0593F815 (AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AsyncWriteDelegate_Invoke_m0E50750F87D56509ADEC86D763F5C81EA4E2BD05_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AsyncWriteDelegate_Invoke_m0E50750F87D56509ADEC86D763F5C81EA4E2BD05_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AsyncWriteDelegate_Invoke_m0E50750F87D56509ADEC86D763F5C81EA4E2BD05_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&AsyncWriteDelegate_Invoke_m0E50750F87D56509ADEC86D763F5C81EA4E2BD05_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&AsyncWriteDelegate_Invoke_m0E50750F87D56509ADEC86D763F5C81EA4E2BD05_Multicast;
}
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncWriteDelegate_Invoke_m0E50750F87D56509ADEC86D763F5C81EA4E2BD05 (AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___array0, ___offset1, ___count2, ___isAsync3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncWriteDelegate_BeginInvoke_m6BFE27A81614BA95217F16ABF61B3C60F8C19031 (AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___array0;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___count2);
	__d_args[3] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___isAsync3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncWriteDelegate_EndInvoke_mAACD8772AA8D8D01D316433039D5AAF8C9A7D0D2 (AsyncWriteDelegate_t460790C3F94609B4F2D9F7FB2B5CF541A8D5B18E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::.ctor(System.Object,System.Object,System.AsyncCallback,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult__ctor_m4532FFB3DB17238E035D66D43088C75A66683EF9 (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, RuntimeObject* ___asyncObject0, RuntimeObject* ___asyncState1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer3, int32_t ___offset4, int32_t ___count5, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer3;
		__this->___buffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_0), (void*)L_0);
		int32_t L_1 = ___offset4;
		__this->___offset_1 = L_1;
		int32_t L_2 = ___count5;
		__this->___count_2 = L_2;
		__this->___m_CompletedSynchronously_8 = (bool)1;
		RuntimeObject* L_3 = ___asyncObject0;
		__this->___m_AsyncObject_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AsyncObject_4), (void*)L_3);
		RuntimeObject* L_4 = ___asyncState1;
		__this->___m_AsyncState_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AsyncState_5), (void*)L_4);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___asyncCallback2;
		__this->___m_AsyncCallback_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AsyncCallback_6), (void*)L_5);
		return;
	}
}
// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::get_AsyncState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStreamAsyncResult_get_AsyncState_m6BC1023D5E52F7925EA56D03973F51208D6F9D1D (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___m_AsyncState_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Threading.WaitHandle Mapbox.IO.Compression.DeflateStreamAsyncResult::get_AsyncWaitHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* DeflateStreamAsyncResult_get_AsyncWaitHandle_m2B50F65E5C21737FF2FE4CCA4273E6DB853FF75D (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* V_4 = NULL;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->___m_Completed_10;
		V_0 = L_0;
		RuntimeObject* L_1 = __this->___m_Event_11;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject** L_3 = (&__this->___m_Event_11);
		int32_t L_4 = V_0;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_5 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_5, (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0), NULL);
		RuntimeObject* L_6;
		L_6 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_3, L_5, NULL, NULL);
	}

IL_002d:
	{
		RuntimeObject* L_7 = __this->___m_Event_11;
		V_1 = ((ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)CastclassSealed((RuntimeObject*)L_7, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var));
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = __this->___m_Completed_10;
		G_B5_0 = ((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		V_3 = (bool)G_B5_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_11 = V_1;
		NullCheck(L_11);
		bool L_12;
		L_12 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_11, NULL);
	}

IL_0055:
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_13 = V_1;
		V_4 = L_13;
		goto IL_005a;
	}

IL_005a:
	{
		WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* L_14 = V_4;
		return L_14;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::get_CompletedSynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStreamAsyncResult_get_CompletedSynchronously_mB08E4A62F42BFAE2EA911D04B715D535368CACBF (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_CompletedSynchronously_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStreamAsyncResult_get_IsCompleted_mFF614595920297A1BD5CB6A296F88AC34C434F36 (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___m_Completed_10;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStreamAsyncResult_get_Result_m6F3BB3735AF5F915630F320A70081DB31B4FE2B0 (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___m_Result_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_Close_mDE3221F5FA885F441EBB0EEBA6BD5028207DFB7D (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___m_Event_11;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_Event_11;
		NullCheck(((ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)CastclassSealed((RuntimeObject*)L_2, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var)));
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Threading.WaitHandle::Close() */, ((ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)CastclassSealed((RuntimeObject*)L_2, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var)));
	}

IL_0021:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_InvokeCallback_m4BD516C4A6690F14E70E87A6553CF553185D9472 (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, bool ___completedSynchronously0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___completedSynchronously0;
		RuntimeObject* L_1 = ___result1;
		DeflateStreamAsyncResult_Complete_mCC833A9B43717D6F2933EDA7B1B6096AFF6ADD41(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_InvokeCallback_m76478D38A156401F23CB17847817AEFC23B05EF6 (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___result0;
		DeflateStreamAsyncResult_Complete_m74665C48FBF96DD00CCAF050B0AEF42D3004689C(__this, L_0, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Complete(System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_Complete_mCC833A9B43717D6F2933EDA7B1B6096AFF6ADD41 (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, bool ___completedSynchronously0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___completedSynchronously0;
		__this->___m_CompletedSynchronously_8 = L_0;
		RuntimeObject* L_1 = ___result1;
		DeflateStreamAsyncResult_Complete_m74665C48FBF96DD00CCAF050B0AEF42D3004689C(__this, L_1, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Complete(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamAsyncResult_Complete_m74665C48FBF96DD00CCAF050B0AEF42D3004689C (DeflateStreamAsyncResult_t26AA64BBC6EBEAB22DAFDF68752EA1FBCA8EF17E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___result0;
		__this->___m_Result_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Result_7), (void*)L_0);
		int32_t* L_1 = (&__this->___m_Completed_10);
		int32_t L_2;
		L_2 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_1, NULL);
		RuntimeObject* L_3 = __this->___m_Event_11;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_5 = __this->___m_Event_11;
		NullCheck(((ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)CastclassSealed((RuntimeObject*)L_5, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var)));
		bool L_6;
		L_6 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(((ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)CastclassSealed((RuntimeObject*)L_5, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var)), NULL);
	}

IL_0034:
	{
		int32_t* L_7 = (&__this->___m_InvokedCallback_9);
		int32_t L_8;
		L_8 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_7, NULL);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_10 = __this->___m_AsyncCallback_6;
		V_2 = (bool)((!(((RuntimeObject*)(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_12 = __this->___m_AsyncCallback_6;
		NullCheck(L_12);
		AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline(L_12, __this, NULL);
	}

IL_0063:
	{
	}

IL_0064:
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
// System.Void Mapbox.IO.Compression.FastEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder__ctor_m6874DDF4DEB1AB4F2F87E4547D29A8CA7E736445 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* L_0 = (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5*)il2cpp_codegen_object_new(FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FastEncoderWindow__ctor_m5EBEB7CC7BB01B3A95DA1A362163147F4CF74B38(L_0, NULL);
		__this->___inputWindow_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputWindow_0), (void*)L_0);
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_1 = (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE*)il2cpp_codegen_object_new(Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Match__ctor_mEC516DCEF316ACCEEA99D913DD94E8BC1BB5D6C8(L_1, NULL);
		__this->___currentMatch_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentMatch_1), (void*)L_1);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoder::get_BytesInHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoder_get_BytesInHistory_m38F0312A931648A4D9F028D346FF430BC767461F (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* L_0 = __this->___inputWindow_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FastEncoderWindow_get_BytesAvailable_m84A9B44988104D4F9A9D2D83116A8614BBEAD0AC(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.FastEncoder::get_UnprocessedInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* FastEncoder_get_UnprocessedInput_mEEFFB5FA96B92813EFDAD6DDA0728377FC4BEF35 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, const RuntimeMethod* method) 
{
	DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* V_0 = NULL;
	{
		FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* L_0 = __this->___inputWindow_0;
		NullCheck(L_0);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_1;
		L_1 = FastEncoderWindow_get_UnprocessedInput_mAF13CAD3309CF92110BB47CE4CDD1B08F2FD569C(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::FlushInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_FlushInput_mCE0077A0FA5EF14B8013205AAF1EF63A056DDEEB (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, const RuntimeMethod* method) 
{
	{
		FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* L_0 = __this->___inputWindow_0;
		NullCheck(L_0);
		FastEncoderWindow_FlushWindow_mFB54632D12E247648901B003BF0E84376665A38F(L_0, NULL);
		return;
	}
}
// System.Double Mapbox.IO.Compression.FastEncoder::get_LastCompressionRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FastEncoder_get_LastCompressionRatio_mC641A2F386036711496C864A033E4D2F00423304 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		double L_0 = __this->___lastCompressionRatio_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlock(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetBlock_mD7A05FA00362DA2D0CA8F6D2C0CADE0F47F05B0C (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* ___input0, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output1, int32_t ___maxBytesToCopy2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1699893850CFEE56496C8D279CA733207A899E92);
		s_Il2CppMethodInitialized = true;
	}
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_0 = ___input0;
		bool L_1;
		L_1 = FastEncoder_InputAvailable_mD37638C00F19B2DA754F1AAF66FA433371178096(__this, L_0, NULL);
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37(L_1, _stringLiteral1699893850CFEE56496C8D279CA733207A899E92, NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_2 = ___output1;
		FastEncoder_WriteDeflatePreamble_m90F6A7E32FB8D4F8BA2D3EA0E0414B6DA58CB05B(L_2, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_3 = ___input0;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_4 = ___output1;
		int32_t L_5 = ___maxBytesToCopy2;
		FastEncoder_GetCompressedOutput_m1218C71E65452B59120ACCA5D99B6550CAE2E0FE(__this, L_3, L_4, L_5, NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_6 = ___output1;
		FastEncoder_WriteEndOfBlock_mA379581E939C7437CEF2A5E4E3A3008CFA21AD88(__this, L_6, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedData(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetCompressedData_m2EB640052DF87FAD5B4650E2D1ACAE43B3E29C8F (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* ___input0, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output1, const RuntimeMethod* method) 
{
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_0 = ___input0;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_1 = ___output1;
		FastEncoder_GetCompressedOutput_m1218C71E65452B59120ACCA5D99B6550CAE2E0FE(__this, L_0, L_1, (-1), NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlockHeader(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetBlockHeader_m24B2F8A5FF71D86D0C7A6EF1425EC0F73637B333 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output0, const RuntimeMethod* method) 
{
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_0 = ___output0;
		FastEncoder_WriteDeflatePreamble_m90F6A7E32FB8D4F8BA2D3EA0E0414B6DA58CB05B(L_0, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlockFooter(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetBlockFooter_mC3B8BFE76844CA6EE167BCC3F4221ECEBF4613B6 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output0, const RuntimeMethod* method) 
{
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_0 = ___output0;
		FastEncoder_WriteEndOfBlock_mA379581E939C7437CEF2A5E4E3A3008CFA21AD88(__this, L_0, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedOutput(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetCompressedOutput_m1218C71E65452B59120ACCA5D99B6550CAE2E0FE (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* ___input0, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output1, int32_t ___maxBytesToCopy2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_0 = ___output1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = OutputBuffer_get_BytesWritten_m690E9E94BD2CA4405F345DCFA939DBA6EB5B2FC9(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		int32_t L_2;
		L_2 = FastEncoder_get_BytesInHistory_m38F0312A931648A4D9F028D346FF430BC767461F(__this, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_3 = ___input0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DeflateInput_get_Count_mDD3216661C54FDED40E2D11988E0440CC79C06CE(L_3, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(L_2, L_4));
	}

IL_0018:
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_5 = ___input0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = DeflateInput_get_Count_mDD3216661C54FDED40E2D11988E0440CC79C06CE(L_5, NULL);
		FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* L_7 = __this->___inputWindow_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = FastEncoderWindow_get_FreeWindowSpace_mA592D9E81E684A51CE11081DA595D5D335A36F66(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0039;
		}
	}
	{
		FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* L_9 = __this->___inputWindow_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = FastEncoderWindow_get_FreeWindowSpace_mA592D9E81E684A51CE11081DA595D5D335A36F66(L_9, NULL);
		G_B4_0 = L_10;
		goto IL_003f;
	}

IL_0039:
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_11 = ___input0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = DeflateInput_get_Count_mDD3216661C54FDED40E2D11988E0440CC79C06CE(L_11, NULL);
		G_B4_0 = L_12;
	}

IL_003f:
	{
		V_7 = G_B4_0;
		int32_t L_13 = ___maxBytesToCopy2;
		V_8 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_15 = V_7;
		int32_t L_16 = ___maxBytesToCopy2;
		int32_t L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
		V_7 = L_18;
	}

IL_005c:
	{
		int32_t L_19 = V_7;
		V_9 = (bool)((((int32_t)L_19) > ((int32_t)0))? 1 : 0);
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_0091;
		}
	}
	{
		FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* L_21 = __this->___inputWindow_0;
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_22 = ___input0;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = DeflateInput_get_Buffer_mAA7AE73A334D0A7B02E140F8523E376798AA7809(L_22, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_24 = ___input0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = DeflateInput_get_StartIndex_m7023A405F9069498A3C7051E1CFAD562E27E80FB(L_24, NULL);
		int32_t L_26 = V_7;
		NullCheck(L_21);
		FastEncoderWindow_CopyBytes_m1BB83C85C87C0C898E239C83C8D18BCB8BB32E8C(L_21, L_23, L_25, L_26, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_27 = ___input0;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		DeflateInput_ConsumeBytes_mD110B71F9DFEEEA97101E3974B57A85A2D9B2FAC(L_27, L_28, NULL);
		int32_t L_29 = V_1;
		int32_t L_30 = V_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
	}

IL_0091:
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_31 = ___output1;
		FastEncoder_GetCompressedOutput_m28E79A0B066B6477AFB477B6BDDB75E83E5E4C98(__this, L_31, NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_32 = ___output1;
		bool L_33;
		L_33 = FastEncoder_SafeToWriteTo_m63955AB537BCCFE8CA51E34EE350143111061CE7(__this, L_32, NULL);
		if (!L_33)
		{
			goto IL_00b9;
		}
	}
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_34 = ___input0;
		bool L_35;
		L_35 = FastEncoder_InputAvailable_mD37638C00F19B2DA754F1AAF66FA433371178096(__this, L_34, NULL);
		if (!L_35)
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_36 = ___maxBytesToCopy2;
		if ((((int32_t)L_36) < ((int32_t)1)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_37 = V_1;
		int32_t L_38 = ___maxBytesToCopy2;
		G_B13_0 = ((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B13_0 = 1;
	}

IL_00b7:
	{
		G_B15_0 = G_B13_0;
		goto IL_00ba;
	}

IL_00b9:
	{
		G_B15_0 = 0;
	}

IL_00ba:
	{
		V_10 = (bool)G_B15_0;
		bool L_39 = V_10;
		if (L_39)
		{
			goto IL_0018;
		}
	}
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_40 = ___output1;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = OutputBuffer_get_BytesWritten_m690E9E94BD2CA4405F345DCFA939DBA6EB5B2FC9(L_40, NULL);
		V_3 = L_41;
		int32_t L_42 = V_3;
		int32_t L_43 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_42, L_43));
		int32_t L_44;
		L_44 = FastEncoder_get_BytesInHistory_m38F0312A931648A4D9F028D346FF430BC767461F(__this, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_45 = ___input0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = DeflateInput_get_Count_mDD3216661C54FDED40E2D11988E0440CC79C06CE(L_45, NULL);
		V_5 = ((int32_t)il2cpp_codegen_add(L_44, L_46));
		int32_t L_47 = V_2;
		int32_t L_48 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_47, L_48));
		int32_t L_49 = V_4;
		V_11 = (bool)((!(((uint32_t)L_49) <= ((uint32_t)0)))? 1 : 0);
		bool L_50 = V_11;
		if (!L_50)
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_51 = V_4;
		int32_t L_52 = V_6;
		__this->___lastCompressionRatio_2 = ((double)(((double)L_51)/((double)L_52)));
	}

IL_00fe:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedOutput(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_GetCompressedOutput_m28E79A0B066B6477AFB477B6BDDB75E83E5E4C98 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B10_0 = 0;
	{
		goto IL_00a6;
	}

IL_0006:
	{
		FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* L_0 = __this->___inputWindow_0;
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_1 = __this->___currentMatch_1;
		NullCheck(L_0);
		bool L_2;
		L_2 = FastEncoderWindow_GetNextSymbolOrMatch_mD8BF1D9F3D6D435EF774B81E2FEE75D83A844941(L_0, L_1, NULL);
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_3 = __this->___currentMatch_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Match_get_State_mA9B0E46FBC1C129A587F702BEE0E86977943F4FF(L_3, NULL);
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_6 = __this->___currentMatch_1;
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = Match_get_Symbol_m1491E93E28C3E8F8D66A215B04606E671C25D1CC(L_6, NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_8 = ___output0;
		FastEncoder_WriteChar_mF942C3E336D462A024DCFDA1636FEACD8DCD7714(L_7, L_8, NULL);
		goto IL_00a5;
	}

IL_0041:
	{
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_9 = __this->___currentMatch_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Match_get_State_mA9B0E46FBC1C129A587F702BEE0E86977943F4FF(L_9, NULL);
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)2))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_12 = __this->___currentMatch_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Match_get_Length_mEE750F33EE8E6D25E2704B12A7F7C3495C5F25BD(L_12, NULL);
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_14 = __this->___currentMatch_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Match_get_Position_m7E9F273B0C6434465F2BD89EBD41B504E78F1480(L_14, NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_16 = ___output0;
		FastEncoder_WriteMatch_mA93FFA3073B6046FAE68318845EA6A28052C4071(L_13, L_15, L_16, NULL);
		goto IL_00a5;
	}

IL_0074:
	{
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_17 = __this->___currentMatch_1;
		NullCheck(L_17);
		uint8_t L_18;
		L_18 = Match_get_Symbol_m1491E93E28C3E8F8D66A215B04606E671C25D1CC(L_17, NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_19 = ___output0;
		FastEncoder_WriteChar_mF942C3E336D462A024DCFDA1636FEACD8DCD7714(L_18, L_19, NULL);
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_20 = __this->___currentMatch_1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Match_get_Length_mEE750F33EE8E6D25E2704B12A7F7C3495C5F25BD(L_20, NULL);
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_22 = __this->___currentMatch_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Match_get_Position_m7E9F273B0C6434465F2BD89EBD41B504E78F1480(L_22, NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_24 = ___output0;
		FastEncoder_WriteMatch_mA93FFA3073B6046FAE68318845EA6A28052C4071(L_21, L_23, L_24, NULL);
	}

IL_00a5:
	{
	}

IL_00a6:
	{
		FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* L_25 = __this->___inputWindow_0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = FastEncoderWindow_get_BytesAvailable_m84A9B44988104D4F9A9D2D83116A8614BBEAD0AC(L_25, NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_27 = ___output0;
		bool L_28;
		L_28 = FastEncoder_SafeToWriteTo_m63955AB537BCCFE8CA51E34EE350143111061CE7(__this, L_27, NULL);
		G_B10_0 = ((int32_t)(L_28));
		goto IL_00be;
	}

IL_00bd:
	{
		G_B10_0 = 0;
	}

IL_00be:
	{
		V_2 = (bool)G_B10_0;
		bool L_29 = V_2;
		if (L_29)
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.FastEncoder::InputAvailable(Mapbox.IO.Compression.DeflateInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastEncoder_InputAvailable_mD37638C00F19B2DA754F1AAF66FA433371178096 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* ___input0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DeflateInput_get_Count_mDD3216661C54FDED40E2D11988E0440CC79C06CE(L_0, NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2;
		L_2 = FastEncoder_get_BytesInHistory_m38F0312A931648A4D9F028D346FF430BC767461F(__this, NULL);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Mapbox.IO.Compression.FastEncoder::SafeToWriteTo(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastEncoder_SafeToWriteTo_m63955AB537BCCFE8CA51E34EE350143111061CE7 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_0 = ___output0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = OutputBuffer_get_FreeBytes_m45F4719ECF04C49E0F14F59242B7D60CD4B2AB19(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)16)))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::WriteEndOfBlock(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteEndOfBlock_mA379581E939C7437CEF2A5E4E3A3008CFA21AD88 (FastEncoder_t7D273D258006741F861A74272983AA73F42A6E97* __this, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___FastEncoderLiteralCodeInfo_2;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)256);
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		uint32_t L_3 = V_0;
		V_1 = ((int32_t)((int32_t)L_3&((int32_t)31)));
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_4 = ___output0;
		int32_t L_5 = V_1;
		uint32_t L_6 = V_0;
		NullCheck(L_4);
		OutputBuffer_WriteBits_mBB044A7EB630478018D9452C2260346489DFF7C0(L_4, L_5, ((int32_t)((uint32_t)L_6>>5)), NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::WriteMatch(System.Int32,System.Int32,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteMatch_mA93FFA3073B6046FAE68318845EA6A28052C4071 (int32_t ___matchLen0, int32_t ___matchPos1, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20CE60EA3E450A03EA17B3AA9245E467705D5A19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD441F6A551BEC4597643C445F810EFB1FBBCB0F5);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___matchLen0;
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___matchLen0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)258)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)G_B3_0, _stringLiteralD441F6A551BEC4597643C445F810EFB1FBBCB0F5, NULL);
		il2cpp_codegen_runtime_class_init_inline(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___FastEncoderLiteralCodeInfo_2;
		int32_t L_3 = ___matchLen0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(((int32_t)254), L_3));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		uint32_t L_6 = V_0;
		V_1 = ((int32_t)((int32_t)L_6&((int32_t)31)));
		int32_t L_7 = V_1;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0), _stringLiteral20CE60EA3E450A03EA17B3AA9245E467705D5A19, NULL);
		int32_t L_8 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_8) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_10 = ___output2;
		int32_t L_11 = V_1;
		uint32_t L_12 = V_0;
		NullCheck(L_10);
		OutputBuffer_WriteBits_mBB044A7EB630478018D9452C2260346489DFF7C0(L_10, L_11, ((int32_t)((uint32_t)L_12>>5)), NULL);
		goto IL_007e;
	}

IL_005b:
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_13 = ___output2;
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		OutputBuffer_WriteBits_mBB044A7EB630478018D9452C2260346489DFF7C0(L_13, ((int32_t)16), ((int32_t)(((int32_t)((uint32_t)L_14>>5))&((int32_t)65535))), NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_15 = ___output2;
		int32_t L_16 = V_1;
		uint32_t L_17 = V_0;
		NullCheck(L_15);
		OutputBuffer_WriteBits_mBB044A7EB630478018D9452C2260346489DFF7C0(L_15, ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)16))), ((int32_t)((uint32_t)L_17>>((int32_t)21))), NULL);
	}

IL_007e:
	{
		il2cpp_codegen_runtime_class_init_inline(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___FastEncoderDistanceCodeInfo_3;
		int32_t L_19 = ___matchPos1;
		int32_t L_20;
		L_20 = FastEncoderStatics_GetSlot_m7F1B01FDE9FED244B40BAC04F5A51726EA0C6FC2(L_19, NULL);
		NullCheck(L_18);
		int32_t L_21 = L_20;
		uint32_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = L_22;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_23 = ___output2;
		uint32_t L_24 = V_0;
		uint32_t L_25 = V_0;
		NullCheck(L_23);
		OutputBuffer_WriteBits_mBB044A7EB630478018D9452C2260346489DFF7C0(L_23, ((int32_t)((int32_t)L_24&((int32_t)15))), ((int32_t)((uint32_t)L_25>>8)), NULL);
		uint32_t L_26 = V_0;
		V_2 = ((int32_t)(((int32_t)((uint32_t)L_26>>4))&((int32_t)15)));
		int32_t L_27 = V_2;
		V_4 = (bool)((!(((uint32_t)L_27) <= ((uint32_t)0)))? 1 : 0);
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_00bd;
		}
	}
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_29 = ___output2;
		int32_t L_30 = V_2;
		int32_t L_31 = ___matchPos1;
		il2cpp_codegen_runtime_class_init_inline(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___BitMask_4;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_29);
		OutputBuffer_WriteBits_mBB044A7EB630478018D9452C2260346489DFF7C0(L_29, L_30, ((int32_t)(L_31&(int32_t)L_35)), NULL);
	}

IL_00bd:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::WriteChar(System.Byte,Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteChar_mF942C3E336D462A024DCFDA1636FEACD8DCD7714 (uint8_t ___b0, OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___FastEncoderLiteralCodeInfo_2;
		uint8_t L_1 = ___b0;
		NullCheck(L_0);
		uint8_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_4 = ___output1;
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_0;
		NullCheck(L_4);
		OutputBuffer_WriteBits_mBB044A7EB630478018D9452C2260346489DFF7C0(L_4, ((int32_t)((int32_t)L_5&((int32_t)31))), ((int32_t)((uint32_t)L_6>>5)), NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::WriteDeflatePreamble(Mapbox.IO.Compression.OutputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoder_WriteDeflatePreamble_m90F6A7E32FB8D4F8BA2D3EA0E0414B6DA58CB05B (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* ___output0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_0 = ___output0;
		il2cpp_codegen_runtime_class_init_inline(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___FastEncoderTreeStructureData_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___FastEncoderTreeStructureData_0;
		NullCheck(L_2);
		NullCheck(L_0);
		OutputBuffer_WriteBytes_m58E21972B6D60FDD61B3AAC3997ACEC0388E9586(L_0, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* L_3 = ___output0;
		NullCheck(L_3);
		OutputBuffer_WriteBits_mBB044A7EB630478018D9452C2260346489DFF7C0(L_3, ((int32_t)9), ((int32_t)34), NULL);
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
// System.Void Mapbox.IO.Compression.FastEncoderStatics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderStatics__cctor_m0401C9BD333A6383D7DA3B306C93554F1F41094E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____2492606636F4A4666E0D617B51116A5A68539881_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)98));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___FastEncoderTreeStructureData_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___FastEncoderTreeStructureData_0), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)98));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___BFinalFastEncoderTreeStructureData_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___BFinalFastEncoderTreeStructureData_1), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)513));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___FastEncoderLiteralCodeInfo_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___FastEncoderLiteralCodeInfo_2), (void*)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___FastEncoderDistanceCodeInfo_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___FastEncoderDistanceCodeInfo_3), (void*)L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___BitMask_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___BitMask_4), (void*)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_16, L_17, NULL);
		((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___ExtraLengthBits_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___ExtraLengthBits_5), (void*)L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_18;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____2492606636F4A4666E0D617B51116A5A68539881_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_19, L_20, NULL);
		((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___ExtraDistanceBits_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___ExtraDistanceBits_6), (void*)L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___distLookup_17 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___distLookup_17), (void*)L_21);
		V_0 = 0;
		V_1 = 0;
		goto IL_00e8;
	}

IL_00ba:
	{
		V_2 = 0;
		goto IL_00d0;
	}

IL_00bf:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___distLookup_17;
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = V_1;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)((int32_t)(uint8_t)L_25));
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00d0:
	{
		int32_t L_27 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___ExtraDistanceBits_6;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)((int32_t)(1<<((int32_t)((int32_t)L_31&((int32_t)31)))))))? 1 : 0);
		bool L_32 = V_3;
		if (L_32)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00e8:
	{
		int32_t L_34 = V_1;
		V_4 = (bool)((((int32_t)L_34) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_35 = V_4;
		if (L_35)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_36 = V_0;
		V_0 = ((int32_t)(L_36>>7));
		goto IL_0135;
	}

IL_00f9:
	{
		V_5 = 0;
		goto IL_0118;
	}

IL_00ff:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___distLookup_17;
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		V_0 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_40 = V_1;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)256), L_39))), (uint8_t)((int32_t)(uint8_t)L_40));
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0118:
	{
		int32_t L_42 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___ExtraDistanceBits_6;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_6 = (bool)((((int32_t)L_42) < ((int32_t)((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_46, 7))&((int32_t)31)))))))? 1 : 0);
		bool L_47 = V_6;
		if (L_47)
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_48 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0135:
	{
		int32_t L_49 = V_1;
		V_7 = (bool)((((int32_t)L_49) < ((int32_t)((int32_t)30)))? 1 : 0);
		bool L_50 = V_7;
		if (L_50)
		{
			goto IL_00f9;
		}
	}
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoderStatics::GetSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderStatics_GetSlot_m7F1B01FDE9FED244B40BAC04F5A51726EA0C6FC2 (int32_t ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var))->___distLookup_17;
		int32_t L_1 = ___pos0;
		G_B1_0 = L_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)256))))
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___pos0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)256), ((int32_t)(L_2>>7))));
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0019:
	{
		int32_t L_3 = ___pos0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		int32_t L_4 = G_B3_0;
		uint8_t L_5 = (G_B3_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.UInt32 Mapbox.IO.Compression.FastEncoderStatics::BitReverse(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderStatics_BitReverse_mC67B5F697B79AD8ED64B981472E6EAA3A94C9391 (uint32_t ___code0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C8B047C6745895948A00EBAA806CB7C0F1F0954);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___length1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___length1;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)G_B3_0, _stringLiteral6C8B047C6745895948A00EBAA806CB7C0F1F0954, NULL);
	}

IL_001d:
	{
		uint32_t L_2 = V_0;
		uint32_t L_3 = ___code0;
		V_0 = ((int32_t)((int32_t)L_2|((int32_t)((int32_t)L_3&1))));
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4<<1));
		uint32_t L_5 = ___code0;
		___code0 = ((int32_t)((uint32_t)L_5>>1));
		int32_t L_6 = ___length1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		___length1 = L_7;
		V_1 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_001d;
		}
	}
	{
		uint32_t L_9 = V_0;
		V_2 = ((int32_t)((uint32_t)L_9>>1));
		goto IL_0041;
	}

IL_0041:
	{
		uint32_t L_10 = V_2;
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
// System.Void Mapbox.IO.Compression.FastEncoderWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow__ctor_m5EBEB7CC7BB01B3A95DA1A362163147F4CF74B38 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FastEncoderWindow_ResetWindow_m79CA3DD758C9E11FDF5BB9EC1D7C918A9FCE73FB(__this, NULL);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::get_BytesAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderWindow_get_BytesAvailable_m84A9B44988104D4F9A9D2D83116A8614BBEAD0AC (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A211A45BE5BBF07891D1769619F24F013279182);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bufEnd_2;
		int32_t L_1 = __this->___bufPos_1;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral3A211A45BE5BBF07891D1769619F24F013279182, NULL);
		int32_t L_2 = __this->___bufEnd_2;
		int32_t L_3 = __this->___bufPos_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		goto IL_002f;
	}

IL_002f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.FastEncoderWindow::get_UnprocessedInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* FastEncoderWindow_get_UnprocessedInput_mAF13CAD3309CF92110BB47CE4CDD1B08F2FD569C (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* V_0 = NULL;
	DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* V_1 = NULL;
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_0 = (DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568*)il2cpp_codegen_object_new(DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DeflateInput__ctor_mF2307B24AD6747550A881841B3D7B0EF026EA01F(L_0, NULL);
		V_0 = L_0;
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___window_0;
		NullCheck(L_1);
		DeflateInput_set_Buffer_mFCE8511EBF6FB65672E7F9E3B648D9543103A956(L_1, L_2, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_3 = V_0;
		int32_t L_4 = __this->___bufPos_1;
		NullCheck(L_3);
		DeflateInput_set_StartIndex_m0352D8927B5A344B3DA7F3C84DDB63CAAFD4DD2D(L_3, L_4, NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_5 = V_0;
		int32_t L_6 = __this->___bufEnd_2;
		int32_t L_7 = __this->___bufPos_1;
		NullCheck(L_5);
		DeflateInput_set_Count_mF3073E716D079F59719C6200BB4E7B040913497E(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_8 = V_0;
		V_1 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		DeflateInput_t8B15C98390D55C6F09F80AB0843D0C3A800A4568* L_9 = V_1;
		return L_9;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::FlushWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_FlushWindow_mFB54632D12E247648901B003BF0E84376665A38F (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) 
{
	{
		FastEncoderWindow_ResetWindow_m79CA3DD758C9E11FDF5BB9EC1D7C918A9FCE73FB(__this, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::ResetWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_ResetWindow_m79CA3DD758C9E11FDF5BB9EC1D7C918A9FCE73FB (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16646));
		__this->___window_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_0), (void*)L_0);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8450));
		__this->___prev_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prev_15), (void*)L_1);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		__this->___lookup_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lookup_16), (void*)L_2);
		__this->___bufPos_1 = ((int32_t)8192);
		int32_t L_3 = __this->___bufPos_1;
		__this->___bufEnd_2 = L_3;
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::get_FreeWindowSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderWindow_get_FreeWindowSpace_mA592D9E81E684A51CE11081DA595D5D335A36F66 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bufEnd_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)16384), L_0));
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::CopyBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_CopyBytes_m1BB83C85C87C0C898E239C83C8D18BCB8BB32E8C (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBuffer0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inputBuffer0;
		int32_t L_1 = ___startIndex1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___window_0;
		int32_t L_3 = __this->___bufEnd_2;
		int32_t L_4 = ___count2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, L_3, L_4, NULL);
		int32_t L_5 = __this->___bufEnd_2;
		int32_t L_6 = ___count2;
		__this->___bufEnd_2 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::MoveWindows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_MoveWindows_mF2DF609EA59462F217FA3A074AC302A6DF5F892D (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA63DD7EB8A588570079DA49C861495FFA1981EC1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int64_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = __this->___bufPos_1;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_0) == ((int32_t)((int32_t)16384)))? 1 : 0), _stringLiteralA63DD7EB8A588570079DA49C861495FFA1981EC1, NULL);
		FastEncoderWindow_VerifyHashes_m4068CA9CFF58E2ACE0FA1813596AAC15021E8B31(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___window_0;
		int32_t L_2 = __this->___bufPos_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___window_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_1, ((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)8192))), (RuntimeArray*)L_3, 0, ((int32_t)8192), NULL);
		V_0 = 0;
		goto IL_0081;
	}

IL_0048:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = __this->___lookup_16;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)8192)));
		int32_t L_8 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_8) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_10 = __this->___lookup_16;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint16_t)0);
		goto IL_007c;
	}

IL_0070:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_12 = __this->___lookup_16;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint16_t)((int32_t)(uint16_t)L_14));
	}

IL_007c:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0081:
	{
		int32_t L_16 = V_0;
		V_3 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)2048)))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_0048;
		}
	}
	{
		V_0 = 0;
		goto IL_00d2;
	}

IL_0091:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_18 = __this->___prev_15;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint16_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_21), ((int64_t)((int32_t)8192))));
		int64_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int64_t)L_22) > ((int64_t)((int64_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00c0;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_24 = __this->___prev_15;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint16_t)0);
		goto IL_00cd;
	}

IL_00c0:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_26 = __this->___prev_15;
		int32_t L_27 = V_0;
		int64_t L_28 = V_4;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint16_t)((int32_t)(uint16_t)L_28));
	}

IL_00cd:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00d2:
	{
		int32_t L_30 = V_0;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)8192)))? 1 : 0);
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_0091;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___window_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___window_0;
		NullCheck(L_33);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_32, ((int32_t)8192), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_33)->max_length)), ((int32_t)8192))), NULL);
		FastEncoderWindow_VerifyHashes_m4068CA9CFF58E2ACE0FA1813596AAC15021E8B31(__this, NULL);
		__this->___bufPos_1 = ((int32_t)8192);
		int32_t L_34 = __this->___bufPos_1;
		__this->___bufEnd_2 = L_34;
		return;
	}
}
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::HashValue(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderWindow_HashValue_mB6BDA7FD70D75B9533381553377B61D2CD034DDB (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, uint32_t ___hash0, uint8_t ___b1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___hash0;
		uint8_t L_1 = ___b1;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_0<<4))^(int32_t)L_1));
		goto IL_0009;
	}

IL_0009:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::InsertString(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderWindow_InsertString_m73B1DB08AD4B3C95C31ACCFB7A6BD7B6999BB9F4 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, uint32_t* ___hash0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t* L_0 = ___hash0;
		uint32_t* L_1 = ___hash0;
		int32_t L_2 = *((uint32_t*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___window_0;
		int32_t L_4 = __this->___bufPos_1;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 2));
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint32_t L_7;
		L_7 = FastEncoderWindow_HashValue_mB6BDA7FD70D75B9533381553377B61D2CD034DDB(__this, L_2, L_6, NULL);
		*((int32_t*)L_0) = (int32_t)L_7;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = __this->___lookup_16;
		uint32_t* L_9 = ___hash0;
		int32_t L_10 = *((uint32_t*)L_9);
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)(L_10&((int32_t)2047)));
		uint16_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = L_12;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_13 = __this->___lookup_16;
		uint32_t* L_14 = ___hash0;
		int32_t L_15 = *((uint32_t*)L_14);
		int32_t L_16 = __this->___bufPos_1;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_15&((int32_t)2047)))), (uint16_t)((int32_t)(uint16_t)L_16));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_17 = __this->___prev_15;
		int32_t L_18 = __this->___bufPos_1;
		uint32_t L_19 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_18&((int32_t)8191)))), (uint16_t)((int32_t)(uint16_t)L_19));
		uint32_t L_20 = V_0;
		V_1 = L_20;
		goto IL_0059;
	}

IL_0059:
	{
		uint32_t L_21 = V_1;
		return L_21;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::InsertStrings(System.UInt32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_InsertStrings_mF1CA691F3F35D4E019343EA03240959FCA6BEB89 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, uint32_t* ___hash0, int32_t ___matchLen1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32ABEBB1F95BCEB7EA8A0016EAA3C740C514AC8F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___matchLen1;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0), _stringLiteral32ABEBB1F95BCEB7EA8A0016EAA3C740C514AC8F, NULL);
		int32_t L_1 = __this->___bufEnd_2;
		int32_t L_2 = __this->___bufPos_1;
		int32_t L_3 = ___matchLen1;
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = __this->___bufPos_1;
		int32_t L_6 = ___matchLen1;
		__this->___bufPos_1 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, 1))));
		goto IL_0064;
	}

IL_003b:
	{
		goto IL_0056;
	}

IL_003e:
	{
		uint32_t* L_7 = ___hash0;
		uint32_t L_8;
		L_8 = FastEncoderWindow_InsertString_m73B1DB08AD4B3C95C31ACCFB7A6BD7B6999BB9F4(__this, L_7, NULL);
		int32_t L_9 = __this->___bufPos_1;
		__this->___bufPos_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0056:
	{
		int32_t L_10 = ___matchLen1;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		___matchLen1 = L_11;
		V_1 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_003e;
		}
	}
	{
	}

IL_0064:
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.FastEncoderWindow::GetNextSymbolOrMatch(Mapbox.IO.Compression.Match)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastEncoderWindow_GetNextSymbolOrMatch_mD8BF1D9F3D6D435EF774B81E2FEE75D83A844941 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* ___match0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8E147DD30C395A3CDE2EF30D1102DF4D8E8D539);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* G_B17_2 = NULL;
	int32_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t* G_B18_1 = NULL;
	int32_t G_B18_2 = 0;
	FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* G_B18_3 = NULL;
	{
		int32_t L_0 = __this->___bufPos_1;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)8192))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = __this->___bufPos_1;
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)((int32_t)16384)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)G_B3_0, _stringLiteralF8E147DD30C395A3CDE2EF30D1102DF4D8E8D539, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___window_0;
		int32_t L_3 = __this->___bufPos_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		uint32_t L_6;
		L_6 = FastEncoderWindow_HashValue_mB6BDA7FD70D75B9533381553377B61D2CD034DDB(__this, 0, L_5, NULL);
		V_0 = L_6;
		uint32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___window_0;
		int32_t L_9 = __this->___bufPos_1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		uint32_t L_12;
		L_12 = FastEncoderWindow_HashValue_mB6BDA7FD70D75B9533381553377B61D2CD034DDB(__this, L_7, L_11, NULL);
		V_0 = L_12;
		V_2 = 0;
		FastEncoderWindow_VerifyHashes_m4068CA9CFF58E2ACE0FA1813596AAC15021E8B31(__this, NULL);
		int32_t L_13 = __this->___bufEnd_2;
		int32_t L_14 = __this->___bufPos_1;
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, L_14))) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		V_1 = 0;
		goto IL_00cd;
	}

IL_007b:
	{
		uint32_t L_16;
		L_16 = FastEncoderWindow_InsertString_m73B1DB08AD4B3C95C31ACCFB7A6BD7B6999BB9F4(__this, (&V_0), NULL);
		V_4 = L_16;
		int32_t L_17 = V_4;
		V_5 = (bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_19 = V_4;
		int32_t L_20;
		L_20 = FastEncoderWindow_FindMatch_mC0B08C846EF2E441A20E3779B84E11A2EB116BA3(__this, L_19, (&V_2), ((int32_t)32), ((int32_t)32), NULL);
		V_1 = L_20;
		int32_t L_21 = __this->___bufPos_1;
		int32_t L_22 = V_1;
		int32_t L_23 = __this->___bufEnd_2;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_21, L_22))) > ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_25 = __this->___bufEnd_2;
		int32_t L_26 = __this->___bufPos_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_25, L_26));
	}

IL_00c5:
	{
		goto IL_00cc;
	}

IL_00c8:
	{
		V_1 = 0;
	}

IL_00cc:
	{
	}

IL_00cd:
	{
		int32_t L_27 = V_1;
		V_7 = (bool)((((int32_t)L_27) < ((int32_t)3))? 1 : 0);
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_0108;
		}
	}
	{
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_29 = ___match0;
		NullCheck(L_29);
		Match_set_State_m1983564F65AA86C308A37231440EADAEA203C223(L_29, 1, NULL);
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_30 = ___match0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->___window_0;
		int32_t L_32 = __this->___bufPos_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_30);
		Match_set_Symbol_m23A2F461208BB113691D801467EF4A546EC16DEE(L_30, L_34, NULL);
		int32_t L_35 = __this->___bufPos_1;
		__this->___bufPos_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		goto IL_0240;
	}

IL_0108:
	{
		int32_t L_36 = __this->___bufPos_1;
		__this->___bufPos_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_1;
		V_8 = (bool)((((int32_t)((((int32_t)L_37) > ((int32_t)6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_8;
		if (!L_38)
		{
			goto IL_021b;
		}
	}
	{
		V_10 = 0;
		uint32_t L_39;
		L_39 = FastEncoderWindow_InsertString_m73B1DB08AD4B3C95C31ACCFB7A6BD7B6999BB9F4(__this, (&V_0), NULL);
		V_11 = L_39;
		int32_t L_40 = V_11;
		V_12 = (bool)((!(((uint32_t)L_40) <= ((uint32_t)0)))? 1 : 0);
		bool L_41 = V_12;
		if (!L_41)
		{
			goto IL_0183;
		}
	}
	{
		int32_t L_42 = V_11;
		int32_t L_43 = V_1;
		G_B16_0 = (&V_10);
		G_B16_1 = L_42;
		G_B16_2 = __this;
		if ((((int32_t)L_43) < ((int32_t)4)))
		{
			G_B17_0 = (&V_10);
			G_B17_1 = L_42;
			G_B17_2 = __this;
			goto IL_014d;
		}
	}
	{
		G_B18_0 = 8;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_014f;
	}

IL_014d:
	{
		G_B18_0 = ((int32_t)32);
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_014f:
	{
		NullCheck(G_B18_3);
		int32_t L_44;
		L_44 = FastEncoderWindow_FindMatch_mC0B08C846EF2E441A20E3779B84E11A2EB116BA3(G_B18_3, G_B18_2, G_B18_1, G_B18_0, ((int32_t)32), NULL);
		V_9 = L_44;
		int32_t L_45 = __this->___bufPos_1;
		int32_t L_46 = V_9;
		int32_t L_47 = __this->___bufEnd_2;
		V_13 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_45, L_46))) > ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_13;
		if (!L_48)
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_49 = __this->___bufEnd_2;
		int32_t L_50 = __this->___bufPos_1;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_49, L_50));
	}

IL_0180:
	{
		goto IL_0188;
	}

IL_0183:
	{
		V_9 = 0;
	}

IL_0188:
	{
		int32_t L_51 = V_9;
		int32_t L_52 = V_1;
		V_14 = (bool)((((int32_t)L_51) > ((int32_t)L_52))? 1 : 0);
		bool L_53 = V_14;
		if (!L_53)
		{
			goto IL_01e2;
		}
	}
	{
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_54 = ___match0;
		NullCheck(L_54);
		Match_set_State_m1983564F65AA86C308A37231440EADAEA203C223(L_54, 3, NULL);
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_55 = ___match0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = __this->___window_0;
		int32_t L_57 = __this->___bufPos_1;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
		uint8_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_55);
		Match_set_Symbol_m23A2F461208BB113691D801467EF4A546EC16DEE(L_55, L_59, NULL);
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_60 = ___match0;
		int32_t L_61 = V_10;
		NullCheck(L_60);
		Match_set_Position_m4C42A83DC27EF57137CCB5505778962D5596B78C(L_60, L_61, NULL);
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_62 = ___match0;
		int32_t L_63 = V_9;
		NullCheck(L_62);
		Match_set_Length_m5EB8B04BA1302A494F38CE8E3F748661DE61E562(L_62, L_63, NULL);
		int32_t L_64 = __this->___bufPos_1;
		__this->___bufPos_1 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		int32_t L_65 = V_9;
		V_1 = L_65;
		int32_t L_66 = V_1;
		FastEncoderWindow_InsertStrings_mF1CA691F3F35D4E019343EA03240959FCA6BEB89(__this, (&V_0), L_66, NULL);
		goto IL_0218;
	}

IL_01e2:
	{
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_67 = ___match0;
		NullCheck(L_67);
		Match_set_State_m1983564F65AA86C308A37231440EADAEA203C223(L_67, 2, NULL);
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_68 = ___match0;
		int32_t L_69 = V_2;
		NullCheck(L_68);
		Match_set_Position_m4C42A83DC27EF57137CCB5505778962D5596B78C(L_68, L_69, NULL);
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_70 = ___match0;
		int32_t L_71 = V_1;
		NullCheck(L_70);
		Match_set_Length_m5EB8B04BA1302A494F38CE8E3F748661DE61E562(L_70, L_71, NULL);
		int32_t L_72 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		int32_t L_73 = __this->___bufPos_1;
		__this->___bufPos_1 = ((int32_t)il2cpp_codegen_add(L_73, 1));
		int32_t L_74 = V_1;
		FastEncoderWindow_InsertStrings_mF1CA691F3F35D4E019343EA03240959FCA6BEB89(__this, (&V_0), L_74, NULL);
	}

IL_0218:
	{
		goto IL_023f;
	}

IL_021b:
	{
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_75 = ___match0;
		NullCheck(L_75);
		Match_set_State_m1983564F65AA86C308A37231440EADAEA203C223(L_75, 2, NULL);
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_76 = ___match0;
		int32_t L_77 = V_2;
		NullCheck(L_76);
		Match_set_Position_m4C42A83DC27EF57137CCB5505778962D5596B78C(L_76, L_77, NULL);
		Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* L_78 = ___match0;
		int32_t L_79 = V_1;
		NullCheck(L_78);
		Match_set_Length_m5EB8B04BA1302A494F38CE8E3F748661DE61E562(L_78, L_79, NULL);
		int32_t L_80 = V_1;
		FastEncoderWindow_InsertStrings_mF1CA691F3F35D4E019343EA03240959FCA6BEB89(__this, (&V_0), L_80, NULL);
	}

IL_023f:
	{
	}

IL_0240:
	{
		int32_t L_81 = __this->___bufPos_1;
		V_15 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)16384)))? 1 : 0);
		bool L_82 = V_15;
		if (!L_82)
		{
			goto IL_025c;
		}
	}
	{
		FastEncoderWindow_MoveWindows_mF2DF609EA59462F217FA3A074AC302A6DF5F892D(__this, NULL);
	}

IL_025c:
	{
		V_16 = (bool)1;
		goto IL_0261;
	}

IL_0261:
	{
		bool L_83 = V_16;
		return L_83;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::FindMatch(System.Int32,System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastEncoderWindow_FindMatch_mC0B08C846EF2E441A20E3779B84E11A2EB116BA3 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, int32_t ___search0, int32_t* ___matchPos1, int32_t ___searchDepth2, int32_t ___niceLength3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10FD9642E7ACB04ED69F426A8E578F98FE4B20DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19D47A5312FE25416B96E64DB07299182A488CDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26D8CE9FE2015E7788C95222F757DBD0FFCA067A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D2E6B73549B8F487C653D431108C7D89FF4514C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B6D1787D88E73449E00137F1A1CDDA4737D85A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985A1732EF5F957F008D3779CF47BBF2B21D3798);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B27_0 = 0;
	{
		int32_t L_0 = __this->___bufPos_1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->___bufPos_1;
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)((int32_t)16384)))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)G_B3_0, _stringLiteral10FD9642E7ACB04ED69F426A8E578F98FE4B20DD, NULL);
		int32_t L_2 = ___search0;
		int32_t L_3 = __this->___bufPos_1;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0), _stringLiteral26D8CE9FE2015E7788C95222F757DBD0FFCA067A, NULL);
		int32_t L_4 = ___search0;
		uint32_t L_5;
		L_5 = FastEncoderWindow_RecalculateHash_m95CACEC8E86D17EC3BAA6F7207C8485C67539720(__this, L_4, NULL);
		int32_t L_6 = __this->___bufPos_1;
		uint32_t L_7;
		L_7 = FastEncoderWindow_RecalculateHash_m95CACEC8E86D17EC3BAA6F7207C8485C67539720(__this, L_6, NULL);
		Debug_Assert_m9192EFA9CFAB2EDE68E87341348441EEE645348F((bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0), NULL);
		V_0 = 0;
		V_1 = 0;
		int32_t L_8 = __this->___bufPos_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)8192)));
		int32_t L_9 = V_2;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral19D47A5312FE25416B96E64DB07299182A488CDD, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___window_0;
		int32_t L_11 = __this->___bufPos_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		goto IL_0174;
	}

IL_008a:
	{
		int32_t L_14 = ___search0;
		uint32_t L_15;
		L_15 = FastEncoderWindow_RecalculateHash_m95CACEC8E86D17EC3BAA6F7207C8485C67539720(__this, L_14, NULL);
		int32_t L_16 = __this->___bufPos_1;
		uint32_t L_17;
		L_17 = FastEncoderWindow_RecalculateHash_m95CACEC8E86D17EC3BAA6F7207C8485C67539720(__this, L_16, NULL);
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0), _stringLiteral4D2E6B73549B8F487C653D431108C7D89FF4514C, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___window_0;
		int32_t L_19 = ___search0;
		int32_t L_20 = V_0;
		NullCheck(L_18);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		uint8_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		uint8_t L_23 = V_3;
		V_4 = (bool)((((int32_t)L_22) == ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_0135;
		}
	}
	{
		V_5 = 0;
		goto IL_00f4;
	}

IL_00c4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___window_0;
		int32_t L_26 = __this->___bufPos_1;
		int32_t L_27 = V_5;
		NullCheck(L_25);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		uint8_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___window_0;
		int32_t L_31 = ___search0;
		int32_t L_32 = V_5;
		NullCheck(L_30);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_6 = (bool)((((int32_t)((((int32_t)L_29) == ((int32_t)L_34))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_6;
		if (!L_35)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0103;
	}

IL_00ed:
	{
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00f4:
	{
		int32_t L_37 = V_5;
		V_7 = (bool)((((int32_t)L_37) < ((int32_t)((int32_t)258)))? 1 : 0);
		bool L_38 = V_7;
		if (L_38)
		{
			goto IL_00c4;
		}
	}

IL_0103:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_0;
		V_8 = (bool)((((int32_t)L_39) > ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_8;
		if (!L_41)
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_42 = V_5;
		V_0 = L_42;
		int32_t L_43 = ___search0;
		V_1 = L_43;
		int32_t L_44 = V_5;
		V_9 = (bool)((((int32_t)L_44) > ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0122;
		}
	}
	{
		goto IL_0181;
	}

IL_0122:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = __this->___window_0;
		int32_t L_47 = __this->___bufPos_1;
		int32_t L_48 = V_5;
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_47, L_48));
		uint8_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_3 = L_50;
	}

IL_0134:
	{
	}

IL_0135:
	{
		int32_t L_51 = ___searchDepth2;
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		___searchDepth2 = L_52;
		V_10 = (bool)((((int32_t)L_52) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_10;
		if (!L_53)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_0181;
	}

IL_0147:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_54 = __this->___prev_15;
		int32_t L_55 = ___search0;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)(L_55&((int32_t)8191)));
		uint16_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		int32_t L_58 = ___search0;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_57) < ((int32_t)L_58))? 1 : 0), _stringLiteral74B6D1787D88E73449E00137F1A1CDDA4737D85A, NULL);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_59 = __this->___prev_15;
		int32_t L_60 = ___search0;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)(L_60&((int32_t)8191)));
		uint16_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		___search0 = L_62;
	}

IL_0174:
	{
		int32_t L_63 = ___search0;
		int32_t L_64 = V_2;
		V_11 = (bool)((((int32_t)L_63) > ((int32_t)L_64))? 1 : 0);
		bool L_65 = V_11;
		if (L_65)
		{
			goto IL_008a;
		}
	}

IL_0181:
	{
		int32_t* L_66 = ___matchPos1;
		int32_t L_67 = __this->___bufPos_1;
		int32_t L_68 = V_1;
		*((int32_t*)L_66) = (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_67, L_68)), 1));
		int32_t L_69 = V_0;
		if ((!(((uint32_t)L_69) == ((uint32_t)3))))
		{
			goto IL_019f;
		}
	}
	{
		int32_t* L_70 = ___matchPos1;
		int32_t L_71 = *((int32_t*)L_70);
		G_B22_0 = ((((int32_t)((((int32_t)L_71) < ((int32_t)((int32_t)16384)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01a0;
	}

IL_019f:
	{
		G_B22_0 = 0;
	}

IL_01a0:
	{
		V_12 = (bool)G_B22_0;
		bool L_72 = V_12;
		if (!L_72)
		{
			goto IL_01ac;
		}
	}
	{
		V_13 = 0;
		goto IL_01cc;
	}

IL_01ac:
	{
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) < ((int32_t)3)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t* L_74 = ___matchPos1;
		int32_t L_75 = *((int32_t*)L_74);
		G_B27_0 = ((((int32_t)L_75) < ((int32_t)((int32_t)8192)))? 1 : 0);
		goto IL_01bc;
	}

IL_01bb:
	{
		G_B27_0 = 1;
	}

IL_01bc:
	{
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)G_B27_0, _stringLiteral985A1732EF5F957F008D3779CF47BBF2B21D3798, NULL);
		int32_t L_76 = V_0;
		V_13 = L_76;
		goto IL_01cc;
	}

IL_01cc:
	{
		int32_t L_77 = V_13;
		return L_77;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::VerifyHashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastEncoderWindow_VerifyHashes_m4068CA9CFF58E2ACE0FA1813596AAC15021E8B31 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C7448C7123F21DE7996D5E505FF15795F7E3406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA772D2D655EFD5780BE5B0CC76ECC49947AA2D43);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		goto IL_0083;
	}

IL_0005:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = __this->___lookup_16;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		goto IL_0063;
	}

IL_0011:
	{
		uint16_t L_4 = V_1;
		uint32_t L_5;
		L_5 = FastEncoderWindow_RecalculateHash_m95CACEC8E86D17EC3BAA6F7207C8485C67539720(__this, L_4, NULL);
		int32_t L_6 = V_0;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int64_t)((int64_t)(uint64_t)L_5)) == ((int64_t)((int64_t)L_6)))? 1 : 0), _stringLiteralA772D2D655EFD5780BE5B0CC76ECC49947AA2D43, NULL);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = __this->___prev_15;
		uint16_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)((int32_t)L_8&((int32_t)8191)));
		uint16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		int32_t L_11 = __this->___bufPos_1;
		uint16_t L_12 = V_2;
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_11, (int32_t)L_12))) < ((int32_t)((int32_t)8192)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		goto IL_007e;
	}

IL_0051:
	{
		uint16_t L_14 = V_2;
		uint16_t L_15 = V_1;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0), _stringLiteral3C7448C7123F21DE7996D5E505FF15795F7E3406, NULL);
		uint16_t L_16 = V_2;
		V_1 = L_16;
	}

IL_0063:
	{
		uint16_t L_17 = V_1;
		if (!L_17)
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_18 = __this->___bufPos_1;
		uint16_t L_19 = V_1;
		G_B8_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, (int32_t)L_19))) < ((int32_t)((int32_t)8192)))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B8_0 = 0;
	}

IL_0078:
	{
		V_4 = (bool)G_B8_0;
		bool L_20 = V_4;
		if (L_20)
		{
			goto IL_0011;
		}
	}

IL_007e:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0083:
	{
		int32_t L_22 = V_0;
		V_5 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)2048)))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::RecalculateHash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t FastEncoderWindow_RecalculateHash_m95CACEC8E86D17EC3BAA6F7207C8485C67539720 (FastEncoderWindow_t5955B3120C3CF715FFEB9FD3C46BE6261B6E26B5* __this, int32_t ___position0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___window_0;
		int32_t L_1 = ___position0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___window_0;
		int32_t L_5 = ___position0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___window_0;
		int32_t L_9 = ___position0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3<<8))^((int32_t)((int32_t)L_7<<4))))^(int32_t)L_11))&((int32_t)2047)));
		goto IL_002c;
	}

IL_002c:
	{
		uint32_t L_12 = V_0;
		return L_12;
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
// System.Void Mapbox.IO.Compression.GZipDecoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipDecoder__ctor_m16ABAB5457140F8757DFA1B9CA6F4295BAB8C76B (GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GZipDecoder_Reset_m3EEA013F877314107FC2DFA03529484A4248297F(__this, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipDecoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipDecoder_Reset_m3EEA013F877314107FC2DFA03529484A4248297F (GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A* __this, const RuntimeMethod* method) 
{
	{
		__this->___gzipHeaderSubstate_0 = 0;
		__this->___gzipFooterSubstate_1 = ((int32_t)15);
		__this->___expectedCrc32_4 = 0;
		__this->___expectedOutputStreamSizeModulo_5 = 0;
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipDecoder::ReadHeader(Mapbox.IO.Compression.InputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipDecoder_ReadHeader_m24ABDEC832D0A37C8F1429994B7E61F2B3EEB5F0 (GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A* __this, InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	{
		goto IL_03d6;
	}

IL_0006:
	{
		int32_t L_0 = __this->___gzipHeaderSubstate_0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0095;
			}
			case 2:
			{
				goto IL_00da;
			}
			case 3:
			{
				goto IL_011c;
			}
			case 4:
			{
				goto IL_014d;
			}
			case 5:
			{
				goto IL_019a;
			}
			case 6:
			{
				goto IL_01bd;
			}
			case 7:
			{
				goto IL_01e0;
			}
			case 8:
			{
				goto IL_0221;
			}
			case 9:
			{
				goto IL_025c;
			}
			case 10:
			{
				goto IL_02af;
			}
			case 11:
			{
				goto IL_0303;
			}
			case 12:
			{
				goto IL_0358;
			}
			case 13:
			{
				goto IL_0395;
			}
			case 14:
			{
				goto IL_03b6;
			}
		}
	}
	{
		goto IL_03ba;
	}

IL_0055:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_2 = ___input0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_2, 8, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_006d:
	{
		int32_t L_6 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)((int32_t)31)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_008c;
		}
	}
	{
		String_t* L_8;
		L_8 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ECF86EA93D4F92036A429C0359578EA574C786C)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_9 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipDecoder_ReadHeader_m24ABDEC832D0A37C8F1429994B7E61F2B3EEB5F0_RuntimeMethod_var)));
	}

IL_008c:
	{
		__this->___gzipHeaderSubstate_0 = 1;
		goto IL_0095;
	}

IL_0095:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_10 = ___input0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_10, 8, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		V_5 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_00af:
	{
		int32_t L_14 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)((int32_t)139)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_00d1;
		}
	}
	{
		String_t* L_16;
		L_16 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ECF86EA93D4F92036A429C0359578EA574C786C)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_17 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipDecoder_ReadHeader_m24ABDEC832D0A37C8F1429994B7E61F2B3EEB5F0_RuntimeMethod_var)));
	}

IL_00d1:
	{
		__this->___gzipHeaderSubstate_0 = 2;
		goto IL_00da;
	}

IL_00da:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_18 = ___input0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_18, 8, NULL);
		V_0 = L_19;
		int32_t L_20 = V_0;
		V_7 = (bool)((((int32_t)L_20) < ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_00f4;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_00f4:
	{
		int32_t L_22 = V_0;
		V_8 = (bool)((((int32_t)((((int32_t)L_22) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_24;
		L_24 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24E5BF9C3F6A409BBD8886942C11DF531662BE9C)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_25 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipDecoder_ReadHeader_m24ABDEC832D0A37C8F1429994B7E61F2B3EEB5F0_RuntimeMethod_var)));
	}

IL_0112:
	{
		__this->___gzipHeaderSubstate_0 = 3;
		goto IL_011c;
	}

IL_011c:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_26 = ___input0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_26, 8, NULL);
		V_0 = L_27;
		int32_t L_28 = V_0;
		V_9 = (bool)((((int32_t)L_28) < ((int32_t)0))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_0136;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_0136:
	{
		int32_t L_30 = V_0;
		__this->___gzip_header_flag_2 = L_30;
		__this->___gzipHeaderSubstate_0 = 4;
		__this->___loopCounter_6 = 0;
		goto IL_014d;
	}

IL_014d:
	{
		V_0 = 0;
		goto IL_017b;
	}

IL_0151:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_31 = ___input0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_31, 8, NULL);
		V_0 = L_32;
		int32_t L_33 = V_0;
		V_10 = (bool)((((int32_t)L_33) < ((int32_t)0))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_016c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_016c:
	{
		int32_t L_35 = __this->___loopCounter_6;
		__this->___loopCounter_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_017b:
	{
		int32_t L_36 = __this->___loopCounter_6;
		V_11 = (bool)((((int32_t)L_36) < ((int32_t)4))? 1 : 0);
		bool L_37 = V_11;
		if (L_37)
		{
			goto IL_0151;
		}
	}
	{
		__this->___gzipHeaderSubstate_0 = 5;
		__this->___loopCounter_6 = 0;
		goto IL_019a;
	}

IL_019a:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_38 = ___input0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_38, 8, NULL);
		V_0 = L_39;
		int32_t L_40 = V_0;
		V_12 = (bool)((((int32_t)L_40) < ((int32_t)0))? 1 : 0);
		bool L_41 = V_12;
		if (!L_41)
		{
			goto IL_01b4;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_01b4:
	{
		__this->___gzipHeaderSubstate_0 = 6;
		goto IL_01bd;
	}

IL_01bd:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_42 = ___input0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_42, 8, NULL);
		V_0 = L_43;
		int32_t L_44 = V_0;
		V_13 = (bool)((((int32_t)L_44) < ((int32_t)0))? 1 : 0);
		bool L_45 = V_13;
		if (!L_45)
		{
			goto IL_01d7;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_01d7:
	{
		__this->___gzipHeaderSubstate_0 = 7;
		goto IL_01e0;
	}

IL_01e0:
	{
		int32_t L_46 = __this->___gzip_header_flag_2;
		V_14 = (bool)((((int32_t)((int32_t)(L_46&4))) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_14;
		if (!L_47)
		{
			goto IL_01f7;
		}
	}
	{
		goto IL_02af;
	}

IL_01f7:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_48 = ___input0;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_48, 8, NULL);
		V_0 = L_49;
		int32_t L_50 = V_0;
		V_15 = (bool)((((int32_t)L_50) < ((int32_t)0))? 1 : 0);
		bool L_51 = V_15;
		if (!L_51)
		{
			goto IL_0211;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_0211:
	{
		int32_t L_52 = V_0;
		__this->___gzip_header_xlen_3 = L_52;
		__this->___gzipHeaderSubstate_0 = 8;
		goto IL_0221;
	}

IL_0221:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_53 = ___input0;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_53, 8, NULL);
		V_0 = L_54;
		int32_t L_55 = V_0;
		V_16 = (bool)((((int32_t)L_55) < ((int32_t)0))? 1 : 0);
		bool L_56 = V_16;
		if (!L_56)
		{
			goto IL_023b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_023b:
	{
		int32_t L_57 = __this->___gzip_header_xlen_3;
		int32_t L_58 = V_0;
		__this->___gzip_header_xlen_3 = ((int32_t)(L_57|((int32_t)(L_58<<8))));
		__this->___gzipHeaderSubstate_0 = ((int32_t)9);
		__this->___loopCounter_6 = 0;
		goto IL_025c;
	}

IL_025c:
	{
		V_0 = 0;
		goto IL_028a;
	}

IL_0260:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_59 = ___input0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_59, 8, NULL);
		V_0 = L_60;
		int32_t L_61 = V_0;
		V_17 = (bool)((((int32_t)L_61) < ((int32_t)0))? 1 : 0);
		bool L_62 = V_17;
		if (!L_62)
		{
			goto IL_027b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_027b:
	{
		int32_t L_63 = __this->___loopCounter_6;
		__this->___loopCounter_6 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_028a:
	{
		int32_t L_64 = __this->___loopCounter_6;
		int32_t L_65 = __this->___gzip_header_xlen_3;
		V_18 = (bool)((((int32_t)L_64) < ((int32_t)L_65))? 1 : 0);
		bool L_66 = V_18;
		if (L_66)
		{
			goto IL_0260;
		}
	}
	{
		__this->___gzipHeaderSubstate_0 = ((int32_t)10);
		__this->___loopCounter_6 = 0;
		goto IL_02af;
	}

IL_02af:
	{
		int32_t L_67 = __this->___gzip_header_flag_2;
		V_19 = (bool)((((int32_t)((int32_t)(L_67&8))) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_19;
		if (!L_68)
		{
			goto IL_02cb;
		}
	}
	{
		__this->___gzipHeaderSubstate_0 = ((int32_t)11);
		goto IL_0303;
	}

IL_02cb:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_69 = ___input0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_69, 8, NULL);
		V_0 = L_70;
		int32_t L_71 = V_0;
		V_20 = (bool)((((int32_t)L_71) < ((int32_t)0))? 1 : 0);
		bool L_72 = V_20;
		if (!L_72)
		{
			goto IL_02e6;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_02e6:
	{
		int32_t L_73 = V_0;
		V_21 = (bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_21;
		if (!L_74)
		{
			goto IL_02f3;
		}
	}
	{
		goto IL_02f9;
	}

IL_02f3:
	{
		V_22 = (bool)1;
		goto IL_02cb;
	}

IL_02f9:
	{
		__this->___gzipHeaderSubstate_0 = ((int32_t)11);
		goto IL_0303;
	}

IL_0303:
	{
		int32_t L_75 = __this->___gzip_header_flag_2;
		V_23 = (bool)((((int32_t)((int32_t)(L_75&((int32_t)16)))) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_23;
		if (!L_76)
		{
			goto IL_0320;
		}
	}
	{
		__this->___gzipHeaderSubstate_0 = ((int32_t)12);
		goto IL_0358;
	}

IL_0320:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_77 = ___input0;
		NullCheck(L_77);
		int32_t L_78;
		L_78 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_77, 8, NULL);
		V_0 = L_78;
		int32_t L_79 = V_0;
		V_24 = (bool)((((int32_t)L_79) < ((int32_t)0))? 1 : 0);
		bool L_80 = V_24;
		if (!L_80)
		{
			goto IL_033b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_033b:
	{
		int32_t L_81 = V_0;
		V_25 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_25;
		if (!L_82)
		{
			goto IL_0348;
		}
	}
	{
		goto IL_034e;
	}

IL_0348:
	{
		V_26 = (bool)1;
		goto IL_0320;
	}

IL_034e:
	{
		__this->___gzipHeaderSubstate_0 = ((int32_t)12);
		goto IL_0358;
	}

IL_0358:
	{
		int32_t L_83 = __this->___gzip_header_flag_2;
		V_27 = (bool)((((int32_t)((int32_t)(L_83&2))) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_27;
		if (!L_84)
		{
			goto IL_0374;
		}
	}
	{
		__this->___gzipHeaderSubstate_0 = ((int32_t)14);
		goto IL_03b6;
	}

IL_0374:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_85 = ___input0;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_85, 8, NULL);
		V_0 = L_86;
		int32_t L_87 = V_0;
		V_28 = (bool)((((int32_t)L_87) < ((int32_t)0))? 1 : 0);
		bool L_88 = V_28;
		if (!L_88)
		{
			goto IL_038b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_038b:
	{
		__this->___gzipHeaderSubstate_0 = ((int32_t)13);
		goto IL_0395;
	}

IL_0395:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_89 = ___input0;
		NullCheck(L_89);
		int32_t L_90;
		L_90 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_89, 8, NULL);
		V_0 = L_90;
		int32_t L_91 = V_0;
		V_29 = (bool)((((int32_t)L_91) < ((int32_t)0))? 1 : 0);
		bool L_92 = V_29;
		if (!L_92)
		{
			goto IL_03ac;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_03ac:
	{
		__this->___gzipHeaderSubstate_0 = ((int32_t)14);
		goto IL_03b6;
	}

IL_03b6:
	{
		V_3 = (bool)1;
		goto IL_03de;
	}

IL_03ba:
	{
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral827FB9B81D37440B2A0AD644005CF071D59080D5)), NULL);
		String_t* L_93;
		L_93 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71C28F1E716C64C485CEDD7929D586241D1FA89B)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_94 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_94);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_94, L_93, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipDecoder_ReadHeader_m24ABDEC832D0A37C8F1429994B7E61F2B3EEB5F0_RuntimeMethod_var)));
	}

IL_03d6:
	{
		V_30 = (bool)1;
		goto IL_0006;
	}

IL_03de:
	{
		bool L_95 = V_3;
		return L_95;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipDecoder::ReadFooter(Mapbox.IO.Compression.InputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipDecoder_ReadFooter_m228781D39A9AA3CD8FE949BFFECC1EC518E79072 (GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A* __this, InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* ___input0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_0 = ___input0;
		NullCheck(L_0);
		InputBuffer_SkipToByteBoundary_m6D66238637C2C43C69B26F118BED039EA5469F96(L_0, NULL);
		int32_t L_1 = __this->___gzipFooterSubstate_1;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_005b;
	}

IL_0019:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_3 = ___input0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_3, 8, NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00fb;
	}

IL_0032:
	{
		uint32_t L_7 = __this->___expectedCrc32_4;
		int32_t L_8 = V_1;
		int32_t L_9 = __this->___loopCounter_6;
		__this->___expectedCrc32_4 = ((int32_t)((int32_t)L_7|((int32_t)(L_8<<((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_9))&((int32_t)31)))))));
		int32_t L_10 = __this->___loopCounter_6;
		__this->___loopCounter_6 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_005b:
	{
		int32_t L_11 = __this->___loopCounter_6;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)4))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0019;
		}
	}
	{
		__this->___gzipFooterSubstate_1 = ((int32_t)16);
		__this->___loopCounter_6 = 0;
	}

IL_007a:
	{
		int32_t L_13 = __this->___gzipFooterSubstate_1;
		V_5 = (bool)((((int32_t)L_13) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_15 = __this->___loopCounter_6;
		V_6 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00a1;
		}
	}
	{
		__this->___expectedOutputStreamSizeModulo_5 = 0;
	}

IL_00a1:
	{
		goto IL_00e7;
	}

IL_00a3:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_17 = ___input0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_17, 8, NULL);
		V_7 = L_18;
		int32_t L_19 = V_7;
		V_8 = (bool)((((int32_t)L_19) < ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00bd;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00fb;
	}

IL_00bd:
	{
		uint32_t L_21 = __this->___expectedOutputStreamSizeModulo_5;
		int32_t L_22 = V_7;
		int32_t L_23 = __this->___loopCounter_6;
		__this->___expectedOutputStreamSizeModulo_5 = ((int32_t)((int32_t)L_21|((int32_t)(L_22<<((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_23))&((int32_t)31)))))));
		int32_t L_24 = __this->___loopCounter_6;
		__this->___loopCounter_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_00e7:
	{
		int32_t L_25 = __this->___loopCounter_6;
		V_9 = (bool)((((int32_t)L_25) < ((int32_t)4))? 1 : 0);
		bool L_26 = V_9;
		if (L_26)
		{
			goto IL_00a3;
		}
	}
	{
	}

IL_00f7:
	{
		V_3 = (bool)1;
		goto IL_00fb;
	}

IL_00fb:
	{
		bool L_27 = V_3;
		return L_27;
	}
}
// System.Void Mapbox.IO.Compression.GZipDecoder::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipDecoder_UpdateWithBytesRead_mC3662B15052BCF1532E78B8D73460F811AAD9088 (GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___copied2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	{
		uint32_t L_0 = __this->___actualCrc32_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___copied2;
		il2cpp_codegen_runtime_class_init_inline(Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = Crc32Helper_UpdateCrc32_m8A85F19282CFCD8FAC023327934DA941D01984BC(L_0, L_1, L_2, L_3, NULL);
		__this->___actualCrc32_7 = L_4;
		int64_t L_5 = __this->___actualStreamSizeModulo_8;
		int32_t L_6 = ___copied2;
		V_0 = ((int64_t)il2cpp_codegen_add(L_5, ((int64_t)(uint64_t)((uint32_t)L_6))));
		int64_t L_7 = V_0;
		V_1 = (bool)((((int32_t)((((int64_t)L_7) < ((int64_t)((int64_t)4294967296LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9%((int64_t)4294967296LL)));
	}

IL_0040:
	{
		int64_t L_10 = V_0;
		__this->___actualStreamSizeModulo_8 = L_10;
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipDecoder::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipDecoder_Validate_m244026D98FD8B7748D1622709D806B38BB6EB9CD (GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		uint32_t L_0 = __this->___expectedCrc32_4;
		uint32_t L_1 = __this->___actualCrc32_7;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE0BC7CA7559FF98833686B7E0FB03B44A717E72)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_4 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipDecoder_Validate_m244026D98FD8B7748D1622709D806B38BB6EB9CD_RuntimeMethod_var)));
	}

IL_0027:
	{
		int64_t L_5 = __this->___actualStreamSizeModulo_8;
		uint32_t L_6 = __this->___expectedOutputStreamSizeModulo_5;
		V_1 = (bool)((((int32_t)((((int64_t)L_5) == ((int64_t)((int64_t)(uint64_t)L_6)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_8;
		L_8 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A46861F502859D61F566A451B736EE48725C754)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_9 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipDecoder_Validate_m244026D98FD8B7748D1622709D806B38BB6EB9CD_RuntimeMethod_var)));
	}

IL_004e:
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
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m9F5CCC86303E3CC49A3FF77FF9AB208E26681585 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		GZipStream__ctor_m7DED8FC1CFDBAFF3DFDA075BC79D0547084D2DAB(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m7DED8FC1CFDBAFF3DFDA075BC79D0547084D2DAB (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_3 = (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)il2cpp_codegen_object_new(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DeflateStream__ctor_mD453D25491166073A56A57EB8D4922384EBD2430(L_3, L_0, L_1, L_2, NULL);
		__this->___deflateStream_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deflateStream_5), (void*)L_3);
		int32_t L_4 = ___mode1;
		GZipStream_SetDeflateStreamFileFormatter_m142A633114E227E01719FBD1B786BA454AB4CEB6(__this, L_4, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m0C582449FC897F0F6154ECC703A76E020EB6E6D4 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___compressionLevel1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___compressionLevel1;
		GZipStream__ctor_mE5D0201B2402063776015FD608B8A780A9B51E49(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mE5D0201B2402063776015FD608B8A780A9B51E49 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___compressionLevel1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___compressionLevel1;
		bool L_2 = ___leaveOpen2;
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_3 = (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)il2cpp_codegen_object_new(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DeflateStream__ctor_m327DF465D1B3D291AAEB668B5BBA24BF6A958BE4(L_3, L_0, L_1, L_2, NULL);
		__this->___deflateStream_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deflateStream_5), (void*)L_3);
		GZipStream_SetDeflateStreamFileFormatter_m142A633114E227E01719FBD1B786BA454AB4CEB6(__this, 1, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::SetDeflateStreamFileFormatter(Mapbox.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_SetDeflateStreamFileFormatter_m142A633114E227E01719FBD1B786BA454AB4CEB6 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = ___mode0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766* L_2 = (GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766*)il2cpp_codegen_object_new(GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GZipFormatter__ctor_m4ADF588488A9CE332C4D50794896A657D59CCFDB(L_2, NULL);
		V_1 = L_2;
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_3 = __this->___deflateStream_5;
		RuntimeObject* L_4 = V_1;
		NullCheck(L_3);
		DeflateStream_SetFileFormatWriter_m91494A9488A72719579004328CE03CD7A6EEB9EF(L_3, L_4, NULL);
		goto IL_0035;
	}

IL_0020:
	{
		GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A* L_5 = (GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A*)il2cpp_codegen_object_new(GZipDecoder_t2DC46C92FA3C654BB90B51DF0A7A515E882BB60A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GZipDecoder__ctor_m16ABAB5457140F8757DFA1B9CA6F4295BAB8C76B(L_5, NULL);
		V_2 = L_5;
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_6 = __this->___deflateStream_5;
		RuntimeObject* L_7 = V_2;
		NullCheck(L_6);
		DeflateStream_SetFileFormatReader_m90FABE16D59786FA57F0DB7FCE28C98A77C91316(L_6, L_7, NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanRead_m987AA4F55B3A21963505956F3827DCD2D31ABE06 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_0 = __this->___deflateStream_5;
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0021;
	}

IL_0013:
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_2 = __this->___deflateStream_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanWrite_mF5385062670384B2812328ACA9B603049D681263 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_0 = __this->___deflateStream_5;
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0021;
	}

IL_0013:
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_2 = __this->___deflateStream_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanSeek_m7CC7C15814DFC72284327249CDDEE819EECDECE4 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_0 = __this->___deflateStream_5;
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0021;
	}

IL_0013:
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_2 = __this->___deflateStream_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_2);
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Int64 Mapbox.IO.Compression.GZipStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Length_m8D7B82E020A998C1966F5A871FE20F1F8EF78C98 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Length_m8D7B82E020A998C1966F5A871FE20F1F8EF78C98_RuntimeMethod_var)));
	}
}
// System.Int64 Mapbox.IO.Compression.GZipStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Position_mF08FEFB3BD495368EFFEFFCFB1FF7552C4B2C387 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Position_mF08FEFB3BD495368EFFEFFCFB1FF7552C4B2C387_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Position_m2E6BE1AE611B2D19ECCD0FAB6CBD8812DD8BD6B3 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_Position_m2E6BE1AE611B2D19ECCD0FAB6CBD8812DD8BD6B3_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Flush_m21B209D54740F7BEE558A610D976BB776A5007F3 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_0 = __this->___deflateStream_5;
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_3, (String_t*)NULL, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Flush_m21B209D54740F7BEE558A610D976BB776A5007F3_RuntimeMethod_var)));
	}

IL_0020:
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_4 = __this->___deflateStream_5;
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Flush() */, L_4);
		goto IL_002e;
	}

IL_002e:
	{
		return;
	}
}
// System.Int64 Mapbox.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_Seek_m388A587032D2D93ADAC597AC10A64D633E6B0116 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Seek_m388A587032D2D93ADAC597AC10A64D633E6B0116_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_SetLength_m74F237EE861266A3A9A548E548638B72A5C5B418 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral573E75158444E42687DB7DDB0788B85FA874E2A5)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_SetLength_m74F237EE861266A3A9A548E548638B72A5C5B418_RuntimeMethod_var)));
	}
}
// System.IAsyncResult Mapbox.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GZipStream_BeginRead_mA0AA1FEC22306085F62CCF4CAC300D96AE3BCDF0 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_0 = __this->___deflateStream_5;
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_BeginRead_mA0AA1FEC22306085F62CCF4CAC300D96AE3BCDF0_RuntimeMethod_var)));
	}

IL_001f:
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_4 = __this->___deflateStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_8 = ___asyncCallback3;
		RuntimeObject* L_9 = ___asyncState4;
		NullCheck(L_4);
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker5< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*, RuntimeObject* >::Invoke(21 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_4, L_5, L_6, L_7, L_8, L_9);
		V_1 = L_10;
		goto IL_0034;
	}

IL_0034:
	{
		RuntimeObject* L_11 = V_1;
		return L_11;
	}
}
// System.Int32 Mapbox.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_EndRead_mB47540B17FD985D1CB80C9CCA755FC1FA339F4D4 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_0 = __this->___deflateStream_5;
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_EndRead_mB47540B17FD985D1CB80C9CCA755FC1FA339F4D4_RuntimeMethod_var)));
	}

IL_001f:
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_4 = __this->___deflateStream_5;
		RuntimeObject* L_5 = ___asyncResult0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(22 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_4, L_5);
		V_1 = L_6;
		goto IL_002e;
	}

IL_002e:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.IAsyncResult Mapbox.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GZipStream_BeginWrite_m8832D3AB32129778F12A7C4428FD5C922DF2F46F (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___asyncCallback3, RuntimeObject* ___asyncState4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_0 = __this->___deflateStream_5;
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_BeginWrite_m8832D3AB32129778F12A7C4428FD5C922DF2F46F_RuntimeMethod_var)));
	}

IL_001f:
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_4 = __this->___deflateStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_8 = ___asyncCallback3;
		RuntimeObject* L_9 = ___asyncState4;
		NullCheck(L_4);
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker5< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*, RuntimeObject* >::Invoke(25 /* System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_4, L_5, L_6, L_7, L_8, L_9);
		V_1 = L_10;
		goto IL_0034;
	}

IL_0034:
	{
		RuntimeObject* L_11 = V_1;
		return L_11;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_EndWrite_m175665AEF7C478666F3CD16A84291D249D0BD1A9 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_0 = __this->___deflateStream_5;
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_EndWrite_m175665AEF7C478666F3CD16A84291D249D0BD1A9_RuntimeMethod_var)));
	}

IL_001f:
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_4 = __this->___deflateStream_5;
		RuntimeObject* L_5 = ___asyncResult0;
		NullCheck(L_4);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(26 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, L_4, L_5);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_Read_m4923FBB5CCEB7CB2EA53165F0F1F3DA6195A40A3 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_0 = __this->___deflateStream_5;
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_3, (String_t*)NULL, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Read_m4923FBB5CCEB7CB2EA53165F0F1F3DA6195A40A3_RuntimeMethod_var)));
	}

IL_0020:
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_4 = __this->___deflateStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, L_6, L_7);
		V_1 = L_8;
		goto IL_0031;
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Write_m8DE90F4C746EAED819EBA2B55169153C4A5C3277 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_0 = __this->___deflateStream_5;
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84D79A91314F27BCCA7488E3B31B5261802FC638)), NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_3, (String_t*)NULL, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Write_m8DE90F4C746EAED819EBA2B55169153C4A5C3277_RuntimeMethod_var)));
	}

IL_0020:
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_4 = __this->___deflateStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, L_6, L_7);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Dispose_mB25AAF13A60715AAAA3AD8C22DB1E7B12EFB7272 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				bool L_0 = ___disposing0;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_1 = ___disposing0;
				if (!L_1)
				{
					goto IL_0010_1;
				}
			}
			{
				DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_2 = __this->___deflateStream_5;
				G_B4_0 = ((!(((RuntimeObject*)(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				goto IL_0011_1;
			}

IL_0010_1:
			{
				G_B4_0 = 0;
			}

IL_0011_1:
			{
				V_0 = (bool)G_B4_0;
				bool L_3 = V_0;
				if (!L_3)
				{
					goto IL_0023_1;
				}
			}
			{
				DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_4 = __this->___deflateStream_5;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_4);
			}

IL_0023_1:
			{
				__this->___deflateStream_5 = (DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___deflateStream_5), (void*)(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)NULL);
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
// System.IO.Stream Mapbox.IO.Compression.GZipStream::get_BaseStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* GZipStream_get_BaseStream_mE03F4DCA2850E8C66DB5264BE11C7B31054FA370 (GZipStream_t74049C63AF998A893B5C818DF97DB5AC5261B53E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_0 = __this->___deflateStream_5;
		V_0 = (bool)((!(((RuntimeObject*)(DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		DeflateStream_tDD6E6D2BB60EE7976C99A46415748E537F73C638* L_2 = __this->___deflateStream_5;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = DeflateStream_get_BaseStream_mECFB576ADDEAEED96AB580F430990E7245E92823(L_2, NULL);
		V_1 = L_3;
		goto IL_0022;
	}

IL_001d:
	{
		V_1 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		goto IL_0022;
	}

IL_0022:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = V_1;
		return L_4;
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
// System.Void Mapbox.IO.Compression.GZipFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter__ctor_m4ADF588488A9CE332C4D50794896A657D59CCFDB (GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766* __this, const RuntimeMethod* method) 
{
	{
		GZipFormatter__ctor_mBBCC296777FB0B31658E22EA410FD168385398F1(__this, 3, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipFormatter::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter__ctor_mBBCC296777FB0B31658E22EA410FD168385398F1 (GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766* __this, int32_t ___compressionLevel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____C31FD54E9E8CFB2BC8835475B92A0D179827B581_10_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____C31FD54E9E8CFB2BC8835475B92A0D179827B581_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		__this->___headerBytes_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___headerBytes_0), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_3 = ___compressionLevel0;
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___headerBytes_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)2);
	}

IL_0034:
	{
		return;
	}
}
// System.Byte[] Mapbox.IO.Compression.GZipFormatter::GetHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GZipFormatter_GetHeader_m8484B14AAB3AE535687C842F09A9A1FF5116B60B (GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___headerBytes_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.GZipFormatter::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter_UpdateWithBytesRead_m94781EC4DDD8B66E52C158E7E247A9D64D11696C (GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___bytesToCopy2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	{
		uint32_t L_0 = __this->____crc32_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___bytesToCopy2;
		il2cpp_codegen_runtime_class_init_inline(Crc32Helper_t606A12FE5D300B740EF052744BD58A8B09CB97F6_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = Crc32Helper_UpdateCrc32_m8A85F19282CFCD8FAC023327934DA941D01984BC(L_0, L_1, L_2, L_3, NULL);
		__this->____crc32_1 = L_4;
		int64_t L_5 = __this->____inputStreamSizeModulo_2;
		int32_t L_6 = ___bytesToCopy2;
		V_0 = ((int64_t)il2cpp_codegen_add(L_5, ((int64_t)(uint64_t)((uint32_t)L_6))));
		int64_t L_7 = V_0;
		V_1 = (bool)((((int32_t)((((int64_t)L_7) < ((int64_t)((int64_t)4294967296LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9%((int64_t)4294967296LL)));
	}

IL_0040:
	{
		int64_t L_10 = V_0;
		__this->____inputStreamSizeModulo_2 = L_10;
		return;
	}
}
// System.Byte[] Mapbox.IO.Compression.GZipFormatter::GetFooter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GZipFormatter_GetFooter_m267B0C1A45EE503832333F0D22EEFA29A2D1525E (GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		uint32_t L_2 = __this->____crc32_1;
		GZipFormatter_WriteUInt32_m035B659D6486511725BDBA983BA27D10BE51A9A1(__this, L_1, L_2, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int64_t L_4 = __this->____inputStreamSizeModulo_2;
		GZipFormatter_WriteUInt32_m035B659D6486511725BDBA983BA27D10BE51A9A1(__this, L_3, ((int32_t)(uint32_t)L_4), 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		V_1 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		return L_6;
	}
}
// System.Void Mapbox.IO.Compression.GZipFormatter::WriteUInt32(System.Byte[],System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipFormatter_WriteUInt32_m035B659D6486511725BDBA983BA27D10BE51A9A1 (GZipFormatter_t17786F7266A61A7E00C1E42015907E3CEED89766* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, uint32_t ___value1, int32_t ___startIndex2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___b0;
		int32_t L_1 = ___startIndex2;
		uint32_t L_2 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___b0;
		int32_t L_4 = ___startIndex2;
		uint32_t L_5 = ___value1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___b0;
		int32_t L_7 = ___startIndex2;
		uint32_t L_8 = ___value1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_8>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___b0;
		int32_t L_10 = ___startIndex2;
		uint32_t L_11 = ___value1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_11>>((int32_t)24)))));
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
// System.Void Mapbox.IO.Compression.HuffmanTree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HuffmanTree__cctor_m2042B7B9B5C563FFAB55E817F1D1490F302FEC95 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = HuffmanTree_GetStaticLiteralTreeLength_m973D6EA6F1678CE35FA8F4C9EFAC7A116AFF600E(NULL);
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_1 = (HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881*)il2cpp_codegen_object_new(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HuffmanTree__ctor_mE69681D6A66A5D315F65E5173F057A82C1762139(L_1, L_0, NULL);
		((HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var))->___staticLiteralLengthTree_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var))->___staticLiteralLengthTree_11), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HuffmanTree_GetStaticDistanceTreeLength_mA5E2D26A6A9F5E807DB8D1EEBF78F35BC37BCEF2(NULL);
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_3 = (HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881*)il2cpp_codegen_object_new(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HuffmanTree__ctor_mE69681D6A66A5D315F65E5173F057A82C1762139(L_3, L_2, NULL);
		((HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var))->___staticDistanceTree_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var))->___staticDistanceTree_12), (void*)L_3);
		return;
	}
}
// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::get_StaticLiteralLengthTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* HuffmanTree_get_StaticLiteralLengthTree_m2FF0234A10D1194B00B4BA8AC63AA391DA55F2BA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var);
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_0 = ((HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var))->___staticLiteralLengthTree_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_1 = V_0;
		return L_1;
	}
}
// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::get_StaticDistanceTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* HuffmanTree_get_StaticDistanceTree_m383FCA4999BB18DCE35BE0272D2C98B28919012B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var);
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_0 = ((HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var))->___staticDistanceTree_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.HuffmanTree::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HuffmanTree__ctor_mE69681D6A66A5D315F65E5173F057A82C1762139 (HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___codeLengths0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4F83E3BD187DA4E615AE86429BC0A3235C54C53);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___codeLengths0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)288))))
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___codeLengths0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)32))))
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___codeLengths0;
		NullCheck(L_2);
		G_B4_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)((int32_t)19)))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 1;
	}

IL_0023:
	{
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)G_B4_0, _stringLiteralC4F83E3BD187DA4E615AE86429BC0A3235C54C53, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___codeLengths0;
		__this->___codeLengthArray_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___codeLengthArray_8), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___codeLengthArray_8;
		NullCheck(L_4);
		V_0 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)288)))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		__this->___tableBits_4 = ((int32_t)9);
		goto IL_005d;
	}

IL_0054:
	{
		__this->___tableBits_4 = 7;
	}

IL_005d:
	{
		int32_t L_6 = __this->___tableBits_4;
		__this->___tableMask_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_6&((int32_t)31))))), 1));
		HuffmanTree_CreateTable_mBA3D487FA8112E589960B3A12FA5CD1566F3B95B(__this, NULL);
		return;
	}
}
// System.Byte[] Mapbox.IO.Compression.HuffmanTree::GetStaticLiteralTreeLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HuffmanTree_GetStaticLiteralTreeLength_m973D6EA6F1678CE35FA8F4C9EFAC7A116AFF600E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)288));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)8);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0018:
	{
		int32_t L_4 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)((int32_t)143)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_0010;
		}
	}
	{
		V_3 = ((int32_t)144);
		goto IL_0038;
	}

IL_002f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)((int32_t)9));
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0038:
	{
		int32_t L_9 = V_3;
		V_4 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)((int32_t)255)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_002f;
		}
	}
	{
		V_5 = ((int32_t)256);
		goto IL_005d;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)7);
		int32_t L_13 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005d:
	{
		int32_t L_14 = V_5;
		V_6 = (bool)((((int32_t)((((int32_t)L_14) > ((int32_t)((int32_t)279)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (L_15)
		{
			goto IL_0052;
		}
	}
	{
		V_7 = ((int32_t)280);
		goto IL_0083;
	}

IL_0078:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		int32_t L_17 = V_7;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)8);
		int32_t L_18 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0083:
	{
		int32_t L_19 = V_7;
		V_8 = (bool)((((int32_t)((((int32_t)L_19) > ((int32_t)((int32_t)287)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (L_20)
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		V_9 = L_21;
		goto IL_009a;
	}

IL_009a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_9;
		return L_22;
	}
}
// System.Byte[] Mapbox.IO.Compression.HuffmanTree::GetStaticDistanceTreeLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HuffmanTree_GetStaticDistanceTreeLength_mA5E2D26A6A9F5E807DB8D1EEBF78F35BC37BCEF2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)5);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0017:
	{
		int32_t L_4 = V_1;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		V_3 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		return L_7;
	}
}
// System.UInt32[] Mapbox.IO.Compression.HuffmanTree::CalculateHuffmanCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* HuffmanTree_CalculateHuffmanCode_m80191F321F3F1867EDE3BD690E422E0F86B49199 (HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_13 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___codeLengthArray_8;
		V_4 = L_1;
		V_5 = 0;
		goto IL_0033;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_4;
		int32_t L_3 = V_5;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_6 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int32_t L_7 = V_6;
		NullCheck(L_6);
		uint32_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)));
		int32_t L_9 = *((uint32_t*)L_8);
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_4;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		V_1 = L_14;
		V_2 = 0;
		V_7 = 1;
		goto IL_0066;
	}

IL_004e:
	{
		uint32_t L_15 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		int32_t L_17 = V_7;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_19))<<1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_1;
		int32_t L_21 = V_7;
		uint32_t L_22 = V_2;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint32_t)L_22);
		int32_t L_23 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0066:
	{
		int32_t L_24 = V_7;
		V_8 = (bool)((((int32_t)((((int32_t)L_24) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_004e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)288));
		V_3 = L_26;
		V_9 = 0;
		goto IL_00c1;
	}

IL_0085:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___codeLengthArray_8;
		int32_t L_28 = V_9;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_10 = L_30;
		int32_t L_31 = V_10;
		V_11 = (bool)((((int32_t)L_31) > ((int32_t)0))? 1 : 0);
		bool L_32 = V_11;
		if (!L_32)
		{
			goto IL_00ba;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_3;
		int32_t L_34 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_1;
		int32_t L_36 = V_10;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = V_10;
		il2cpp_codegen_runtime_class_init_inline(FastEncoderStatics_t815BBB269696A06CBFA204398FAE031B1374FA9E_il2cpp_TypeInfo_var);
		uint32_t L_40;
		L_40 = FastEncoderStatics_BitReverse_mC67B5F697B79AD8ED64B981472E6EAA3A94C9391(L_38, L_39, NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint32_t)L_40);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_1;
		int32_t L_42 = V_10;
		NullCheck(L_41);
		uint32_t* L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)));
		int32_t L_44 = *((uint32_t*)L_43);
		*((int32_t*)L_43) = (int32_t)((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ba:
	{
		int32_t L_45 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00c1:
	{
		int32_t L_46 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___codeLengthArray_8;
		NullCheck(L_47);
		V_12 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))? 1 : 0);
		bool L_48 = V_12;
		if (L_48)
		{
			goto IL_0085;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_3;
		V_13 = L_49;
		goto IL_00d8;
	}

IL_00d8:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_13;
		return L_50;
	}
}
// System.Void Mapbox.IO.Compression.HuffmanTree::CreateTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HuffmanTree_CreateTable_mBA3D487FA8112E589960B3A12FA5CD1566F3B95B (HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral319B80E8ADC4EAB9C7A135DCEFD23ECDB203BFBD);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int16_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_15 = NULL;
	int16_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = HuffmanTree_CalculateHuffmanCode_m80191F321F3F1867EDE3BD690E422E0F86B49199(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = __this->___tableBits_4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_1&((int32_t)31))))));
		__this->___table_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___table_5), (void*)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		__this->___codeArrayDebug_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___codeArrayDebug_9), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___codeLengthArray_8;
		NullCheck(L_4);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		__this->___left_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_6), (void*)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___codeLengthArray_8;
		NullCheck(L_6);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_6)->max_length)))));
		__this->___right_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_7), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___codeLengthArray_8;
		NullCheck(L_8);
		V_1 = ((int16_t)((int32_t)(((RuntimeArray*)L_8)->max_length)));
		V_2 = 0;
		goto IL_01cf;
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___codeLengthArray_8;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		int32_t L_13 = V_3;
		V_4 = (bool)((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_01ca;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_5 = L_18;
		int32_t L_19 = V_3;
		int32_t L_20 = __this->___tableBits_4;
		V_6 = (bool)((((int32_t)((((int32_t)L_19) > ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_22 = V_3;
		V_7 = ((int32_t)(1<<((int32_t)(L_22&((int32_t)31)))));
		int32_t L_23 = V_5;
		int32_t L_24 = V_7;
		V_9 = (bool)((((int32_t)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_26;
		L_26 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB35DE45BF13FD662B11D547D43F796EC31AFD6B8)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_27 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_27, L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HuffmanTree_CreateTable_mBA3D487FA8112E589960B3A12FA5CD1566F3B95B_RuntimeMethod_var)));
	}

IL_00b8:
	{
		int32_t L_28 = __this->___tableBits_4;
		int32_t L_29 = V_3;
		V_8 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_28, L_29))&((int32_t)31)))));
		V_10 = 0;
		goto IL_00e6;
	}

IL_00cc:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_30 = __this->___table_5;
		int32_t L_31 = V_5;
		int32_t L_32 = V_2;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int16_t)((int16_t)L_32));
		int32_t L_33 = V_5;
		int32_t L_34 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_add(L_33, L_34));
		int32_t L_35 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00e6:
	{
		int32_t L_36 = V_10;
		int32_t L_37 = V_8;
		V_11 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_11;
		if (L_38)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01c9;
	}

IL_00f8:
	{
		int32_t L_39 = V_3;
		int32_t L_40 = __this->___tableBits_4;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
		int32_t L_41 = __this->___tableBits_4;
		V_13 = ((int32_t)(1<<((int32_t)(L_41&((int32_t)31)))));
		int32_t L_42 = V_5;
		int32_t L_43 = __this->___tableBits_4;
		V_14 = ((int32_t)(L_42&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_43&((int32_t)31))))), 1))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_44 = __this->___table_5;
		V_15 = L_44;
	}

IL_012a:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_45 = V_15;
		int32_t L_46 = V_14;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int16_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_16 = L_48;
		int16_t L_49 = V_16;
		V_17 = (bool)((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
		bool L_50 = V_17;
		if (!L_50)
		{
			goto IL_0151;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_51 = V_15;
		int32_t L_52 = V_14;
		int16_t L_53 = V_1;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (int16_t)((int16_t)((-L_53))));
		int16_t L_54 = V_1;
		V_16 = ((int16_t)((-L_54)));
		int16_t L_55 = V_1;
		V_1 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_55, 1)));
	}

IL_0151:
	{
		int16_t L_56 = V_16;
		V_18 = (bool)((((int32_t)L_56) > ((int32_t)0))? 1 : 0);
		bool L_57 = V_18;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		String_t* L_58;
		L_58 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB35DE45BF13FD662B11D547D43F796EC31AFD6B8)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_59 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_59);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_59, L_58, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HuffmanTree_CreateTable_mBA3D487FA8112E589960B3A12FA5CD1566F3B95B_RuntimeMethod_var)));
	}

IL_016d:
	{
		int16_t L_60 = V_16;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_60) < ((int32_t)0))? 1 : 0), _stringLiteral319B80E8ADC4EAB9C7A135DCEFD23ECDB203BFBD, NULL);
		int32_t L_61 = V_5;
		int32_t L_62 = V_13;
		V_19 = (bool)((((int32_t)((int32_t)(L_61&L_62))) == ((int32_t)0))? 1 : 0);
		bool L_63 = V_19;
		if (!L_63)
		{
			goto IL_0197;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_64 = __this->___left_6;
		V_15 = L_64;
		goto IL_01a1;
	}

IL_0197:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_65 = __this->___right_7;
		V_15 = L_65;
	}

IL_01a1:
	{
		int16_t L_66 = V_16;
		V_14 = ((-L_66));
		int32_t L_67 = V_13;
		V_13 = ((int32_t)(L_67<<1));
		int32_t L_68 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
		int32_t L_69 = V_12;
		V_20 = (bool)((!(((uint32_t)L_69) <= ((uint32_t)0)))? 1 : 0);
		bool L_70 = V_20;
		if (L_70)
		{
			goto IL_012a;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_71 = V_15;
		int32_t L_72 = V_14;
		int32_t L_73 = V_2;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (int16_t)((int16_t)L_73));
	}

IL_01c9:
	{
	}

IL_01ca:
	{
		int32_t L_74 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_01cf:
	{
		int32_t L_75 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = __this->___codeLengthArray_8;
		NullCheck(L_76);
		V_21 = (bool)((((int32_t)L_75) < ((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length))))? 1 : 0);
		bool L_77 = V_21;
		if (L_77)
		{
			goto IL_0060;
		}
	}
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.HuffmanTree::GetNextSymbol(Mapbox.IO.Compression.InputBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HuffmanTree_GetNextSymbol_m0963B6501A1F8E1F03296582F05F7E48354F1447 (HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* __this, InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HuffmanTree_GetNextSymbol_m0963B6501A1F8E1F03296582F05F7E48354F1447_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	uint32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_0 = ___input0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = InputBuffer_TryLoad16Bits_m2918035ABDDFC03F962CA4D7904E14EFE36B964A(L_0, NULL);
		V_0 = L_1;
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_2 = ___input0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputBuffer_get_AvailableBits_mAE1E4F5C31D1FBE2E51EEDDE343F1249ED6853E8(L_2, NULL);
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		V_4 = (-1);
		goto IL_00c9;
	}

IL_001e:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = __this->___table_5;
		uint32_t L_6 = V_0;
		int32_t L_7 = __this->___tableMask_10;
		if ((int64_t)(((int64_t)(((int64_t)(uint64_t)L_6)&((int64_t)L_7)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), HuffmanTree_GetNextSymbol_m0963B6501A1F8E1F03296582F05F7E48354F1447_RuntimeMethod_var);
		NullCheck(L_5);
		intptr_t L_8 = ((intptr_t)((int64_t)(((int64_t)(uint64_t)L_6)&((int64_t)L_7))));
		int16_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		int32_t L_10 = V_1;
		V_5 = (bool)((((int32_t)L_10) < ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_12 = __this->___tableBits_4;
		V_6 = ((int32_t)(1<<((int32_t)(L_12&((int32_t)31)))));
	}

IL_0049:
	{
		int32_t L_13 = V_1;
		V_1 = ((-L_13));
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_6;
		V_7 = (bool)((((int32_t)((int32_t)((int32_t)L_14&(int32_t)L_15))) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_0065;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_17 = __this->___left_6;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int16_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_1 = L_20;
		goto IL_006e;
	}

IL_0065:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_21 = __this->___right_7;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int16_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_1 = L_24;
	}

IL_006e:
	{
		uint32_t L_25 = V_6;
		V_6 = ((int32_t)((int32_t)L_25<<1));
		int32_t L_26 = V_1;
		V_8 = (bool)((((int32_t)L_26) < ((int32_t)0))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_0049;
		}
	}
	{
	}

IL_0080:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___codeLengthArray_8;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_2 = L_31;
		int32_t L_32 = V_2;
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_9;
		if (!L_33)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_34;
		L_34 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB35DE45BF13FD662B11D547D43F796EC31AFD6B8)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_35 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_35, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HuffmanTree_GetNextSymbol_m0963B6501A1F8E1F03296582F05F7E48354F1447_RuntimeMethod_var)));
	}

IL_00a7:
	{
		int32_t L_36 = V_2;
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_37 = ___input0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = InputBuffer_get_AvailableBits_mAE1E4F5C31D1FBE2E51EEDDE343F1249ED6853E8(L_37, NULL);
		V_10 = (bool)((((int32_t)L_36) > ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_00bc;
		}
	}
	{
		V_4 = (-1);
		goto IL_00c9;
	}

IL_00bc:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_40 = ___input0;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		InputBuffer_SkipBits_m2D4AC7BB37041E06B81FCB6655E44EA7746EE1F4(L_40, L_41, NULL);
		int32_t L_42 = V_1;
		V_4 = L_42;
		goto IL_00c9;
	}

IL_00c9:
	{
		int32_t L_43 = V_4;
		return L_43;
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
// System.Void Mapbox.IO.Compression.Inflater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater__ctor_mCB225D9EA432D1FF30595E2D79A4A38F1B46950B (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___blockLengthBuffer_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blockLengthBuffer_13), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* L_1 = (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4*)il2cpp_codegen_object_new(OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OutputWindow__ctor_mAD92ABCC3584FA158089D13E76AAE2C94626A179(L_1, NULL);
		__this->___output_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___output_5), (void*)L_1);
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_2 = (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E*)il2cpp_codegen_object_new(InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InputBuffer__ctor_m02FA7242E6D9ABAF8522D3AEEC5823160EFA53AD(L_2, NULL);
		__this->___input_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_6), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)320));
		__this->___codeList_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___codeList_24), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		__this->___codeLengthTreeCodeLength_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___codeLengthTreeCodeLength_25), (void*)L_4);
		Inflater_Reset_m62602B3B8299F8A708360C6E4C4001513B50C6A8(__this, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.Inflater::SetFileFormatReader(Mapbox.IO.Compression.IFileFormatReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater_SetFileFormatReader_mC25CFDAE1F752A245F3DC0E0001ABE3E56E7EA46 (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, RuntimeObject* ___reader0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___reader0;
		__this->___formatReader_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___formatReader_27), (void*)L_0);
		__this->___hasFormatReader_10 = (bool)1;
		Inflater_Reset_m62602B3B8299F8A708360C6E4C4001513B50C6A8(__this, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.Inflater::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater_Reset_m62602B3B8299F8A708360C6E4C4001513B50C6A8 (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___hasFormatReader_10;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		__this->___state_9 = 0;
		goto IL_001f;
	}

IL_0016:
	{
		__this->___state_9 = 2;
	}

IL_001f:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.Inflater::SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater_SetInput_m897D9DE958E7F49822A09AA14DDAD66C0853219B (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputBytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_0 = __this->___input_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inputBytes0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		InputBuffer_SetInput_m1D57D9EBFFBEB01344FD66AC4164637CAC1B7DE4(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::Finished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_Finished_m580DBA6373FE81BB3D7711C925E0547B00D675D6 (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___state_9;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)24))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->___state_9;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)((int32_t)23)))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Mapbox.IO.Compression.Inflater::get_AvailableOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflater_get_AvailableOutput_m5E699B066F68AC3EB1C27DFEC231EE734E7224BD (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* L_0 = __this->___output_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = OutputWindow_get_AvailableBytes_m5E288A82D33B9F417879C768770A876D9CAE1052(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_NeedsInput_mE7D59E29E78279ED592612274C0CA2C906A4E4A2 (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_0 = __this->___input_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputBuffer_NeedsInput_m65B019693BC2690818A827A6509D8DDD2180360A(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Mapbox.IO.Compression.Inflater::Inflate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflater_Inflate_m1A3DDCA030A23AF6D2CB0D0266F27353AD2D601E (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileFormatReader_t3F74F1C2BFE9E987E33D8D9C74837B2C3DFAC2F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t G_B10_0 = 0;
	{
		V_0 = 0;
	}

IL_0003:
	{
		OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* L_0 = __this->___output_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bytes0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = OutputWindow_CopyTo_mD47721B6BBB430A1E6FD46C2BD94F96CCF8E5B19(L_0, L_1, L_2, L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		bool L_7 = __this->___hasFormatReader_10;
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_9 = __this->___formatReader_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___bytes0;
		int32_t L_11 = ___offset1;
		int32_t L_12 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(2 /* System.Void Mapbox.IO.Compression.IFileFormatReader::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32) */, IFileFormatReader_t3F74F1C2BFE9E987E33D8D9C74837B2C3DFAC2F7_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_12);
	}

IL_0037:
	{
		int32_t L_13 = ___offset1;
		int32_t L_14 = V_1;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
		int32_t L_17 = ___length2;
		int32_t L_18 = V_1;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
	}

IL_0046:
	{
		int32_t L_19 = ___length2;
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0053;
		}
	}
	{
		goto IL_006b;
	}

IL_0053:
	{
		bool L_21;
		L_21 = Inflater_Finished_m580DBA6373FE81BB3D7711C925E0547B00D675D6(__this, NULL);
		if (L_21)
		{
			goto IL_0064;
		}
	}
	{
		bool L_22;
		L_22 = Inflater_Decode_m09B0C5EDF78C72BC8420398503C12172C12C6A44(__this, NULL);
		G_B10_0 = ((int32_t)(L_22));
		goto IL_0065;
	}

IL_0064:
	{
		G_B10_0 = 0;
	}

IL_0065:
	{
		V_5 = (bool)G_B10_0;
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0003;
		}
	}

IL_006b:
	{
		int32_t L_24 = __this->___state_9;
		V_6 = (bool)((((int32_t)L_24) == ((int32_t)((int32_t)23)))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_009f;
		}
	}
	{
		OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* L_26 = __this->___output_5;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = OutputWindow_get_AvailableBytes_m5E288A82D33B9F417879C768770A876D9CAE1052(L_26, NULL);
		V_7 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_009e;
		}
	}
	{
		RuntimeObject* L_29 = __this->___formatReader_27;
		NullCheck(L_29);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Mapbox.IO.Compression.IFileFormatReader::Validate() */, IFileFormatReader_t3F74F1C2BFE9E987E33D8D9C74837B2C3DFAC2F7_il2cpp_TypeInfo_var, L_29);
	}

IL_009e:
	{
	}

IL_009f:
	{
		int32_t L_30 = V_0;
		V_8 = L_30;
		goto IL_00a4;
	}

IL_00a4:
	{
		int32_t L_31 = V_8;
		return L_31;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::Decode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_Decode_m09B0C5EDF78C72BC8420398503C12172C12C6A44 (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileFormatReader_t3F74F1C2BFE9E987E33D8D9C74837B2C3DFAC2F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B43_0 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		bool L_0;
		L_0 = Inflater_Finished_m580DBA6373FE81BB3D7711C925E0547B00D675D6(__this, NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0274;
	}

IL_0017:
	{
		bool L_2 = __this->___hasFormatReader_10;
		V_4 = L_2;
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_4 = __this->___state_9;
		V_5 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		RuntimeObject* L_6 = __this->___formatReader_27;
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_7 = __this->___input_6;
		NullCheck(L_6);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* >::Invoke(0 /* System.Boolean Mapbox.IO.Compression.IFileFormatReader::ReadHeader(Mapbox.IO.Compression.InputBuffer) */, IFileFormatReader_t3F74F1C2BFE9E987E33D8D9C74837B2C3DFAC2F7_il2cpp_TypeInfo_var, L_6, L_7);
		V_6 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0274;
	}

IL_0059:
	{
		__this->___state_9 = 2;
		goto IL_00b1;
	}

IL_0063:
	{
		int32_t L_10 = __this->___state_9;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)21))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_11 = __this->___state_9;
		G_B10_0 = ((((int32_t)L_11) == ((int32_t)((int32_t)22)))? 1 : 0);
		goto IL_007a;
	}

IL_0079:
	{
		G_B10_0 = 1;
	}

IL_007a:
	{
		V_7 = (bool)G_B10_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00b1;
		}
	}
	{
		RuntimeObject* L_13 = __this->___formatReader_27;
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_14 = __this->___input_6;
		NullCheck(L_13);
		bool L_15;
		L_15 = InterfaceFuncInvoker1< bool, InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* >::Invoke(1 /* System.Boolean Mapbox.IO.Compression.IFileFormatReader::ReadFooter(Mapbox.IO.Compression.InputBuffer) */, IFileFormatReader_t3F74F1C2BFE9E987E33D8D9C74837B2C3DFAC2F7_il2cpp_TypeInfo_var, L_13, L_14);
		V_8 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_00a2;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0274;
	}

IL_00a2:
	{
		__this->___state_9 = ((int32_t)23);
		V_3 = (bool)1;
		goto IL_0274;
	}

IL_00b1:
	{
	}

IL_00b2:
	{
		int32_t L_17 = __this->___state_9;
		V_9 = (bool)((((int32_t)L_17) == ((int32_t)2))? 1 : 0);
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_00f8;
		}
	}
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_19 = __this->___input_6;
		NullCheck(L_19);
		bool L_20;
		L_20 = InputBuffer_EnsureBitsAvailable_mA2340114DDD4F3519738B6939BC97805C82C1752(L_19, 1, NULL);
		V_10 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_10;
		if (!L_21)
		{
			goto IL_00de;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0274;
	}

IL_00de:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_22 = __this->___input_6;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_22, 1, NULL);
		__this->___bfinal_11 = L_23;
		__this->___state_9 = 3;
	}

IL_00f8:
	{
		int32_t L_24 = __this->___state_9;
		V_11 = (bool)((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
		bool L_25 = V_11;
		if (!L_25)
		{
			goto IL_01b9;
		}
	}
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_26 = __this->___input_6;
		NullCheck(L_26);
		bool L_27;
		L_27 = InputBuffer_EnsureBitsAvailable_mA2340114DDD4F3519738B6939BC97805C82C1752(L_26, 2, NULL);
		V_12 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_12;
		if (!L_28)
		{
			goto IL_012f;
		}
	}
	{
		__this->___state_9 = 3;
		V_3 = (bool)0;
		goto IL_0274;
	}

IL_012f:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_29 = __this->___input_6;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_29, 2, NULL);
		__this->___blockType_12 = L_30;
		int32_t L_31 = __this->___blockType_12;
		V_13 = (bool)((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		bool L_32 = V_13;
		if (!L_32)
		{
			goto IL_015b;
		}
	}
	{
		__this->___state_9 = 4;
		goto IL_01b8;
	}

IL_015b:
	{
		int32_t L_33 = __this->___blockType_12;
		V_14 = (bool)((((int32_t)L_33) == ((int32_t)1))? 1 : 0);
		bool L_34 = V_14;
		if (!L_34)
		{
			goto IL_018c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var);
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_35;
		L_35 = HuffmanTree_get_StaticLiteralLengthTree_m2FF0234A10D1194B00B4BA8AC63AA391DA55F2BA(NULL);
		__this->___literalLengthTree_7 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___literalLengthTree_7), (void*)L_35);
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_36;
		L_36 = HuffmanTree_get_StaticDistanceTree_m383FCA4999BB18DCE35BE0272D2C98B28919012B(NULL);
		__this->___distanceTree_8 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___distanceTree_8), (void*)L_36);
		__this->___state_9 = ((int32_t)10);
		goto IL_01b8;
	}

IL_018c:
	{
		int32_t L_37 = __this->___blockType_12;
		V_15 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_15;
		if (!L_38)
		{
			goto IL_01a7;
		}
	}
	{
		__this->___state_9 = ((int32_t)15);
		goto IL_01b8;
	}

IL_01a7:
	{
		String_t* L_39;
		L_39 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71941A6CD1B2B7C0B750E2D670E2625BB278E19B)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_40 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_40);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_40, L_39, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_Decode_m09B0C5EDF78C72BC8420398503C12172C12C6A44_RuntimeMethod_var)));
	}

IL_01b8:
	{
	}

IL_01b9:
	{
		int32_t L_41 = __this->___blockType_12;
		V_16 = (bool)((((int32_t)L_41) == ((int32_t)2))? 1 : 0);
		bool L_42 = V_16;
		if (!L_42)
		{
			goto IL_01f2;
		}
	}
	{
		int32_t L_43 = __this->___state_9;
		V_17 = (bool)((((int32_t)L_43) < ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_44 = V_17;
		if (!L_44)
		{
			goto IL_01e4;
		}
	}
	{
		bool L_45;
		L_45 = Inflater_DecodeDynamicBlockHeader_m9A9DEEB9DFBC34B4DCBBFD984E3360144204BC6A(__this, NULL);
		V_1 = L_45;
		goto IL_01ef;
	}

IL_01e4:
	{
		bool L_46;
		L_46 = Inflater_DecodeBlock_mACC6605F3D5192300863753EF00F8A8EA7EF327F(__this, (&V_0), NULL);
		V_1 = L_46;
	}

IL_01ef:
	{
		goto IL_023b;
	}

IL_01f2:
	{
		int32_t L_47 = __this->___blockType_12;
		V_18 = (bool)((((int32_t)L_47) == ((int32_t)1))? 1 : 0);
		bool L_48 = V_18;
		if (!L_48)
		{
			goto IL_020e;
		}
	}
	{
		bool L_49;
		L_49 = Inflater_DecodeBlock_mACC6605F3D5192300863753EF00F8A8EA7EF327F(__this, (&V_0), NULL);
		V_1 = L_49;
		goto IL_023b;
	}

IL_020e:
	{
		int32_t L_50 = __this->___blockType_12;
		V_19 = (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_19;
		if (!L_51)
		{
			goto IL_022a;
		}
	}
	{
		bool L_52;
		L_52 = Inflater_DecodeUncompressedBlock_m9B99CDA2EE6803EBECFD13FBC49FD493ACF4FFD1(__this, (&V_0), NULL);
		V_1 = L_52;
		goto IL_023b;
	}

IL_022a:
	{
		String_t* L_53;
		L_53 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71941A6CD1B2B7C0B750E2D670E2625BB278E19B)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_54 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_54);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_54, L_53, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_Decode_m09B0C5EDF78C72BC8420398503C12172C12C6A44_RuntimeMethod_var)));
	}

IL_023b:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_0249;
		}
	}
	{
		int32_t L_56 = __this->___bfinal_11;
		G_B43_0 = ((!(((uint32_t)L_56) <= ((uint32_t)0)))? 1 : 0);
		goto IL_024a;
	}

IL_0249:
	{
		G_B43_0 = 0;
	}

IL_024a:
	{
		V_20 = (bool)G_B43_0;
		bool L_57 = V_20;
		if (!L_57)
		{
			goto IL_0270;
		}
	}
	{
		bool L_58 = __this->___hasFormatReader_10;
		V_21 = L_58;
		bool L_59 = V_21;
		if (!L_59)
		{
			goto IL_0267;
		}
	}
	{
		__this->___state_9 = ((int32_t)21);
		goto IL_026f;
	}

IL_0267:
	{
		__this->___state_9 = ((int32_t)24);
	}

IL_026f:
	{
	}

IL_0270:
	{
		bool L_60 = V_1;
		V_3 = L_60;
		goto IL_0274;
	}

IL_0274:
	{
		bool L_61 = V_3;
		return L_61;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeUncompressedBlock(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_DecodeUncompressedBlock_m9B99CDA2EE6803EBECFD13FBC49FD493ACF4FFD1 (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, bool* ___end_of_block0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		bool* L_0 = ___end_of_block0;
		*((int8_t*)L_0) = (int8_t)0;
		goto IL_0180;
	}

IL_0009:
	{
		int32_t L_1 = __this->___state_9;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)15))))
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_004d;
			}
			case 5:
			{
				goto IL_00ff;
			}
		}
	}
	{
		goto IL_0163;
	}

IL_0037:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_3 = __this->___input_6;
		NullCheck(L_3);
		InputBuffer_SkipToByteBoundary_m6D66238637C2C43C69B26F118BED039EA5469F96(L_3, NULL);
		__this->___state_9 = ((int32_t)16);
		goto IL_004d;
	}

IL_004d:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_4 = __this->___input_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_4, 8, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_0188;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___blockLengthBuffer_13;
		int32_t L_9 = __this->___state_9;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, ((int32_t)16)))), (uint8_t)((int32_t)(uint8_t)L_10));
		int32_t L_11 = __this->___state_9;
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)((int32_t)19)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_00ec;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___blockLengthBuffer_13;
		NullCheck(L_13);
		int32_t L_14 = 0;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___blockLengthBuffer_13;
		NullCheck(L_16);
		int32_t L_17 = 1;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		__this->___blockLength_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, ((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)256)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___blockLengthBuffer_13;
		NullCheck(L_19);
		int32_t L_20 = 2;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___blockLengthBuffer_13;
		NullCheck(L_22);
		int32_t L_23 = 3;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, ((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)256)))));
		int32_t L_25 = __this->___blockLength_14;
		int32_t L_26 = V_6;
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)(uint16_t)L_25)) == ((int32_t)((int32_t)(uint16_t)((~L_26)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00eb;
		}
	}
	{
		String_t* L_28;
		L_28 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralABDBE2717F62037C4CA1A77B2864BC2457804361)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_29 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_29, L_28, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeUncompressedBlock_m9B99CDA2EE6803EBECFD13FBC49FD493ACF4FFD1_RuntimeMethod_var)));
	}

IL_00eb:
	{
	}

IL_00ec:
	{
		int32_t L_30 = __this->___state_9;
		__this->___state_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, 1));
		goto IL_017f;
	}

IL_00ff:
	{
		OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* L_31 = __this->___output_5;
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_32 = __this->___input_6;
		int32_t L_33 = __this->___blockLength_14;
		NullCheck(L_31);
		int32_t L_34;
		L_34 = OutputWindow_CopyFrom_m4ABB062840FCEC3ED1878C02D684DDCE5E691EDA(L_31, L_32, L_33, NULL);
		V_2 = L_34;
		int32_t L_35 = __this->___blockLength_14;
		int32_t L_36 = V_2;
		__this->___blockLength_14 = ((int32_t)il2cpp_codegen_subtract(L_35, L_36));
		int32_t L_37 = __this->___blockLength_14;
		V_8 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_8;
		if (!L_38)
		{
			goto IL_0144;
		}
	}
	{
		__this->___state_9 = 2;
		bool* L_39 = ___end_of_block0;
		*((int8_t*)L_39) = (int8_t)1;
		V_4 = (bool)1;
		goto IL_0188;
	}

IL_0144:
	{
		OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* L_40 = __this->___output_5;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = OutputWindow_get_FreeBytes_mB1E9BCD46AE900C54B1D18A9BB0A17A799C40554(L_40, NULL);
		V_9 = (bool)((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_9;
		if (!L_42)
		{
			goto IL_015e;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_0188;
	}

IL_015e:
	{
		V_4 = (bool)0;
		goto IL_0188;
	}

IL_0163:
	{
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DA490CA6A9F70C8AFCBE8CB3CB47F96773F1B9F)), NULL);
		String_t* L_43;
		L_43 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71C28F1E716C64C485CEDD7929D586241D1FA89B)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_44 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_44);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_44, L_43, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeUncompressedBlock_m9B99CDA2EE6803EBECFD13FBC49FD493ACF4FFD1_RuntimeMethod_var)));
	}

IL_017f:
	{
	}

IL_0180:
	{
		V_10 = (bool)1;
		goto IL_0009;
	}

IL_0188:
	{
		bool L_45 = V_4;
		return L_45;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeBlock(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_DecodeBlock_mACC6605F3D5192300863753EF00F8A8EA7EF327F (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, bool* ___end_of_block_code_seen0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FC50567C608356789F168FAB22BFF661DEE3513);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB646107306B4C954FBAB60DFA719BF11291B7988);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	int32_t G_B16_0 = 0;
	int32_t G_B27_0 = 0;
	{
		bool* L_0 = ___end_of_block_code_seen0;
		*((int8_t*)L_0) = (int8_t)0;
		OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* L_1 = __this->___output_5;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = OutputWindow_get_FreeBytes_mB1E9BCD46AE900C54B1D18A9BB0A17A799C40554(L_1, NULL);
		V_0 = L_2;
		goto IL_031a;
	}

IL_0015:
	{
		int32_t L_3 = __this->___state_9;
		V_2 = L_3;
		int32_t L_4 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)10))))
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0142;
			}
			case 2:
			{
				goto IL_01d6;
			}
			case 3:
			{
				goto IL_025c;
			}
		}
	}
	{
		goto IL_02fd;
	}

IL_003b:
	{
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_5 = __this->___literalLengthTree_7;
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_6 = __this->___input_6;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = HuffmanTree_GetNextSymbol_m0963B6501A1F8E1F03296582F05F7E48354F1447(L_5, L_6, NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		V_4 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0330;
	}

IL_0060:
	{
		int32_t L_10 = V_1;
		V_6 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)256)))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* L_12 = __this->___output_5;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		OutputWindow_Write_m086FF0522310C924F364A3A715D3046C231A530A(L_12, (uint8_t)((int32_t)(uint8_t)L_13), NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_013d;
	}

IL_0087:
	{
		int32_t L_15 = V_1;
		V_7 = (bool)((((int32_t)L_15) == ((int32_t)((int32_t)256)))? 1 : 0);
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_00a8;
		}
	}
	{
		bool* L_17 = ___end_of_block_code_seen0;
		*((int8_t*)L_17) = (int8_t)1;
		__this->___state_9 = 2;
		V_5 = (bool)1;
		goto IL_0330;
	}

IL_00a8:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)257)));
		int32_t L_19 = V_1;
		V_8 = (bool)((((int32_t)L_19) < ((int32_t)8))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		__this->___extraBits_17 = 0;
		goto IL_0134;
	}

IL_00ca:
	{
		int32_t L_22 = V_1;
		V_9 = (bool)((((int32_t)L_22) == ((int32_t)((int32_t)28)))? 1 : 0);
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e6;
		}
	}
	{
		V_1 = ((int32_t)258);
		__this->___extraBits_17 = 0;
		goto IL_0134;
	}

IL_00e6:
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_25 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___extraLengthBits_0;
		NullCheck(L_26);
		G_B16_0 = ((((int32_t)((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00fb;
	}

IL_00fa:
	{
		G_B16_0 = 1;
	}

IL_00fb:
	{
		V_10 = (bool)G_B16_0;
		bool L_27 = V_10;
		if (!L_27)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_28;
		L_28 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_29 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_29, L_28, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeBlock_mACC6605F3D5192300863753EF00F8A8EA7EF327F_RuntimeMethod_var)));
	}

IL_0112:
	{
		il2cpp_codegen_runtime_class_init_inline(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___extraLengthBits_0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		__this->___extraBits_17 = L_33;
		int32_t L_34 = __this->___extraBits_17;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((!(((uint32_t)L_34) <= ((uint32_t)0)))? 1 : 0), _stringLiteralB646107306B4C954FBAB60DFA719BF11291B7988, NULL);
	}

IL_0134:
	{
		int32_t L_35 = V_1;
		__this->___length_15 = L_35;
		goto IL_0142;
	}

IL_013d:
	{
		goto IL_0319;
	}

IL_0142:
	{
		int32_t L_36 = __this->___extraBits_17;
		V_11 = (bool)((((int32_t)L_36) > ((int32_t)0))? 1 : 0);
		bool L_37 = V_11;
		if (!L_37)
		{
			goto IL_01cc;
		}
	}
	{
		__this->___state_9 = ((int32_t)11);
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_38 = __this->___input_6;
		int32_t L_39 = __this->___extraBits_17;
		NullCheck(L_38);
		int32_t L_40;
		L_40 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_38, L_39, NULL);
		V_12 = L_40;
		int32_t L_41 = V_12;
		V_13 = (bool)((((int32_t)L_41) < ((int32_t)0))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_0181;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0330;
	}

IL_0181:
	{
		int32_t L_43 = __this->___length_15;
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_44 = __this->___length_15;
		il2cpp_codegen_runtime_class_init_inline(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___lengthBase_1;
		NullCheck(L_45);
		G_B27_0 = ((((int32_t)((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_019f;
	}

IL_019e:
	{
		G_B27_0 = 1;
	}

IL_019f:
	{
		V_14 = (bool)G_B27_0;
		bool L_46 = V_14;
		if (!L_46)
		{
			goto IL_01b6;
		}
	}
	{
		String_t* L_47;
		L_47 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_48 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_48);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_48, L_47, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeBlock_mACC6605F3D5192300863753EF00F8A8EA7EF327F_RuntimeMethod_var)));
	}

IL_01b6:
	{
		il2cpp_codegen_runtime_class_init_inline(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = ((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___lengthBase_1;
		int32_t L_50 = __this->___length_15;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = V_12;
		__this->___length_15 = ((int32_t)il2cpp_codegen_add(L_52, L_53));
	}

IL_01cc:
	{
		__this->___state_9 = ((int32_t)12);
		goto IL_01d6;
	}

IL_01d6:
	{
		int32_t L_54 = __this->___blockType_12;
		V_15 = (bool)((((int32_t)L_54) == ((int32_t)2))? 1 : 0);
		bool L_55 = V_15;
		if (!L_55)
		{
			goto IL_0200;
		}
	}
	{
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_56 = __this->___distanceTree_8;
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_57 = __this->___input_6;
		NullCheck(L_56);
		int32_t L_58;
		L_58 = HuffmanTree_GetNextSymbol_m0963B6501A1F8E1F03296582F05F7E48354F1447(L_56, L_57, NULL);
		__this->___distanceCode_16 = L_58;
		goto IL_023a;
	}

IL_0200:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_59 = __this->___input_6;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_59, 5, NULL);
		__this->___distanceCode_16 = L_60;
		int32_t L_61 = __this->___distanceCode_16;
		V_16 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_16;
		if (!L_62)
		{
			goto IL_0239;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___staticDistanceTreeTable_4;
		int32_t L_64 = __this->___distanceCode_16;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		uint8_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		__this->___distanceCode_16 = L_66;
	}

IL_0239:
	{
	}

IL_023a:
	{
		int32_t L_67 = __this->___distanceCode_16;
		V_17 = (bool)((((int32_t)L_67) < ((int32_t)0))? 1 : 0);
		bool L_68 = V_17;
		if (!L_68)
		{
			goto IL_0252;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0330;
	}

IL_0252:
	{
		__this->___state_9 = ((int32_t)13);
		goto IL_025c;
	}

IL_025c:
	{
		int32_t L_69 = __this->___distanceCode_16;
		V_18 = (bool)((((int32_t)L_69) > ((int32_t)3))? 1 : 0);
		bool L_70 = V_18;
		if (!L_70)
		{
			goto IL_02b6;
		}
	}
	{
		int32_t L_71 = __this->___distanceCode_16;
		__this->___extraBits_17 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_71, 2))>>1));
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_72 = __this->___input_6;
		int32_t L_73 = __this->___extraBits_17;
		NullCheck(L_72);
		int32_t L_74;
		L_74 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_72, L_73, NULL);
		V_19 = L_74;
		int32_t L_75 = V_19;
		V_20 = (bool)((((int32_t)L_75) < ((int32_t)0))? 1 : 0);
		bool L_76 = V_20;
		if (!L_76)
		{
			goto IL_02a3;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0330;
	}

IL_02a3:
	{
		il2cpp_codegen_runtime_class_init_inline(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = ((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___distanceBasePosition_2;
		int32_t L_78 = __this->___distanceCode_16;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		int32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		int32_t L_81 = V_19;
		V_3 = ((int32_t)il2cpp_codegen_add(L_80, L_81));
		goto IL_02c1;
	}

IL_02b6:
	{
		int32_t L_82 = __this->___distanceCode_16;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_02c1:
	{
		int32_t L_83 = V_0;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_83) < ((int32_t)((int32_t)258)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral6FC50567C608356789F168FAB22BFF661DEE3513, NULL);
		OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* L_84 = __this->___output_5;
		int32_t L_85 = __this->___length_15;
		int32_t L_86 = V_3;
		NullCheck(L_84);
		OutputWindow_WriteLengthDistance_m3AA7C190F1B221E704C83060F21B57A1C28B3216(L_84, L_85, L_86, NULL);
		int32_t L_87 = V_0;
		int32_t L_88 = __this->___length_15;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_87, L_88));
		__this->___state_9 = ((int32_t)10);
		goto IL_0319;
	}

IL_02fd:
	{
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DA490CA6A9F70C8AFCBE8CB3CB47F96773F1B9F)), NULL);
		String_t* L_89;
		L_89 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71C28F1E716C64C485CEDD7929D586241D1FA89B)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_90 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_90);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_90, L_89, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_90, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeBlock_mACC6605F3D5192300863753EF00F8A8EA7EF327F_RuntimeMethod_var)));
	}

IL_0319:
	{
	}

IL_031a:
	{
		int32_t L_91 = V_0;
		V_21 = (bool)((((int32_t)L_91) > ((int32_t)((int32_t)258)))? 1 : 0);
		bool L_92 = V_21;
		if (L_92)
		{
			goto IL_0015;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_0330;
	}

IL_0330:
	{
		bool L_93 = V_5;
		return L_93;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeDynamicBlockHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Inflater_DecodeDynamicBlockHeader_m9A9DEEB9DFBC34B4DCBBFD984E3360144204BC6A (Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	uint8_t V_19 = 0x0;
	bool V_20 = false;
	bool V_21 = false;
	int32_t V_22 = 0;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	int32_t V_26 = 0;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	{
		int32_t L_0 = __this->___state_9;
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 4)))
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0070;
			}
			case 2:
			{
				goto IL_00b1;
			}
			case 3:
			{
				goto IL_00f9;
			}
			case 4:
			{
				goto IL_01be;
			}
			case 5:
			{
				goto IL_01be;
			}
		}
	}
	{
		goto IL_040a;
	}

IL_002d:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_2 = __this->___input_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_2, 5, NULL);
		__this->___literalLengthCodeCount_19 = L_3;
		int32_t L_4 = __this->___literalLengthCodeCount_19;
		V_3 = (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_0055:
	{
		int32_t L_6 = __this->___literalLengthCodeCount_19;
		__this->___literalLengthCodeCount_19 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)257)));
		__this->___state_9 = 5;
		goto IL_0070;
	}

IL_0070:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_7 = __this->___input_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_7, 5, NULL);
		__this->___distanceCodeCount_20 = L_8;
		int32_t L_9 = __this->___distanceCodeCount_20;
		V_5 = (bool)((((int32_t)L_9) < ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_009a;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_009a:
	{
		int32_t L_11 = __this->___distanceCodeCount_20;
		__this->___distanceCodeCount_20 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		__this->___state_9 = 6;
		goto IL_00b1;
	}

IL_00b1:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_12 = __this->___input_6;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_12, 4, NULL);
		__this->___codeLengthCodeCount_21 = L_13;
		int32_t L_14 = __this->___codeLengthCodeCount_21;
		V_6 = (bool)((((int32_t)L_14) < ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_00db;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_00db:
	{
		int32_t L_16 = __this->___codeLengthCodeCount_21;
		__this->___codeLengthCodeCount_21 = ((int32_t)il2cpp_codegen_add(L_16, 4));
		__this->___loopCounter_18 = 0;
		__this->___state_9 = 7;
		goto IL_00f9;
	}

IL_00f9:
	{
		goto IL_0143;
	}

IL_00fb:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_17 = __this->___input_6;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_17, 3, NULL);
		V_7 = L_18;
		int32_t L_19 = V_7;
		V_8 = (bool)((((int32_t)L_19) < ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_011e;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_011e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___codeLengthTreeCodeLength_25;
		il2cpp_codegen_runtime_class_init_inline(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___codeOrder_3;
		int32_t L_23 = __this->___loopCounter_18;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_7;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)((int32_t)(uint8_t)L_26));
		int32_t L_27 = __this->___loopCounter_18;
		__this->___loopCounter_18 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0143:
	{
		int32_t L_28 = __this->___loopCounter_18;
		int32_t L_29 = __this->___codeLengthCodeCount_21;
		V_9 = (bool)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_9;
		if (L_30)
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_31 = __this->___codeLengthCodeCount_21;
		V_10 = L_31;
		goto IL_0179;
	}

IL_0161:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___codeLengthTreeCodeLength_25;
		il2cpp_codegen_runtime_class_init_inline(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___codeOrder_3;
		int32_t L_34 = V_10;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)0);
		int32_t L_37 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0179:
	{
		int32_t L_38 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___codeOrder_3;
		NullCheck(L_39);
		V_11 = (bool)((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length))))? 1 : 0);
		bool L_40 = V_11;
		if (L_40)
		{
			goto IL_0161;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___codeLengthTreeCodeLength_25;
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_42 = (HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881*)il2cpp_codegen_object_new(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		HuffmanTree__ctor_mE69681D6A66A5D315F65E5173F057A82C1762139(L_42, L_41, NULL);
		__this->___codeLengthTree_26 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___codeLengthTree_26), (void*)L_42);
		int32_t L_43 = __this->___literalLengthCodeCount_19;
		int32_t L_44 = __this->___distanceCodeCount_20;
		__this->___codeArraySize_22 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
		__this->___loopCounter_18 = 0;
		__this->___state_9 = 8;
		goto IL_01be;
	}

IL_01be:
	{
		goto IL_03f1;
	}

IL_01c3:
	{
		int32_t L_45 = __this->___state_9;
		V_12 = (bool)((((int32_t)L_45) == ((int32_t)8))? 1 : 0);
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_0203;
		}
	}
	{
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_47 = __this->___codeLengthTree_26;
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_48 = __this->___input_6;
		NullCheck(L_47);
		int32_t L_49;
		L_49 = HuffmanTree_GetNextSymbol_m0963B6501A1F8E1F03296582F05F7E48354F1447(L_47, L_48, NULL);
		int32_t L_50 = L_49;
		V_14 = L_50;
		__this->___lengthCode_23 = L_50;
		int32_t L_51 = V_14;
		V_13 = (bool)((((int32_t)L_51) < ((int32_t)0))? 1 : 0);
		bool L_52 = V_13;
		if (!L_52)
		{
			goto IL_0202;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_0202:
	{
	}

IL_0203:
	{
		int32_t L_53 = __this->___lengthCode_23;
		V_15 = (bool)((((int32_t)((((int32_t)L_53) > ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_15;
		if (!L_54)
		{
			goto IL_023f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = __this->___codeList_24;
		int32_t L_56 = __this->___loopCounter_18;
		V_14 = L_56;
		int32_t L_57 = V_14;
		__this->___loopCounter_18 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		int32_t L_58 = V_14;
		int32_t L_59 = __this->___lengthCode_23;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint8_t)((int32_t)(uint8_t)L_59));
		goto IL_03e9;
	}

IL_023f:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_60 = __this->___input_6;
		NullCheck(L_60);
		bool L_61;
		L_61 = InputBuffer_EnsureBitsAvailable_mA2340114DDD4F3519738B6939BC97805C82C1752(L_60, 7, NULL);
		V_17 = (bool)((((int32_t)L_61) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_17;
		if (!L_62)
		{
			goto IL_0266;
		}
	}
	{
		__this->___state_9 = ((int32_t)9);
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_0266:
	{
		int32_t L_63 = __this->___lengthCode_23;
		V_18 = (bool)((((int32_t)L_63) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_64 = V_18;
		if (!L_64)
		{
			goto IL_030b;
		}
	}
	{
		int32_t L_65 = __this->___loopCounter_18;
		V_20 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_20;
		if (!L_66)
		{
			goto IL_0290;
		}
	}
	{
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_67 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_67);
		InvalidDataException__ctor_m583FC070D6C3AB06B93B4762B9EA86E8383249B2(L_67, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_67, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeDynamicBlockHeader_m9A9DEEB9DFBC34B4DCBBFD984E3360144204BC6A_RuntimeMethod_var)));
	}

IL_0290:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = __this->___codeList_24;
		int32_t L_69 = __this->___loopCounter_18;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_subtract(L_69, 1));
		uint8_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_19 = L_71;
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_72 = __this->___input_6;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_72, 2, NULL);
		V_16 = ((int32_t)il2cpp_codegen_add(L_73, 3));
		int32_t L_74 = __this->___loopCounter_18;
		int32_t L_75 = V_16;
		int32_t L_76 = __this->___codeArraySize_22;
		V_21 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_74, L_75))) > ((int32_t)L_76))? 1 : 0);
		bool L_77 = V_21;
		if (!L_77)
		{
			goto IL_02cf;
		}
	}
	{
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_78 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_78);
		InvalidDataException__ctor_m583FC070D6C3AB06B93B4762B9EA86E8383249B2(L_78, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeDynamicBlockHeader_m9A9DEEB9DFBC34B4DCBBFD984E3360144204BC6A_RuntimeMethod_var)));
	}

IL_02cf:
	{
		V_22 = 0;
		goto IL_02f9;
	}

IL_02d4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = __this->___codeList_24;
		int32_t L_80 = __this->___loopCounter_18;
		V_14 = L_80;
		int32_t L_81 = V_14;
		__this->___loopCounter_18 = ((int32_t)il2cpp_codegen_add(L_81, 1));
		int32_t L_82 = V_14;
		uint8_t L_83 = V_19;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (uint8_t)L_83);
		int32_t L_84 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_02f9:
	{
		int32_t L_85 = V_22;
		int32_t L_86 = V_16;
		V_23 = (bool)((((int32_t)L_85) < ((int32_t)L_86))? 1 : 0);
		bool L_87 = V_23;
		if (L_87)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_030b:
	{
		int32_t L_88 = __this->___lengthCode_23;
		V_24 = (bool)((((int32_t)L_88) == ((int32_t)((int32_t)17)))? 1 : 0);
		bool L_89 = V_24;
		if (!L_89)
		{
			goto IL_0382;
		}
	}
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_90 = __this->___input_6;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_90, 3, NULL);
		V_16 = ((int32_t)il2cpp_codegen_add(L_91, 3));
		int32_t L_92 = __this->___loopCounter_18;
		int32_t L_93 = V_16;
		int32_t L_94 = __this->___codeArraySize_22;
		V_25 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_92, L_93))) > ((int32_t)L_94))? 1 : 0);
		bool L_95 = V_25;
		if (!L_95)
		{
			goto IL_034a;
		}
	}
	{
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_96 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_96);
		InvalidDataException__ctor_m583FC070D6C3AB06B93B4762B9EA86E8383249B2(L_96, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_96, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeDynamicBlockHeader_m9A9DEEB9DFBC34B4DCBBFD984E3360144204BC6A_RuntimeMethod_var)));
	}

IL_034a:
	{
		V_26 = 0;
		goto IL_0373;
	}

IL_034f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = __this->___codeList_24;
		int32_t L_98 = __this->___loopCounter_18;
		V_14 = L_98;
		int32_t L_99 = V_14;
		__this->___loopCounter_18 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		int32_t L_100 = V_14;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (uint8_t)0);
		int32_t L_101 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_0373:
	{
		int32_t L_102 = V_26;
		int32_t L_103 = V_16;
		V_27 = (bool)((((int32_t)L_102) < ((int32_t)L_103))? 1 : 0);
		bool L_104 = V_27;
		if (L_104)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0382:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_105 = __this->___input_6;
		NullCheck(L_105);
		int32_t L_106;
		L_106 = InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94(L_105, 7, NULL);
		V_16 = ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)11)));
		int32_t L_107 = __this->___loopCounter_18;
		int32_t L_108 = V_16;
		int32_t L_109 = __this->___codeArraySize_22;
		V_28 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_107, L_108))) > ((int32_t)L_109))? 1 : 0);
		bool L_110 = V_28;
		if (!L_110)
		{
			goto IL_03b2;
		}
	}
	{
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_111 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_111);
		InvalidDataException__ctor_m583FC070D6C3AB06B93B4762B9EA86E8383249B2(L_111, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_111, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeDynamicBlockHeader_m9A9DEEB9DFBC34B4DCBBFD984E3360144204BC6A_RuntimeMethod_var)));
	}

IL_03b2:
	{
		V_29 = 0;
		goto IL_03db;
	}

IL_03b7:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = __this->___codeList_24;
		int32_t L_113 = __this->___loopCounter_18;
		V_14 = L_113;
		int32_t L_114 = V_14;
		__this->___loopCounter_18 = ((int32_t)il2cpp_codegen_add(L_114, 1));
		int32_t L_115 = V_14;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_115), (uint8_t)0);
		int32_t L_116 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_03db:
	{
		int32_t L_117 = V_29;
		int32_t L_118 = V_16;
		V_30 = (bool)((((int32_t)L_117) < ((int32_t)L_118))? 1 : 0);
		bool L_119 = V_30;
		if (L_119)
		{
			goto IL_03b7;
		}
	}
	{
	}

IL_03e8:
	{
	}

IL_03e9:
	{
		__this->___state_9 = 8;
	}

IL_03f1:
	{
		int32_t L_120 = __this->___loopCounter_18;
		int32_t L_121 = __this->___codeArraySize_22;
		V_31 = (bool)((((int32_t)L_120) < ((int32_t)L_121))? 1 : 0);
		bool L_122 = V_31;
		if (L_122)
		{
			goto IL_01c3;
		}
	}
	{
		goto IL_0426;
	}

IL_040a:
	{
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DA490CA6A9F70C8AFCBE8CB3CB47F96773F1B9F)), NULL);
		String_t* L_123;
		L_123 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71C28F1E716C64C485CEDD7929D586241D1FA89B)), NULL);
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_124 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_124);
		InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68(L_124, L_123, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_124, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeDynamicBlockHeader_m9A9DEEB9DFBC34B4DCBBFD984E3360144204BC6A_RuntimeMethod_var)));
	}

IL_0426:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_125 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)288));
		V_0 = L_125;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_126;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_127 = __this->___codeList_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = V_0;
		int32_t L_129 = __this->___literalLengthCodeCount_19;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_127, (RuntimeArray*)L_128, L_129, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_130 = __this->___codeList_24;
		int32_t L_131 = __this->___literalLengthCodeCount_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_132 = V_1;
		int32_t L_133 = __this->___distanceCodeCount_20;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_130, L_131, (RuntimeArray*)L_132, 0, L_133, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_134 = V_0;
		NullCheck(L_134);
		int32_t L_135 = ((int32_t)256);
		uint8_t L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		V_32 = (bool)((((int32_t)L_136) == ((int32_t)0))? 1 : 0);
		bool L_137 = V_32;
		if (!L_137)
		{
			goto IL_047d;
		}
	}
	{
		InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* L_138 = (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686_il2cpp_TypeInfo_var)));
		NullCheck(L_138);
		InvalidDataException__ctor_m583FC070D6C3AB06B93B4762B9EA86E8383249B2(L_138, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_138, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Inflater_DecodeDynamicBlockHeader_m9A9DEEB9DFBC34B4DCBBFD984E3360144204BC6A_RuntimeMethod_var)));
	}

IL_047d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_139 = V_0;
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_140 = (HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881*)il2cpp_codegen_object_new(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var);
		NullCheck(L_140);
		HuffmanTree__ctor_mE69681D6A66A5D315F65E5173F057A82C1762139(L_140, L_139, NULL);
		__this->___literalLengthTree_7 = L_140;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___literalLengthTree_7), (void*)L_140);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141 = V_1;
		HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881* L_142 = (HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881*)il2cpp_codegen_object_new(HuffmanTree_t1D81FF5CE3B7A2A7895BEAE318B74F2E2ED50881_il2cpp_TypeInfo_var);
		NullCheck(L_142);
		HuffmanTree__ctor_mE69681D6A66A5D315F65E5173F057A82C1762139(L_142, L_141, NULL);
		__this->___distanceTree_8 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___distanceTree_8), (void*)L_142);
		__this->___state_9 = ((int32_t)10);
		V_4 = (bool)1;
		goto IL_04a2;
	}

IL_04a2:
	{
		bool L_143 = V_4;
		return L_143;
	}
}
// System.Void Mapbox.IO.Compression.Inflater::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater__cctor_m918DE0EDC4E9644A0FAE127DF627F537C7AE176D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___extraLengthBits_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___extraLengthBits_0), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___lengthBase_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___lengthBase_1), (void*)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___distanceBasePosition_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___distanceBasePosition_2), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___codeOrder_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___codeOrder_3), (void*)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t7CE4C02F9B570E329445368D257404B807E51267____794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_13, L_14, NULL);
		((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___staticDistanceTreeTable_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t6926CB5817A3D37202B3C399933FF8CEF99BD623_il2cpp_TypeInfo_var))->___staticDistanceTreeTable_4), (void*)L_13);
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
// System.Int32 Mapbox.IO.Compression.InputBuffer::get_AvailableBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_get_AvailableBits_mAE1E4F5C31D1FBE2E51EEDDE343F1249ED6853E8 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bitsInBuffer_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.InputBuffer::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_get_AvailableBytes_mC08F1E6928F82FFB0FE74172937E805EFFFD703E (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___end_2;
		int32_t L_1 = __this->___start_1;
		int32_t L_2 = __this->___bitsInBuffer_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), ((int32_t)(L_2/8))));
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Mapbox.IO.Compression.InputBuffer::EnsureBitsAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputBuffer_EnsureBitsAvailable_mA2340114DDD4F3519738B6939BC97805C82C1752 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2723474D1F331B4FF511B1819E392A4051A32AFA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___count0;
		if ((((int32_t)0) >= ((int32_t)L_0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___count0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)G_B3_0, _stringLiteral2723474D1F331B4FF511B1819E392A4051A32AFA, NULL);
		int32_t L_2 = __this->___bitsInBuffer_4;
		int32_t L_3 = ___count0;
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_00db;
		}
	}
	{
		bool L_5;
		L_5 = InputBuffer_NeedsInput_m65B019693BC2690818A827A6509D8DDD2180360A(__this, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00df;
	}

IL_003e:
	{
		uint32_t L_7 = __this->___bitBuffer_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___buffer_0;
		int32_t L_9 = __this->___start_1;
		V_3 = L_9;
		int32_t L_10 = V_3;
		__this->___start_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_3;
		NullCheck(L_8);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = __this->___bitsInBuffer_4;
		__this->___bitBuffer_3 = ((int32_t)((int32_t)L_7|((int32_t)((int32_t)L_13<<((int32_t)(L_14&((int32_t)31)))))));
		int32_t L_15 = __this->___bitsInBuffer_4;
		__this->___bitsInBuffer_4 = ((int32_t)il2cpp_codegen_add(L_15, 8));
		int32_t L_16 = __this->___bitsInBuffer_4;
		int32_t L_17 = ___count0;
		V_4 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00da;
		}
	}
	{
		bool L_19;
		L_19 = InputBuffer_NeedsInput_m65B019693BC2690818A827A6509D8DDD2180360A(__this, NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_009c;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00df;
	}

IL_009c:
	{
		uint32_t L_21 = __this->___bitBuffer_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___buffer_0;
		int32_t L_23 = __this->___start_1;
		V_3 = L_23;
		int32_t L_24 = V_3;
		__this->___start_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = V_3;
		NullCheck(L_22);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = __this->___bitsInBuffer_4;
		__this->___bitBuffer_3 = ((int32_t)((int32_t)L_21|((int32_t)((int32_t)L_27<<((int32_t)(L_28&((int32_t)31)))))));
		int32_t L_29 = __this->___bitsInBuffer_4;
		__this->___bitsInBuffer_4 = ((int32_t)il2cpp_codegen_add(L_29, 8));
	}

IL_00da:
	{
	}

IL_00db:
	{
		V_2 = (bool)1;
		goto IL_00df;
	}

IL_00df:
	{
		bool L_30 = V_2;
		return L_30;
	}
}
// System.UInt32 Mapbox.IO.Compression.InputBuffer::TryLoad16Bits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputBuffer_TryLoad16Bits_m2918035ABDDFC03F962CA4D7904E14EFE36B964A (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	uint32_t V_6 = 0;
	{
		int32_t L_0 = __this->___bitsInBuffer_4;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)8))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_2 = __this->___start_1;
		int32_t L_3 = __this->___end_2;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		uint32_t L_5 = __this->___bitBuffer_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___buffer_0;
		int32_t L_7 = __this->___start_1;
		V_2 = L_7;
		int32_t L_8 = V_2;
		__this->___start_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_2;
		NullCheck(L_6);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = __this->___bitsInBuffer_4;
		__this->___bitBuffer_3 = ((int32_t)((int32_t)L_5|((int32_t)((int32_t)L_11<<((int32_t)(L_12&((int32_t)31)))))));
		int32_t L_13 = __this->___bitsInBuffer_4;
		__this->___bitsInBuffer_4 = ((int32_t)il2cpp_codegen_add(L_13, 8));
	}

IL_0063:
	{
		int32_t L_14 = __this->___start_1;
		int32_t L_15 = __this->___end_2;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		uint32_t L_17 = __this->___bitBuffer_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___buffer_0;
		int32_t L_19 = __this->___start_1;
		V_2 = L_19;
		int32_t L_20 = V_2;
		__this->___start_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_2;
		NullCheck(L_18);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = __this->___bitsInBuffer_4;
		__this->___bitBuffer_3 = ((int32_t)((int32_t)L_17|((int32_t)((int32_t)L_23<<((int32_t)(L_24&((int32_t)31)))))));
		int32_t L_25 = __this->___bitsInBuffer_4;
		__this->___bitsInBuffer_4 = ((int32_t)il2cpp_codegen_add(L_25, 8));
	}

IL_00b4:
	{
		goto IL_011c;
	}

IL_00b7:
	{
		int32_t L_26 = __this->___bitsInBuffer_4;
		V_4 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_28 = __this->___start_1;
		int32_t L_29 = __this->___end_2;
		V_5 = (bool)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_31 = __this->___bitBuffer_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___buffer_0;
		int32_t L_33 = __this->___start_1;
		V_2 = L_33;
		int32_t L_34 = V_2;
		__this->___start_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		int32_t L_35 = V_2;
		NullCheck(L_32);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = __this->___bitsInBuffer_4;
		__this->___bitBuffer_3 = ((int32_t)((int32_t)L_31|((int32_t)((int32_t)L_37<<((int32_t)(L_38&((int32_t)31)))))));
		int32_t L_39 = __this->___bitsInBuffer_4;
		__this->___bitsInBuffer_4 = ((int32_t)il2cpp_codegen_add(L_39, 8));
	}

IL_011b:
	{
	}

IL_011c:
	{
		uint32_t L_40 = __this->___bitBuffer_3;
		V_6 = L_40;
		goto IL_0126;
	}

IL_0126:
	{
		uint32_t L_41 = V_6;
		return L_41;
	}
}
// System.UInt32 Mapbox.IO.Compression.InputBuffer::GetBitMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputBuffer_GetBitMask_m1ED6BF4B44E2F47A93823F5325E112A6D546EB17 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___count0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_0&((int32_t)31))))), 1));
		goto IL_000c;
	}

IL_000c:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.InputBuffer::GetBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_GetBits_mF622F48BD830A757E03636D40AC84CB38C7F0A94 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2723474D1F331B4FF511B1819E392A4051A32AFA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___count0;
		if ((((int32_t)0) >= ((int32_t)L_0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___count0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)G_B3_0, _stringLiteral2723474D1F331B4FF511B1819E392A4051A32AFA, NULL);
		int32_t L_2 = ___count0;
		bool L_3;
		L_3 = InputBuffer_EnsureBitsAvailable_mA2340114DDD4F3519738B6939BC97805C82C1752(__this, L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		V_2 = (-1);
		goto IL_0060;
	}

IL_002e:
	{
		uint32_t L_5 = __this->___bitBuffer_3;
		int32_t L_6 = ___count0;
		uint32_t L_7;
		L_7 = InputBuffer_GetBitMask_m1ED6BF4B44E2F47A93823F5325E112A6D546EB17(__this, L_6, NULL);
		V_0 = ((int32_t)((int32_t)L_5&(int32_t)L_7));
		uint32_t L_8 = __this->___bitBuffer_3;
		int32_t L_9 = ___count0;
		__this->___bitBuffer_3 = ((int32_t)((uint32_t)L_8>>((int32_t)(L_9&((int32_t)31)))));
		int32_t L_10 = __this->___bitsInBuffer_4;
		int32_t L_11 = ___count0;
		__this->___bitsInBuffer_4 = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
		int32_t L_12 = V_0;
		V_2 = L_12;
		goto IL_0060;
	}

IL_0060:
	{
		int32_t L_13 = V_2;
		return L_13;
	}
}
// System.Int32 Mapbox.IO.Compression.InputBuffer::CopyTo(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputBuffer_CopyTo_mC4233012372441594DF0801E1298A95B8E42EB55 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		int32_t L_1 = ___offset1;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		int32_t L_2 = ___length2;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		int32_t L_3 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output0;
		NullCheck(L_4);
		int32_t L_5 = ___length2;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		int32_t L_6 = __this->___bitsInBuffer_4;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((int32_t)(L_6%8))) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = 0;
		goto IL_009a;
	}

IL_0064:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output0;
		int32_t L_8 = ___offset1;
		int32_t L_9 = L_8;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint32_t L_10 = __this->___bitBuffer_3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)L_10));
		uint32_t L_11 = __this->___bitBuffer_3;
		__this->___bitBuffer_3 = ((int32_t)((uint32_t)L_11>>8));
		int32_t L_12 = __this->___bitsInBuffer_4;
		__this->___bitsInBuffer_4 = ((int32_t)il2cpp_codegen_subtract(L_12, 8));
		int32_t L_13 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_009a:
	{
		int32_t L_15 = __this->___bitsInBuffer_4;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_16 = ___length2;
		G_B5_0 = ((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B5_0 = 0;
	}

IL_00aa:
	{
		V_2 = (bool)G_B5_0;
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_18 = ___length2;
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_20 = V_0;
		V_4 = L_20;
		goto IL_0103;
	}

IL_00bc:
	{
		int32_t L_21 = __this->___end_2;
		int32_t L_22 = __this->___start_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
		int32_t L_23 = ___length2;
		int32_t L_24 = V_1;
		V_5 = (bool)((((int32_t)L_23) > ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_26 = V_1;
		___length2 = L_26;
	}

IL_00d9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___buffer_0;
		int32_t L_28 = __this->___start_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___output0;
		int32_t L_30 = ___offset1;
		int32_t L_31 = ___length2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, L_28, (RuntimeArray*)L_29, L_30, L_31, NULL);
		int32_t L_32 = __this->___start_1;
		int32_t L_33 = ___length2;
		__this->___start_1 = ((int32_t)il2cpp_codegen_add(L_32, L_33));
		int32_t L_34 = V_0;
		int32_t L_35 = ___length2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_0103;
	}

IL_0103:
	{
		int32_t L_36 = V_4;
		return L_36;
	}
}
// System.Boolean Mapbox.IO.Compression.InputBuffer::NeedsInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputBuffer_NeedsInput_m65B019693BC2690818A827A6509D8DDD2180360A (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___start_1;
		int32_t L_1 = __this->___end_2;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.IO.Compression.InputBuffer::SetInput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer_SetInput_m1D57D9EBFFBEB01344FD66AC4164637CAC1B7DE4 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buffer0;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		int32_t L_1 = ___offset1;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		int32_t L_2 = ___length2;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		int32_t L_3 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___buffer0;
		NullCheck(L_4);
		int32_t L_5 = ___length2;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		int32_t L_6 = __this->___start_1;
		int32_t L_7 = __this->___end_2;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___buffer0;
		__this->___buffer_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_0), (void*)L_8);
		int32_t L_9 = ___offset1;
		__this->___start_1 = L_9;
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___length2;
		__this->___end_2 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		return;
	}
}
// System.Void Mapbox.IO.Compression.InputBuffer::SkipBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer_SkipBits_m2D4AC7BB37041E06B81FCB6655E44EA7746EE1F4 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, int32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4451CD074D52851117B66787CD1C4ED164A359F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___bitsInBuffer_4;
		int32_t L_1 = ___n0;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral4451CD074D52851117B66787CD1C4ED164A359F2, NULL);
		uint32_t L_2 = __this->___bitBuffer_3;
		int32_t L_3 = ___n0;
		__this->___bitBuffer_3 = ((int32_t)((uint32_t)L_2>>((int32_t)(L_3&((int32_t)31)))));
		int32_t L_4 = __this->___bitsInBuffer_4;
		int32_t L_5 = ___n0;
		__this->___bitsInBuffer_4 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		return;
	}
}
// System.Void Mapbox.IO.Compression.InputBuffer::SkipToByteBoundary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer_SkipToByteBoundary_m6D66238637C2C43C69B26F118BED039EA5469F96 (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___bitBuffer_3;
		int32_t L_1 = __this->___bitsInBuffer_4;
		__this->___bitBuffer_3 = ((int32_t)((uint32_t)L_0>>((int32_t)(((int32_t)(L_1%8))&((int32_t)31)))));
		int32_t L_2 = __this->___bitsInBuffer_4;
		int32_t L_3 = __this->___bitsInBuffer_4;
		__this->___bitsInBuffer_4 = ((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)(L_3%8))));
		return;
	}
}
// System.Void Mapbox.IO.Compression.InputBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBuffer__ctor_m02FA7242E6D9ABAF8522D3AEEC5823160EFA53AD (InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* __this, const RuntimeMethod* method) 
{
	{
		__this->___bitBuffer_3 = 0;
		__this->___bitsInBuffer_4 = 0;
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
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_m583FC070D6C3AB06B93B4762B9EA86E8383249B2 (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2(_stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1, NULL);
		SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5(__this, L_0, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_mF7AFC02F22519BB4811687D84B34216BA1EADF68 (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5(__this, L_0, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_m8D9D14025F76251F0F148B9C88B216E93407A5A9 (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidDataException__ctor_mB237C77307B3FBD2FBBD8F22D358963BF4ED710A (InvalidDataException_tC560D938F14905420CF61F4FE43D2C394D77D686* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879(__this, L_0, L_1, NULL);
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
// MatchState Mapbox.IO.Compression.Match::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match_get_State_mA9B0E46FBC1C129A587F702BEE0E86977943F4FF (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___state_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.Match::set_State(MatchState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_State_m1983564F65AA86C308A37231440EADAEA203C223 (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___state_0 = L_0;
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.Match::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match_get_Position_m7E9F273B0C6434465F2BD89EBD41B504E78F1480 (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___pos_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.Match::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_Position_m4C42A83DC27EF57137CCB5505778962D5596B78C (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___pos_1 = L_0;
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.Match::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Match_get_Length_mEE750F33EE8E6D25E2704B12A7F7C3495C5F25BD (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___len_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.Match::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_Length_m5EB8B04BA1302A494F38CE8E3F748661DE61E562 (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___len_2 = L_0;
		return;
	}
}
// System.Byte Mapbox.IO.Compression.Match::get_Symbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Match_get_Symbol_m1491E93E28C3E8F8D66A215B04606E671C25D1CC (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->___symbol_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.Match::set_Symbol(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match_set_Symbol_m23A2F461208BB113691D801467EF4A546EC16DEE (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___symbol_3 = L_0;
		return;
	}
}
// System.Void Mapbox.IO.Compression.Match::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Match__ctor_mEC516DCEF316ACCEEA99D913DD94E8BC1BB5D6C8 (Match_tE24F1191499FBCE1688612EF41F4FDF6F11512DE* __this, const RuntimeMethod* method) 
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
// System.Void Mapbox.IO.Compression.OutputBuffer::UpdateBuffer(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_UpdateBuffer_m505322686FF9BA1F0AEBBB1479881ED4377EE1BF (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		__this->___byteBuffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___byteBuffer_0), (void*)L_0);
		__this->___pos_1 = 0;
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_BytesWritten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputBuffer_get_BytesWritten_m690E9E94BD2CA4405F345DCFA939DBA6EB5B2FC9 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___pos_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_FreeBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputBuffer_get_FreeBytes_m45F4719ECF04C49E0F14F59242B7D60CD4B2AB19 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___byteBuffer_0;
		NullCheck(L_0);
		int32_t L_1 = __this->___pos_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1));
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteUInt16(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteUInt16_m640BCE61B62609F72B436DBDA1B52EA4679CE7D4 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF67ED7DAD13B0CEEB11470752C36F31095045C60);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = OutputBuffer_get_FreeBytes_m45F4719ECF04C49E0F14F59242B7D60CD4B2AB19(__this, NULL);
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_0) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralF67ED7DAD13B0CEEB11470752C36F31095045C60, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___byteBuffer_0;
		int32_t L_2 = __this->___pos_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->___pos_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		uint16_t L_5 = ___value0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___byteBuffer_0;
		int32_t L_7 = __this->___pos_1;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->___pos_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		uint16_t L_10 = ___value0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_10>>8))));
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBits(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteBits_mBB044A7EB630478018D9452C2260346489DFF7C0 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, int32_t ___n0, uint32_t ___bits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF662EE1DF2B55F36C4CB700B246D3C4E4661AF3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF67ED7DAD13B0CEEB11470752C36F31095045C60);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___n0;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_0) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralF662EE1DF2B55F36C4CB700B246D3C4E4661AF3E, NULL);
		uint32_t L_1 = __this->___bitBuf_2;
		uint32_t L_2 = ___bits1;
		int32_t L_3 = __this->___bitCount_3;
		__this->___bitBuf_2 = ((int32_t)((int32_t)L_1|((int32_t)((int32_t)L_2<<((int32_t)(L_3&((int32_t)31)))))));
		int32_t L_4 = __this->___bitCount_3;
		int32_t L_5 = ___n0;
		__this->___bitCount_3 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int32_t L_6 = __this->___bitCount_3;
		V_0 = (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ce;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___byteBuffer_0;
		NullCheck(L_8);
		int32_t L_9 = __this->___pos_1;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9))) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralF67ED7DAD13B0CEEB11470752C36F31095045C60, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___byteBuffer_0;
		int32_t L_11 = __this->___pos_1;
		V_1 = L_11;
		int32_t L_12 = V_1;
		__this->___pos_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_1;
		uint32_t L_14 = __this->___bitBuf_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___byteBuffer_0;
		int32_t L_16 = __this->___pos_1;
		V_1 = L_16;
		int32_t L_17 = V_1;
		__this->___pos_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_1;
		uint32_t L_19 = __this->___bitBuf_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_19>>8))));
		int32_t L_20 = __this->___bitCount_3;
		__this->___bitCount_3 = ((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)16)));
		uint32_t L_21 = __this->___bitBuf_2;
		__this->___bitBuf_2 = ((int32_t)((uint32_t)L_21>>((int32_t)16)));
	}

IL_00ce:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::FlushBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_FlushBits_m52E15CB4F0197987A0D02E897011FA6FAE77765D (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		goto IL_0040;
	}

IL_0003:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___byteBuffer_0;
		int32_t L_1 = __this->___pos_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___pos_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint32_t L_4 = __this->___bitBuf_2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)L_4));
		int32_t L_5 = __this->___bitCount_3;
		__this->___bitCount_3 = ((int32_t)il2cpp_codegen_subtract(L_5, 8));
		uint32_t L_6 = __this->___bitBuf_2;
		__this->___bitBuf_2 = ((int32_t)((uint32_t)L_6>>8));
	}

IL_0040:
	{
		int32_t L_7 = __this->___bitCount_3;
		V_1 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0003;
		}
	}
	{
		int32_t L_9 = __this->___bitCount_3;
		V_2 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_008c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___byteBuffer_0;
		int32_t L_12 = __this->___pos_1;
		V_0 = L_12;
		int32_t L_13 = V_0;
		__this->___pos_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_0;
		uint32_t L_15 = __this->___bitBuf_2;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)(uint8_t)L_15));
		__this->___bitBuf_2 = 0;
		__this->___bitCount_3 = 0;
	}

IL_008c:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteBytes_m58E21972B6D60FDD61B3AAC3997ACEC0388E9586 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteArray0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3351F4504223173C7A5AA816C29AD8A199461EAA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = OutputBuffer_get_FreeBytes_m45F4719ECF04C49E0F14F59242B7D60CD4B2AB19(__this, NULL);
		int32_t L_1 = ___count2;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral3351F4504223173C7A5AA816C29AD8A199461EAA, NULL);
		int32_t L_2 = __this->___bitCount_3;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___byteArray0;
		int32_t L_5 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___byteBuffer_0;
		int32_t L_7 = __this->___pos_1;
		int32_t L_8 = ___count2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, L_5, (RuntimeArray*)L_6, L_7, L_8, NULL);
		int32_t L_9 = __this->___pos_1;
		int32_t L_10 = ___count2;
		__this->___pos_1 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		goto IL_0058;
	}

IL_004c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___byteArray0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = ___count2;
		OutputBuffer_WriteBytesUnaligned_m69374E158A11AE566676E5AFECE404B8E4C9C67A(__this, L_11, L_12, L_13, NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBytesUnaligned(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteBytesUnaligned_m69374E158A11AE566676E5AFECE404B8E4C9C67A (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___byteArray0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0005:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___byteArray0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		uint8_t L_5 = V_1;
		OutputBuffer_WriteByteUnaligned_mEEF6833E7739B3A1AF64393DB246C9538582E5A8(__this, L_5, NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0019:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___count2;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteByteUnaligned(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_WriteByteUnaligned_mEEF6833E7739B3A1AF64393DB246C9538582E5A8 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, uint8_t ___b0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___b0;
		OutputBuffer_WriteBits_mBB044A7EB630478018D9452C2260346489DFF7C0(__this, 8, L_0, NULL);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_BitsInBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputBuffer_get_BitsInBuffer_m9CFD0218BE5BF6225AAD58BD10321387040097E5 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bitCount_3;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_0/8)), 1));
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Mapbox.IO.Compression.OutputBuffer/BufferState Mapbox.IO.Compression.OutputBuffer::DumpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA OutputBuffer_DumpState_m4D1016D2222845451F2E02499DF4C88BD3BC7CCD (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, const RuntimeMethod* method) 
{
	BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->___pos_1;
		(&V_0)->___pos_0 = L_0;
		uint32_t L_1 = __this->___bitBuf_2;
		(&V_0)->___bitBuf_1 = L_1;
		int32_t L_2 = __this->___bitCount_3;
		(&V_0)->___bitCount_2 = L_2;
		BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA L_3 = V_0;
		V_1 = L_3;
		goto IL_002c;
	}

IL_002c:
	{
		BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA L_4 = V_1;
		return L_4;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::RestoreState(Mapbox.IO.Compression.OutputBuffer/BufferState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer_RestoreState_m3B31645FF28A697F9178D92A41F276B04BFDB4D5 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA ___state0, const RuntimeMethod* method) 
{
	{
		BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA L_0 = ___state0;
		int32_t L_1 = L_0.___pos_0;
		__this->___pos_1 = L_1;
		BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA L_2 = ___state0;
		uint32_t L_3 = L_2.___bitBuf_1;
		__this->___bitBuf_2 = L_3;
		BufferState_t7BA24351B9CBA70EAEC4E9DA510F7B15BA7075BA L_4 = ___state0;
		int32_t L_5 = L_4.___bitCount_2;
		__this->___bitCount_3 = L_5;
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputBuffer__ctor_mCEE68945A7585B46ED2CB69C3B37900B9E501F91 (OutputBuffer_tDAEC13A69549A6382D2FB1D220A6A94CF690C65D* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.IO.Compression.OutputWindow::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_Write_m086FF0522310C924F364A3A715D3046C231A530A (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, uint8_t ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7C15A7AB70C5E950073A69AB67A6B7C48196F01);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bytesUsed_4;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)L_0) < ((int32_t)((int32_t)32768)))? 1 : 0), _stringLiteralC7C15A7AB70C5E950073A69AB67A6B7C48196F01, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___window_2;
		int32_t L_2 = __this->___end_3;
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->___end_3 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		uint8_t L_5 = ___b0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)L_5);
		int32_t L_6 = __this->___end_3;
		__this->___end_3 = ((int32_t)(L_6&((int32_t)32767)));
		int32_t L_7 = __this->___bytesUsed_4;
		__this->___bytesUsed_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputWindow::WriteLengthDistance(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow_WriteLengthDistance_m3AA7C190F1B221E704C83060F21B57A1C28B3216 (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, int32_t ___length0, int32_t ___distance1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ED4D712B21E2F101127EAF7B91F0D73AB41809F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___bytesUsed_4;
		int32_t L_1 = ___length0;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) > ((int32_t)((int32_t)32768)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral0ED4D712B21E2F101127EAF7B91F0D73AB41809F, NULL);
		int32_t L_2 = __this->___bytesUsed_4;
		int32_t L_3 = ___length0;
		__this->___bytesUsed_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		int32_t L_4 = __this->___end_3;
		int32_t L_5 = ___distance1;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_4, L_5))&((int32_t)32767)));
		int32_t L_6 = ___length0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_6));
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_9 = __this->___end_3;
		int32_t L_10 = V_1;
		G_B3_0 = ((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B3_0 = 0;
	}

IL_0053:
	{
		V_2 = (bool)G_B3_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_12 = ___length0;
		int32_t L_13 = ___distance1;
		V_3 = (bool)((((int32_t)((((int32_t)L_12) > ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_008f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___window_2;
		int32_t L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___window_2;
		int32_t L_18 = __this->___end_3;
		int32_t L_19 = ___length0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, L_18, L_19, NULL);
		int32_t L_20 = __this->___end_3;
		int32_t L_21 = ___length0;
		__this->___end_3 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		goto IL_00cb;
	}

IL_008f:
	{
		goto IL_00bb;
	}

IL_0092:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___window_2;
		int32_t L_23 = __this->___end_3;
		V_4 = L_23;
		int32_t L_24 = V_4;
		__this->___end_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___window_2;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		NullCheck(L_26);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)L_30);
	}

IL_00bb:
	{
		int32_t L_31 = ___length0;
		int32_t L_32 = L_31;
		___length0 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		V_5 = (bool)((((int32_t)L_32) > ((int32_t)0))? 1 : 0);
		bool L_33 = V_5;
		if (L_33)
		{
			goto IL_0092;
		}
	}
	{
	}

IL_00cb:
	{
		goto IL_0124;
	}

IL_00ce:
	{
		goto IL_0114;
	}

IL_00d1:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___window_2;
		int32_t L_35 = __this->___end_3;
		V_4 = L_35;
		int32_t L_36 = V_4;
		__this->___end_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___window_2;
		int32_t L_39 = V_0;
		int32_t L_40 = L_39;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		NullCheck(L_38);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint8_t)L_42);
		int32_t L_43 = __this->___end_3;
		__this->___end_3 = ((int32_t)(L_43&((int32_t)32767)));
		int32_t L_44 = V_0;
		V_0 = ((int32_t)(L_44&((int32_t)32767)));
	}

IL_0114:
	{
		int32_t L_45 = ___length0;
		int32_t L_46 = L_45;
		___length0 = ((int32_t)il2cpp_codegen_subtract(L_46, 1));
		V_6 = (bool)((((int32_t)L_46) > ((int32_t)0))? 1 : 0);
		bool L_47 = V_6;
		if (L_47)
		{
			goto IL_00d1;
		}
	}
	{
	}

IL_0124:
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputWindow::CopyFrom(Mapbox.IO.Compression.InputBuffer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_CopyFrom_m4ABB062840FCEC3ED1878C02D684DDCE5E691EDA (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* ___input0, int32_t ___length1, const RuntimeMethod* method) 
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
		int32_t L_1 = __this->___bytesUsed_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_1)), NULL);
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_3 = ___input0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InputBuffer_get_AvailableBytes_mC08F1E6928F82FFB0FE74172937E805EFFFD703E(L_3, NULL);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_2, L_4, NULL);
		___length1 = L_5;
		int32_t L_6 = __this->___end_3;
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
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_10 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___window_2;
		int32_t L_12 = __this->___end_3;
		int32_t L_13 = V_1;
		NullCheck(L_10);
		int32_t L_14;
		L_14 = InputBuffer_CopyTo_mC4233012372441594DF0801E1298A95B8E42EB55(L_10, L_11, L_12, L_13, NULL);
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
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_19 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___window_2;
		int32_t L_21 = ___length1;
		int32_t L_22 = V_1;
		NullCheck(L_19);
		int32_t L_23;
		L_23 = InputBuffer_CopyTo_mC4233012372441594DF0801E1298A95B8E42EB55(L_19, L_20, 0, ((int32_t)il2cpp_codegen_subtract(L_21, L_22)), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, L_23));
	}

IL_0067:
	{
		goto IL_0080;
	}

IL_006a:
	{
		InputBuffer_t31E8D46B46E3A38965D0136C96C281AB56A3EA2E* L_24 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___window_2;
		int32_t L_26 = __this->___end_3;
		int32_t L_27 = ___length1;
		NullCheck(L_24);
		int32_t L_28;
		L_28 = InputBuffer_CopyTo_mC4233012372441594DF0801E1298A95B8E42EB55(L_24, L_25, L_26, L_27, NULL);
		V_0 = L_28;
	}

IL_0080:
	{
		int32_t L_29 = __this->___end_3;
		int32_t L_30 = V_0;
		__this->___end_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_29, L_30))&((int32_t)32767)));
		int32_t L_31 = __this->___bytesUsed_4;
		int32_t L_32 = V_0;
		__this->___bytesUsed_4 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
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
// System.Int32 Mapbox.IO.Compression.OutputWindow::get_FreeBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_get_FreeBytes_mB1E9BCD46AE900C54B1D18A9BB0A17A799C40554 (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bytesUsed_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_0));
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputWindow::get_AvailableBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_get_AvailableBytes_m5E288A82D33B9F417879C768770A876D9CAE1052 (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bytesUsed_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputWindow::CopyTo(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputWindow_CopyTo_mD47721B6BBB430A1E6FD46C2BD94F96CCF8E5B19 (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral704FBA8309D79E032485BB8BA966C3FCD5614B4E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___length2;
		int32_t L_1 = __this->___bytesUsed_4;
		V_3 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = __this->___end_3;
		V_0 = L_3;
		int32_t L_4 = __this->___bytesUsed_4;
		___length2 = L_4;
		goto IL_0039;
	}

IL_0021:
	{
		int32_t L_5 = __this->___end_3;
		int32_t L_6 = __this->___bytesUsed_4;
		int32_t L_7 = ___length2;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_5, L_6)), L_7))&((int32_t)32767)));
	}

IL_0039:
	{
		int32_t L_8 = ___length2;
		V_1 = L_8;
		int32_t L_9 = ___length2;
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
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_13, ((int32_t)il2cpp_codegen_subtract(((int32_t)32768), L_14)), (RuntimeArray*)L_15, L_16, L_17, NULL);
		int32_t L_18 = ___offset1;
		int32_t L_19 = V_2;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		int32_t L_20 = V_0;
		___length2 = L_20;
	}

IL_0069:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___window_2;
		int32_t L_22 = V_0;
		int32_t L_23 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___output0;
		int32_t L_25 = ___offset1;
		int32_t L_26 = ___length2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_subtract(L_22, L_23)), (RuntimeArray*)L_24, L_25, L_26, NULL);
		int32_t L_27 = __this->___bytesUsed_4;
		int32_t L_28 = V_1;
		__this->___bytesUsed_4 = ((int32_t)il2cpp_codegen_subtract(L_27, L_28));
		int32_t L_29 = __this->___bytesUsed_4;
		Debug_Assert_m6B8BE1380B220153ED4E4A0A2E087FCAE503BB37((bool)((((int32_t)((((int32_t)L_29) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral704FBA8309D79E032485BB8BA966C3FCD5614B4E, NULL);
		int32_t L_30 = V_1;
		V_5 = L_30;
		goto IL_00a5;
	}

IL_00a5:
	{
		int32_t L_31 = V_5;
		return L_31;
	}
}
// System.Void Mapbox.IO.Compression.OutputWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputWindow__ctor_mAD92ABCC3584FA158089D13E76AAE2C94626A179 (OutputWindow_t36C240DF8910AA869955B3B49729C85C0762B5A4* __this, const RuntimeMethod* method) 
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
// System.Void Mapbox.IO.Compression.SR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__ctor_m0943BD3A8CFE556EF5D1C5F6EC1DDBFC4263EF39 (SR_t22C3359BFAF30BB82CBD9A640D61509C570DC178* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Mapbox.IO.Compression.SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m5C4B7ED1C7183782D0D21EDF39C4D6042A1784A2 (String_t* ___p0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___p0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ar0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
