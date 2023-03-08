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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<Mapbox.Directions.DirectionsResponse>
struct Action_1_tFC418E3B65CD6CC80DDE96FD3D8501E5423FFCC0;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Mapbox.Platform.Response>
struct Action_1_t0EE6D29520C59A47FB51910DC20822ACA4A4BE4B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// Mapbox.Geocoding.GeocodeResource`1<Mapbox.Utils.Vector2d>
struct GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B;
// System.Collections.Generic.List`1<Mapbox.Geocoding.Feature>
struct List_1_tFA08C44658D5013FEE87376AA1403698A94EBA80;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Mapbox.Directions.Intersection>
struct List_1_t1A3217A0FF738E43D1C602EE7E6B98ADACA6DE9F;
// System.Collections.Generic.List`1<Mapbox.Directions.Leg>
struct List_1_t2FD4DB648871F9D710B33A2ED5463E176745BB80;
// System.Collections.Generic.List`1<Mapbox.Directions.Route>
struct List_1_t4538DA57AC0BF31586C476CFA5B8922555065CF6;
// System.Collections.Generic.List`1<Mapbox.Directions.Step>
struct List_1_t83E42D03C608E67BAAF5CE4F072A331A6EC16782;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d>
struct List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181;
// System.Collections.Generic.List`1<Mapbox.Directions.Waypoint>
struct List_1_t8B7455CC7A04EC6FA11D5A23783A69673BAFB081;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// Mapbox.Utils.BearingFilter[]
struct BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// Mapbox.Geocoding.Feature[]
struct FeatureU5BU5D_t4192870A3A1E725736D51180CAB05963CC64F8AC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Mapbox.Directions.Intersection[]
struct IntersectionU5BU5D_t4533201B2C348CAB3E8DDBB1D00BD31DEDDD41CC;
// Mapbox.Json.JsonConverter[]
struct JsonConverterU5BU5D_tBBA2728030CCB3321DCD721DF9FF5A4A34D8B618;
// Mapbox.Directions.Leg[]
struct LegU5BU5D_t44C74ACE22874BBB8A9681719B02FAB8592B24CA;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Mapbox.Directions.Route[]
struct RouteU5BU5D_t55BCD1B1115C7BEE4147A6DE56DC812CF69F318D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Mapbox.Directions.Step[]
struct StepU5BU5D_tCE83A60630B2B2E9A5B29347FAA557BEF336442E;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Mapbox.Utils.Vector2d[]
struct Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6;
// Mapbox.Directions.Waypoint[]
struct WaypointU5BU5D_t3987ADB63751F0FAC96D27E3F1540B43002FC9D5;
// Mapbox.Directions.Annotation
struct Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071;
// Mapbox.CheapRulerCs.CheapRuler
struct CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Mapbox.Directions.DirectionResource
struct DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A;
// Mapbox.Directions.Directions
struct Directions_t96A3A3D74497058E8FF54BBD984F70D09EE0BD33;
// Mapbox.Directions.DirectionsResponse
struct DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// Mapbox.Geocoding.ForwardGeocodeResponse
struct ForwardGeocodeResponse_tDB08E11A69456681C4423921EA57839B6FDF2AF6;
// Mapbox.Geocoding.GeocodeResponse
struct GeocodeResponse_tFE5607E3406791C29737D8ED0FE5B5BB7B0709BA;
// Mapbox.Geocoding.Geometry
struct Geometry_tD2C5DC59BD97C90C1326BB7557F8127AD1F43294;
// Mapbox.Platform.IAsyncRequest
struct IAsyncRequest_t4CF437286EA8C225922C20D5A18795E2248D2409;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Mapbox.Platform.IFileSource
struct IFileSource_t04016FCFE3755DDFE407B1023FEDA00102549609;
// Mapbox.Directions.Intersection
struct Intersection_t9454F144D8709E6931B12DA9DC0B50C5AE1DA0B9;
// Mapbox.Json.JsonConverter
struct JsonConverter_tC8CB30CF9DB17BA7447E3971E88AFFB999BBE451;
// Mapbox.Directions.Leg
struct Leg_tC34AC2E9D84D754D80BF754F11BFC6B20F9DABD5;
// Mapbox.Directions.Maneuver
struct Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mapbox.Directions.Overview
struct Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF;
// Mapbox.Platform.Resource
struct Resource_tB5C38A19FDCF48E5E97A2D0F3C071598CF71652E;
// Mapbox.Platform.Response
struct Response_tBFBFBFAEC12BA747FDA2F3E9E5EC9A45E780B07F;
// Mapbox.Geocoding.ReverseGeocodeResource
struct ReverseGeocodeResource_t7D91425B6157966BE41B5361B0530B478EB20BBB;
// Mapbox.Geocoding.ReverseGeocodeResponse
struct ReverseGeocodeResponse_tDC57E707B5D66B553A1388CE482D931B336C3760;
// Mapbox.Directions.Route
struct Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397;
// Mapbox.Directions.RoutingProfile
struct RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Mapbox.Directions.Step
struct Step_t95E845C368B332B40A5545FECC4403B3A34F87CB;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Mapbox.Directions.Waypoint
struct Waypoint_tA1A0E7CDE324FFF768A6A661CC891AAF54FEE511;
// Mapbox.Directions.Directions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0EE6D29520C59A47FB51910DC20822ACA4A4BE4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFileSource_t04016FCFE3755DDFE407B1023FEDA00102549609_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t36E88EEF2CFCEAC0D0E66E464FF7E54552AFCE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConverters_tBECA50BB9A98F9FBB151F6EDB38CA94CE3F73860_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A55548ECC15B25C674177B822F8D647210E9735;
IL2CPP_EXTERN_C String_t* _stringLiteral0C1F5085E453A1868289D86B8664F46390191A29;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742;
IL2CPP_EXTERN_C String_t* _stringLiteral42B2A543857A89FBFF1010FFF74DB6049C937C37;
IL2CPP_EXTERN_C String_t* _stringLiteral5A0EE985B2AE2A4DB7161D511B311EDCD9C0B910;
IL2CPP_EXTERN_C String_t* _stringLiteral5D3B47B5EFCD8BED58055570596FD61BEDAE523A;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral79CD41FECA9CA3240210A11A155C7DE13AD73E7F;
IL2CPP_EXTERN_C String_t* _stringLiteral7C36F597492FB447BA64A9ADC63ED3C280B645BE;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF00B6A6965233B3ED5AC65EE0015D8D3F754D4;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC3953C49098F0F68B317C99135FD4DDFC0EFC962;
IL2CPP_EXTERN_C String_t* _stringLiteralCB82BF7254E717B1F389254C9C3CCA39020FD831;
IL2CPP_EXTERN_C String_t* _stringLiteralCD402B0A1EA08268A3AB4CAFB475C20E21809650;
IL2CPP_EXTERN_C String_t* _stringLiteralDC43917AEC71FEF10AB4428DB80B025E9BF8A80E;
IL2CPP_EXTERN_C String_t* _stringLiteralE0E5913397F63009A7BB68104E0A7E7038383243;
IL2CPP_EXTERN_C String_t* _stringLiteralE100104AB6827D47224D16CC2C7B932961CA192A;
IL2CPP_EXTERN_C String_t* _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF;
IL2CPP_EXTERN_C String_t* _stringLiteralEBAA9D1990D6C22BD9401F6C3121053D39F86EA5;
IL2CPP_EXTERN_C String_t* _stringLiteralF41DE8EB12DE20A887D1BE5A62ED5AB4DDB0343A;
IL2CPP_EXTERN_C String_t* _stringLiteralF52DD7E1435BB0FFE0E53E48392DBE937C7405CB;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DirectionResource_set_Bearings_m3465F093A3459BC3A475F28A0218CDA4356F6C8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DirectionResource_set_Coordinates_m01FB9199130432AF8FC26615139F82A26A7ABBF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DirectionResource_set_Radiuses_mC2190618ABD04412826C008DC5AE734E40BBB696_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeocodeResource_1__ctor_m423A00E93A52E08DBCFC4996B961AA5BED2FAA44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeocodeResource_1_get_Mode_mAA58BD80ABCD824EAE5A27AAF803EDEB1429DCC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeocodeResource_1_get_Types_m1130D1D48A36360F359D23595F43BED8670E77F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisDirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3_m17A8C93F5D5FCB15386EF5E44EADD4504B5ED027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resource_GetUrlQueryFromArray_TisBearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC_mF4DB3764E9A2D96924E3563F09527481944BF2A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resource_GetUrlQueryFromArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB0160B669CF7F4CFECCC1B46B161F95A40D9934F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resource_GetUrlQueryFromArray_TisString_t_mC24B7C0A4394C958C3A5E07417366E813C3555F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resource_GetUrlQueryFromArray_TisVector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB_mED5D98EEF7C2F8156646FDEDFBC227C54CCF94E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CQueryU3Eb__0_m18E4388A80D196D5F23483B3F9C27A4D9DA847FA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct JsonConverterU5BU5D_tBBA2728030CCB3321DCD721DF9FF5A4A34D8B618;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t495F03F47D827883530F951D563C0BB7340E5995_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mapbox.Geocoding.Feature>
struct List_1_tFA08C44658D5013FEE87376AA1403698A94EBA80  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FeatureU5BU5D_t4192870A3A1E725736D51180CAB05963CC64F8AC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFA08C44658D5013FEE87376AA1403698A94EBA80_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FeatureU5BU5D_t4192870A3A1E725736D51180CAB05963CC64F8AC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mapbox.Directions.Intersection>
struct List_1_t1A3217A0FF738E43D1C602EE7E6B98ADACA6DE9F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IntersectionU5BU5D_t4533201B2C348CAB3E8DDBB1D00BD31DEDDD41CC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1A3217A0FF738E43D1C602EE7E6B98ADACA6DE9F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IntersectionU5BU5D_t4533201B2C348CAB3E8DDBB1D00BD31DEDDD41CC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mapbox.Directions.Leg>
struct List_1_t2FD4DB648871F9D710B33A2ED5463E176745BB80  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LegU5BU5D_t44C74ACE22874BBB8A9681719B02FAB8592B24CA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2FD4DB648871F9D710B33A2ED5463E176745BB80_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LegU5BU5D_t44C74ACE22874BBB8A9681719B02FAB8592B24CA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mapbox.Directions.Route>
struct List_1_t4538DA57AC0BF31586C476CFA5B8922555065CF6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RouteU5BU5D_t55BCD1B1115C7BEE4147A6DE56DC812CF69F318D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4538DA57AC0BF31586C476CFA5B8922555065CF6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RouteU5BU5D_t55BCD1B1115C7BEE4147A6DE56DC812CF69F318D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mapbox.Directions.Step>
struct List_1_t83E42D03C608E67BAAF5CE4F072A331A6EC16782  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StepU5BU5D_tCE83A60630B2B2E9A5B29347FAA557BEF336442E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t83E42D03C608E67BAAF5CE4F072A331A6EC16782_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StepU5BU5D_tCE83A60630B2B2E9A5B29347FAA557BEF336442E* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d>
struct List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mapbox.Directions.Waypoint>
struct List_1_t8B7455CC7A04EC6FA11D5A23783A69673BAFB081  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WaypointU5BU5D_t3987ADB63751F0FAC96D27E3F1540B43002FC9D5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8B7455CC7A04EC6FA11D5A23783A69673BAFB081_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WaypointU5BU5D_t3987ADB63751F0FAC96D27E3F1540B43002FC9D5* ___s_emptyArray_5;
};

// Mapbox.Directions.Annotation
struct Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071  : public RuntimeObject
{
	// System.Double[] Mapbox.Directions.Annotation::<Distance>k__BackingField
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___U3CDistanceU3Ek__BackingField_0;
	// System.Double[] Mapbox.Directions.Annotation::<Duration>k__BackingField
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___U3CDurationU3Ek__BackingField_1;
	// System.String[] Mapbox.Directions.Annotation::<Speed>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CSpeedU3Ek__BackingField_2;
	// System.String[] Mapbox.Directions.Annotation::<Congestion>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CCongestionU3Ek__BackingField_3;
};
struct Il2CppArrayBounds;

// Mapbox.CheapRulerCs.CheapRuler
struct CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7  : public RuntimeObject
{
	// System.Double Mapbox.CheapRulerCs.CheapRuler::_kx
	double ____kx_0;
	// System.Double Mapbox.CheapRulerCs.CheapRuler::_ky
	double ____ky_1;
};

// Mapbox.Directions.Directions
struct Directions_t96A3A3D74497058E8FF54BBD984F70D09EE0BD33  : public RuntimeObject
{
	// Mapbox.Platform.IFileSource Mapbox.Directions.Directions::fileSource
	RuntimeObject* ___fileSource_0;
};

// Mapbox.Directions.DirectionsResponse
struct DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Mapbox.Directions.Route> Mapbox.Directions.DirectionsResponse::<Routes>k__BackingField
	List_1_t4538DA57AC0BF31586C476CFA5B8922555065CF6* ___U3CRoutesU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Mapbox.Directions.Waypoint> Mapbox.Directions.DirectionsResponse::<Waypoints>k__BackingField
	List_1_t8B7455CC7A04EC6FA11D5A23783A69673BAFB081* ___U3CWaypointsU3Ek__BackingField_1;
	// System.String Mapbox.Directions.DirectionsResponse::<Code>k__BackingField
	String_t* ___U3CCodeU3Ek__BackingField_2;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Mapbox.Geocoding.GeocodeResponse
struct GeocodeResponse_tFE5607E3406791C29737D8ED0FE5B5BB7B0709BA  : public RuntimeObject
{
	// System.String Mapbox.Geocoding.GeocodeResponse::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Mapbox.Geocoding.Feature> Mapbox.Geocoding.GeocodeResponse::<Features>k__BackingField
	List_1_tFA08C44658D5013FEE87376AA1403698A94EBA80* ___U3CFeaturesU3Ek__BackingField_1;
	// System.String Mapbox.Geocoding.GeocodeResponse::<Attribution>k__BackingField
	String_t* ___U3CAttributionU3Ek__BackingField_2;
};

// Mapbox.Json.JsonConverter
struct JsonConverter_tC8CB30CF9DB17BA7447E3971E88AFFB999BBE451  : public RuntimeObject
{
};

// Mapbox.Utils.JsonConverters.JsonConverters
struct JsonConverters_tBECA50BB9A98F9FBB151F6EDB38CA94CE3F73860  : public RuntimeObject
{
};

struct JsonConverters_tBECA50BB9A98F9FBB151F6EDB38CA94CE3F73860_StaticFields
{
	// Mapbox.Json.JsonConverter[] Mapbox.Utils.JsonConverters.JsonConverters::converters
	JsonConverterU5BU5D_tBBA2728030CCB3321DCD721DF9FF5A4A34D8B618* ___converters_0;
};

// Mapbox.Directions.Leg
struct Leg_tC34AC2E9D84D754D80BF754F11BFC6B20F9DABD5  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Mapbox.Directions.Step> Mapbox.Directions.Leg::<Steps>k__BackingField
	List_1_t83E42D03C608E67BAAF5CE4F072A331A6EC16782* ___U3CStepsU3Ek__BackingField_0;
	// System.String Mapbox.Directions.Leg::<Summary>k__BackingField
	String_t* ___U3CSummaryU3Ek__BackingField_1;
	// System.Double Mapbox.Directions.Leg::<Duration>k__BackingField
	double ___U3CDurationU3Ek__BackingField_2;
	// System.Double Mapbox.Directions.Leg::<Distance>k__BackingField
	double ___U3CDistanceU3Ek__BackingField_3;
	// Mapbox.Directions.Annotation Mapbox.Directions.Leg::<Annotation>k__BackingField
	Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* ___U3CAnnotationU3Ek__BackingField_4;
};

// Mapbox.Directions.Overview
struct Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF  : public RuntimeObject
{
	// System.String Mapbox.Directions.Overview::overview
	String_t* ___overview_3;
};

struct Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_StaticFields
{
	// Mapbox.Directions.Overview Mapbox.Directions.Overview::Full
	Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* ___Full_0;
	// Mapbox.Directions.Overview Mapbox.Directions.Overview::Simplified
	Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* ___Simplified_1;
	// Mapbox.Directions.Overview Mapbox.Directions.Overview::False
	Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* ___False_2;
};

// Mapbox.Platform.Resource
struct Resource_tB5C38A19FDCF48E5E97A2D0F3C071598CF71652E  : public RuntimeObject
{
};

// Mapbox.Directions.Route
struct Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Mapbox.Directions.Leg> Mapbox.Directions.Route::<Legs>k__BackingField
	List_1_t2FD4DB648871F9D710B33A2ED5463E176745BB80* ___U3CLegsU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d> Mapbox.Directions.Route::<Geometry>k__BackingField
	List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* ___U3CGeometryU3Ek__BackingField_1;
	// System.Double Mapbox.Directions.Route::<Duration>k__BackingField
	double ___U3CDurationU3Ek__BackingField_2;
	// System.Double Mapbox.Directions.Route::<Distance>k__BackingField
	double ___U3CDistanceU3Ek__BackingField_3;
	// System.Single Mapbox.Directions.Route::<Weight>k__BackingField
	float ___U3CWeightU3Ek__BackingField_4;
	// System.String Mapbox.Directions.Route::<WeightName>k__BackingField
	String_t* ___U3CWeightNameU3Ek__BackingField_5;
};

// Mapbox.Directions.RoutingProfile
struct RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73  : public RuntimeObject
{
	// System.String Mapbox.Directions.RoutingProfile::profile
	String_t* ___profile_3;
};

struct RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_StaticFields
{
	// Mapbox.Directions.RoutingProfile Mapbox.Directions.RoutingProfile::Driving
	RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* ___Driving_0;
	// Mapbox.Directions.RoutingProfile Mapbox.Directions.RoutingProfile::Walking
	RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* ___Walking_1;
	// Mapbox.Directions.RoutingProfile Mapbox.Directions.RoutingProfile::Cycling
	RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* ___Cycling_2;
};

// Mapbox.Directions.Step
struct Step_t95E845C368B332B40A5545FECC4403B3A34F87CB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Mapbox.Directions.Intersection> Mapbox.Directions.Step::<Intersections>k__BackingField
	List_1_t1A3217A0FF738E43D1C602EE7E6B98ADACA6DE9F* ___U3CIntersectionsU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d> Mapbox.Directions.Step::<Geometry>k__BackingField
	List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* ___U3CGeometryU3Ek__BackingField_1;
	// Mapbox.Directions.Maneuver Mapbox.Directions.Step::<Maneuver>k__BackingField
	Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* ___U3CManeuverU3Ek__BackingField_2;
	// System.Double Mapbox.Directions.Step::<Duration>k__BackingField
	double ___U3CDurationU3Ek__BackingField_3;
	// System.Double Mapbox.Directions.Step::<Distance>k__BackingField
	double ___U3CDistanceU3Ek__BackingField_4;
	// System.String Mapbox.Directions.Step::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_5;
	// System.String Mapbox.Directions.Step::<Mode>k__BackingField
	String_t* ___U3CModeU3Ek__BackingField_6;
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

// Mapbox.Directions.Directions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399  : public RuntimeObject
{
	// Mapbox.Directions.Directions Mapbox.Directions.Directions/<>c__DisplayClass2_0::<>4__this
	Directions_t96A3A3D74497058E8FF54BBD984F70D09EE0BD33* ___U3CU3E4__this_0;
	// System.Action`1<Mapbox.Directions.DirectionsResponse> Mapbox.Directions.Directions/<>c__DisplayClass2_0::callback
	Action_1_tFC418E3B65CD6CC80DDE96FD3D8501E5423FFCC0* ___callback_1;
};

// Mapbox.Geocoding.GeocodeResource`1<Mapbox.Utils.Vector2d>
struct GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94  : public Resource_tB5C38A19FDCF48E5E97A2D0F3C071598CF71652E
{
	// System.String Mapbox.Geocoding.GeocodeResource`1::apiEndpoint
	String_t* ___apiEndpoint_1;
	// System.String Mapbox.Geocoding.GeocodeResource`1::mode
	String_t* ___mode_2;
	// System.String[] Mapbox.Geocoding.GeocodeResource`1::types
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___types_3;
};

struct GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94_StaticFields
{
	// System.Collections.Generic.List`1<System.String> Mapbox.Geocoding.GeocodeResource`1::FeatureTypes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___FeatureTypes_0;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
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

// Mapbox.Map.CanonicalTileId
struct CanonicalTileId_tE2B21F97F3C75188F50DD1C880DB3655BD8D57A6 
{
	// System.Int32 Mapbox.Map.CanonicalTileId::Z
	int32_t ___Z_0;
	// System.Int32 Mapbox.Map.CanonicalTileId::X
	int32_t ___X_1;
	// System.Int32 Mapbox.Map.CanonicalTileId::Y
	int32_t ___Y_2;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Mapbox.Geocoding.ForwardGeocodeResponse
struct ForwardGeocodeResponse_tDB08E11A69456681C4423921EA57839B6FDF2AF6  : public GeocodeResponse_tFE5607E3406791C29737D8ED0FE5B5BB7B0709BA
{
	// System.Collections.Generic.List`1<System.String> Mapbox.Geocoding.ForwardGeocodeResponse::<Query>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CQueryU3Ek__BackingField_3;
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

// Mapbox.Geocoding.ReverseGeocodeResponse
struct ReverseGeocodeResponse_tDC57E707B5D66B553A1388CE482D931B336C3760  : public GeocodeResponse_tFE5607E3406791C29737D8ED0FE5B5BB7B0709BA
{
	// System.Collections.Generic.List`1<System.Double> Mapbox.Geocoding.ReverseGeocodeResponse::<Query>k__BackingField
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* ___U3CQueryU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Mapbox.Utils.Vector2d
struct Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB 
{
	// System.Double Mapbox.Utils.Vector2d::x
	double ___x_1;
	// System.Double Mapbox.Utils.Vector2d::y
	double ___y_2;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};
#pragma pack(pop, tp)

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE_0;
};

// Mapbox.Utils.BearingFilter
struct BearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC 
{
	// System.Nullable`1<System.Double> Mapbox.Utils.BearingFilter::Bearing
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___Bearing_0;
	// System.Nullable`1<System.Double> Mapbox.Utils.BearingFilter::Range
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___Range_1;
};
// Native definition for P/Invoke marshalling of Mapbox.Utils.BearingFilter
struct BearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC_marshaled_pinvoke
{
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___Bearing_0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___Range_1;
};
// Native definition for COM marshalling of Mapbox.Utils.BearingFilter
struct BearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC_marshaled_com
{
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___Bearing_0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___Range_1;
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

// Mapbox.Directions.DirectionResource
struct DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A  : public Resource_tB5C38A19FDCF48E5E97A2D0F3C071598CF71652E
{
	// System.String Mapbox.Directions.DirectionResource::apiEndpoint
	String_t* ___apiEndpoint_0;
	// Mapbox.Directions.RoutingProfile Mapbox.Directions.DirectionResource::profile
	RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* ___profile_1;
	// Mapbox.Utils.Vector2d[] Mapbox.Directions.DirectionResource::coordinates
	Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* ___coordinates_2;
	// System.Nullable`1<System.Boolean> Mapbox.Directions.DirectionResource::alternatives
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___alternatives_3;
	// Mapbox.Utils.BearingFilter[] Mapbox.Directions.DirectionResource::bearings
	BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* ___bearings_4;
	// System.Nullable`1<System.Boolean> Mapbox.Directions.DirectionResource::continueStraight
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___continueStraight_5;
	// Mapbox.Directions.Overview Mapbox.Directions.DirectionResource::overview
	Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* ___overview_6;
	// System.Double[] Mapbox.Directions.DirectionResource::radiuses
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___radiuses_7;
	// System.Nullable`1<System.Boolean> Mapbox.Directions.DirectionResource::steps
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___steps_8;
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

// Mapbox.Geocoding.Geometry
struct Geometry_tD2C5DC59BD97C90C1326BB7557F8127AD1F43294  : public RuntimeObject
{
	// System.String Mapbox.Geocoding.Geometry::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_0;
	// Mapbox.Utils.Vector2d Mapbox.Geocoding.Geometry::<Coordinates>k__BackingField
	Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB ___U3CCoordinatesU3Ek__BackingField_1;
};

// Mapbox.Directions.Intersection
struct Intersection_t9454F144D8709E6931B12DA9DC0B50C5AE1DA0B9  : public RuntimeObject
{
	// System.Int32 Mapbox.Directions.Intersection::<Out>k__BackingField
	int32_t ___U3COutU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Boolean> Mapbox.Directions.Intersection::<Entry>k__BackingField
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___U3CEntryU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<System.Int32> Mapbox.Directions.Intersection::<Bearings>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CBearingsU3Ek__BackingField_2;
	// Mapbox.Utils.Vector2d Mapbox.Directions.Intersection::<Location>k__BackingField
	Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB ___U3CLocationU3Ek__BackingField_3;
	// System.Nullable`1<System.Int32> Mapbox.Directions.Intersection::<In>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CInU3Ek__BackingField_4;
};

// Mapbox.Directions.Maneuver
struct Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210  : public RuntimeObject
{
	// System.Int32 Mapbox.Directions.Maneuver::<BearingAfter>k__BackingField
	int32_t ___U3CBearingAfterU3Ek__BackingField_0;
	// System.String Mapbox.Directions.Maneuver::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.String Mapbox.Directions.Maneuver::<Modifier>k__BackingField
	String_t* ___U3CModifierU3Ek__BackingField_2;
	// System.Int32 Mapbox.Directions.Maneuver::<BearingBefore>k__BackingField
	int32_t ___U3CBearingBeforeU3Ek__BackingField_3;
	// Mapbox.Utils.Vector2d Mapbox.Directions.Maneuver::<Location>k__BackingField
	Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB ___U3CLocationU3Ek__BackingField_4;
	// System.String Mapbox.Directions.Maneuver::<Instruction>k__BackingField
	String_t* ___U3CInstructionU3Ek__BackingField_5;
};

// Mapbox.Geocoding.ReverseGeocodeResource
struct ReverseGeocodeResource_t7D91425B6157966BE41B5361B0530B478EB20BBB  : public GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94
{
	// Mapbox.Utils.Vector2d Mapbox.Geocoding.ReverseGeocodeResource::query
	Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB ___query_4;
};

// Mapbox.Directions.Waypoint
struct Waypoint_tA1A0E7CDE324FFF768A6A661CC891AAF54FEE511  : public RuntimeObject
{
	// System.String Mapbox.Directions.Waypoint::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// Mapbox.Utils.Vector2d Mapbox.Directions.Waypoint::<Location>k__BackingField
	Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB ___U3CLocationU3Ek__BackingField_1;
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

// Mapbox.Platform.Response
struct Response_tBFBFBFAEC12BA747FDA2F3E9E5EC9A45E780B07F  : public RuntimeObject
{
	// Mapbox.Platform.IAsyncRequest Mapbox.Platform.Response::<Request>k__BackingField
	RuntimeObject* ___U3CRequestU3Ek__BackingField_0;
	// System.Boolean Mapbox.Platform.Response::LoadedFromCache
	bool ___LoadedFromCache_1;
	// System.Boolean Mapbox.Platform.Response::IsUpdate
	bool ___IsUpdate_2;
	// System.String Mapbox.Platform.Response::RequestUrl
	String_t* ___RequestUrl_3;
	// System.Nullable`1<System.Int32> Mapbox.Platform.Response::StatusCode
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___StatusCode_4;
	// System.String Mapbox.Platform.Response::ContentType
	String_t* ___ContentType_5;
	// System.Nullable`1<System.Int32> Mapbox.Platform.Response::XRateLimitInterval
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___XRateLimitInterval_6;
	// System.Nullable`1<System.Int64> Mapbox.Platform.Response::XRateLimitLimit
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___XRateLimitLimit_7;
	// System.Nullable`1<System.DateTime> Mapbox.Platform.Response::XRateLimitReset
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___XRateLimitReset_8;
	// System.Collections.Generic.List`1<System.Exception> Mapbox.Platform.Response::_exceptions
	List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* ____exceptions_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Mapbox.Platform.Response::Headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Headers_10;
	// System.Byte[] Mapbox.Platform.Response::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_11;
};

// System.Action`1<Mapbox.Directions.DirectionsResponse>
struct Action_1_tFC418E3B65CD6CC80DDE96FD3D8501E5423FFCC0  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Mapbox.Platform.Response>
struct Action_1_t0EE6D29520C59A47FB51910DC20822ACA4A4BE4B  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Mapbox.Utils.Vector2d[]
struct Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB m_Items[1];

	inline Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB value)
	{
		m_Items[index] = value;
	}
};
// Mapbox.Utils.BearingFilter[]
struct BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379  : public RuntimeArray
{
	ALIGN_FIELD (8) BearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC m_Items[1];

	inline BearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// Mapbox.Json.JsonConverter[]
struct JsonConverterU5BU5D_tBBA2728030CCB3321DCD721DF9FF5A4A34D8B618  : public RuntimeArray
{
	ALIGN_FIELD (8) JsonConverter_tC8CB30CF9DB17BA7447E3971E88AFFB999BBE451* m_Items[1];

	inline JsonConverter_tC8CB30CF9DB17BA7447E3971E88AFFB999BBE451* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_tC8CB30CF9DB17BA7447E3971E88AFFB999BBE451** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_tC8CB30CF9DB17BA7447E3971E88AFFB999BBE451* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonConverter_tC8CB30CF9DB17BA7447E3971E88AFFB999BBE451* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_tC8CB30CF9DB17BA7447E3971E88AFFB999BBE451** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_tC8CB30CF9DB17BA7447E3971E88AFFB999BBE451* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void Mapbox.Geocoding.GeocodeResource`1<Mapbox.Utils.Vector2d>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeocodeResource_1__ctor_m423A00E93A52E08DBCFC4996B961AA5BED2FAA44_gshared (GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.String[] Mapbox.Geocoding.GeocodeResource`1<Mapbox.Utils.Vector2d>::get_Types()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeocodeResource_1_get_Types_m1130D1D48A36360F359D23595F43BED8670E77F7_gshared_inline (GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94* __this, const RuntimeMethod* method) ;
// System.String Mapbox.Platform.Resource::GetUrlQueryFromArray<System.Object>(U[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resource_GetUrlQueryFromArray_TisRuntimeObject_mDA50E19BD8BA56D074A1A385B099449F5413D7EE_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___items0, String_t* ___separator1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.String Mapbox.Geocoding.GeocodeResource`1<Mapbox.Utils.Vector2d>::get_Mode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GeocodeResource_1_get_Mode_mAA58BD80ABCD824EAE5A27AAF803EDEB1429DCC2_gshared_inline (GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.String System.Nullable`1<System.Boolean>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.String Mapbox.Platform.Resource::GetUrlQueryFromArray<Mapbox.Utils.BearingFilter>(U[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resource_GetUrlQueryFromArray_TisBearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC_mF4DB3764E9A2D96924E3563F09527481944BF2A3_gshared (BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* ___items0, String_t* ___separator1, const RuntimeMethod* method) ;
// System.String Mapbox.Platform.Resource::GetUrlQueryFromArray<System.Double>(U[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resource_GetUrlQueryFromArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB0160B669CF7F4CFECCC1B46B161F95A40D9934F_gshared (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___items0, String_t* ___separator1, const RuntimeMethod* method) ;
// System.String Mapbox.Platform.Resource::GetUrlQueryFromArray<Mapbox.Utils.Vector2d>(U[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resource_GetUrlQueryFromArray_TisVector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB_mED5D98EEF7C2F8156646FDEDFBC227C54CCF94E6_gshared (Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* ___items0, String_t* ___separator1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T Mapbox.Json.JsonConvert::DeserializeObject<System.Object>(System.String,Mapbox.Json.JsonConverter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_mB366A4996D1330554253AA1B36CFAC9451FA516C_gshared (String_t* ___value0, JsonConverterU5BU5D_tBBA2728030CCB3321DCD721DF9FF5A4A34D8B618* ___converters1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Geocoding.GeocodeResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeocodeResponse__ctor_m8F01E3016513206B31E5FACDB8862A0966BFFC87 (GeocodeResponse_tFE5607E3406791C29737D8ED0FE5B5BB7B0709BA* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Geocoding.GeocodeResource`1<Mapbox.Utils.Vector2d>::.ctor()
inline void GeocodeResource_1__ctor_m423A00E93A52E08DBCFC4996B961AA5BED2FAA44 (GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94* __this, const RuntimeMethod* method)
{
	((  void (*) (GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94*, const RuntimeMethod*))GeocodeResource_1__ctor_m423A00E93A52E08DBCFC4996B961AA5BED2FAA44_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.String[] Mapbox.Geocoding.GeocodeResource`1<Mapbox.Utils.Vector2d>::get_Types()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeocodeResource_1_get_Types_m1130D1D48A36360F359D23595F43BED8670E77F7_inline (GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94*, const RuntimeMethod*))GeocodeResource_1_get_Types_m1130D1D48A36360F359D23595F43BED8670E77F7_gshared_inline)(__this, method);
}
// System.String Mapbox.Platform.Resource::GetUrlQueryFromArray<System.String>(U[],System.String)
inline String_t* Resource_GetUrlQueryFromArray_TisString_t_mC24B7C0A4394C958C3A5E07417366E813C3555F8 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___items0, String_t* ___separator1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, String_t*, const RuntimeMethod*))Resource_GetUrlQueryFromArray_TisRuntimeObject_mDA50E19BD8BA56D074A1A385B099449F5413D7EE_gshared)(___items0, ___separator1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.String Mapbox.Geocoding.GeocodeResource`1<Mapbox.Utils.Vector2d>::get_Mode()
inline String_t* GeocodeResource_1_get_Mode_mAA58BD80ABCD824EAE5A27AAF803EDEB1429DCC2_inline (GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94*, const RuntimeMethod*))GeocodeResource_1_get_Mode_mAA58BD80ABCD824EAE5A27AAF803EDEB1429DCC2_gshared_inline)(__this, method);
}
// System.String Mapbox.Utils.Vector2d::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2d_ToString_m8BFD0569990A98E863CDC1B3C640BB189AF496D3 (Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB* __this, const RuntimeMethod* method) ;
// System.String Mapbox.Platform.Resource::EncodeQueryString(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resource_EncodeQueryString_mEDC32F5027652619E8FD0724A6AA5B36A394CF69 (RuntimeObject* ___values0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void Mapbox.Platform.Resource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resource__ctor_mE41A8E6DEDA248B4D5AB3942C57C1ABE5B8E0FFA (Resource_tB5C38A19FDCF48E5E97A2D0F3C071598CF71652E* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Directions.DirectionResource::set_Coordinates(Mapbox.Utils.Vector2d[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionResource_set_Coordinates_m01FB9199130432AF8FC26615139F82A26A7ABBF4 (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Directions.DirectionResource::set_RoutingProfile(Mapbox.Directions.RoutingProfile)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DirectionResource_set_RoutingProfile_m0FEE838D283AD15FB802C33B01574265D47DDF80_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Nullable`1<System.Boolean> Mapbox.Directions.DirectionResource::get_Alternatives()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 DirectionResource_get_Alternatives_mAFDE9468CED9F714ABDCC35F43D22033A11FD889_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// System.String System.Nullable`1<System.Boolean>::ToString()
inline String_t* Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB_gshared)(__this, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// Mapbox.Utils.BearingFilter[] Mapbox.Directions.DirectionResource::get_Bearings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* DirectionResource_get_Bearings_m02BA417F6FA47E75F119D287D1F49F62A6203B0B_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) ;
// System.String Mapbox.Platform.Resource::GetUrlQueryFromArray<Mapbox.Utils.BearingFilter>(U[],System.String)
inline String_t* Resource_GetUrlQueryFromArray_TisBearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC_mF4DB3764E9A2D96924E3563F09527481944BF2A3 (BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* ___items0, String_t* ___separator1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379*, String_t*, const RuntimeMethod*))Resource_GetUrlQueryFromArray_TisBearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC_mF4DB3764E9A2D96924E3563F09527481944BF2A3_gshared)(___items0, ___separator1, method);
}
// System.Nullable`1<System.Boolean> Mapbox.Directions.DirectionResource::get_ContinueStraight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 DirectionResource_get_ContinueStraight_m61C99216C79C351C05CDBEBA9FAC49E19CCA6B0A_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) ;
// Mapbox.Directions.Overview Mapbox.Directions.DirectionResource::get_Overview()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* DirectionResource_get_Overview_m82052630D5F81D8B2C6BDBF78A3147053327BC35_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) ;
// System.Double[] Mapbox.Directions.DirectionResource::get_Radiuses()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* DirectionResource_get_Radiuses_m26C0BCCC70733C6BCABB5F54BADB737FEA2BFB14_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) ;
// System.String Mapbox.Platform.Resource::GetUrlQueryFromArray<System.Double>(U[],System.String)
inline String_t* Resource_GetUrlQueryFromArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB0160B669CF7F4CFECCC1B46B161F95A40D9934F (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___items0, String_t* ___separator1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*, String_t*, const RuntimeMethod*))Resource_GetUrlQueryFromArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB0160B669CF7F4CFECCC1B46B161F95A40D9934F_gshared)(___items0, ___separator1, method);
}
// System.Nullable`1<System.Boolean> Mapbox.Directions.DirectionResource::get_Steps()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 DirectionResource_get_Steps_m57D5650642C67B96C11628426B549DDC952B314D_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) ;
// Mapbox.Directions.RoutingProfile Mapbox.Directions.DirectionResource::get_RoutingProfile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* DirectionResource_get_RoutingProfile_m7A4D180FCA195457E032F1D1ACD380D35452836A_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) ;
// Mapbox.Utils.Vector2d[] Mapbox.Directions.DirectionResource::get_Coordinates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* DirectionResource_get_Coordinates_mB0968158B41D14C08A8EB99DE0B1D8859EDE015B_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) ;
// System.String Mapbox.Platform.Resource::GetUrlQueryFromArray<Mapbox.Utils.Vector2d>(U[],System.String)
inline String_t* Resource_GetUrlQueryFromArray_TisVector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB_mED5D98EEF7C2F8156646FDEDFBC227C54CCF94E6 (Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* ___items0, String_t* ___separator1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6*, String_t*, const RuntimeMethod*))Resource_GetUrlQueryFromArray_TisVector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB_mED5D98EEF7C2F8156646FDEDFBC227C54CCF94E6_gshared)(___items0, ___separator1, method);
}
// System.Void Mapbox.Directions.Directions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m3A4377056CA3BC08FE5CFD494796CAFC305AF4A7 (U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Mapbox.Platform.Response>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m867A61D296D519A658D7D5D2771794719FAD8A95 (Action_1_t0EE6D29520C59A47FB51910DC20822ACA4A4BE4B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0EE6D29520C59A47FB51910DC20822ACA4A4BE4B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// Mapbox.Json.JsonConverter[] Mapbox.Utils.JsonConverters.JsonConverters::get_Converters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonConverterU5BU5D_tBBA2728030CCB3321DCD721DF9FF5A4A34D8B618* JsonConverters_get_Converters_m753C43E5FA6F499B3AED8D5D028EB7AB4F1C306C_inline (const RuntimeMethod* method) ;
// T Mapbox.Json.JsonConvert::DeserializeObject<Mapbox.Directions.DirectionsResponse>(System.String,Mapbox.Json.JsonConverter[])
inline DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* JsonConvert_DeserializeObject_TisDirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3_m17A8C93F5D5FCB15386EF5E44EADD4504B5ED027 (String_t* ___value0, JsonConverterU5BU5D_tBBA2728030CCB3321DCD721DF9FF5A4A34D8B618* ___converters1, const RuntimeMethod* method)
{
	return ((  DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* (*) (String_t*, JsonConverterU5BU5D_tBBA2728030CCB3321DCD721DF9FF5A4A34D8B618*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_mB366A4996D1330554253AA1B36CFAC9451FA516C_gshared)(___value0, ___converters1, method);
}
// System.String Mapbox.Json.JsonConvert::SerializeObject(System.Object,Mapbox.Json.JsonConverter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_m2F81E1943CF56714D41EBEACC306F438E9D6464D (RuntimeObject* ___value0, JsonConverterU5BU5D_tBBA2728030CCB3321DCD721DF9FF5A4A34D8B618* ___converters1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// Mapbox.Directions.DirectionsResponse Mapbox.Directions.Directions::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* Directions_Deserialize_m5F94C99CB4D447C11F75FFFDAF646A8DF66AD448 (Directions_t96A3A3D74497058E8FF54BBD984F70D09EE0BD33* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Mapbox.Directions.DirectionsResponse>::Invoke(T)
inline void Action_1_Invoke_m82304879A9E8D58BA6C286E5117C57F77D17B6A8_inline (Action_1_tFC418E3B65CD6CC80DDE96FD3D8501E5423FFCC0* __this, DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFC418E3B65CD6CC80DDE96FD3D8501E5423FFCC0*, DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Mapbox.Directions.Overview::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overview__ctor_m913311D1D785FC94E0893130698A6B45F1A5F53E (Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* __this, String_t* ___overview0, const RuntimeMethod* method) ;
// System.Void Mapbox.Directions.RoutingProfile::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoutingProfile__ctor_m7FEF0936E404FF4537751190D2266582B1E0A718 (RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* __this, String_t* ___profile0, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Void Mapbox.CheapRulerCs.CheapRuler::.ctor(System.Double,Mapbox.CheapRulerCs.CheapRulerUnits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheapRuler__ctor_m73A7362EEAD52021D1998FFF2F97E58E2E613771 (CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7* __this, double ___latitude0, int32_t ___outputUnits1, const RuntimeMethod* method) ;
// System.Double[] Mapbox.CheapRulerCs.CheapRuler::offset(System.Double[],System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* CheapRuler_offset_mCCE3EDBFA9FBA55315D42C66BFF8F3CD58C8B17F (CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___p0, double ___dx1, double ___dy2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Mapbox.Geocoding.GeocodeResponse::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeocodeResponse_get_Type_m5AD3E0A9C1473E9E8BFA6457E137BC768319AAF1 (GeocodeResponse_tFE5607E3406791C29737D8ED0FE5B5BB7B0709BA* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mapbox.Geocoding.GeocodeResponse::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeocodeResponse_set_Type_m3796981E5CEC418BE38B8B2F0C0212587A4FFFC7 (GeocodeResponse_tFE5607E3406791C29737D8ED0FE5B5BB7B0709BA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Mapbox.Geocoding.Feature> Mapbox.Geocoding.GeocodeResponse::get_Features()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFA08C44658D5013FEE87376AA1403698A94EBA80* GeocodeResponse_get_Features_mE86E887521FF232100734EB588D8BCC4D8A1FC44 (GeocodeResponse_tFE5607E3406791C29737D8ED0FE5B5BB7B0709BA* __this, const RuntimeMethod* method) 
{
	{
		// public List<Feature> Features { get; set; }
		List_1_tFA08C44658D5013FEE87376AA1403698A94EBA80* L_0 = __this->___U3CFeaturesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mapbox.Geocoding.GeocodeResponse::set_Features(System.Collections.Generic.List`1<Mapbox.Geocoding.Feature>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeocodeResponse_set_Features_mE1CE10E90781EC9721CEBE2227A2F596CBAB9945 (GeocodeResponse_tFE5607E3406791C29737D8ED0FE5B5BB7B0709BA* __this, List_1_tFA08C44658D5013FEE87376AA1403698A94EBA80* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Feature> Features { get; set; }
		List_1_tFA08C44658D5013FEE87376AA1403698A94EBA80* L_0 = ___value0;
		__this->___U3CFeaturesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFeaturesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Mapbox.Geocoding.GeocodeResponse::get_Attribution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeocodeResponse_get_Attribution_m85CF36EE8D5B44A36C143BC7CCC1B7EBD873FAB3 (GeocodeResponse_tFE5607E3406791C29737D8ED0FE5B5BB7B0709BA* __this, const RuntimeMethod* method) 
{
	{
		// public string Attribution { get; set; }
		String_t* L_0 = __this->___U3CAttributionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Mapbox.Geocoding.GeocodeResponse::set_Attribution(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeocodeResponse_set_Attribution_m7F9DB70EA743BD65DC22989E9F6F1E70485E3604 (GeocodeResponse_tFE5607E3406791C29737D8ED0FE5B5BB7B0709BA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Attribution { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CAttributionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAttributionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Geocoding.GeocodeResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeocodeResponse__ctor_m8F01E3016513206B31E5FACDB8862A0966BFFC87 (GeocodeResponse_tFE5607E3406791C29737D8ED0FE5B5BB7B0709BA* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.List`1<System.Double> Mapbox.Geocoding.ReverseGeocodeResponse::get_Query()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t495F03F47D827883530F951D563C0BB7340E5995* ReverseGeocodeResponse_get_Query_m99E83D215AC37CA848AF391F9DD3EE9C410D4C58 (ReverseGeocodeResponse_tDC57E707B5D66B553A1388CE482D931B336C3760* __this, const RuntimeMethod* method) 
{
	{
		// public List<double> Query { get; set; }
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_0 = __this->___U3CQueryU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Mapbox.Geocoding.ReverseGeocodeResponse::set_Query(System.Collections.Generic.List`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReverseGeocodeResponse_set_Query_mBE5C6B964D320A0DBFB4B07364A873EE65AA88A0 (ReverseGeocodeResponse_tDC57E707B5D66B553A1388CE482D931B336C3760* __this, List_1_t495F03F47D827883530F951D563C0BB7340E5995* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<double> Query { get; set; }
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_0 = ___value0;
		__this->___U3CQueryU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQueryU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Geocoding.ReverseGeocodeResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReverseGeocodeResponse__ctor_m729A9C4223F4984E2E4C89ADFB23E029AA753673 (ReverseGeocodeResponse_tDC57E707B5D66B553A1388CE482D931B336C3760* __this, const RuntimeMethod* method) 
{
	{
		GeocodeResponse__ctor_m8F01E3016513206B31E5FACDB8862A0966BFFC87(__this, NULL);
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
// System.Collections.Generic.List`1<System.String> Mapbox.Geocoding.ForwardGeocodeResponse::get_Query()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ForwardGeocodeResponse_get_Query_mF3B53787BAFD3BE0F33548C67C350BF908992D7B (ForwardGeocodeResponse_tDB08E11A69456681C4423921EA57839B6FDF2AF6* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Query { get; set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CQueryU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Mapbox.Geocoding.ForwardGeocodeResponse::set_Query(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForwardGeocodeResponse_set_Query_mDD3C297A96F8CCEE037E424145E587FEB059A4FD (ForwardGeocodeResponse_tDB08E11A69456681C4423921EA57839B6FDF2AF6* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> Query { get; set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CQueryU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQueryU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Geocoding.ForwardGeocodeResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForwardGeocodeResponse__ctor_m47CEA05D42059AE0E620AD2BB3F2F7B73F7D04BA (ForwardGeocodeResponse_tDB08E11A69456681C4423921EA57839B6FDF2AF6* __this, const RuntimeMethod* method) 
{
	{
		GeocodeResponse__ctor_m8F01E3016513206B31E5FACDB8862A0966BFFC87(__this, NULL);
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
// System.String Mapbox.Geocoding.Geometry::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Geometry_get_Type_mB71034D9889127DB9E6D4C6114B0E1F27D6AF580 (Geometry_tD2C5DC59BD97C90C1326BB7557F8127AD1F43294* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mapbox.Geocoding.Geometry::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geometry_set_Type_m327CA16B0E4136FD581EADD799565021546E9DDA (Geometry_tD2C5DC59BD97C90C1326BB7557F8127AD1F43294* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Mapbox.Utils.Vector2d Mapbox.Geocoding.Geometry::get_Coordinates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB Geometry_get_Coordinates_mE0A4FC25C8C8C43D5918966FB8DD6B6BF441DF98 (Geometry_tD2C5DC59BD97C90C1326BB7557F8127AD1F43294* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2d Coordinates { get; set; }
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_0 = __this->___U3CCoordinatesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mapbox.Geocoding.Geometry::set_Coordinates(Mapbox.Utils.Vector2d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geometry_set_Coordinates_m4D6AD3780D723DF0AC79448A381409D95EB4EE84 (Geometry_tD2C5DC59BD97C90C1326BB7557F8127AD1F43294* __this, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2d Coordinates { get; set; }
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_0 = ___value0;
		__this->___U3CCoordinatesU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Mapbox.Geocoding.Geometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geometry__ctor_mA3D611E313363148060C945A59F80CE196066711 (Geometry_tD2C5DC59BD97C90C1326BB7557F8127AD1F43294* __this, const RuntimeMethod* method) 
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
// System.Void Mapbox.Geocoding.ReverseGeocodeResource::.ctor(Mapbox.Utils.Vector2d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReverseGeocodeResource__ctor_m80F30B0075BC828D2FA6E662F970548B5C07139D (ReverseGeocodeResource_t7D91425B6157966BE41B5361B0530B478EB20BBB* __this, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB ___query0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeocodeResource_1__ctor_m423A00E93A52E08DBCFC4996B961AA5BED2FAA44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ReverseGeocodeResource(Vector2d query)
		il2cpp_codegen_runtime_class_init_inline(GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94_il2cpp_TypeInfo_var);
		GeocodeResource_1__ctor_m423A00E93A52E08DBCFC4996B961AA5BED2FAA44(__this, GeocodeResource_1__ctor_m423A00E93A52E08DBCFC4996B961AA5BED2FAA44_RuntimeMethod_var);
		// this.Query = query;
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_0 = ___query0;
		VirtualActionInvoker1< Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB >::Invoke(7 /* System.Void Mapbox.Geocoding.GeocodeResource`1<Mapbox.Utils.Vector2d>::set_Query(T) */, __this, L_0);
		// }
		return;
	}
}
// Mapbox.Utils.Vector2d Mapbox.Geocoding.ReverseGeocodeResource::get_Query()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB ReverseGeocodeResource_get_Query_m6480AFD787B8D64F3BC879EEE31FC8DCB54A9207 (ReverseGeocodeResource_t7D91425B6157966BE41B5361B0530B478EB20BBB* __this, const RuntimeMethod* method) 
{
	{
		// return this.query;
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_0 = __this->___query_4;
		return L_0;
	}
}
// System.Void Mapbox.Geocoding.ReverseGeocodeResource::set_Query(Mapbox.Utils.Vector2d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReverseGeocodeResource_set_Query_mD53F1B00E2F1CC319648A18046417C864AD2F569 (ReverseGeocodeResource_t7D91425B6157966BE41B5361B0530B478EB20BBB* __this, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB ___value0, const RuntimeMethod* method) 
{
	{
		// this.query = value;
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_0 = ___value0;
		__this->___query_4 = L_0;
		// }
		return;
	}
}
// System.String Mapbox.Geocoding.ReverseGeocodeResource::GetUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReverseGeocodeResource_GetUrl_m58F0BE27DEDF763609C320D76BFE48B7F890719A (ReverseGeocodeResource_t7D91425B6157966BE41B5361B0530B478EB20BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeocodeResource_1_get_Mode_mAA58BD80ABCD824EAE5A27AAF803EDEB1429DCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeocodeResource_1_get_Types_m1130D1D48A36360F359D23595F43BED8670E77F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resource_GetUrlQueryFromArray_TisString_t_mC24B7C0A4394C958C3A5E07417366E813C3555F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF52DD7E1435BB0FFE0E53E48392DBE937C7405CB);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Dictionary<string, string> opts = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		// if (this.Types != null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = GeocodeResource_1_get_Types_m1130D1D48A36360F359D23595F43BED8670E77F7_inline(__this, GeocodeResource_1_get_Types_m1130D1D48A36360F359D23595F43BED8670E77F7_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// opts.Add("types", GetUrlQueryFromArray(this.Types));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = GeocodeResource_1_get_Types_m1130D1D48A36360F359D23595F43BED8670E77F7_inline(__this, GeocodeResource_1_get_Types_m1130D1D48A36360F359D23595F43BED8670E77F7_RuntimeMethod_var);
		String_t* L_4;
		L_4 = Resource_GetUrlQueryFromArray_TisString_t_mC24B7C0A4394C958C3A5E07417366E813C3555F8(L_3, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, Resource_GetUrlQueryFromArray_TisString_t_mC24B7C0A4394C958C3A5E07417366E813C3555F8_RuntimeMethod_var);
		NullCheck(L_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_2, _stringLiteralE7CA7E65A8F7D0C1539587726FAFBC88FDAFE4CF, L_4, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_0029:
	{
		// return Constants.BaseAPI +
		//                 this.ApiEndpoint +
		//                 this.Mode +
		//                 this.Query.ToString() +
		//                 ".json" +
		//                 EncodeQueryString(opts);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralF52DD7E1435BB0FFE0E53E48392DBE937C7405CB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF52DD7E1435BB0FFE0E53E48392DBE937C7405CB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Mapbox.Platform.Resource::get_ApiEndpoint() */, __this);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		String_t* L_10;
		L_10 = GeocodeResource_1_get_Mode_mAA58BD80ABCD824EAE5A27AAF803EDEB1429DCC2_inline(__this, GeocodeResource_1_get_Mode_mAA58BD80ABCD824EAE5A27AAF803EDEB1429DCC2_RuntimeMethod_var);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_12;
		L_12 = VirtualFuncInvoker0< Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB >::Invoke(6 /* T Mapbox.Geocoding.GeocodeResource`1<Mapbox.Utils.Vector2d>::get_Query() */, __this);
		V_1 = L_12;
		String_t* L_13;
		L_13 = Vector2d_ToString_m8BFD0569990A98E863CDC1B3C640BB189AF496D3((&V_1), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_11;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = V_0;
		String_t* L_17;
		L_17 = Resource_EncodeQueryString_mEDC32F5027652619E8FD0724A6AA5B36A394CF69(L_16, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_17);
		String_t* L_18;
		L_18 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		return L_18;
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
// System.Void Mapbox.Directions.DirectionResource::.ctor(Mapbox.Utils.Vector2d[],Mapbox.Directions.RoutingProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionResource__ctor_mFC2C22FEC5350168F787F59464EDA426E96D08FA (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* ___coordinates0, RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* ___profile1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42B2A543857A89FBFF1010FFF74DB6049C937C37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string apiEndpoint = "directions/v5/";
		__this->___apiEndpoint_0 = _stringLiteral42B2A543857A89FBFF1010FFF74DB6049C937C37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___apiEndpoint_0), (void*)_stringLiteral42B2A543857A89FBFF1010FFF74DB6049C937C37);
		// public DirectionResource(Vector2d[] coordinates, RoutingProfile profile)
		Resource__ctor_mE41A8E6DEDA248B4D5AB3942C57C1ABE5B8E0FFA(__this, NULL);
		// this.Coordinates = coordinates;
		Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* L_0 = ___coordinates0;
		DirectionResource_set_Coordinates_m01FB9199130432AF8FC26615139F82A26A7ABBF4(__this, L_0, NULL);
		// this.RoutingProfile = profile;
		RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* L_1 = ___profile1;
		DirectionResource_set_RoutingProfile_m0FEE838D283AD15FB802C33B01574265D47DDF80_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.String Mapbox.Directions.DirectionResource::get_ApiEndpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DirectionResource_get_ApiEndpoint_m2DA790327600CD74C601D60C583070EB9834D033 (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.apiEndpoint;
		String_t* L_0 = __this->___apiEndpoint_0;
		return L_0;
	}
}
// Mapbox.Utils.Vector2d[] Mapbox.Directions.DirectionResource::get_Coordinates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* DirectionResource_get_Coordinates_mB0968158B41D14C08A8EB99DE0B1D8859EDE015B (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.coordinates;
		Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* L_0 = __this->___coordinates_2;
		return L_0;
	}
}
// System.Void Mapbox.Directions.DirectionResource::set_Coordinates(Mapbox.Utils.Vector2d[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionResource_set_Coordinates_m01FB9199130432AF8FC26615139F82A26A7ABBF4 (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* ___value0, const RuntimeMethod* method) 
{
	{
		// if (value.Length < 2 || value.Length > 25)
		Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* L_0 = ___value0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)2)))
		{
			goto IL_000d;
		}
	}
	{
		Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* L_1 = ___value0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) <= ((int32_t)((int32_t)25))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		// throw new Exception("Must be between 2 and 25 elements in coordinates array.");
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C1F5085E453A1868289D86B8664F46390191A29)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DirectionResource_set_Coordinates_m01FB9199130432AF8FC26615139F82A26A7ABBF4_RuntimeMethod_var)));
	}

IL_0018:
	{
		// this.coordinates = value;
		Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* L_3 = ___value0;
		__this->___coordinates_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coordinates_2), (void*)L_3);
		// }
		return;
	}
}
// Mapbox.Directions.RoutingProfile Mapbox.Directions.DirectionResource::get_RoutingProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* DirectionResource_get_RoutingProfile_m7A4D180FCA195457E032F1D1ACD380D35452836A (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.profile;
		RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* L_0 = __this->___profile_1;
		return L_0;
	}
}
// System.Void Mapbox.Directions.DirectionResource::set_RoutingProfile(Mapbox.Directions.RoutingProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionResource_set_RoutingProfile_m0FEE838D283AD15FB802C33B01574265D47DDF80 (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* ___value0, const RuntimeMethod* method) 
{
	{
		// this.profile = value;
		RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* L_0 = ___value0;
		__this->___profile_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profile_1), (void*)L_0);
		// }
		return;
	}
}
// System.Nullable`1<System.Boolean> Mapbox.Directions.DirectionResource::get_Alternatives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 DirectionResource_get_Alternatives_mAFDE9468CED9F714ABDCC35F43D22033A11FD889 (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.alternatives;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = __this->___alternatives_3;
		return L_0;
	}
}
// System.Void Mapbox.Directions.DirectionResource::set_Alternatives(System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionResource_set_Alternatives_mB9831BADC4F889B7857A8438297D96FBD1D16206 (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___value0, const RuntimeMethod* method) 
{
	{
		// this.alternatives = value;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = ___value0;
		__this->___alternatives_3 = L_0;
		// }
		return;
	}
}
// Mapbox.Utils.BearingFilter[] Mapbox.Directions.DirectionResource::get_Bearings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* DirectionResource_get_Bearings_m02BA417F6FA47E75F119D287D1F49F62A6203B0B (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.bearings;
		BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* L_0 = __this->___bearings_4;
		return L_0;
	}
}
// System.Void Mapbox.Directions.DirectionResource::set_Bearings(Mapbox.Utils.BearingFilter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionResource_set_Bearings_m3465F093A3459BC3A475F28A0218CDA4356F6C8B (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* ___value0, const RuntimeMethod* method) 
{
	{
		// if (value != null && value.Length != this.coordinates.Length)
		BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* L_1 = ___value0;
		NullCheck(L_1);
		Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* L_2 = __this->___coordinates_2;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// throw new Exception("There must be as many bearings as there are coordinates in the request.");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB82BF7254E717B1F389254C9C3CCA39020FD831)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DirectionResource_set_Bearings_m3465F093A3459BC3A475F28A0218CDA4356F6C8B_RuntimeMethod_var)));
	}

IL_001b:
	{
		// this.bearings = value;
		BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* L_4 = ___value0;
		__this->___bearings_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bearings_4), (void*)L_4);
		// }
		return;
	}
}
// System.Nullable`1<System.Boolean> Mapbox.Directions.DirectionResource::get_ContinueStraight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 DirectionResource_get_ContinueStraight_m61C99216C79C351C05CDBEBA9FAC49E19CCA6B0A (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.continueStraight;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = __this->___continueStraight_5;
		return L_0;
	}
}
// System.Void Mapbox.Directions.DirectionResource::set_ContinueStraight(System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionResource_set_ContinueStraight_m22CCA4EFDEC897D30AFD2B2CF80124FB340B2CF3 (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___value0, const RuntimeMethod* method) 
{
	{
		// this.continueStraight = value;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = ___value0;
		__this->___continueStraight_5 = L_0;
		// }
		return;
	}
}
// Mapbox.Directions.Overview Mapbox.Directions.DirectionResource::get_Overview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* DirectionResource_get_Overview_m82052630D5F81D8B2C6BDBF78A3147053327BC35 (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.overview;
		Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* L_0 = __this->___overview_6;
		return L_0;
	}
}
// System.Void Mapbox.Directions.DirectionResource::set_Overview(Mapbox.Directions.Overview)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionResource_set_Overview_mCB12A4F75598506C311F96D95160D5AA30A84C7E (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* ___value0, const RuntimeMethod* method) 
{
	{
		// this.overview = value;
		Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* L_0 = ___value0;
		__this->___overview_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___overview_6), (void*)L_0);
		// }
		return;
	}
}
// System.Double[] Mapbox.Directions.DirectionResource::get_Radiuses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* DirectionResource_get_Radiuses_m26C0BCCC70733C6BCABB5F54BADB737FEA2BFB14 (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.radiuses;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = __this->___radiuses_7;
		return L_0;
	}
}
// System.Void Mapbox.Directions.DirectionResource::set_Radiuses(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionResource_set_Radiuses_mC2190618ABD04412826C008DC5AE734E40BBB696 (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (value != null)
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		// if (value.Length != this.coordinates.Length)
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___value0;
		NullCheck(L_1);
		Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* L_2 = __this->___coordinates_2;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// throw new Exception("There must be as many radiuses as there are coordinates in the request.");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C36F597492FB447BA64A9ADC63ED3C280B645BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DirectionResource_set_Radiuses_mC2190618ABD04412826C008DC5AE734E40BBB696_RuntimeMethod_var)));
	}

IL_001b:
	{
		// for (int i = 0; i < value.Length; i++)
		V_0 = 0;
		goto IL_003c;
	}

IL_001f:
	{
		// if (value[i] <= 0)
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ___value0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		double L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((!(((double)L_7) <= ((double)(0.0)))))
		{
			goto IL_0038;
		}
	}
	{
		// throw new Exception("Radius must be greater than 0");
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE0E5913397F63009A7BB68104E0A7E7038383243)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DirectionResource_set_Radiuses_mC2190618ABD04412826C008DC5AE734E40BBB696_RuntimeMethod_var)));
	}

IL_0038:
	{
		// for (int i = 0; i < value.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003c:
	{
		// for (int i = 0; i < value.Length; i++)
		int32_t L_10 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = ___value0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_001f;
		}
	}

IL_0042:
	{
		// this.radiuses = value;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = ___value0;
		__this->___radiuses_7 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___radiuses_7), (void*)L_12);
		// }
		return;
	}
}
// System.Nullable`1<System.Boolean> Mapbox.Directions.DirectionResource::get_Steps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 DirectionResource_get_Steps_m57D5650642C67B96C11628426B549DDC952B314D (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.steps;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = __this->___steps_8;
		return L_0;
	}
}
// System.Void Mapbox.Directions.DirectionResource::set_Steps(System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionResource_set_Steps_mF7E414173DC9E0685FB271789B69973606225473 (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___value0, const RuntimeMethod* method) 
{
	{
		// this.steps = value;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = ___value0;
		__this->___steps_8 = L_0;
		// }
		return;
	}
}
// System.String Mapbox.Directions.DirectionResource::GetUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DirectionResource_GetUrl_m29AA08C446E84C7622540ED1214B1B862EBCC177 (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resource_GetUrlQueryFromArray_TisBearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC_mF4DB3764E9A2D96924E3563F09527481944BF2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resource_GetUrlQueryFromArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB0160B669CF7F4CFECCC1B46B161F95A40D9934F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resource_GetUrlQueryFromArray_TisVector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB_mED5D98EEF7C2F8156646FDEDFBC227C54CCF94E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A55548ECC15B25C674177B822F8D647210E9735);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D3B47B5EFCD8BED58055570596FD61BEDAE523A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79CD41FECA9CA3240210A11A155C7DE13AD73E7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3953C49098F0F68B317C99135FD4DDFC0EFC962);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD402B0A1EA08268A3AB4CAFB475C20E21809650);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE100104AB6827D47224D16CC2C7B932961CA192A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF52DD7E1435BB0FFE0E53E48392DBE937C7405CB);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	String_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	{
		// Dictionary<string, string> opts = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		// if (this.Alternatives != null)
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		L_1 = DirectionResource_get_Alternatives_mAFDE9468CED9F714ABDCC35F43D22033A11FD889_inline(__this, NULL);
		V_1 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_1), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		// opts.Add("alternatives", this.Alternatives.ToString().ToLower());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = V_0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_4;
		L_4 = DirectionResource_get_Alternatives_mAFDE9468CED9F714ABDCC35F43D22033A11FD889_inline(__this, NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB((&V_1), Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_5, NULL);
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, _stringLiteral79CD41FECA9CA3240210A11A155C7DE13AD73E7F, L_6, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_003a:
	{
		// if (this.Bearings != null)
		BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* L_7;
		L_7 = DirectionResource_get_Bearings_m02BA417F6FA47E75F119D287D1F49F62A6203B0B_inline(__this, NULL);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		// opts.Add("bearings", GetUrlQueryFromArray(this.Bearings, ";"));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = V_0;
		BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* L_9;
		L_9 = DirectionResource_get_Bearings_m02BA417F6FA47E75F119D287D1F49F62A6203B0B_inline(__this, NULL);
		String_t* L_10;
		L_10 = Resource_GetUrlQueryFromArray_TisBearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC_mF4DB3764E9A2D96924E3563F09527481944BF2A3(L_9, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, Resource_GetUrlQueryFromArray_TisBearingFilter_tB68204C2DFAF54DE6D1F5E552B41A96C440026AC_mF4DB3764E9A2D96924E3563F09527481944BF2A3_RuntimeMethod_var);
		NullCheck(L_8);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_8, _stringLiteralC3953C49098F0F68B317C99135FD4DDFC0EFC962, L_10, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_005d:
	{
		// if (this.ContinueStraight != null)
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_11;
		L_11 = DirectionResource_get_ContinueStraight_m61C99216C79C351C05CDBEBA9FAC49E19CCA6B0A_inline(__this, NULL);
		V_1 = L_11;
		bool L_12;
		L_12 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_1), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0091;
		}
	}
	{
		// opts.Add("continue_straight", this.ContinueStraight.ToString().ToLower());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = V_0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_14;
		L_14 = DirectionResource_get_ContinueStraight_m61C99216C79C351C05CDBEBA9FAC49E19CCA6B0A_inline(__this, NULL);
		V_1 = L_14;
		String_t* L_15;
		L_15 = Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB((&V_1), Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB_RuntimeMethod_var);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_15, NULL);
		NullCheck(L_13);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_13, _stringLiteralE100104AB6827D47224D16CC2C7B932961CA192A, L_16, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_0091:
	{
		// if (this.Overview != null)
		Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* L_17;
		L_17 = DirectionResource_get_Overview_m82052630D5F81D8B2C6BDBF78A3147053327BC35_inline(__this, NULL);
		if (!L_17)
		{
			goto IL_00af;
		}
	}
	{
		// opts.Add("overview", this.Overview.ToString());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = V_0;
		Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* L_19;
		L_19 = DirectionResource_get_Overview_m82052630D5F81D8B2C6BDBF78A3147053327BC35_inline(__this, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		NullCheck(L_18);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_18, _stringLiteral5D3B47B5EFCD8BED58055570596FD61BEDAE523A, L_20, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_00af:
	{
		// if (this.Radiuses != null)
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_21;
		L_21 = DirectionResource_get_Radiuses_m26C0BCCC70733C6BCABB5F54BADB737FEA2BFB14_inline(__this, NULL);
		if (!L_21)
		{
			goto IL_00d2;
		}
	}
	{
		// opts.Add("radiuses", GetUrlQueryFromArray(this.Radiuses));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_22 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_23;
		L_23 = DirectionResource_get_Radiuses_m26C0BCCC70733C6BCABB5F54BADB737FEA2BFB14_inline(__this, NULL);
		String_t* L_24;
		L_24 = Resource_GetUrlQueryFromArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB0160B669CF7F4CFECCC1B46B161F95A40D9934F(L_23, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, Resource_GetUrlQueryFromArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB0160B669CF7F4CFECCC1B46B161F95A40D9934F_RuntimeMethod_var);
		NullCheck(L_22);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_22, _stringLiteralCD402B0A1EA08268A3AB4CAFB475C20E21809650, L_24, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_00d2:
	{
		// if (this.Steps != null)
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_25;
		L_25 = DirectionResource_get_Steps_m57D5650642C67B96C11628426B549DDC952B314D_inline(__this, NULL);
		V_1 = L_25;
		bool L_26;
		L_26 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_1), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (!L_26)
		{
			goto IL_0106;
		}
	}
	{
		// opts.Add("steps", this.Steps.ToString().ToLower());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_27 = V_0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_28;
		L_28 = DirectionResource_get_Steps_m57D5650642C67B96C11628426B549DDC952B314D_inline(__this, NULL);
		V_1 = L_28;
		String_t* L_29;
		L_29 = Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB((&V_1), Nullable_1_ToString_mB292D0EC62EBD4B2E6FB13A2DBB5DC9117929AFB_RuntimeMethod_var);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_29, NULL);
		NullCheck(L_27);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_27, _stringLiteral0A55548ECC15B25C674177B822F8D647210E9735, L_30, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_0106:
	{
		// return Constants.BaseAPI +
		//                 this.ApiEndpoint +
		//                 this.RoutingProfile +
		//                 GetUrlQueryFromArray<Vector2d>(this.Coordinates, ";") +
		//                 ".json" +
		//                 EncodeQueryString(opts);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralF52DD7E1435BB0FFE0E53E48392DBE937C7405CB);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF52DD7E1435BB0FFE0E53E48392DBE937C7405CB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Mapbox.Platform.Resource::get_ApiEndpoint() */, __this);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_33;
		RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* L_36;
		L_36 = DirectionResource_get_RoutingProfile_m7A4D180FCA195457E032F1D1ACD380D35452836A_inline(__this, NULL);
		RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* L_37 = L_36;
		G_B13_0 = L_37;
		G_B13_1 = 2;
		G_B13_2 = L_35;
		G_B13_3 = L_35;
		if (L_37)
		{
			G_B14_0 = L_37;
			G_B14_1 = 2;
			G_B14_2 = L_35;
			G_B14_3 = L_35;
			goto IL_012c;
		}
	}
	{
		G_B15_0 = ((String_t*)(NULL));
		G_B15_1 = G_B13_1;
		G_B15_2 = G_B13_2;
		G_B15_3 = G_B13_3;
		goto IL_0131;
	}

IL_012c:
	{
		NullCheck(G_B14_0);
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B14_0);
		G_B15_0 = L_38;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		G_B15_3 = G_B14_3;
	}

IL_0131:
	{
		NullCheck(G_B15_2);
		ArrayElementTypeCheck (G_B15_2, G_B15_0);
		(G_B15_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B15_1), (String_t*)G_B15_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = G_B15_3;
		Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* L_40;
		L_40 = DirectionResource_get_Coordinates_mB0968158B41D14C08A8EB99DE0B1D8859EDE015B_inline(__this, NULL);
		String_t* L_41;
		L_41 = Resource_GetUrlQueryFromArray_TisVector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB_mED5D98EEF7C2F8156646FDEDFBC227C54CCF94E6(L_40, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, Resource_GetUrlQueryFromArray_TisVector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB_mED5D98EEF7C2F8156646FDEDFBC227C54CCF94E6_RuntimeMethod_var);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_41);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_41);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_39;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral0CF6E760F4429CA66FCDDB0BC125023158962742);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_44 = V_0;
		String_t* L_45;
		L_45 = Resource_EncodeQueryString_mEDC32F5027652619E8FD0724A6AA5B36A394CF69(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_45);
		String_t* L_46;
		L_46 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_43, NULL);
		return L_46;
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
// System.Void Mapbox.Directions.Directions::.ctor(Mapbox.Platform.IFileSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Directions__ctor_m008752A1B5FA44A0360B0401366D4C855CA32A3B (Directions_t96A3A3D74497058E8FF54BBD984F70D09EE0BD33* __this, RuntimeObject* ___fileSource0, const RuntimeMethod* method) 
{
	{
		// public Directions(IFileSource fileSource)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.fileSource = fileSource;
		RuntimeObject* L_0 = ___fileSource0;
		__this->___fileSource_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileSource_0), (void*)L_0);
		// }
		return;
	}
}
// Mapbox.Platform.IAsyncRequest Mapbox.Directions.Directions::Query(Mapbox.Directions.DirectionResource,System.Action`1<Mapbox.Directions.DirectionsResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Directions_Query_m12B910D9D72F686C52442F80C2075F0861124ABF (Directions_t96A3A3D74497058E8FF54BBD984F70D09EE0BD33* __this, DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* ___direction0, Action_1_tFC418E3B65CD6CC80DDE96FD3D8501E5423FFCC0* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0EE6D29520C59A47FB51910DC20822ACA4A4BE4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileSource_t04016FCFE3755DDFE407B1023FEDA00102549609_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CQueryU3Eb__0_m18E4388A80D196D5F23483B3F9C27A4D9DA847FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399* V_0 = NULL;
	CanonicalTileId_tE2B21F97F3C75188F50DD1C880DB3655BD8D57A6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399* L_0 = (U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m3A4377056CA3BC08FE5CFD494796CAFC305AF4A7(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399* L_2 = V_0;
		Action_1_tFC418E3B65CD6CC80DDE96FD3D8501E5423FFCC0* L_3 = ___callback1;
		NullCheck(L_2);
		L_2->___callback_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___callback_1), (void*)L_3);
		// return this.fileSource.Request(
		//     direction.GetUrl(),
		//     (Response response) =>
		//     {
		//         var str = Encoding.UTF8.GetString(response.Data);
		// 
		//         var data = Deserialize(str);
		// 
		//         callback(data);
		//     });
		RuntimeObject* L_4 = __this->___fileSource_0;
		DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* L_5 = ___direction0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String Mapbox.Platform.Resource::GetUrl() */, L_5);
		U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399* L_7 = V_0;
		Action_1_t0EE6D29520C59A47FB51910DC20822ACA4A4BE4B* L_8 = (Action_1_t0EE6D29520C59A47FB51910DC20822ACA4A4BE4B*)il2cpp_codegen_object_new(Action_1_t0EE6D29520C59A47FB51910DC20822ACA4A4BE4B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m867A61D296D519A658D7D5D2771794719FAD8A95(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CQueryU3Eb__0_m18E4388A80D196D5F23483B3F9C27A4D9DA847FA_RuntimeMethod_var), NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(CanonicalTileId_tE2B21F97F3C75188F50DD1C880DB3655BD8D57A6));
		CanonicalTileId_tE2B21F97F3C75188F50DD1C880DB3655BD8D57A6 L_9 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker5< RuntimeObject*, String_t*, Action_1_t0EE6D29520C59A47FB51910DC20822ACA4A4BE4B*, int32_t, CanonicalTileId_tE2B21F97F3C75188F50DD1C880DB3655BD8D57A6, String_t* >::Invoke(0 /* Mapbox.Platform.IAsyncRequest Mapbox.Platform.IFileSource::Request(System.String,System.Action`1<Mapbox.Platform.Response>,System.Int32,Mapbox.Map.CanonicalTileId,System.String) */, IFileSource_t04016FCFE3755DDFE407B1023FEDA00102549609_il2cpp_TypeInfo_var, L_4, L_6, L_8, ((int32_t)10), L_9, (String_t*)NULL);
		return L_10;
	}
}
// Mapbox.Directions.DirectionsResponse Mapbox.Directions.Directions::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* Directions_Deserialize_m5F94C99CB4D447C11F75FFFDAF646A8DF66AD448 (Directions_t96A3A3D74497058E8FF54BBD984F70D09EE0BD33* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3_m17A8C93F5D5FCB15386EF5E44EADD4504B5ED027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t36E88EEF2CFCEAC0D0E66E464FF7E54552AFCE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverters_tBECA50BB9A98F9FBB151F6EDB38CA94CE3F73860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonConvert.DeserializeObject<DirectionsResponse>(str, JsonConverters.Converters);
		String_t* L_0 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(JsonConverters_tBECA50BB9A98F9FBB151F6EDB38CA94CE3F73860_il2cpp_TypeInfo_var);
		JsonConverterU5BU5D_tBBA2728030CCB3321DCD721DF9FF5A4A34D8B618* L_1;
		L_1 = JsonConverters_get_Converters_m753C43E5FA6F499B3AED8D5D028EB7AB4F1C306C_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t36E88EEF2CFCEAC0D0E66E464FF7E54552AFCE22_il2cpp_TypeInfo_var);
		DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* L_2;
		L_2 = JsonConvert_DeserializeObject_TisDirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3_m17A8C93F5D5FCB15386EF5E44EADD4504B5ED027(L_0, L_1, JsonConvert_DeserializeObject_TisDirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3_m17A8C93F5D5FCB15386EF5E44EADD4504B5ED027_RuntimeMethod_var);
		return L_2;
	}
}
// System.String Mapbox.Directions.Directions::Serialize(Mapbox.Directions.DirectionsResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Directions_Serialize_mA6413C933DE5FE72704997B7B570C7934BEF1ADA (Directions_t96A3A3D74497058E8FF54BBD984F70D09EE0BD33* __this, DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t36E88EEF2CFCEAC0D0E66E464FF7E54552AFCE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverters_tBECA50BB9A98F9FBB151F6EDB38CA94CE3F73860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonConvert.SerializeObject(response, JsonConverters.Converters);
		DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* L_0 = ___response0;
		il2cpp_codegen_runtime_class_init_inline(JsonConverters_tBECA50BB9A98F9FBB151F6EDB38CA94CE3F73860_il2cpp_TypeInfo_var);
		JsonConverterU5BU5D_tBBA2728030CCB3321DCD721DF9FF5A4A34D8B618* L_1;
		L_1 = JsonConverters_get_Converters_m753C43E5FA6F499B3AED8D5D028EB7AB4F1C306C_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t36E88EEF2CFCEAC0D0E66E464FF7E54552AFCE22_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonConvert_SerializeObject_m2F81E1943CF56714D41EBEACC306F438E9D6464D(L_0, L_1, NULL);
		return L_2;
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
// System.Void Mapbox.Directions.Directions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m3A4377056CA3BC08FE5CFD494796CAFC305AF4A7 (U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Mapbox.Directions.Directions/<>c__DisplayClass2_0::<Query>b__0(Mapbox.Platform.Response)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CQueryU3Eb__0_m18E4388A80D196D5F23483B3F9C27A4D9DA847FA (U3CU3Ec__DisplayClass2_0_t65E8AB880CAA5758035F703F92C6DF244B1C1399* __this, Response_tBFBFBFAEC12BA747FDA2F3E9E5EC9A45E780B07F* ___response0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* V_1 = NULL;
	{
		// var str = Encoding.UTF8.GetString(response.Data);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		Response_tBFBFBFAEC12BA747FDA2F3E9E5EC9A45E780B07F* L_1 = ___response0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1->___Data_11;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		V_0 = L_3;
		// var data = Deserialize(str);
		Directions_t96A3A3D74497058E8FF54BBD984F70D09EE0BD33* L_4 = __this->___U3CU3E4__this_0;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* L_6;
		L_6 = Directions_Deserialize_m5F94C99CB4D447C11F75FFFDAF646A8DF66AD448(L_4, L_5, NULL);
		V_1 = L_6;
		// callback(data);
		Action_1_tFC418E3B65CD6CC80DDE96FD3D8501E5423FFCC0* L_7 = __this->___callback_1;
		DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* L_8 = V_1;
		NullCheck(L_7);
		Action_1_Invoke_m82304879A9E8D58BA6C286E5117C57F77D17B6A8_inline(L_7, L_8, NULL);
		// });
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
// System.Void Mapbox.Directions.Overview::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overview__ctor_m913311D1D785FC94E0893130698A6B45F1A5F53E (Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* __this, String_t* ___overview0, const RuntimeMethod* method) 
{
	{
		// private Overview(string overview)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.overview = overview;
		String_t* L_0 = ___overview0;
		__this->___overview_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___overview_3), (void*)L_0);
		// }
		return;
	}
}
// System.String Mapbox.Directions.Overview::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Overview_ToString_m87A563FF3AB889CD1BF5C650DC3CF4A5E4EA0178 (Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* __this, const RuntimeMethod* method) 
{
	{
		// return this.overview;
		String_t* L_0 = __this->___overview_3;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Overview::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overview__cctor_mF1BEFA0E8ED0F5EAF165EBBDEB6E3326B146B9F5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A0EE985B2AE2A4DB7161D511B311EDCD9C0B910);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF00B6A6965233B3ED5AC65EE0015D8D3F754D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Overview Full = new Overview("full");
		Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* L_0 = (Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF*)il2cpp_codegen_object_new(Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Overview__ctor_m913311D1D785FC94E0893130698A6B45F1A5F53E(L_0, _stringLiteral5A0EE985B2AE2A4DB7161D511B311EDCD9C0B910, NULL);
		((Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_StaticFields*)il2cpp_codegen_static_fields_for(Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_il2cpp_TypeInfo_var))->___Full_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_StaticFields*)il2cpp_codegen_static_fields_for(Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_il2cpp_TypeInfo_var))->___Full_0), (void*)L_0);
		// public static readonly Overview Simplified = new Overview("simplified");
		Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* L_1 = (Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF*)il2cpp_codegen_object_new(Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Overview__ctor_m913311D1D785FC94E0893130698A6B45F1A5F53E(L_1, _stringLiteral8BF00B6A6965233B3ED5AC65EE0015D8D3F754D4, NULL);
		((Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_StaticFields*)il2cpp_codegen_static_fields_for(Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_il2cpp_TypeInfo_var))->___Simplified_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_StaticFields*)il2cpp_codegen_static_fields_for(Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_il2cpp_TypeInfo_var))->___Simplified_1), (void*)L_1);
		// public static readonly Overview False = new Overview("false");
		Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* L_2 = (Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF*)il2cpp_codegen_object_new(Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Overview__ctor_m913311D1D785FC94E0893130698A6B45F1A5F53E(L_2, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		((Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_StaticFields*)il2cpp_codegen_static_fields_for(Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_il2cpp_TypeInfo_var))->___False_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_StaticFields*)il2cpp_codegen_static_fields_for(Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF_il2cpp_TypeInfo_var))->___False_2), (void*)L_2);
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
// System.Double[] Mapbox.Directions.Annotation::get_Distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* Annotation_get_Distance_mB15BE76CED10939B6FBD520BB93CE74E5EAFBB6C (Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* __this, const RuntimeMethod* method) 
{
	{
		// public double[] Distance { get; set; }
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = __this->___U3CDistanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Annotation::set_Distance(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation_set_Distance_mBD54FB8A9B1D4757E3DD8A476E43EC8357E4F4A6 (Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___value0, const RuntimeMethod* method) 
{
	{
		// public double[] Distance { get; set; }
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___value0;
		__this->___U3CDistanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDistanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Double[] Mapbox.Directions.Annotation::get_Duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* Annotation_get_Duration_m1E4428875D9266D790AA76E06D5299113DA48C3B (Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* __this, const RuntimeMethod* method) 
{
	{
		// public double[] Duration { get; set; }
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = __this->___U3CDurationU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Annotation::set_Duration(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation_set_Duration_mE58D8BF82CEF8A6B52CD3FD4D52786A7FACF77B4 (Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___value0, const RuntimeMethod* method) 
{
	{
		// public double[] Duration { get; set; }
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___value0;
		__this->___U3CDurationU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDurationU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String[] Mapbox.Directions.Annotation::get_Speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Annotation_get_Speed_m35382ED32F3272F9B9043BAFEAF497F62E2100F4 (Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* __this, const RuntimeMethod* method) 
{
	{
		// public string[] Speed { get; set; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CSpeedU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Annotation::set_Speed(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation_set_Speed_mEA9A98502D9F81269C02B4033ADD422177EB1343 (Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		// public string[] Speed { get; set; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___U3CSpeedU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSpeedU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String[] Mapbox.Directions.Annotation::get_Congestion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Annotation_get_Congestion_m18581232F807C05A1D1FD95D2E924EC847ED3FEA (Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* __this, const RuntimeMethod* method) 
{
	{
		// public string[] Congestion { get; set; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CCongestionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Annotation::set_Congestion(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation_set_Congestion_m16C9DFFCFB1D8E2EF09EBC44F87E02034DF2BFE8 (Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		// public string[] Congestion { get; set; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___U3CCongestionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCongestionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Directions.Annotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Annotation__ctor_m621F89D5E2A21778AAA1FBF3707B43B78B198B63 (Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.List`1<Mapbox.Directions.Route> Mapbox.Directions.DirectionsResponse::get_Routes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4538DA57AC0BF31586C476CFA5B8922555065CF6* DirectionsResponse_get_Routes_mE7AF63DC2C308871A9C8C05D8AABC2BBA211DB41 (DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* __this, const RuntimeMethod* method) 
{
	{
		// public List<Route> Routes { get; set; }
		List_1_t4538DA57AC0BF31586C476CFA5B8922555065CF6* L_0 = __this->___U3CRoutesU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mapbox.Directions.DirectionsResponse::set_Routes(System.Collections.Generic.List`1<Mapbox.Directions.Route>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionsResponse_set_Routes_m52CC4BC2FB3ACAC56F5AE3B9F26B69C60E0EFE45 (DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* __this, List_1_t4538DA57AC0BF31586C476CFA5B8922555065CF6* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Route> Routes { get; set; }
		List_1_t4538DA57AC0BF31586C476CFA5B8922555065CF6* L_0 = ___value0;
		__this->___U3CRoutesU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRoutesU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Mapbox.Directions.Waypoint> Mapbox.Directions.DirectionsResponse::get_Waypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8B7455CC7A04EC6FA11D5A23783A69673BAFB081* DirectionsResponse_get_Waypoints_m23E0DFCF6BB8EF3345CC8056AC13257D112A7683 (DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* __this, const RuntimeMethod* method) 
{
	{
		// public List<Waypoint> Waypoints { get; set; }
		List_1_t8B7455CC7A04EC6FA11D5A23783A69673BAFB081* L_0 = __this->___U3CWaypointsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mapbox.Directions.DirectionsResponse::set_Waypoints(System.Collections.Generic.List`1<Mapbox.Directions.Waypoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionsResponse_set_Waypoints_m705FB19FF351BD5999BF3275A4493960F3ABD7A0 (DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* __this, List_1_t8B7455CC7A04EC6FA11D5A23783A69673BAFB081* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Waypoint> Waypoints { get; set; }
		List_1_t8B7455CC7A04EC6FA11D5A23783A69673BAFB081* L_0 = ___value0;
		__this->___U3CWaypointsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWaypointsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Mapbox.Directions.DirectionsResponse::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DirectionsResponse_get_Code_m7E1059B356833DC8CE70C521CCDEC96B22674644 (DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* __this, const RuntimeMethod* method) 
{
	{
		// public string Code { get; set; }
		String_t* L_0 = __this->___U3CCodeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Mapbox.Directions.DirectionsResponse::set_Code(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionsResponse_set_Code_mF359DD0DA52FCEEF91C422A40FF7CD986879AED4 (DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Code { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CCodeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCodeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Directions.DirectionsResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionsResponse__ctor_m528098AC238ADFE8CD9D95FA45CB1FE69EC6432E (DirectionsResponse_t05584A60D3FD5A5003963EA0098E35774582EDA3* __this, const RuntimeMethod* method) 
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
// System.Int32 Mapbox.Directions.Intersection::get_Out()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Intersection_get_Out_mC8561496EEE4E30C1997D8F1705B97EA1F2B426E (Intersection_t9454F144D8709E6931B12DA9DC0B50C5AE1DA0B9* __this, const RuntimeMethod* method) 
{
	{
		// public int Out { get; set; }
		int32_t L_0 = __this->___U3COutU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Intersection::set_Out(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intersection_set_Out_m039D79D10EBFA12AC3A2AE979674E5A396DF0A5B (Intersection_t9454F144D8709E6931B12DA9DC0B50C5AE1DA0B9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Out { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3COutU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.Boolean> Mapbox.Directions.Intersection::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* Intersection_get_Entry_m2A8458B33FAD8D572B6CCBBAE2A5EF16D20DCB6F (Intersection_t9454F144D8709E6931B12DA9DC0B50C5AE1DA0B9* __this, const RuntimeMethod* method) 
{
	{
		// public List<bool> Entry { get; set; }
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_0 = __this->___U3CEntryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Intersection::set_Entry(System.Collections.Generic.List`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intersection_set_Entry_m542EC9CDA2A7813160D01FC82438C3CC60AEA895 (Intersection_t9454F144D8709E6931B12DA9DC0B50C5AE1DA0B9* __this, List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<bool> Entry { get; set; }
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_0 = ___value0;
		__this->___U3CEntryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEntryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.Int32> Mapbox.Directions.Intersection::get_Bearings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Intersection_get_Bearings_m5962CD5706AAD9E7537C67997ED68837C903ED65 (Intersection_t9454F144D8709E6931B12DA9DC0B50C5AE1DA0B9* __this, const RuntimeMethod* method) 
{
	{
		// public List<int> Bearings { get; set; }
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___U3CBearingsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Intersection::set_Bearings(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intersection_set_Bearings_m3A83BFE0594328C4BFEC2BBAECC80CDDC5AA32A4 (Intersection_t9454F144D8709E6931B12DA9DC0B50C5AE1DA0B9* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<int> Bearings { get; set; }
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___value0;
		__this->___U3CBearingsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBearingsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Mapbox.Utils.Vector2d Mapbox.Directions.Intersection::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB Intersection_get_Location_mC08ACCB5103044D5B9EEFE063B0D5705AB9A392B (Intersection_t9454F144D8709E6931B12DA9DC0B50C5AE1DA0B9* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2d Location { get; set; }
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_0 = __this->___U3CLocationU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Intersection::set_Location(Mapbox.Utils.Vector2d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intersection_set_Location_mA52CAFF31074C1D49D2273B49B61A40F410DACD8 (Intersection_t9454F144D8709E6931B12DA9DC0B50C5AE1DA0B9* __this, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2d Location { get; set; }
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_0 = ___value0;
		__this->___U3CLocationU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Nullable`1<System.Int32> Mapbox.Directions.Intersection::get_In()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Intersection_get_In_mF42086395AC3629241FB2A14B4F01C55218A4B6A (Intersection_t9454F144D8709E6931B12DA9DC0B50C5AE1DA0B9* __this, const RuntimeMethod* method) 
{
	{
		// public int? In { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CInU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Intersection::set_In(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intersection_set_In_m9B4A17361F83FDCF019A3FFB55B24CEA32025564 (Intersection_t9454F144D8709E6931B12DA9DC0B50C5AE1DA0B9* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___value0, const RuntimeMethod* method) 
{
	{
		// public int? In { get; set; }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___value0;
		__this->___U3CInU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Mapbox.Directions.Intersection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Intersection__ctor_m5D662409BCBEAC39D4F964964A290EBC8EF76C62 (Intersection_t9454F144D8709E6931B12DA9DC0B50C5AE1DA0B9* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.List`1<Mapbox.Directions.Step> Mapbox.Directions.Leg::get_Steps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t83E42D03C608E67BAAF5CE4F072A331A6EC16782* Leg_get_Steps_m7D865282EC3DCC699AB24BFA47ACF0D2254C5703 (Leg_tC34AC2E9D84D754D80BF754F11BFC6B20F9DABD5* __this, const RuntimeMethod* method) 
{
	{
		// public List<Step> Steps { get; set; }
		List_1_t83E42D03C608E67BAAF5CE4F072A331A6EC16782* L_0 = __this->___U3CStepsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Leg::set_Steps(System.Collections.Generic.List`1<Mapbox.Directions.Step>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leg_set_Steps_m5E8381BF1DA9AF50A88B23E9BFF85A9202410D85 (Leg_tC34AC2E9D84D754D80BF754F11BFC6B20F9DABD5* __this, List_1_t83E42D03C608E67BAAF5CE4F072A331A6EC16782* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Step> Steps { get; set; }
		List_1_t83E42D03C608E67BAAF5CE4F072A331A6EC16782* L_0 = ___value0;
		__this->___U3CStepsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStepsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Mapbox.Directions.Leg::get_Summary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Leg_get_Summary_mA5FEB28F16402326F945F3DEF8A66872D3BE2DC7 (Leg_tC34AC2E9D84D754D80BF754F11BFC6B20F9DABD5* __this, const RuntimeMethod* method) 
{
	{
		// public string Summary { get; set; }
		String_t* L_0 = __this->___U3CSummaryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Leg::set_Summary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leg_set_Summary_m3077B354E66E76F9BB8608807604B3BF8FB04B13 (Leg_tC34AC2E9D84D754D80BF754F11BFC6B20F9DABD5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Summary { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CSummaryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSummaryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Double Mapbox.Directions.Leg::get_Duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Leg_get_Duration_m5FB184815242A0CE2427094A37E60044788345A0 (Leg_tC34AC2E9D84D754D80BF754F11BFC6B20F9DABD5* __this, const RuntimeMethod* method) 
{
	{
		// public double Duration { get; set; }
		double L_0 = __this->___U3CDurationU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Leg::set_Duration(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leg_set_Duration_m2CBA0FD7874080DE1E2E45F34B7A971EF1043BD7 (Leg_tC34AC2E9D84D754D80BF754F11BFC6B20F9DABD5* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double Duration { get; set; }
		double L_0 = ___value0;
		__this->___U3CDurationU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Double Mapbox.Directions.Leg::get_Distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Leg_get_Distance_m85BA0A662A6426D0056617D35E0776708CAA489F (Leg_tC34AC2E9D84D754D80BF754F11BFC6B20F9DABD5* __this, const RuntimeMethod* method) 
{
	{
		// public double Distance { get; set; }
		double L_0 = __this->___U3CDistanceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Leg::set_Distance(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leg_set_Distance_m9831273FDDCF760FAB818A2ADD64ED4CEB1CFDDF (Leg_tC34AC2E9D84D754D80BF754F11BFC6B20F9DABD5* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double Distance { get; set; }
		double L_0 = ___value0;
		__this->___U3CDistanceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// Mapbox.Directions.Annotation Mapbox.Directions.Leg::get_Annotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* Leg_get_Annotation_m6D9452A2127F76C8528ACB1BFFAB0CCE913197C1 (Leg_tC34AC2E9D84D754D80BF754F11BFC6B20F9DABD5* __this, const RuntimeMethod* method) 
{
	{
		// public Annotation Annotation { get; set; }
		Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* L_0 = __this->___U3CAnnotationU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Leg::set_Annotation(Mapbox.Directions.Annotation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leg_set_Annotation_m1D96EB355F42B31907AD01060984424FBA9FD3D6 (Leg_tC34AC2E9D84D754D80BF754F11BFC6B20F9DABD5* __this, Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* ___value0, const RuntimeMethod* method) 
{
	{
		// public Annotation Annotation { get; set; }
		Annotation_tA80CA4ABB083088B8955F9578F9E2DEB692D4071* L_0 = ___value0;
		__this->___U3CAnnotationU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnnotationU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Directions.Leg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leg__ctor_m9068578AE976FB9903C71C1E0D11414D00AE0460 (Leg_tC34AC2E9D84D754D80BF754F11BFC6B20F9DABD5* __this, const RuntimeMethod* method) 
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
// System.Int32 Mapbox.Directions.Maneuver::get_BearingAfter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Maneuver_get_BearingAfter_m158D774C9F526F0C2CD5E3C4CC1E3B9AE9A71DB8 (Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* __this, const RuntimeMethod* method) 
{
	{
		// public int BearingAfter { get; set; }
		int32_t L_0 = __this->___U3CBearingAfterU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Maneuver::set_BearingAfter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maneuver_set_BearingAfter_m1A9FAD5569FF74352E49C0AE01632828192790E4 (Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int BearingAfter { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CBearingAfterU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String Mapbox.Directions.Maneuver::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Maneuver_get_Type_m506E393707639E7487527D4A396AE77E1303A894 (Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Maneuver::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maneuver_set_Type_m9E0350BDB2C73606FA4EB1A278B86F950C675A95 (Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Mapbox.Directions.Maneuver::get_Modifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Maneuver_get_Modifier_m0DBDE437F422131C4A23B4B9A43595CBF24359C6 (Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* __this, const RuntimeMethod* method) 
{
	{
		// public string Modifier { get; set; }
		String_t* L_0 = __this->___U3CModifierU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Maneuver::set_Modifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maneuver_set_Modifier_mA9C65CED00B7654CA1BE987CCF09F7EF0266F459 (Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Modifier { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CModifierU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CModifierU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Int32 Mapbox.Directions.Maneuver::get_BearingBefore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Maneuver_get_BearingBefore_m1D58BCD72129EDE1145E1107965F6E482AFE3317 (Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* __this, const RuntimeMethod* method) 
{
	{
		// public int BearingBefore { get; set; }
		int32_t L_0 = __this->___U3CBearingBeforeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Maneuver::set_BearingBefore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maneuver_set_BearingBefore_m6B5B32D0BA8ED1143F33FAE2CC1150052D7144AF (Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int BearingBefore { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CBearingBeforeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// Mapbox.Utils.Vector2d Mapbox.Directions.Maneuver::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB Maneuver_get_Location_m16018F8937E83123FE79A94F51FE7F6304A013EF (Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2d Location { get; set; }
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_0 = __this->___U3CLocationU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Maneuver::set_Location(Mapbox.Utils.Vector2d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maneuver_set_Location_m54D71D3D08CCE747FC1E0A4ADA55727C1768D2CB (Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* __this, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2d Location { get; set; }
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_0 = ___value0;
		__this->___U3CLocationU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String Mapbox.Directions.Maneuver::get_Instruction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Maneuver_get_Instruction_mE1E10254518A809B3860C6164888BD2B45C3459A (Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* __this, const RuntimeMethod* method) 
{
	{
		// public string Instruction { get; set; }
		String_t* L_0 = __this->___U3CInstructionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Maneuver::set_Instruction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maneuver_set_Instruction_mE758118BF83151EEE0D32247AD419564BC992DB4 (Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Instruction { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CInstructionU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInstructionU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Directions.Maneuver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Maneuver__ctor_m62CCFFB7E3EBC2AF49985E7612F6CC9FB40E1F7B (Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.List`1<Mapbox.Directions.Leg> Mapbox.Directions.Route::get_Legs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2FD4DB648871F9D710B33A2ED5463E176745BB80* Route_get_Legs_m41145E41A4485AF13FDCABD59A79432A9D0880BA (Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397* __this, const RuntimeMethod* method) 
{
	{
		// public List<Leg> Legs { get; set; }
		List_1_t2FD4DB648871F9D710B33A2ED5463E176745BB80* L_0 = __this->___U3CLegsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Route::set_Legs(System.Collections.Generic.List`1<Mapbox.Directions.Leg>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Route_set_Legs_m8CC64E1C0B26CF6B37F5EAE0CD4F2BECA737A0EB (Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397* __this, List_1_t2FD4DB648871F9D710B33A2ED5463E176745BB80* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Leg> Legs { get; set; }
		List_1_t2FD4DB648871F9D710B33A2ED5463E176745BB80* L_0 = ___value0;
		__this->___U3CLegsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLegsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d> Mapbox.Directions.Route::get_Geometry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* Route_get_Geometry_m855756C93F29A80AF7D3C7450C39576DA498ACA6 (Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397* __this, const RuntimeMethod* method) 
{
	{
		// public List<Vector2d> Geometry { get; set; }
		List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* L_0 = __this->___U3CGeometryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Route::set_Geometry(System.Collections.Generic.List`1<Mapbox.Utils.Vector2d>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Route_set_Geometry_m7DDC98C4C28D328D0643A2803B19124DEA627520 (Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397* __this, List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Vector2d> Geometry { get; set; }
		List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* L_0 = ___value0;
		__this->___U3CGeometryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGeometryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Double Mapbox.Directions.Route::get_Duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Route_get_Duration_m50F212DFCBF76FD12EF97C423D26D48F051AE28C (Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397* __this, const RuntimeMethod* method) 
{
	{
		// public double Duration { get; set; }
		double L_0 = __this->___U3CDurationU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Route::set_Duration(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Route_set_Duration_m14DC2C5A83DCA7B6559E2D6B4CB246A0130D76AC (Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double Duration { get; set; }
		double L_0 = ___value0;
		__this->___U3CDurationU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Double Mapbox.Directions.Route::get_Distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Route_get_Distance_m98B5D2823773AFB9102461CFD68176DC5755B8B7 (Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397* __this, const RuntimeMethod* method) 
{
	{
		// public double Distance { get; set; }
		double L_0 = __this->___U3CDistanceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Route::set_Distance(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Route_set_Distance_m5C7D2DAD3D5089AAC407465D460A63F79237593D (Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double Distance { get; set; }
		double L_0 = ___value0;
		__this->___U3CDistanceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Single Mapbox.Directions.Route::get_Weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Route_get_Weight_mB013656F6722E210BB8EAC06471357B0CD47792F (Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397* __this, const RuntimeMethod* method) 
{
	{
		// public float Weight { get; set; }
		float L_0 = __this->___U3CWeightU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Route::set_Weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Route_set_Weight_mEA4F04A801EC0F696E05EF1EC66171B0B89D5A00 (Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Weight { get; set; }
		float L_0 = ___value0;
		__this->___U3CWeightU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String Mapbox.Directions.Route::get_WeightName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Route_get_WeightName_m611FCFEA8050B44B9A31020B74F4AE60043E46FF (Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397* __this, const RuntimeMethod* method) 
{
	{
		// public string WeightName { get; set; }
		String_t* L_0 = __this->___U3CWeightNameU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Route::set_WeightName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Route_set_WeightName_m47DC401712D6E9A5265578CBBFD950449D37E290 (Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string WeightName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CWeightNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWeightNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Directions.Route::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Route__ctor_m6B8F8BBA92CE85642A006604F429B48888E436D1 (Route_tC7027E8220FA0103800EB9D994FF06AECC2AA397* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.List`1<Mapbox.Directions.Intersection> Mapbox.Directions.Step::get_Intersections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t1A3217A0FF738E43D1C602EE7E6B98ADACA6DE9F* Step_get_Intersections_m42F4BA8417ECE548F9BF17A276D2B4F8FCA97E7F (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, const RuntimeMethod* method) 
{
	{
		// public List<Intersection> Intersections { get; set; }
		List_1_t1A3217A0FF738E43D1C602EE7E6B98ADACA6DE9F* L_0 = __this->___U3CIntersectionsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Step::set_Intersections(System.Collections.Generic.List`1<Mapbox.Directions.Intersection>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Step_set_Intersections_mE365C83BDB024B0C1E91111E3FBED106F3C0AEFC (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, List_1_t1A3217A0FF738E43D1C602EE7E6B98ADACA6DE9F* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Intersection> Intersections { get; set; }
		List_1_t1A3217A0FF738E43D1C602EE7E6B98ADACA6DE9F* L_0 = ___value0;
		__this->___U3CIntersectionsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntersectionsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Mapbox.Utils.Vector2d> Mapbox.Directions.Step::get_Geometry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* Step_get_Geometry_mFCB9613CDDB43B9E87891179C464EDA60B41DBCA (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, const RuntimeMethod* method) 
{
	{
		// public List<Vector2d> Geometry { get; set; }
		List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* L_0 = __this->___U3CGeometryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Step::set_Geometry(System.Collections.Generic.List`1<Mapbox.Utils.Vector2d>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Step_set_Geometry_m0146A0F1B6EAD9295835365B1FED36EB44413B8E (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<Vector2d> Geometry { get; set; }
		List_1_t8BCADAA0B30E406CCC3A841301DCC34C17628181* L_0 = ___value0;
		__this->___U3CGeometryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGeometryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Mapbox.Directions.Maneuver Mapbox.Directions.Step::get_Maneuver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* Step_get_Maneuver_m0493E6BBFCBF022B3672E93FBCDD9BEAA3151048 (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, const RuntimeMethod* method) 
{
	{
		// public Maneuver Maneuver { get; set; }
		Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* L_0 = __this->___U3CManeuverU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Step::set_Maneuver(Mapbox.Directions.Maneuver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Step_set_Maneuver_mB3C55DF456AD1E4B995D96D4247C0D73E581F311 (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* ___value0, const RuntimeMethod* method) 
{
	{
		// public Maneuver Maneuver { get; set; }
		Maneuver_t07E482C9FC538412DAA330A1459783FC0B2C7210* L_0 = ___value0;
		__this->___U3CManeuverU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CManeuverU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Double Mapbox.Directions.Step::get_Duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Step_get_Duration_m5804F7AF2DD43DD99E3FECC19A29D9A9C10D7F72 (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, const RuntimeMethod* method) 
{
	{
		// public double Duration { get; set; }
		double L_0 = __this->___U3CDurationU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Step::set_Duration(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Step_set_Duration_m4B4A608FF87C49A916BF2DD243F17369A4FD116F (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double Duration { get; set; }
		double L_0 = ___value0;
		__this->___U3CDurationU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double Mapbox.Directions.Step::get_Distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Step_get_Distance_m097E3E831C9D5A8990B6A4D544B02B3BDAA56E92 (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, const RuntimeMethod* method) 
{
	{
		// public double Distance { get; set; }
		double L_0 = __this->___U3CDistanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Step::set_Distance(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Step_set_Distance_m59293A6D7D4589B5DDF3FE9AFB493864EA85539B (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double Distance { get; set; }
		double L_0 = ___value0;
		__this->___U3CDistanceU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String Mapbox.Directions.Step::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Step_get_Name_m454585F465C3AC4AC3E158078579044C3DEE9DA7 (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Step::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Step_set_Name_m57FAF9C856234953A0430420006C3FA305E8A8DF (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String Mapbox.Directions.Step::get_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Step_get_Mode_m14ED9BE4A96EFD6D5A2D79885CD5EDDFD4C587E6 (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, const RuntimeMethod* method) 
{
	{
		// public string Mode { get; set; }
		String_t* L_0 = __this->___U3CModeU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Step::set_Mode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Step_set_Mode_mC9367DBF9D4A8D291E378D1E74E3DC301897F106 (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Mode { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CModeU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CModeU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Directions.Step::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Step__ctor_mBCCD1F8C1A11591B9871AE569DAC4D74F4A17998 (Step_t95E845C368B332B40A5545FECC4403B3A34F87CB* __this, const RuntimeMethod* method) 
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
// System.String Mapbox.Directions.Waypoint::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Waypoint_get_Name_m023DC0A02E22A002572FA0BC0354A26A65C9DF57 (Waypoint_tA1A0E7CDE324FFF768A6A661CC891AAF54FEE511* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Waypoint::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoint_set_Name_m0D55E5B2FD9662DF401A34E47DD59311A5DA2A11 (Waypoint_tA1A0E7CDE324FFF768A6A661CC891AAF54FEE511* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Mapbox.Utils.Vector2d Mapbox.Directions.Waypoint::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB Waypoint_get_Location_mC0A910812CD39D018809B281F0F231AC53A12944 (Waypoint_tA1A0E7CDE324FFF768A6A661CC891AAF54FEE511* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2d Location { get; set; }
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_0 = __this->___U3CLocationU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mapbox.Directions.Waypoint::set_Location(Mapbox.Utils.Vector2d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoint_set_Location_m5600A0061C164844467B7595AD15393D614187B0 (Waypoint_tA1A0E7CDE324FFF768A6A661CC891AAF54FEE511* __this, Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2d Location { get; set; }
		Vector2d_t56C00F875E7B711F76931D3FD85D1D47957349FB L_0 = ___value0;
		__this->___U3CLocationU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Mapbox.Directions.Waypoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Waypoint__ctor_mFD74E319EA333B3417C88F344CD24E49BBCB3BC1 (Waypoint_tA1A0E7CDE324FFF768A6A661CC891AAF54FEE511* __this, const RuntimeMethod* method) 
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
// System.Void Mapbox.Directions.RoutingProfile::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoutingProfile__ctor_m7FEF0936E404FF4537751190D2266582B1E0A718 (RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* __this, String_t* ___profile0, const RuntimeMethod* method) 
{
	{
		// private RoutingProfile(string profile)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.profile = profile;
		String_t* L_0 = ___profile0;
		__this->___profile_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profile_3), (void*)L_0);
		// }
		return;
	}
}
// System.String Mapbox.Directions.RoutingProfile::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoutingProfile_ToString_m207A60F216F030B618FCA61C1B43E5C35D3AE66E (RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* __this, const RuntimeMethod* method) 
{
	{
		// return this.profile;
		String_t* L_0 = __this->___profile_3;
		return L_0;
	}
}
// System.Void Mapbox.Directions.RoutingProfile::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoutingProfile__cctor_mB9DE52C183DA0A8215B9D4873CFD8A527BE9A799 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC43917AEC71FEF10AB4428DB80B025E9BF8A80E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBAA9D1990D6C22BD9401F6C3121053D39F86EA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF41DE8EB12DE20A887D1BE5A62ED5AB4DDB0343A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly RoutingProfile Driving = new RoutingProfile("mapbox/driving/");
		RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* L_0 = (RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73*)il2cpp_codegen_object_new(RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RoutingProfile__ctor_m7FEF0936E404FF4537751190D2266582B1E0A718(L_0, _stringLiteralDC43917AEC71FEF10AB4428DB80B025E9BF8A80E, NULL);
		((RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_StaticFields*)il2cpp_codegen_static_fields_for(RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_il2cpp_TypeInfo_var))->___Driving_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_StaticFields*)il2cpp_codegen_static_fields_for(RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_il2cpp_TypeInfo_var))->___Driving_0), (void*)L_0);
		// public static readonly RoutingProfile Walking = new RoutingProfile("mapbox/walking/");
		RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* L_1 = (RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73*)il2cpp_codegen_object_new(RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RoutingProfile__ctor_m7FEF0936E404FF4537751190D2266582B1E0A718(L_1, _stringLiteralF41DE8EB12DE20A887D1BE5A62ED5AB4DDB0343A, NULL);
		((RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_StaticFields*)il2cpp_codegen_static_fields_for(RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_il2cpp_TypeInfo_var))->___Walking_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_StaticFields*)il2cpp_codegen_static_fields_for(RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_il2cpp_TypeInfo_var))->___Walking_1), (void*)L_1);
		// public static readonly RoutingProfile Cycling = new RoutingProfile("mapbox/cycling/");
		RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* L_2 = (RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73*)il2cpp_codegen_object_new(RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RoutingProfile__ctor_m7FEF0936E404FF4537751190D2266582B1E0A718(L_2, _stringLiteralEBAA9D1990D6C22BD9401F6C3121053D39F86EA5, NULL);
		((RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_StaticFields*)il2cpp_codegen_static_fields_for(RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_il2cpp_TypeInfo_var))->___Cycling_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_StaticFields*)il2cpp_codegen_static_fields_for(RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73_il2cpp_TypeInfo_var))->___Cycling_2), (void*)L_2);
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
// System.Void Mapbox.CheapRulerCs.CheapRuler::.ctor(System.Double,Mapbox.CheapRulerCs.CheapRulerUnits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheapRuler__ctor_m73A7362EEAD52021D1998FFF2F97E58E2E613771 (CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7* __this, double ___latitude0, int32_t ___outputUnits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		// public CheapRuler(double latitude, CheapRulerUnits outputUnits = CheapRulerUnits.Kilometers)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___outputUnits1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_005a;
			}
			case 5:
			{
				goto IL_0066;
			}
			case 6:
			{
				goto IL_0072;
			}
		}
	}
	{
		goto IL_007e;
	}

IL_002a:
	{
		// factor = 1.0d;
		V_0 = (1.0);
		// break;
		goto IL_0088;
	}

IL_0036:
	{
		// factor = 1000.0d / 1609.344;
		V_0 = (0.62137119223733395);
		// break;
		goto IL_0088;
	}

IL_0042:
	{
		// factor = 1000.0d / 1852.0d;
		V_0 = (0.5399568034557235);
		// break;
		goto IL_0088;
	}

IL_004e:
	{
		// factor = 1000.0d;
		V_0 = (1000.0);
		// break;
		goto IL_0088;
	}

IL_005a:
	{
		// factor = 1000.0d / 0.9144;
		V_0 = (1093.6132983377079);
		// break;
		goto IL_0088;
	}

IL_0066:
	{
		// factor = 1000.0d / 0.3048;
		V_0 = (3280.8398950131232);
		// break;
		goto IL_0088;
	}

IL_0072:
	{
		// factor = 1000.0d / 0.0254;
		V_0 = (39370.078740157485);
		// break;
		goto IL_0088;
	}

IL_007e:
	{
		// factor = 1.0d;
		V_0 = (1.0);
	}

IL_0088:
	{
		// var cos = Math.Cos(latitude * Math.PI / 180);
		double L_1 = ___latitude0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = cos(((double)(((double)il2cpp_codegen_multiply(L_1, (3.1415926535897931)))/(180.0))));
		V_1 = L_2;
		// var cos2 = 2 * cos * cos - 1;
		double L_3 = V_1;
		double L_4 = V_1;
		V_2 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), L_3)), L_4)), (1.0)));
		// var cos3 = 2 * cos * cos2 - cos;
		double L_5 = V_1;
		double L_6 = V_2;
		double L_7 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), L_5)), L_6)), L_7));
		// var cos4 = 2 * cos * cos3 - cos2;
		double L_8 = V_1;
		double L_9 = V_3;
		double L_10 = V_2;
		V_4 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), L_8)), L_9)), L_10));
		// var cos5 = 2 * cos * cos4 - cos3;
		double L_11 = V_1;
		double L_12 = V_4;
		double L_13 = V_3;
		V_5 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), L_11)), L_12)), L_13));
		// _kx = factor * (111.41513 * cos - 0.09455 * cos3 + 0.00012 * cos5);
		double L_14 = V_0;
		double L_15 = V_1;
		double L_16 = V_3;
		double L_17 = V_5;
		__this->____kx_0 = ((double)il2cpp_codegen_multiply(L_14, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((111.41513), L_15)), ((double)il2cpp_codegen_multiply((0.094549999999999995), L_16)))), ((double)il2cpp_codegen_multiply((0.00012), L_17))))));
		// _ky = factor * (111.13209 - 0.56605 * cos2 + 0.0012 * cos4);
		double L_18 = V_0;
		double L_19 = V_2;
		double L_20 = V_4;
		__this->____ky_1 = ((double)il2cpp_codegen_multiply(L_18, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract((111.13209000000001), ((double)il2cpp_codegen_multiply((0.56605000000000005), L_19)))), ((double)il2cpp_codegen_multiply((0.0011999999999999999), L_20))))));
		// }
		return;
	}
}
// Mapbox.CheapRulerCs.CheapRuler Mapbox.CheapRulerCs.CheapRuler::FromTile(System.Int32,System.Int32,Mapbox.CheapRulerCs.CheapRulerUnits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7* CheapRuler_FromTile_m262F96194B6A16D0A5EB5B6BAAF4262262E65DED (int32_t ___y0, int32_t ___z1, int32_t ___units2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// var n = Math.PI * (1 - 2 * (y + 0.5) / Math.Pow(2, z));
		int32_t L_0 = ___y0;
		int32_t L_1 = ___z1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((2.0), ((double)L_1), NULL);
		V_0 = ((double)il2cpp_codegen_multiply((3.1415926535897931), ((double)il2cpp_codegen_subtract((1.0), ((double)(((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_add(((double)L_0), (0.5)))))/L_2))))));
		// var lat = Math.Atan(0.5 * (Math.Exp(n) - Math.Exp(-n))) * 180 / Math.PI;
		double L_3 = V_0;
		double L_4;
		L_4 = exp(L_3);
		double L_5 = V_0;
		double L_6;
		L_6 = exp(((-L_5)));
		double L_7;
		L_7 = atan(((double)il2cpp_codegen_multiply((0.5), ((double)il2cpp_codegen_subtract(L_4, L_6)))));
		// return new CheapRuler(lat, units);
		int32_t L_8 = ___units2;
		CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7* L_9 = (CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7*)il2cpp_codegen_object_new(CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CheapRuler__ctor_m73A7362EEAD52021D1998FFF2F97E58E2E613771(L_9, ((double)(((double)il2cpp_codegen_multiply(L_7, (180.0)))/(3.1415926535897931))), L_8, NULL);
		return L_9;
	}
}
// System.Double Mapbox.CheapRulerCs.CheapRuler::Distance(System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CheapRuler_Distance_m70D3E66E0E7BAF75C5478D4A273B9ED6ED739A34 (CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___a0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// var dx = (a[0] - b[0]) * _kx;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___a0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___b1;
		NullCheck(L_3);
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		double L_6 = __this->____kx_0;
		// var dy = (a[1] - b[1]) * _ky;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = ___a0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		double L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = ___b1;
		NullCheck(L_10);
		int32_t L_11 = 1;
		double L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		double L_13 = __this->____ky_1;
		V_0 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_9, L_12)), L_13));
		// return Math.Sqrt(dx * dx + dy * dy);
		double L_14 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_2, L_5)), L_6));
		double L_15 = V_0;
		double L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = sqrt(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_14, L_14)), ((double)il2cpp_codegen_multiply(L_15, L_16)))));
		return L_17;
	}
}
// System.Double Mapbox.CheapRulerCs.CheapRuler::Bearing(System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CheapRuler_Bearing_m1CE8B26BFE4116314A28B461F9BE9B534A1D4085 (CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___a0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// var dx = (b[0] - a[0]) * _kx;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___b1;
		NullCheck(L_0);
		int32_t L_1 = 0;
		double L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___a0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		double L_6 = __this->____kx_0;
		V_0 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_2, L_5)), L_6));
		// var dy = (b[1] - a[1]) * _ky;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = ___b1;
		NullCheck(L_7);
		int32_t L_8 = 1;
		double L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = ___a0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		double L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		double L_13 = __this->____ky_1;
		V_1 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_9, L_12)), L_13));
		// if (dx == 0 && dy == 0)
		double L_14 = V_0;
		if ((!(((double)L_14) == ((double)(0.0)))))
		{
			goto IL_0040;
		}
	}
	{
		double L_15 = V_1;
		if ((!(((double)L_15) == ((double)(0.0)))))
		{
			goto IL_0040;
		}
	}
	{
		// return 0;
		return (0.0);
	}

IL_0040:
	{
		// var bearing = Math.Atan2(dx, dy) * 180 / Math.PI;
		double L_16 = V_0;
		double L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = atan2(L_16, L_17);
		V_2 = ((double)(((double)il2cpp_codegen_multiply(L_18, (180.0)))/(3.1415926535897931)));
		// if (bearing > 180)
		double L_19 = V_2;
		if ((!(((double)L_19) > ((double)(180.0)))))
		{
			goto IL_0074;
		}
	}
	{
		// bearing -= 360;
		double L_20 = V_2;
		V_2 = ((double)il2cpp_codegen_subtract(L_20, (360.0)));
	}

IL_0074:
	{
		// return bearing;
		double L_21 = V_2;
		return L_21;
	}
}
// System.Double[] Mapbox.CheapRulerCs.CheapRuler::Destination(System.Double[],System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* CheapRuler_Destination_m3F729D24072E026DE4FABFC2F6CEADE2D2A8C860 (CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___p0, double ___distance1, double ___bearing2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// var a = (90 - bearing) * Math.PI / 180;
		double L_0 = ___bearing2;
		V_0 = ((double)(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((90.0), L_0)), (3.1415926535897931)))/(180.0)));
		// return offset(
		//     p
		//     , Math.Cos(a) * distance
		//     , Math.Sin(a) * distance
		// );
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___p0;
		double L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = cos(L_2);
		double L_4 = ___distance1;
		double L_5 = V_0;
		double L_6;
		L_6 = sin(L_5);
		double L_7 = ___distance1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8;
		L_8 = CheapRuler_offset_mCCE3EDBFA9FBA55315D42C66BFF8F3CD58C8B17F(__this, L_1, ((double)il2cpp_codegen_multiply(L_3, L_4)), ((double)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		return L_8;
	}
}
// System.Double[] Mapbox.CheapRulerCs.CheapRuler::offset(System.Double[],System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* CheapRuler_offset_mCCE3EDBFA9FBA55315D42C66BFF8F3CD58C8B17F (CheapRuler_t8386CA0D2369B03101F63171D43BD7FC7B4E62B7* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___p0, double ___dx1, double ___dy2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new double[]
		// {
		//     p[0] + dx / _kx,
		//     p[1] + dy / _ky
		// };
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)2);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = L_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___p0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		double L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		double L_5 = ___dx1;
		double L_6 = __this->____kx_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)il2cpp_codegen_add(L_4, ((double)(L_5/L_6)))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = L_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = ___p0;
		NullCheck(L_8);
		int32_t L_9 = 1;
		double L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		double L_11 = ___dy2;
		double L_12 = __this->____ky_1;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)il2cpp_codegen_add(L_10, ((double)(L_11/L_12)))));
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DirectionResource_set_RoutingProfile_m0FEE838D283AD15FB802C33B01574265D47DDF80_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* ___value0, const RuntimeMethod* method) 
{
	{
		// this.profile = value;
		RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* L_0 = ___value0;
		__this->___profile_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profile_1), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 DirectionResource_get_Alternatives_mAFDE9468CED9F714ABDCC35F43D22033A11FD889_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.alternatives;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = __this->___alternatives_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* DirectionResource_get_Bearings_m02BA417F6FA47E75F119D287D1F49F62A6203B0B_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.bearings;
		BearingFilterU5BU5D_t6E5CA7A70BF9B875F7AD0545737BFA6E56105379* L_0 = __this->___bearings_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 DirectionResource_get_ContinueStraight_m61C99216C79C351C05CDBEBA9FAC49E19CCA6B0A_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.continueStraight;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = __this->___continueStraight_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* DirectionResource_get_Overview_m82052630D5F81D8B2C6BDBF78A3147053327BC35_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.overview;
		Overview_tC5B9D69C3EF78CDC60D68FD12FFD3FF063180ABF* L_0 = __this->___overview_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* DirectionResource_get_Radiuses_m26C0BCCC70733C6BCABB5F54BADB737FEA2BFB14_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.radiuses;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = __this->___radiuses_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 DirectionResource_get_Steps_m57D5650642C67B96C11628426B549DDC952B314D_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.steps;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = __this->___steps_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* DirectionResource_get_RoutingProfile_m7A4D180FCA195457E032F1D1ACD380D35452836A_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.profile;
		RoutingProfile_t3BB18492EADD7FC62B9ACFFB7D721B6241D38D73* L_0 = __this->___profile_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* DirectionResource_get_Coordinates_mB0968158B41D14C08A8EB99DE0B1D8859EDE015B_inline (DirectionResource_tF0B27CE0F65E54D9FA561DA5209147810D46033A* __this, const RuntimeMethod* method) 
{
	{
		// return this.coordinates;
		Vector2dU5BU5D_t54CE1ACE1928209803D5E1298CDE3C48212052E6* L_0 = __this->___coordinates_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonConverterU5BU5D_tBBA2728030CCB3321DCD721DF9FF5A4A34D8B618* JsonConverters_get_Converters_m753C43E5FA6F499B3AED8D5D028EB7AB4F1C306C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverters_tBECA50BB9A98F9FBB151F6EDB38CA94CE3F73860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return converters;
		il2cpp_codegen_runtime_class_init_inline(JsonConverters_tBECA50BB9A98F9FBB151F6EDB38CA94CE3F73860_il2cpp_TypeInfo_var);
		JsonConverterU5BU5D_tBBA2728030CCB3321DCD721DF9FF5A4A34D8B618* L_0 = ((JsonConverters_tBECA50BB9A98F9FBB151F6EDB38CA94CE3F73860_StaticFields*)il2cpp_codegen_static_fields_for(JsonConverters_tBECA50BB9A98F9FBB151F6EDB38CA94CE3F73860_il2cpp_TypeInfo_var))->___converters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeocodeResource_1_get_Types_m1130D1D48A36360F359D23595F43BED8670E77F7_gshared_inline (GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94* __this, const RuntimeMethod* method) 
{
	{
		// return this.types;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)__this->___types_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GeocodeResource_1_get_Mode_mAA58BD80ABCD824EAE5A27AAF803EDEB1429DCC2_gshared_inline (GeocodeResource_1_t7B8BCD0E28D48307E045F86FA55AD6983F60CF94* __this, const RuntimeMethod* method) 
{
	{
		// return this.mode;
		String_t* L_0 = (String_t*)__this->___mode_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
