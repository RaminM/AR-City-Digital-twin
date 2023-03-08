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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Func`2<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>,System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>>
struct Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6;
// System.Func`2<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng>
struct Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3;
// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.Object>
struct Func_2_tB9382AC1C26CF2AB615B5F6A3A0C1C309F2F9916;
// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String>
struct Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>>
struct Func_2_t60C0D141B7D8323D2E01B5B77A1A9287ACD2EE26;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>
struct IEnumerable_1_t56E9B78BBB46F10E333409CEA829AB47A0E271E5;
// System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>
struct IEnumerable_1_tBA0F10EF63CE48B9A29752E6993D65C7B1C41659;
// System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>
struct IEnumerable_1_tADB55DCFD3ACE3122198663C52F8FF6A41CEEE56;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>
struct List_1_t4A51A4B7F7C970BD0EDCDA0240F8328E07190930;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>
struct List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>
struct List_1_t4547A61BA527AF86FD7F9CD54C690F8D33332BB9;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>
struct List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>[]
struct List_1U5BU5D_tB44FB3C19B8446505AAD562B1A0F9A638852BF6C;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>[]
struct List_1U5BU5D_tB7CBFBD55EA62FCDFC52C0C8F9333D1D6DC27E9E;
// Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>[]
struct Point2d_1U5BU5D_tCF81C7A71DDACD2B69F0C434F904E345931EC6D4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Mapbox.VectorTile.Geometry.LatLng[]
struct LatLngU5BU5D_t8EB9EB56753FD287EA92B2D5896E6F756501F046;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Mapbox.VectorTile.VectorTile
struct VectorTile_t9C00E2C605BA4ED6F92D849CAFBDE63D6078FA18;
// Mapbox.VectorTile.VectorTileFeature
struct VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8;
// Mapbox.VectorTile.VectorTileLayer
struct VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746;
// Mapbox.VectorTile.VectorTileReader
struct VectorTileReader_tC939F2715D4A3153002CB89947C6C13BCE881272;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c
struct U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC;
// Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406;

IL2CPP_EXTERN_C RuntimeClass* DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeomType_tA286C39BE9F1B8BC732610E76C0D2CE5926A1240_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1F28FF8AD33779DEC9680F0321D01D22563ED0E8;
IL2CPP_EXTERN_C String_t* _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8;
IL2CPP_EXTERN_C String_t* _stringLiteral47B9D1A03C2619F57397110F3FEB5C073256602F;
IL2CPP_EXTERN_C String_t* _stringLiteral73BC0851F103FF61FD390EE5A6BE84F09E79E9EE;
IL2CPP_EXTERN_C String_t* _stringLiteral7562CA79A392F95A04509C56C6B4D0A7FD10AFD3;
IL2CPP_EXTERN_C String_t* _stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A;
IL2CPP_EXTERN_C String_t* _stringLiteralB490A8FC9FDC7D671618986EFE4E28F9995B263F;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCB24758B8281580D9CE13BCDDFE5C7584D4DCD;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralEF1E28BFC288C71D7FA87622A964DC8831E8A820;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisList_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mF014E6CBD17D378B65FD29DBED637800CBC735C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisString_t_mE9EF991B57124D1525E9B12863A29D575A135DCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisPoint2d_1_tF097488A1DD78CBDD44DB640011A5F5E58BEB138_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mB07952A0850E15555DAA39CB19855FA932104F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_m8FE11B3E321C7988E0C8269E8DB7222D46925896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2D8D7B60198F796D324137C9C41B9B30806E739D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF4EF8A9DF7782068948BB4186D8C8B37C96CAF72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m14C566F56F17D95089DA2D7F26822DCC464081F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2D7ABDFBBA4A755BB5FE467E6982CF332701082A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mABCA5D7BECF415A4BAB2DFBD20F3A3E927E64592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFCC15EA4B246C91933F3FD6EF87FCE6CA3EDC503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAFB142634AEA9C9C098BE34B5376EF76B75C83D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m510BA0D931C66A23974F8A39355B6B888FC5A192_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC03C6C780AAC9D76B8F255335D3AD9623AB83081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5963A23E3A1311BD4475702FED1E9D5B76C9BBFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0FD69A54C99D5B0311F5BBC98D6CCE28AD09B335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8A8A185CEAC61D4278661129EC767518E2F64674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC22F7F717998AF022F02C88DE74E032200D1735E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Point2d_1_ToLngLat_mCC32951512D81F562142C4C5F31FB7ECBC0F5FF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m4C3802B4F766A1B5DA5B907E842D14526BC3EF54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToGeoJsonU3Eb__0_0_m9F9C545EF92C434FA4E50A903243B7CD1FEAB19F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToGeoJsonU3Eb__0_1_mE470E10B52977E158D07E10C9B7CE97F3B803293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToGeoJsonU3Eb__0_2_m8FCF90643718CE9192F88EB3CEABCFA458621BB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToGeoJsonU3Eb__0_3_m341A2AB6D291673E670D5F4E6A249CC6ABF44F9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToGeoJsonU3Eb__0_4_mE26D2452FE8DDD787024B1B5C58422E444C1CC8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToGeoJsonU3Eb__0_5_m75299F237E912A724396544364B95871A5943C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGeometryAsWgs84U3Eb__0_m4B7C69AE0B17B0B3750FC9B3063CC89DB4DB733E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VectorTileFeature_Geometry_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m612701B1A6983BCDBEC619B48FB6C338F3000449_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t37AE92A8C870C45A3AB18521150A3A5A7BD6FAD9 
{
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>
struct List_1_t4A51A4B7F7C970BD0EDCDA0240F8328E07190930  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_tB44FB3C19B8446505AAD562B1A0F9A638852BF6C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4A51A4B7F7C970BD0EDCDA0240F8328E07190930_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	List_1U5BU5D_tB44FB3C19B8446505AAD562B1A0F9A638852BF6C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>
struct List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_tB7CBFBD55EA62FCDFC52C0C8F9333D1D6DC27E9E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	List_1U5BU5D_tB7CBFBD55EA62FCDFC52C0C8F9333D1D6DC27E9E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>
struct List_1_t4547A61BA527AF86FD7F9CD54C690F8D33332BB9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Point2d_1U5BU5D_tCF81C7A71DDACD2B69F0C434F904E345931EC6D4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4547A61BA527AF86FD7F9CD54C690F8D33332BB9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Point2d_1U5BU5D_tCF81C7A71DDACD2B69F0C434F904E345931EC6D4* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>
struct List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LatLngU5BU5D_t8EB9EB56753FD287EA92B2D5896E6F756501F046* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LatLngU5BU5D_t8EB9EB56753FD287EA92B2D5896E6F756501F046* ___s_emptyArray_5;
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

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Mapbox.VectorTile.ExtensionMethods.EnumExtensions
struct EnumExtensions_tB8BDD20C168A614EA5426735B342B85FBE68D047  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
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

// Mapbox.VectorTile.VectorTile
struct VectorTile_t9C00E2C605BA4ED6F92D849CAFBDE63D6078FA18  : public RuntimeObject
{
	// Mapbox.VectorTile.VectorTileReader Mapbox.VectorTile.VectorTile::_VTR
	VectorTileReader_tC939F2715D4A3153002CB89947C6C13BCE881272* ____VTR_0;
};

// Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions
struct VectorTileExtensions_t3EE13A3DCD18D85696AA36E88712D83473A314D2  : public RuntimeObject
{
};

// Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions
struct VectorTileFeatureExtensions_t80BB3CB5FAA9B4ED53106C1BD384420239BF1E9B  : public RuntimeObject
{
};

// Mapbox.VectorTile.VectorTileLayer
struct VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746  : public RuntimeObject
{
	// System.Byte[] Mapbox.VectorTile.VectorTileLayer::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_0;
	// System.String Mapbox.VectorTile.VectorTileLayer::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt64 Mapbox.VectorTile.VectorTileLayer::<Version>k__BackingField
	uint64_t ___U3CVersionU3Ek__BackingField_2;
	// System.UInt64 Mapbox.VectorTile.VectorTileLayer::<Extent>k__BackingField
	uint64_t ___U3CExtentU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.Byte[]> Mapbox.VectorTile.VectorTileLayer::<_FeaturesData>k__BackingField
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3C_FeaturesDataU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Object> Mapbox.VectorTile.VectorTileLayer::<Values>k__BackingField
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___U3CValuesU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<System.String> Mapbox.VectorTile.VectorTileLayer::<Keys>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CKeysU3Ek__BackingField_6;
};

// Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c
struct U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC  : public RuntimeObject
{
};

struct U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields
{
	// Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9
	U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>,System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9__0_2
	Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6* ___U3CU3E9__0_2_1;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9__0_3
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* ___U3CU3E9__0_3_2;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9__0_4
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* ___U3CU3E9__0_4_3;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9__0_5
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* ___U3CU3E9__0_5_4;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9__0_0
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* ___U3CU3E9__0_0_5;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<>9__0_1
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* ___U3CU3E9__0_1_6;
};

// Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406  : public RuntimeObject
{
	// System.UInt64 Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::zoom
	uint64_t ___zoom_0;
	// System.UInt64 Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::tileColumn
	uint64_t ___tileColumn_1;
	// System.UInt64 Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::tileRow
	uint64_t ___tileRow_2;
	// Mapbox.VectorTile.VectorTileFeature Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::feature
	VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* ___feature_3;
	// System.Func`2<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng> Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::<>9__0
	Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3* ___U3CU3E9__0_4;
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>
struct Enumerator_t47C6E35927A048FF84A5ED129AFC68FFD240251D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4A51A4B7F7C970BD0EDCDA0240F8328E07190930* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	List_1_t4547A61BA527AF86FD7F9CD54C690F8D33332BB9* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>
struct Enumerator_t3BD7537E6DADB3F3BBE896F260DD45EDB7D10FAD 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* ____current_3;
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

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.Nullable`1<System.UInt32>
struct Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint32_t ___value_1;
};

// Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>
struct Point2d_1_tF097488A1DD78CBDD44DB640011A5F5E58BEB138 
{
	// T Mapbox.VectorTile.Geometry.Point2d`1::X
	int64_t ___X_0;
	// T Mapbox.VectorTile.Geometry.Point2d`1::Y
	int64_t ___Y_1;
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

// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DescriptionAttribute::<DescriptionValue>k__BackingField
	String_t* ___U3CDescriptionValueU3Ek__BackingField_1;
};

struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields
{
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* ___Default_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
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

// Mapbox.VectorTile.Geometry.LatLng
struct LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A 
{
	// System.Double Mapbox.VectorTile.Geometry.LatLng::<Lat>k__BackingField
	double ___U3CLatU3Ek__BackingField_0;
	// System.Double Mapbox.VectorTile.Geometry.LatLng::<Lng>k__BackingField
	double ___U3CLngU3Ek__BackingField_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Mapbox.VectorTile.VectorTileFeature
struct VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8  : public RuntimeObject
{
	// Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTileFeature::_layer
	VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* ____layer_0;
	// System.Object Mapbox.VectorTile.VectorTileFeature::_cachedGeometry
	RuntimeObject* ____cachedGeometry_1;
	// System.Nullable`1<System.UInt32> Mapbox.VectorTile.VectorTileFeature::_clipBuffer
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ____clipBuffer_2;
	// System.Nullable`1<System.Single> Mapbox.VectorTile.VectorTileFeature::_scale
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ____scale_3;
	// System.Nullable`1<System.Single> Mapbox.VectorTile.VectorTileFeature::_previousScale
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ____previousScale_4;
	// System.UInt64 Mapbox.VectorTile.VectorTileFeature::<Id>k__BackingField
	uint64_t ___U3CIdU3Ek__BackingField_5;
	// Mapbox.VectorTile.Geometry.GeomType Mapbox.VectorTile.VectorTileFeature::<GeometryType>k__BackingField
	int32_t ___U3CGeometryTypeU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<System.UInt32> Mapbox.VectorTile.VectorTileFeature::<GeometryCommands>k__BackingField
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___U3CGeometryCommandsU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.Int32> Mapbox.VectorTile.VectorTileFeature::<Tags>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CTagsU3Ek__BackingField_8;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Func`2<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>,System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>>
struct Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6  : public MulticastDelegate_t
{
};

// System.Func`2<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng>
struct Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3  : public MulticastDelegate_t
{
};

// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String>
struct Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891  : public MulticastDelegate_t
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,Mapbox.VectorTile.Geometry.LatLng>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mA3D6A66578054B50113552422B1C35843668AC2F_gshared (RuntimeObject* ___source0, Func_2_t60C0D141B7D8323D2E01B5B77A1A9287ACD2EE26* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mB565F452914FE6C2BE48827BE11A82364CB236C1_gshared (Func_2_tB9382AC1C26CF2AB615B5F6A3A0C1C309F2F9916* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Mapbox.VectorTile.Geometry.LatLng,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisRuntimeObject_m286542F080372B411AC3ABF041F927E818957305_gshared (RuntimeObject* ___source0, Func_2_tB9382AC1C26CF2AB615B5F6A3A0C1C309F2F9916* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A List_1_get_Item_m8A8A185CEAC61D4278661129EC767518E2F64674_gshared (List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<T>>> Mapbox.VectorTile.VectorTileFeature::Geometry<System.Int64>(System.Nullable`1<System.UInt32>,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4A51A4B7F7C970BD0EDCDA0240F8328E07190930* VectorTileFeature_Geometry_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m612701B1A6983BCDBEC619B48FB6C338F3000449_gshared (VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* __this, Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___clipBuffer0, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___scale1, const RuntimeMethod* method) ;
// System.Void System.Func`2<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m9CAABF2B6FEC2E02BCCE2A78F9E85073E5DFE993_gshared (Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisPoint2d_1_tF097488A1DD78CBDD44DB640011A5F5E58BEB138_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mB07952A0850E15555DAA39CB19855FA932104F6E_gshared (RuntimeObject* ___source0, Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Mapbox.VectorTile.Geometry.LatLng>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* Enumerable_ToList_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_m8FE11B3E321C7988E0C8269E8DB7222D46925896_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// Mapbox.VectorTile.Geometry.LatLng Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>::ToLngLat(System.UInt64,System.UInt64,System.UInt64,System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A Point2d_1_ToLngLat_mCC32951512D81F562142C4C5F31FB7ECBC0F5FF0_gshared (Point2d_1_tF097488A1DD78CBDD44DB640011A5F5E58BEB138* __this, uint64_t ___z0, uint64_t ___x1, uint64_t ___y2, uint64_t ___extent3, bool ___checkLatLngMax4, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Mapbox.VectorTile.VectorTile::LayerNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* VectorTile_LayerNames_m0AFDC962DE8189FB7BDF030CB3C3675DB2EC7EA8 (VectorTile_t9C00E2C605BA4ED6F92D849CAFBDE63D6078FA18* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m4C3802B4F766A1B5DA5B907E842D14526BC3EF54 (ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C*, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared)(__this, method);
}
// Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTile::GetLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* VectorTile_GetLayer_mFDAD508BF229C2672990C52A7B9E7FE5B328BB79 (VectorTile_t9C00E2C605BA4ED6F92D849CAFBDE63D6078FA18* __this, String_t* ___layerName0, const RuntimeMethod* method) ;
// Mapbox.VectorTile.VectorTileFeature Mapbox.VectorTile.VectorTileLayer::GetFeature(System.Int32,System.Nullable`1<System.UInt32>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* VectorTileLayer_GetFeature_mC58EE328DEA32832A8CE05B4D22E8786AC3D12B5 (VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* __this, int32_t ___feature0, Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___clipBuffer1, float ___scale2, const RuntimeMethod* method) ;
// Mapbox.VectorTile.Geometry.GeomType Mapbox.VectorTile.VectorTileFeature::get_GeometryType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VectorTileFeature_get_GeometryType_m1B172EA93E82D9A2EFD260D5C8987A07F0D5C2B9_inline (VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Int32> Mapbox.VectorTile.VectorTileFeature::get_Tags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* VectorTileFeature_get_Tags_m6C3D7B1E0D2D8A2556B30477380E875B71D5D6FD_inline (VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<System.String> Mapbox.VectorTile.VectorTileLayer::get_Keys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VectorTileLayer_get_Keys_m157821142F1C9D336D778F5ECA60E245B9E3A7C4_inline (VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1<System.Object> Mapbox.VectorTile.VectorTileLayer::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* VectorTileLayer_get_Values_m7205B500E0CE5CBFACF3C5D979C91555EE2080DD_inline (VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA (const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.UInt64 Mapbox.VectorTile.VectorTileFeature::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t VectorTileFeature_get_Id_m6C935824B52256D56FAD374CE82633CF3F305E9E_inline (VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* __this, const RuntimeMethod* method) ;
// System.String Mapbox.VectorTile.VectorTileLayer::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VectorTileLayer_get_Name_m5F4D7AC4654505F7C682BFA2537B899F4B40B339_inline (VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.String Mapbox.VectorTile.ExtensionMethods.EnumExtensions::Description(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumExtensions_Description_m3F0DC058D4638BFFD8FCE3AD802D3F21BA529E7D (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>> Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions::GeometryAsWgs84(Mapbox.VectorTile.VectorTileFeature,System.UInt64,System.UInt64,System.UInt64,System.Nullable`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* VectorTileFeatureExtensions_GeometryAsWgs84_m5C4C4B6B273187B08EA5B26F4744FC9D0A1EA273 (VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* ___feature0, uint64_t ___zoom1, uint64_t ___tileColumn2, uint64_t ___tileRow3, Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___clipBuffer4, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::get_Count()
inline int32_t List_1_get_Count_m0FD69A54C99D5B0311F5BBC98D6CCE28AD09B335_inline (List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>,System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA01FFFCA0D92B149D607814CC8C1D4C826CF3299 (Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>,Mapbox.VectorTile.Geometry.LatLng>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisList_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mF014E6CBD17D378B65FD29DBED637800CBC735C6 (RuntimeObject* ___source0, Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mA3D6A66578054B50113552422B1C35843668AC2F_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7C26C8CDB78CB1F49054C7FB4532618CC0FEC425 (Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mB565F452914FE6C2BE48827BE11A82364CB236C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Mapbox.VectorTile.Geometry.LatLng,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisString_t_mE9EF991B57124D1525E9B12863A29D575A135DCF (RuntimeObject* ___source0, Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891*, const RuntimeMethod*))Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisRuntimeObject_m286542F080372B411AC3ABF041F927E818957305_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::GetEnumerator()
inline Enumerator_t3BD7537E6DADB3F3BBE896F260DD45EDB7D10FAD List_1_GetEnumerator_m510BA0D931C66A23974F8A39355B6B888FC5A192 (List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3BD7537E6DADB3F3BBE896F260DD45EDB7D10FAD (*) (List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::Dispose()
inline void Enumerator_Dispose_m2D8D7B60198F796D324137C9C41B9B30806E739D (Enumerator_t3BD7537E6DADB3F3BBE896F260DD45EDB7D10FAD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3BD7537E6DADB3F3BBE896F260DD45EDB7D10FAD*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::get_Current()
inline List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* Enumerator_get_Current_mFCC15EA4B246C91933F3FD6EF87FCE6CA3EDC503_inline (Enumerator_t3BD7537E6DADB3F3BBE896F260DD45EDB7D10FAD* __this, const RuntimeMethod* method)
{
	return ((  List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* (*) (Enumerator_t3BD7537E6DADB3F3BBE896F260DD45EDB7D10FAD*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::MoveNext()
inline bool Enumerator_MoveNext_m14C566F56F17D95089DA2D7F26822DCC464081F1 (Enumerator_t3BD7537E6DADB3F3BBE896F260DD45EDB7D10FAD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3BD7537E6DADB3F3BBE896F260DD45EDB7D10FAD*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::get_Item(System.Int32)
inline List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* List_1_get_Item_mC22F7F717998AF022F02C88DE74E032200D1735E (List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* (*) (List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>::get_Item(System.Int32)
inline LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A List_1_get_Item_m8A8A185CEAC61D4278661129EC767518E2F64674 (List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A (*) (List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338*, int32_t, const RuntimeMethod*))List_1_get_Item_m8A8A185CEAC61D4278661129EC767518E2F64674_gshared)(__this, ___index0, method);
}
// System.Double Mapbox.VectorTile.Geometry.LatLng::get_Lng()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double LatLng_get_Lng_m295F62037C2E227C135B6CFC38C83E2C766246D8_inline (LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A* __this, const RuntimeMethod* method) ;
// System.Double Mapbox.VectorTile.Geometry.LatLng::get_Lat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double LatLng_get_Lat_m268778CA00639DA990141BF8D5A940C46B8616D4_inline (LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.VectorTile.VectorTileLayer::FeatureCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VectorTileLayer_FeatureCount_m9F3914CAF8565DD0B2F41C069B92E032649C82F9 (VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m71098E0EA8253AAC74062B12D3EFEAC0EBABDB0A (U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m3973F8D631ACE4FDBCAC81C73233C7F4FE464090 (U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::.ctor()
inline void List_1__ctor_m5963A23E3A1311BD4475702FED1E9D5B76C9BBFD (List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Nullable`1<System.Single>::.ctor(T)
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, float, const RuntimeMethod*))Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared)(__this, ___value0, method);
}
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<T>>> Mapbox.VectorTile.VectorTileFeature::Geometry<System.Int64>(System.Nullable`1<System.UInt32>,System.Nullable`1<System.Single>)
inline List_1_t4A51A4B7F7C970BD0EDCDA0240F8328E07190930* VectorTileFeature_Geometry_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m612701B1A6983BCDBEC619B48FB6C338F3000449 (VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* __this, Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___clipBuffer0, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___scale1, const RuntimeMethod* method)
{
	return ((  List_1_t4A51A4B7F7C970BD0EDCDA0240F8328E07190930* (*) (VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8*, Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, const RuntimeMethod*))VectorTileFeature_Geometry_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m612701B1A6983BCDBEC619B48FB6C338F3000449_gshared)(__this, ___clipBuffer0, ___scale1, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::GetEnumerator()
inline Enumerator_t47C6E35927A048FF84A5ED129AFC68FFD240251D List_1_GetEnumerator_mC03C6C780AAC9D76B8F255335D3AD9623AB83081 (List_1_t4A51A4B7F7C970BD0EDCDA0240F8328E07190930* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t47C6E35927A048FF84A5ED129AFC68FFD240251D (*) (List_1_t4A51A4B7F7C970BD0EDCDA0240F8328E07190930*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::Dispose()
inline void Enumerator_Dispose_mF4EF8A9DF7782068948BB4186D8C8B37C96CAF72 (Enumerator_t47C6E35927A048FF84A5ED129AFC68FFD240251D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t47C6E35927A048FF84A5ED129AFC68FFD240251D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::get_Current()
inline List_1_t4547A61BA527AF86FD7F9CD54C690F8D33332BB9* Enumerator_get_Current_mABCA5D7BECF415A4BAB2DFBD20F3A3E927E64592_inline (Enumerator_t47C6E35927A048FF84A5ED129AFC68FFD240251D* __this, const RuntimeMethod* method)
{
	return ((  List_1_t4547A61BA527AF86FD7F9CD54C690F8D33332BB9* (*) (Enumerator_t47C6E35927A048FF84A5ED129AFC68FFD240251D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Func`2<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9CAABF2B6FEC2E02BCCE2A78F9E85073E5DFE993 (Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m9CAABF2B6FEC2E02BCCE2A78F9E85073E5DFE993_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>,Mapbox.VectorTile.Geometry.LatLng>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisPoint2d_1_tF097488A1DD78CBDD44DB640011A5F5E58BEB138_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mB07952A0850E15555DAA39CB19855FA932104F6E (RuntimeObject* ___source0, Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3*, const RuntimeMethod*))Enumerable_Select_TisPoint2d_1_tF097488A1DD78CBDD44DB640011A5F5E58BEB138_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mB07952A0850E15555DAA39CB19855FA932104F6E_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Mapbox.VectorTile.Geometry.LatLng>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* Enumerable_ToList_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_m8FE11B3E321C7988E0C8269E8DB7222D46925896 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_m8FE11B3E321C7988E0C8269E8DB7222D46925896_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>>::Add(T)
inline void List_1_Add_mAFB142634AEA9C9C098BE34B5376EF76B75C83D8_inline (List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* __this, List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE*, List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>>>::MoveNext()
inline bool Enumerator_MoveNext_m2D7ABDFBBA4A755BB5FE467E6982CF332701082A (Enumerator_t47C6E35927A048FF84A5ED129AFC68FFD240251D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t47C6E35927A048FF84A5ED129AFC68FFD240251D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// Mapbox.VectorTile.VectorTileLayer Mapbox.VectorTile.VectorTileFeature::get_Layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* VectorTileFeature_get_Layer_m0E92A34258394F30DA0B79366DA457F1D5686513 (VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* __this, const RuntimeMethod* method) ;
// System.UInt64 Mapbox.VectorTile.VectorTileLayer::get_Extent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t VectorTileLayer_get_Extent_mFB5EF172BF62792AF9B627198F04E726853E34ED_inline (VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* __this, const RuntimeMethod* method) ;
// Mapbox.VectorTile.Geometry.LatLng Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>::ToLngLat(System.UInt64,System.UInt64,System.UInt64,System.UInt64,System.Boolean)
inline LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A Point2d_1_ToLngLat_mCC32951512D81F562142C4C5F31FB7ECBC0F5FF0 (Point2d_1_tF097488A1DD78CBDD44DB640011A5F5E58BEB138* __this, uint64_t ___z0, uint64_t ___x1, uint64_t ___y2, uint64_t ___extent3, bool ___checkLatLngMax4, const RuntimeMethod* method)
{
	return ((  LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A (*) (Point2d_1_tF097488A1DD78CBDD44DB640011A5F5E58BEB138*, uint64_t, uint64_t, uint64_t, uint64_t, bool, const RuntimeMethod*))Point2d_1_ToLngLat_mCC32951512D81F562142C4C5F31FB7ECBC0F5FF0_gshared)(__this, ___z0, ___x1, ___y2, ___extent3, ___checkLatLngMax4, method);
}
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
// System.String Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions::ToGeoJson(Mapbox.VectorTile.VectorTile,System.UInt64,System.UInt64,System.UInt64,System.Nullable`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VectorTileExtensions_ToGeoJson_mDE20583B7703E98EFA616845CD591019E1B8EDE8 (VectorTile_t9C00E2C605BA4ED6F92D849CAFBDE63D6078FA18* ___tile0, uint64_t ___zoom1, uint64_t ___tileColumn2, uint64_t ___tileRow3, Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___clipBuffer4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisList_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mF014E6CBD17D378B65FD29DBED637800CBC735C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisString_t_mE9EF991B57124D1525E9B12863A29D575A135DCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2D8D7B60198F796D324137C9C41B9B30806E739D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m14C566F56F17D95089DA2D7F26822DCC464081F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFCC15EA4B246C91933F3FD6EF87FCE6CA3EDC503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeomType_tA286C39BE9F1B8BC732610E76C0D2CE5926A1240_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m510BA0D931C66A23974F8A39355B6B888FC5A192_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0FD69A54C99D5B0311F5BBC98D6CCE28AD09B335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A8A185CEAC61D4278661129EC767518E2F64674_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC22F7F717998AF022F02C88DE74E032200D1735E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m4C3802B4F766A1B5DA5B907E842D14526BC3EF54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToGeoJsonU3Eb__0_0_m9F9C545EF92C434FA4E50A903243B7CD1FEAB19F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToGeoJsonU3Eb__0_1_mE470E10B52977E158D07E10C9B7CE97F3B803293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToGeoJsonU3Eb__0_2_m8FCF90643718CE9192F88EB3CEABCFA458621BB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToGeoJsonU3Eb__0_3_m341A2AB6D291673E670D5F4E6A249CC6ABF44F9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToGeoJsonU3Eb__0_4_mE26D2452FE8DDD787024B1B5C58422E444C1CC8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToGeoJsonU3Eb__0_5_m75299F237E912A724396544364B95871A5943C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F28FF8AD33779DEC9680F0321D01D22563ED0E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47B9D1A03C2619F57397110F3FEB5C073256602F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73BC0851F103FF61FD390EE5A6BE84F09E79E9EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7562CA79A392F95A04509C56C6B4D0A7FD10AFD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB490A8FC9FDC7D671618986EFE4E28F9995B263F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCB24758B8281580D9CE13BCDDFE5C7584D4DCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF1E28BFC288C71D7FA87622A964DC8831E8A820);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* V_6 = NULL;
	int32_t V_7 = 0;
	VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* V_8 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_9 = NULL;
	int32_t V_10 = 0;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	String_t* V_13 = NULL;
	List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* V_14 = NULL;
	bool V_15 = false;
	int32_t V_16 = 0;
	String_t* V_17 = NULL;
	RuntimeObject* V_18 = NULL;
	bool V_19 = false;
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	int32_t V_22 = 0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_23 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_24 = NULL;
	Enumerator_t3BD7537E6DADB3F3BBE896F260DD45EDB7D10FAD V_25;
	memset((&V_25), 0, sizeof(V_25));
	List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* V_26 = NULL;
	Enumerator_t3BD7537E6DADB3F3BBE896F260DD45EDB7D10FAD V_27;
	memset((&V_27), 0, sizeof(V_27));
	List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* V_28 = NULL;
	bool V_29 = false;
	int32_t V_30 = 0;
	LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A V_31;
	memset((&V_31), 0, sizeof(V_31));
	bool V_32 = false;
	String_t* V_33 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B10_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B10_2 = NULL;
	String_t* G_B10_3 = NULL;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* G_B10_4 = NULL;
	int32_t G_B9_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B9_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B9_2 = NULL;
	String_t* G_B9_3 = NULL;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* G_B9_4 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B11_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B11_3 = NULL;
	String_t* G_B11_4 = NULL;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* G_B11_5 = NULL;
	Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6* G_B16_0 = NULL;
	List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* G_B16_1 = NULL;
	String_t* G_B16_2 = NULL;
	Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6* G_B15_0 = NULL;
	List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* G_B15_1 = NULL;
	String_t* G_B15_2 = NULL;
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* G_B18_0 = NULL;
	RuntimeObject* G_B18_1 = NULL;
	String_t* G_B18_2 = NULL;
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	String_t* G_B17_2 = NULL;
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* G_B23_0 = NULL;
	List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* G_B23_1 = NULL;
	String_t* G_B23_2 = NULL;
	String_t* G_B23_3 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B23_4 = NULL;
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* G_B22_0 = NULL;
	List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* G_B22_1 = NULL;
	String_t* G_B22_2 = NULL;
	String_t* G_B22_3 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B22_4 = NULL;
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* G_B32_0 = NULL;
	List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* G_B32_1 = NULL;
	String_t* G_B32_2 = NULL;
	String_t* G_B32_3 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B32_4 = NULL;
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* G_B31_0 = NULL;
	List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* G_B31_1 = NULL;
	String_t* G_B31_2 = NULL;
	String_t* G_B31_3 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B31_4 = NULL;
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* G_B45_0 = NULL;
	List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* G_B45_1 = NULL;
	String_t* G_B45_2 = NULL;
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* G_B44_0 = NULL;
	List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* G_B44_1 = NULL;
	String_t* G_B44_2 = NULL;
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* G_B48_0 = NULL;
	List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* G_B48_1 = NULL;
	String_t* G_B48_2 = NULL;
	String_t* G_B48_3 = NULL;
	Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* G_B47_0 = NULL;
	List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* G_B47_1 = NULL;
	String_t* G_B47_2 = NULL;
	String_t* G_B47_3 = NULL;
	{
		V_0 = _stringLiteral73BC0851F103FF61FD390EE5A6BE84F09E79E9EE;
		V_1 = _stringLiteralB490A8FC9FDC7D671618986EFE4E28F9995B263F;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_2 = L_0;
		VectorTile_t9C00E2C605BA4ED6F92D849CAFBDE63D6078FA18* L_1 = ___tile0;
		NullCheck(L_1);
		ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* L_2;
		L_2 = VectorTile_LayerNames_m0AFDC962DE8189FB7BDF030CB3C3675DB2EC7EA8(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ReadOnlyCollection_1_GetEnumerator_m4C3802B4F766A1B5DA5B907E842D14526BC3EF54(L_2, ReadOnlyCollection_1_GetEnumerator_m4C3802B4F766A1B5DA5B907E842D14526BC3EF54_RuntimeMethod_var);
		V_4 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_04f6:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_4;
					if (!L_4)
					{
						goto IL_0502;
					}
				}
				{
					RuntimeObject* L_5 = V_4;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0502:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_04e8_1;
			}

IL_0026_1:
			{
				RuntimeObject* L_6 = V_4;
				NullCheck(L_6);
				String_t* L_7;
				L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_6);
				V_5 = L_7;
				VectorTile_t9C00E2C605BA4ED6F92D849CAFBDE63D6078FA18* L_8 = ___tile0;
				String_t* L_9 = V_5;
				NullCheck(L_8);
				VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* L_10;
				L_10 = VectorTile_GetLayer_mFDAD508BF229C2672990C52A7B9E7FE5B328BB79(L_8, L_9, NULL);
				V_6 = L_10;
				V_7 = 0;
				goto IL_04d3_1;
			}

IL_0042_1:
			{
				VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* L_11 = V_6;
				int32_t L_12 = V_7;
				Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_13 = ___clipBuffer4;
				NullCheck(L_11);
				VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* L_14;
				L_14 = VectorTileLayer_GetFeature_mC58EE328DEA32832A8CE05B4D22E8786AC3D12B5(L_11, L_12, L_13, (1.0f), NULL);
				V_8 = L_14;
				VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* L_15 = V_8;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = VectorTileFeature_get_GeometryType_m1B172EA93E82D9A2EFD260D5C8987A07F0D5C2B9_inline(L_15, NULL);
				V_15 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
				bool L_17 = V_15;
				if (!L_17)
				{
					goto IL_006b_1;
				}
			}
			{
				goto IL_04cd_1;
			}

IL_006b_1:
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
				NullCheck(L_18);
				List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_18, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
				V_9 = L_18;
				VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* L_19 = V_8;
				NullCheck(L_19);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_20;
				L_20 = VectorTileFeature_get_Tags_m6C3D7B1E0D2D8A2556B30477380E875B71D5D6FD_inline(L_19, NULL);
				NullCheck(L_20);
				int32_t L_21;
				L_21 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_20, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
				V_10 = L_21;
				V_16 = 0;
				goto IL_00ee_1;
			}

IL_0085_1:
			{
				VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* L_22 = V_6;
				NullCheck(L_22);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23;
				L_23 = VectorTileLayer_get_Keys_m157821142F1C9D336D778F5ECA60E245B9E3A7C4_inline(L_22, NULL);
				VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* L_24 = V_8;
				NullCheck(L_24);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_25;
				L_25 = VectorTileFeature_get_Tags_m6C3D7B1E0D2D8A2556B30477380E875B71D5D6FD_inline(L_24, NULL);
				int32_t L_26 = V_16;
				NullCheck(L_25);
				int32_t L_27;
				L_27 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_25, L_26, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
				NullCheck(L_23);
				String_t* L_28;
				L_28 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_23, L_27, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
				V_17 = L_28;
				VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* L_29 = V_6;
				NullCheck(L_29);
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_30;
				L_30 = VectorTileLayer_get_Values_m7205B500E0CE5CBFACF3C5D979C91555EE2080DD_inline(L_29, NULL);
				VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* L_31 = V_8;
				NullCheck(L_31);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_32;
				L_32 = VectorTileFeature_get_Tags_m6C3D7B1E0D2D8A2556B30477380E875B71D5D6FD_inline(L_31, NULL);
				int32_t L_33 = V_16;
				NullCheck(L_32);
				int32_t L_34;
				L_34 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_32, ((int32_t)il2cpp_codegen_add(L_33, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
				NullCheck(L_30);
				RuntimeObject* L_35;
				L_35 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_30, L_34, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
				V_18 = L_35;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_36 = V_9;
				NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_37;
				L_37 = NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA(NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = L_38;
				String_t* L_40 = V_17;
				NullCheck(L_39);
				ArrayElementTypeCheck (L_39, L_40);
				(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_40);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_39;
				RuntimeObject* L_42 = V_18;
				NullCheck(L_41);
				ArrayElementTypeCheck (L_41, L_42);
				(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_42);
				String_t* L_43;
				L_43 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_37, _stringLiteralCCCB24758B8281580D9CE13BCDDFE5C7584D4DCD, L_41, NULL);
				NullCheck(L_36);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_36, L_43, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				int32_t L_44 = V_16;
				V_16 = ((int32_t)il2cpp_codegen_add(L_44, 2));
			}

IL_00ee_1:
			{
				int32_t L_45 = V_16;
				int32_t L_46 = V_10;
				V_19 = (bool)((((int32_t)L_45) < ((int32_t)L_46))? 1 : 0);
				bool L_47 = V_19;
				if (L_47)
				{
					goto IL_0085_1;
				}
			}
			{
				NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_48;
				L_48 = NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA(NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_49;
				VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* L_51 = V_8;
				NullCheck(L_51);
				uint64_t L_52;
				L_52 = VectorTileFeature_get_Id_m6C935824B52256D56FAD374CE82633CF3F305E9E_inline(L_51, NULL);
				uint64_t L_53 = L_52;
				RuntimeObject* L_54 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_53);
				NullCheck(L_50);
				ArrayElementTypeCheck (L_50, L_54);
				(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_54);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = L_50;
				VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* L_56 = V_6;
				NullCheck(L_56);
				String_t* L_57;
				L_57 = VectorTileLayer_get_Name_m5F4D7AC4654505F7C682BFA2537B899F4B40B339_inline(L_56, NULL);
				NullCheck(L_55);
				ArrayElementTypeCheck (L_55, L_57);
				(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_57);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = L_55;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_59 = V_9;
				NullCheck(L_59);
				int32_t L_60;
				L_60 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_59, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
				G_B9_0 = 2;
				G_B9_1 = L_58;
				G_B9_2 = L_58;
				G_B9_3 = _stringLiteral47B9D1A03C2619F57397110F3FEB5C073256602F;
				G_B9_4 = L_48;
				if ((((int32_t)L_60) > ((int32_t)0)))
				{
					G_B10_0 = 2;
					G_B10_1 = L_58;
					G_B10_2 = L_58;
					G_B10_3 = _stringLiteral47B9D1A03C2619F57397110F3FEB5C073256602F;
					G_B10_4 = L_48;
					goto IL_0136_1;
				}
			}
			{
				G_B11_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				G_B11_1 = G_B9_0;
				G_B11_2 = G_B9_1;
				G_B11_3 = G_B9_2;
				G_B11_4 = G_B9_3;
				G_B11_5 = G_B9_4;
				goto IL_013b_1;
			}

IL_0136_1:
			{
				G_B11_0 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
				G_B11_1 = G_B10_0;
				G_B11_2 = G_B10_1;
				G_B11_3 = G_B10_2;
				G_B11_4 = G_B10_3;
				G_B11_5 = G_B10_4;
			}

IL_013b_1:
			{
				NullCheck(G_B11_2);
				ArrayElementTypeCheck (G_B11_2, G_B11_0);
				(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (RuntimeObject*)G_B11_0);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = G_B11_3;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_62 = V_9;
				NullCheck(L_62);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63;
				L_63 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_62, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
				String_t* L_64;
				L_64 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_63, NULL);
				NullCheck(L_61);
				ArrayElementTypeCheck (L_61, L_64);
				(L_61)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_64);
				String_t* L_65;
				L_65 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(G_B11_5, G_B11_4, L_61, NULL);
				V_11 = L_65;
				V_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* L_66 = V_8;
				NullCheck(L_66);
				int32_t L_67;
				L_67 = VectorTileFeature_get_GeometryType_m1B172EA93E82D9A2EFD260D5C8987A07F0D5C2B9_inline(L_66, NULL);
				int32_t L_68 = L_67;
				RuntimeObject* L_69 = Box(GeomType_tA286C39BE9F1B8BC732610E76C0D2CE5926A1240_il2cpp_TypeInfo_var, &L_68);
				String_t* L_70;
				L_70 = EnumExtensions_Description_m3F0DC058D4638BFFD8FCE3AD802D3F21BA529E7D((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)L_69, NULL);
				V_13 = L_70;
				VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* L_71 = V_8;
				uint64_t L_72 = ___zoom1;
				uint64_t L_73 = ___tileColumn2;
				uint64_t L_74 = ___tileRow3;
				il2cpp_codegen_initobj((&V_20), sizeof(Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099));
				Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_75 = V_20;
				List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_76;
				L_76 = VectorTileFeatureExtensions_GeometryAsWgs84_m5C4C4B6B273187B08EA5B26F4744FC9D0A1EA273(L_71, L_72, L_73, L_74, L_75, NULL);
				V_14 = L_76;
				List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_77 = V_14;
				NullCheck(L_77);
				int32_t L_78;
				L_78 = List_1_get_Count_m0FD69A54C99D5B0311F5BBC98D6CCE28AD09B335_inline(L_77, List_1_get_Count_m0FD69A54C99D5B0311F5BBC98D6CCE28AD09B335_RuntimeMethod_var);
				V_21 = (bool)((((int32_t)L_78) > ((int32_t)1))? 1 : 0);
				bool L_79 = V_21;
				if (!L_79)
				{
					goto IL_037f_1;
				}
			}
			{
				VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* L_80 = V_8;
				NullCheck(L_80);
				int32_t L_81;
				L_81 = VectorTileFeature_get_GeometryType_m1B172EA93E82D9A2EFD260D5C8987A07F0D5C2B9_inline(L_80, NULL);
				V_22 = L_81;
				int32_t L_82 = V_22;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_82, 1)))
				{
					case 0:
					{
						goto IL_01be_1;
					}
					case 1:
					{
						goto IL_0225_1;
					}
					case 2:
					{
						goto IL_02c8_1;
					}
				}
			}
			{
				goto IL_0377_1;
			}

IL_01be_1:
			{
				V_13 = _stringLiteral7562CA79A392F95A04509C56C6B4D0A7FD10AFD3;
				List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_83 = V_14;
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
				Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6* L_84 = ((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_2_1;
				Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6* L_85 = L_84;
				G_B15_0 = L_85;
				G_B15_1 = L_83;
				G_B15_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
				if (L_85)
				{
					G_B16_0 = L_85;
					G_B16_1 = L_83;
					G_B16_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
					goto IL_01eb_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
				U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* L_86 = ((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6* L_87 = (Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6*)il2cpp_codegen_object_new(Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6_il2cpp_TypeInfo_var);
				NullCheck(L_87);
				Func_2__ctor_mA01FFFCA0D92B149D607814CC8C1D4C826CF3299(L_87, L_86, (intptr_t)((void*)U3CU3Ec_U3CToGeoJsonU3Eb__0_2_m8FCF90643718CE9192F88EB3CEABCFA458621BB7_RuntimeMethod_var), NULL);
				Func_2_t54A22FC4746DDA121C491F151E8372179F4995B6* L_88 = L_87;
				((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_2_1 = L_88;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_2_1), (void*)L_88);
				G_B16_0 = L_88;
				G_B16_1 = G_B15_1;
				G_B16_2 = G_B15_2;
			}

IL_01eb_1:
			{
				RuntimeObject* L_89;
				L_89 = Enumerable_SelectMany_TisList_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mF014E6CBD17D378B65FD29DBED637800CBC735C6(G_B16_1, G_B16_0, Enumerable_SelectMany_TisList_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mF014E6CBD17D378B65FD29DBED637800CBC735C6_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
				Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_90 = ((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_2;
				Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_91 = L_90;
				G_B17_0 = L_91;
				G_B17_1 = L_89;
				G_B17_2 = G_B16_2;
				if (L_91)
				{
					G_B18_0 = L_91;
					G_B18_1 = L_89;
					G_B18_2 = G_B16_2;
					goto IL_020f_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
				U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* L_92 = ((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_93 = (Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891*)il2cpp_codegen_object_new(Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891_il2cpp_TypeInfo_var);
				NullCheck(L_93);
				Func_2__ctor_m7C26C8CDB78CB1F49054C7FB4532618CC0FEC425(L_93, L_92, (intptr_t)((void*)U3CU3Ec_U3CToGeoJsonU3Eb__0_3_m341A2AB6D291673E670D5F4E6A249CC6ABF44F9D_RuntimeMethod_var), NULL);
				Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_94 = L_93;
				((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_2 = L_94;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_3_2), (void*)L_94);
				G_B18_0 = L_94;
				G_B18_1 = G_B17_1;
				G_B18_2 = G_B17_2;
			}

IL_020f_1:
			{
				RuntimeObject* L_95;
				L_95 = Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisString_t_mE9EF991B57124D1525E9B12863A29D575A135DCF(G_B18_1, G_B18_0, Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisString_t_mE9EF991B57124D1525E9B12863A29D575A135DCF_RuntimeMethod_var);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_96;
				L_96 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_95, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
				String_t* L_97;
				L_97 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B18_2, L_96, NULL);
				V_12 = L_97;
				goto IL_0379_1;
			}

IL_0225_1:
			{
				V_13 = _stringLiteralEF1E28BFC288C71D7FA87622A964DC8831E8A820;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_98 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
				NullCheck(L_98);
				List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_98, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
				V_23 = L_98;
				List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_99 = V_14;
				NullCheck(L_99);
				Enumerator_t3BD7537E6DADB3F3BBE896F260DD45EDB7D10FAD L_100;
				L_100 = List_1_GetEnumerator_m510BA0D931C66A23974F8A39355B6B888FC5A192(L_99, List_1_GetEnumerator_m510BA0D931C66A23974F8A39355B6B888FC5A192_RuntimeMethod_var);
				V_25 = L_100;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_02a1_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m2D8D7B60198F796D324137C9C41B9B30806E739D((&V_25), Enumerator_Dispose_m2D8D7B60198F796D324137C9C41B9B30806E739D_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0296_2;
					}

IL_023f_2:
					{
						List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* L_101;
						L_101 = Enumerator_get_Current_mFCC15EA4B246C91933F3FD6EF87FCE6CA3EDC503_inline((&V_25), Enumerator_get_Current_mFCC15EA4B246C91933F3FD6EF87FCE6CA3EDC503_RuntimeMethod_var);
						V_26 = L_101;
						List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_102 = V_23;
						List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* L_103 = V_26;
						il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
						Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_104 = ((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_3;
						Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_105 = L_104;
						G_B22_0 = L_105;
						G_B22_1 = L_103;
						G_B22_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
						G_B22_3 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
						G_B22_4 = L_102;
						if (L_105)
						{
							G_B23_0 = L_105;
							G_B23_1 = L_103;
							G_B23_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
							G_B23_3 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
							G_B23_4 = L_102;
							goto IL_0276_2;
						}
					}
					{
						il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
						U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* L_106 = ((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
						Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_107 = (Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891*)il2cpp_codegen_object_new(Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891_il2cpp_TypeInfo_var);
						NullCheck(L_107);
						Func_2__ctor_m7C26C8CDB78CB1F49054C7FB4532618CC0FEC425(L_107, L_106, (intptr_t)((void*)U3CU3Ec_U3CToGeoJsonU3Eb__0_4_mE26D2452FE8DDD787024B1B5C58422E444C1CC8B_RuntimeMethod_var), NULL);
						Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_108 = L_107;
						((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_3 = L_108;
						Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_4_3), (void*)L_108);
						G_B23_0 = L_108;
						G_B23_1 = G_B22_1;
						G_B23_2 = G_B22_2;
						G_B23_3 = G_B22_3;
						G_B23_4 = G_B22_4;
					}

IL_0276_2:
					{
						RuntimeObject* L_109;
						L_109 = Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisString_t_mE9EF991B57124D1525E9B12863A29D575A135DCF(G_B23_1, G_B23_0, Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisString_t_mE9EF991B57124D1525E9B12863A29D575A135DCF_RuntimeMethod_var);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_110;
						L_110 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_109, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
						String_t* L_111;
						L_111 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B23_2, L_110, NULL);
						String_t* L_112;
						L_112 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B23_3, L_111, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
						NullCheck(G_B23_4);
						List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(G_B23_4, L_112, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
					}

IL_0296_2:
					{
						bool L_113;
						L_113 = Enumerator_MoveNext_m14C566F56F17D95089DA2D7F26822DCC464081F1((&V_25), Enumerator_MoveNext_m14C566F56F17D95089DA2D7F26822DCC464081F1_RuntimeMethod_var);
						if (L_113)
						{
							goto IL_023f_2;
						}
					}
					{
						goto IL_02b0_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_02b0_1:
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_114 = V_23;
				NullCheck(L_114);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_115;
				L_115 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_114, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
				String_t* L_116;
				L_116 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_115, NULL);
				V_12 = L_116;
				goto IL_0379_1;
			}

IL_02c8_1:
			{
				V_13 = _stringLiteral1F28FF8AD33779DEC9680F0321D01D22563ED0E8;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_117 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
				NullCheck(L_117);
				List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_117, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
				V_24 = L_117;
				List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_118 = V_14;
				NullCheck(L_118);
				Enumerator_t3BD7537E6DADB3F3BBE896F260DD45EDB7D10FAD L_119;
				L_119 = List_1_GetEnumerator_m510BA0D931C66A23974F8A39355B6B888FC5A192(L_118, List_1_GetEnumerator_m510BA0D931C66A23974F8A39355B6B888FC5A192_RuntimeMethod_var);
				V_27 = L_119;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0344_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m2D8D7B60198F796D324137C9C41B9B30806E739D((&V_27), Enumerator_Dispose_m2D8D7B60198F796D324137C9C41B9B30806E739D_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0339_2;
					}

IL_02e2_2:
					{
						List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* L_120;
						L_120 = Enumerator_get_Current_mFCC15EA4B246C91933F3FD6EF87FCE6CA3EDC503_inline((&V_27), Enumerator_get_Current_mFCC15EA4B246C91933F3FD6EF87FCE6CA3EDC503_RuntimeMethod_var);
						V_28 = L_120;
						List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_121 = V_24;
						List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* L_122 = V_28;
						il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
						Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_123 = ((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_5_4;
						Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_124 = L_123;
						G_B31_0 = L_124;
						G_B31_1 = L_122;
						G_B31_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
						G_B31_3 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
						G_B31_4 = L_121;
						if (L_124)
						{
							G_B32_0 = L_124;
							G_B32_1 = L_122;
							G_B32_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
							G_B32_3 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
							G_B32_4 = L_121;
							goto IL_0319_2;
						}
					}
					{
						il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
						U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* L_125 = ((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
						Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_126 = (Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891*)il2cpp_codegen_object_new(Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891_il2cpp_TypeInfo_var);
						NullCheck(L_126);
						Func_2__ctor_m7C26C8CDB78CB1F49054C7FB4532618CC0FEC425(L_126, L_125, (intptr_t)((void*)U3CU3Ec_U3CToGeoJsonU3Eb__0_5_m75299F237E912A724396544364B95871A5943C87_RuntimeMethod_var), NULL);
						Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_127 = L_126;
						((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_5_4 = L_127;
						Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_5_4), (void*)L_127);
						G_B32_0 = L_127;
						G_B32_1 = G_B31_1;
						G_B32_2 = G_B31_2;
						G_B32_3 = G_B31_3;
						G_B32_4 = G_B31_4;
					}

IL_0319_2:
					{
						RuntimeObject* L_128;
						L_128 = Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisString_t_mE9EF991B57124D1525E9B12863A29D575A135DCF(G_B32_1, G_B32_0, Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisString_t_mE9EF991B57124D1525E9B12863A29D575A135DCF_RuntimeMethod_var);
						StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_129;
						L_129 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_128, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
						String_t* L_130;
						L_130 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B32_2, L_129, NULL);
						String_t* L_131;
						L_131 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B32_3, L_130, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
						NullCheck(G_B32_4);
						List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(G_B32_4, L_131, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
					}

IL_0339_2:
					{
						bool L_132;
						L_132 = Enumerator_MoveNext_m14C566F56F17D95089DA2D7F26822DCC464081F1((&V_27), Enumerator_MoveNext_m14C566F56F17D95089DA2D7F26822DCC464081F1_RuntimeMethod_var);
						if (L_132)
						{
							goto IL_02e2_2;
						}
					}
					{
						goto IL_0353_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0353_1:
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_133 = V_24;
				NullCheck(L_133);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_134;
				L_134 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_133, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
				String_t* L_135;
				L_135 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_134, NULL);
				String_t* L_136;
				L_136 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_135, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
				V_12 = L_136;
				goto IL_0379_1;
			}

IL_0377_1:
			{
				goto IL_0379_1;
			}

IL_0379_1:
			{
				goto IL_04a5_1;
			}

IL_037f_1:
			{
				List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_137 = V_14;
				NullCheck(L_137);
				int32_t L_138;
				L_138 = List_1_get_Count_m0FD69A54C99D5B0311F5BBC98D6CCE28AD09B335_inline(L_137, List_1_get_Count_m0FD69A54C99D5B0311F5BBC98D6CCE28AD09B335_RuntimeMethod_var);
				V_29 = (bool)((((int32_t)L_138) == ((int32_t)1))? 1 : 0);
				bool L_139 = V_29;
				if (!L_139)
				{
					goto IL_04a2_1;
				}
			}
			{
				VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* L_140 = V_8;
				NullCheck(L_140);
				int32_t L_141;
				L_141 = VectorTileFeature_get_GeometryType_m1B172EA93E82D9A2EFD260D5C8987A07F0D5C2B9_inline(L_140, NULL);
				V_30 = L_141;
				int32_t L_142 = V_30;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_142, 1)))
				{
					case 0:
					{
						goto IL_03b6_1;
					}
					case 1:
					{
						goto IL_0410_1;
					}
					case 2:
					{
						goto IL_044f_1;
					}
				}
			}
			{
				goto IL_049d_1;
			}

IL_03b6_1:
			{
				NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_143;
				L_143 = NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA(NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_144 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_145 = L_144;
				List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_146 = V_14;
				NullCheck(L_146);
				List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* L_147;
				L_147 = List_1_get_Item_mC22F7F717998AF022F02C88DE74E032200D1735E(L_146, 0, List_1_get_Item_mC22F7F717998AF022F02C88DE74E032200D1735E_RuntimeMethod_var);
				NullCheck(L_147);
				LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A L_148;
				L_148 = List_1_get_Item_m8A8A185CEAC61D4278661129EC767518E2F64674(L_147, 0, List_1_get_Item_m8A8A185CEAC61D4278661129EC767518E2F64674_RuntimeMethod_var);
				V_31 = L_148;
				double L_149;
				L_149 = LatLng_get_Lng_m295F62037C2E227C135B6CFC38C83E2C766246D8_inline((&V_31), NULL);
				double L_150 = L_149;
				RuntimeObject* L_151 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_150);
				NullCheck(L_145);
				ArrayElementTypeCheck (L_145, L_151);
				(L_145)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_151);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_152 = L_145;
				List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_153 = V_14;
				NullCheck(L_153);
				List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* L_154;
				L_154 = List_1_get_Item_mC22F7F717998AF022F02C88DE74E032200D1735E(L_153, 0, List_1_get_Item_mC22F7F717998AF022F02C88DE74E032200D1735E_RuntimeMethod_var);
				NullCheck(L_154);
				LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A L_155;
				L_155 = List_1_get_Item_m8A8A185CEAC61D4278661129EC767518E2F64674(L_154, 0, List_1_get_Item_m8A8A185CEAC61D4278661129EC767518E2F64674_RuntimeMethod_var);
				V_31 = L_155;
				double L_156;
				L_156 = LatLng_get_Lat_m268778CA00639DA990141BF8D5A940C46B8616D4_inline((&V_31), NULL);
				double L_157 = L_156;
				RuntimeObject* L_158 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_157);
				NullCheck(L_152);
				ArrayElementTypeCheck (L_152, L_158);
				(L_152)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_158);
				String_t* L_159;
				L_159 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_143, _stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A, L_152, NULL);
				V_12 = L_159;
				goto IL_049f_1;
			}

IL_0410_1:
			{
				List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_160 = V_14;
				NullCheck(L_160);
				List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* L_161;
				L_161 = List_1_get_Item_mC22F7F717998AF022F02C88DE74E032200D1735E(L_160, 0, List_1_get_Item_mC22F7F717998AF022F02C88DE74E032200D1735E_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
				Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_162 = ((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_5;
				Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_163 = L_162;
				G_B44_0 = L_163;
				G_B44_1 = L_161;
				G_B44_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
				if (L_163)
				{
					G_B45_0 = L_163;
					G_B45_1 = L_161;
					G_B45_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
					goto IL_043c_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
				U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* L_164 = ((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_165 = (Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891*)il2cpp_codegen_object_new(Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891_il2cpp_TypeInfo_var);
				NullCheck(L_165);
				Func_2__ctor_m7C26C8CDB78CB1F49054C7FB4532618CC0FEC425(L_165, L_164, (intptr_t)((void*)U3CU3Ec_U3CToGeoJsonU3Eb__0_0_m9F9C545EF92C434FA4E50A903243B7CD1FEAB19F_RuntimeMethod_var), NULL);
				Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_166 = L_165;
				((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_5 = L_166;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_5), (void*)L_166);
				G_B45_0 = L_166;
				G_B45_1 = G_B44_1;
				G_B45_2 = G_B44_2;
			}

IL_043c_1:
			{
				RuntimeObject* L_167;
				L_167 = Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisString_t_mE9EF991B57124D1525E9B12863A29D575A135DCF(G_B45_1, G_B45_0, Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisString_t_mE9EF991B57124D1525E9B12863A29D575A135DCF_RuntimeMethod_var);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_168;
				L_168 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_167, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
				String_t* L_169;
				L_169 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B45_2, L_168, NULL);
				V_12 = L_169;
				goto IL_049f_1;
			}

IL_044f_1:
			{
				List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_170 = V_14;
				NullCheck(L_170);
				List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* L_171;
				L_171 = List_1_get_Item_mC22F7F717998AF022F02C88DE74E032200D1735E(L_170, 0, List_1_get_Item_mC22F7F717998AF022F02C88DE74E032200D1735E_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
				Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_172 = ((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_6;
				Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_173 = L_172;
				G_B47_0 = L_173;
				G_B47_1 = L_171;
				G_B47_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
				G_B47_3 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
				if (L_173)
				{
					G_B48_0 = L_173;
					G_B48_1 = L_171;
					G_B48_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
					G_B48_3 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
					goto IL_0480_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
				U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* L_174 = ((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_175 = (Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891*)il2cpp_codegen_object_new(Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891_il2cpp_TypeInfo_var);
				NullCheck(L_175);
				Func_2__ctor_m7C26C8CDB78CB1F49054C7FB4532618CC0FEC425(L_175, L_174, (intptr_t)((void*)U3CU3Ec_U3CToGeoJsonU3Eb__0_1_mE470E10B52977E158D07E10C9B7CE97F3B803293_RuntimeMethod_var), NULL);
				Func_2_t68419EE328099531A3BAC7F631044D1CCBFB6891* L_176 = L_175;
				((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_6 = L_176;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_6), (void*)L_176);
				G_B48_0 = L_176;
				G_B48_1 = G_B47_1;
				G_B48_2 = G_B47_2;
				G_B48_3 = G_B47_3;
			}

IL_0480_1:
			{
				RuntimeObject* L_177;
				L_177 = Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisString_t_mE9EF991B57124D1525E9B12863A29D575A135DCF(G_B48_1, G_B48_0, Enumerable_Select_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_TisString_t_mE9EF991B57124D1525E9B12863A29D575A135DCF_RuntimeMethod_var);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_178;
				L_178 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_177, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
				String_t* L_179;
				L_179 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B48_2, L_178, NULL);
				String_t* L_180;
				L_180 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B48_3, L_179, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
				V_12 = L_180;
				goto IL_049f_1;
			}

IL_049d_1:
			{
				goto IL_049f_1;
			}

IL_049f_1:
			{
				goto IL_04a5_1;
			}

IL_04a2_1:
			{
				goto IL_04cd_1;
			}

IL_04a5_1:
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_181 = V_2;
				NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_182;
				L_182 = NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA(NULL);
				String_t* L_183 = V_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_184 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_185 = L_184;
				String_t* L_186 = V_13;
				NullCheck(L_185);
				ArrayElementTypeCheck (L_185, L_186);
				(L_185)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_186);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_187 = L_185;
				String_t* L_188 = V_12;
				NullCheck(L_187);
				ArrayElementTypeCheck (L_187, L_188);
				(L_187)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_188);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_189 = L_187;
				String_t* L_190 = V_11;
				NullCheck(L_189);
				ArrayElementTypeCheck (L_189, L_190);
				(L_189)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_190);
				String_t* L_191;
				L_191 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_182, L_183, L_189, NULL);
				NullCheck(L_181);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_181, L_191, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_04cd_1:
			{
				int32_t L_192 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_192, 1));
			}

IL_04d3_1:
			{
				int32_t L_193 = V_7;
				VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* L_194 = V_6;
				NullCheck(L_194);
				int32_t L_195;
				L_195 = VectorTileLayer_FeatureCount_m9F3914CAF8565DD0B2F41C069B92E032649C82F9(L_194, NULL);
				V_32 = (bool)((((int32_t)L_193) < ((int32_t)L_195))? 1 : 0);
				bool L_196 = V_32;
				if (L_196)
				{
					goto IL_0042_1;
				}
			}
			{
			}

IL_04e8_1:
			{
				RuntimeObject* L_197 = V_4;
				NullCheck(L_197);
				bool L_198;
				L_198 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_197);
				if (L_198)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0503;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0503:
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_199;
		L_199 = NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA(NULL);
		String_t* L_200 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_201 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_202 = L_201;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_203 = V_2;
		NullCheck(L_203);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_204;
		L_204 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_203, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_205;
		L_205 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_204, NULL);
		NullCheck(L_202);
		ArrayElementTypeCheck (L_202, L_205);
		(L_202)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_205);
		String_t* L_206;
		L_206 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_199, L_200, L_202, NULL);
		V_3 = L_206;
		String_t* L_207 = V_3;
		V_33 = L_207;
		goto IL_052d;
	}

IL_052d:
	{
		String_t* L_208 = V_33;
		return L_208;
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
// System.Void Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB6F9AFA51DFD714DFE63543D83BC4160032F4873 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* L_0 = (U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC*)il2cpp_codegen_object_new(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m71098E0EA8253AAC74062B12D3EFEAC0EBABDB0A(L_0, NULL);
		((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m71098E0EA8253AAC74062B12D3EFEAC0EBABDB0A (U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<ToGeoJson>b__0_2(System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CToGeoJsonU3Eb__0_2_m8FCF90643718CE9192F88EB3CEABCFA458621BB7 (U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* __this, List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* ___g0, const RuntimeMethod* method) 
{
	{
		List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* L_0 = ___g0;
		return L_0;
	}
}
// System.String Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<ToGeoJson>b__0_3(Mapbox.VectorTile.Geometry.LatLng)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToGeoJsonU3Eb__0_3_m341A2AB6D291673E670D5F4E6A249CC6ABF44F9D (U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* __this, LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A ___g0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		double L_3;
		L_3 = LatLng_get_Lng_m295F62037C2E227C135B6CFC38C83E2C766246D8_inline((&___g0), NULL);
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		double L_7;
		L_7 = LatLng_get_Lat_m268778CA00639DA990141BF8D5A940C46B8616D4_inline((&___g0), NULL);
		double L_8 = L_7;
		RuntimeObject* L_9 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8, L_6, NULL);
		return L_10;
	}
}
// System.String Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<ToGeoJson>b__0_4(Mapbox.VectorTile.Geometry.LatLng)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToGeoJsonU3Eb__0_4_mE26D2452FE8DDD787024B1B5C58422E444C1CC8B (U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* __this, LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A ___g0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		double L_3;
		L_3 = LatLng_get_Lng_m295F62037C2E227C135B6CFC38C83E2C766246D8_inline((&___g0), NULL);
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		double L_7;
		L_7 = LatLng_get_Lat_m268778CA00639DA990141BF8D5A940C46B8616D4_inline((&___g0), NULL);
		double L_8 = L_7;
		RuntimeObject* L_9 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8, L_6, NULL);
		return L_10;
	}
}
// System.String Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<ToGeoJson>b__0_5(Mapbox.VectorTile.Geometry.LatLng)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToGeoJsonU3Eb__0_5_m75299F237E912A724396544364B95871A5943C87 (U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* __this, LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A ___g0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		double L_3;
		L_3 = LatLng_get_Lng_m295F62037C2E227C135B6CFC38C83E2C766246D8_inline((&___g0), NULL);
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		double L_7;
		L_7 = LatLng_get_Lat_m268778CA00639DA990141BF8D5A940C46B8616D4_inline((&___g0), NULL);
		double L_8 = L_7;
		RuntimeObject* L_9 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8, L_6, NULL);
		return L_10;
	}
}
// System.String Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<ToGeoJson>b__0_0(Mapbox.VectorTile.Geometry.LatLng)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToGeoJsonU3Eb__0_0_m9F9C545EF92C434FA4E50A903243B7CD1FEAB19F (U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* __this, LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A ___g0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		double L_3;
		L_3 = LatLng_get_Lng_m295F62037C2E227C135B6CFC38C83E2C766246D8_inline((&___g0), NULL);
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		double L_7;
		L_7 = LatLng_get_Lat_m268778CA00639DA990141BF8D5A940C46B8616D4_inline((&___g0), NULL);
		double L_8 = L_7;
		RuntimeObject* L_9 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8, L_6, NULL);
		return L_10;
	}
}
// System.String Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions/<>c::<ToGeoJson>b__0_1(Mapbox.VectorTile.Geometry.LatLng)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToGeoJsonU3Eb__0_1_mE470E10B52977E158D07E10C9B7CE97F3B803293 (U3CU3Ec_tBDE2D57390861E56067A989534931AD36E3053BC* __this, LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A ___g0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		double L_3;
		L_3 = LatLng_get_Lng_m295F62037C2E227C135B6CFC38C83E2C766246D8_inline((&___g0), NULL);
		double L_4 = L_3;
		RuntimeObject* L_5 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		double L_7;
		L_7 = LatLng_get_Lat_m268778CA00639DA990141BF8D5A940C46B8616D4_inline((&___g0), NULL);
		double L_8 = L_7;
		RuntimeObject* L_9 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_0, _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8, L_6, NULL);
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
// System.String Mapbox.VectorTile.ExtensionMethods.EnumExtensions::Description(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumExtensions_Description_m3F0DC058D4638BFFD8FCE3AD802D3F21BA529E7D (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	FieldInfo_t* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* G_B3_0 = NULL;
	{
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_0 = ___value0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_3 = ___value0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		NullCheck(L_2);
		FieldInfo_t* L_5;
		L_5 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_2, L_4, NULL);
		V_1 = L_5;
		FieldInfo_t* L_6 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_6, L_8, (bool)0);
		V_2 = L_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_2;
		NullCheck(L_10);
		if (!(((RuntimeArray*)L_10)->max_length))
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12 = 0;
		RuntimeObject* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)CastclassClass((RuntimeObject*)L_13, DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var)));
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, ((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)CastclassClass((RuntimeObject*)L_13, DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var)));
		G_B3_0 = L_14;
		goto IL_0040;
	}

IL_003a:
	{
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_15 = ___value0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		G_B3_0 = L_16;
	}

IL_0040:
	{
		V_3 = G_B3_0;
		goto IL_0043;
	}

IL_0043:
	{
		String_t* L_17 = V_3;
		return L_17;
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
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>> Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions::GeometryAsWgs84(Mapbox.VectorTile.VectorTileFeature,System.UInt64,System.UInt64,System.UInt64,System.Nullable`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* VectorTileFeatureExtensions_GeometryAsWgs84_m5C4C4B6B273187B08EA5B26F4744FC9D0A1EA273 (VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* ___feature0, uint64_t ___zoom1, uint64_t ___tileColumn2, uint64_t ___tileRow3, Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___clipBuffer4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPoint2d_1_tF097488A1DD78CBDD44DB640011A5F5E58BEB138_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mB07952A0850E15555DAA39CB19855FA932104F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_m8FE11B3E321C7988E0C8269E8DB7222D46925896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF4EF8A9DF7782068948BB4186D8C8B37C96CAF72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2D7ABDFBBA4A755BB5FE467E6982CF332701082A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mABCA5D7BECF415A4BAB2DFBD20F3A3E927E64592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAFB142634AEA9C9C098BE34B5376EF76B75C83D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC03C6C780AAC9D76B8F255335D3AD9623AB83081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5963A23E3A1311BD4475702FED1E9D5B76C9BBFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CGeometryAsWgs84U3Eb__0_m4B7C69AE0B17B0B3750FC9B3063CC89DB4DB733E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VectorTileFeature_Geometry_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m612701B1A6983BCDBEC619B48FB6C338F3000449_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406* V_0 = NULL;
	List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* V_1 = NULL;
	Enumerator_t47C6E35927A048FF84A5ED129AFC68FFD240251D V_2;
	memset((&V_2), 0, sizeof(V_2));
	List_1_t4547A61BA527AF86FD7F9CD54C690F8D33332BB9* V_3 = NULL;
	Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3* V_4 = NULL;
	List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* V_5 = NULL;
	Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3* G_B4_0 = NULL;
	List_1_t4547A61BA527AF86FD7F9CD54C690F8D33332BB9* G_B4_1 = NULL;
	List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* G_B4_2 = NULL;
	Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3* G_B3_0 = NULL;
	List_1_t4547A61BA527AF86FD7F9CD54C690F8D33332BB9* G_B3_1 = NULL;
	List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* G_B3_2 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406* L_0 = (U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_m3973F8D631ACE4FDBCAC81C73233C7F4FE464090(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406* L_1 = V_0;
		uint64_t L_2 = ___zoom1;
		NullCheck(L_1);
		L_1->___zoom_0 = L_2;
		U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406* L_3 = V_0;
		uint64_t L_4 = ___tileColumn2;
		NullCheck(L_3);
		L_3->___tileColumn_1 = L_4;
		U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406* L_5 = V_0;
		uint64_t L_6 = ___tileRow3;
		NullCheck(L_5);
		L_5->___tileRow_2 = L_6;
		U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406* L_7 = V_0;
		VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* L_8 = ___feature0;
		NullCheck(L_7);
		L_7->___feature_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___feature_3), (void*)L_8);
		List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_9 = (List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE*)il2cpp_codegen_object_new(List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_m5963A23E3A1311BD4475702FED1E9D5B76C9BBFD(L_9, List_1__ctor_m5963A23E3A1311BD4475702FED1E9D5B76C9BBFD_RuntimeMethod_var);
		V_1 = L_9;
		U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406* L_10 = V_0;
		NullCheck(L_10);
		VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* L_11 = L_10->___feature_3;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_12 = ___clipBuffer4;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_13), (1.0f), /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_t4A51A4B7F7C970BD0EDCDA0240F8328E07190930* L_14;
		L_14 = VectorTileFeature_Geometry_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m612701B1A6983BCDBEC619B48FB6C338F3000449(L_11, L_12, L_13, VectorTileFeature_Geometry_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m612701B1A6983BCDBEC619B48FB6C338F3000449_RuntimeMethod_var);
		NullCheck(L_14);
		Enumerator_t47C6E35927A048FF84A5ED129AFC68FFD240251D L_15;
		L_15 = List_1_GetEnumerator_mC03C6C780AAC9D76B8F255335D3AD9623AB83081(L_14, List_1_GetEnumerator_mC03C6C780AAC9D76B8F255335D3AD9623AB83081_RuntimeMethod_var);
		V_2 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0091:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF4EF8A9DF7782068948BB4186D8C8B37C96CAF72((&V_2), Enumerator_Dispose_mF4EF8A9DF7782068948BB4186D8C8B37C96CAF72_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0086_1;
			}

IL_0049_1:
			{
				List_1_t4547A61BA527AF86FD7F9CD54C690F8D33332BB9* L_16;
				L_16 = Enumerator_get_Current_mABCA5D7BECF415A4BAB2DFBD20F3A3E927E64592_inline((&V_2), Enumerator_get_Current_mABCA5D7BECF415A4BAB2DFBD20F3A3E927E64592_RuntimeMethod_var);
				V_3 = L_16;
				List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_17 = V_1;
				List_1_t4547A61BA527AF86FD7F9CD54C690F8D33332BB9* L_18 = V_3;
				U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406* L_19 = V_0;
				NullCheck(L_19);
				Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3* L_20 = L_19->___U3CU3E9__0_4;
				Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3* L_21 = L_20;
				G_B3_0 = L_21;
				G_B3_1 = L_18;
				G_B3_2 = L_17;
				if (L_21)
				{
					G_B4_0 = L_21;
					G_B4_1 = L_18;
					G_B4_2 = L_17;
					goto IL_0075_1;
				}
			}
			{
				U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406* L_22 = V_0;
				U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406* L_23 = V_0;
				Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3* L_24 = (Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3*)il2cpp_codegen_object_new(Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3_il2cpp_TypeInfo_var);
				NullCheck(L_24);
				Func_2__ctor_m9CAABF2B6FEC2E02BCCE2A78F9E85073E5DFE993(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CGeometryAsWgs84U3Eb__0_m4B7C69AE0B17B0B3750FC9B3063CC89DB4DB733E_RuntimeMethod_var), NULL);
				Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3* L_25 = L_24;
				V_4 = L_25;
				NullCheck(L_22);
				L_22->___U3CU3E9__0_4 = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&L_22->___U3CU3E9__0_4), (void*)L_25);
				Func_2_t95B154B5601D3F458F50AD7C4E2980EAEAEE72F3* L_26 = V_4;
				G_B4_0 = L_26;
				G_B4_1 = G_B3_1;
				G_B4_2 = G_B3_2;
			}

IL_0075_1:
			{
				RuntimeObject* L_27;
				L_27 = Enumerable_Select_TisPoint2d_1_tF097488A1DD78CBDD44DB640011A5F5E58BEB138_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mB07952A0850E15555DAA39CB19855FA932104F6E(G_B4_1, G_B4_0, Enumerable_Select_TisPoint2d_1_tF097488A1DD78CBDD44DB640011A5F5E58BEB138_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_mB07952A0850E15555DAA39CB19855FA932104F6E_RuntimeMethod_var);
				List_1_t6220EBC2619A24C58CAA3C2BA5D17540628C4338* L_28;
				L_28 = Enumerable_ToList_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_m8FE11B3E321C7988E0C8269E8DB7222D46925896(L_27, Enumerable_ToList_TisLatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A_m8FE11B3E321C7988E0C8269E8DB7222D46925896_RuntimeMethod_var);
				NullCheck(G_B4_2);
				List_1_Add_mAFB142634AEA9C9C098BE34B5376EF76B75C83D8_inline(G_B4_2, L_28, List_1_Add_mAFB142634AEA9C9C098BE34B5376EF76B75C83D8_RuntimeMethod_var);
			}

IL_0086_1:
			{
				bool L_29;
				L_29 = Enumerator_MoveNext_m2D7ABDFBBA4A755BB5FE467E6982CF332701082A((&V_2), Enumerator_MoveNext_m2D7ABDFBBA4A755BB5FE467E6982CF332701082A_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0049_1;
				}
			}
			{
				goto IL_00a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_30 = V_1;
		V_5 = L_30;
		goto IL_00a5;
	}

IL_00a5:
	{
		List_1_tA6FD4EB82941591D9AE7F3AC8B921F21AEABB1CE* L_31 = V_5;
		return L_31;
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
// System.Void Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m3973F8D631ACE4FDBCAC81C73233C7F4FE464090 (U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Mapbox.VectorTile.Geometry.LatLng Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<>c__DisplayClass0_0::<GeometryAsWgs84>b__0(Mapbox.VectorTile.Geometry.Point2d`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A U3CU3Ec__DisplayClass0_0_U3CGeometryAsWgs84U3Eb__0_m4B7C69AE0B17B0B3750FC9B3063CC89DB4DB733E (U3CU3Ec__DisplayClass0_0_tDB4DC17B08992A96B3B1DD45F5FE6D2B7C7B2406* __this, Point2d_1_tF097488A1DD78CBDD44DB640011A5F5E58BEB138 ___g0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point2d_1_ToLngLat_mCC32951512D81F562142C4C5F31FB7ECBC0F5FF0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = __this->___zoom_0;
		uint64_t L_1 = __this->___tileColumn_1;
		uint64_t L_2 = __this->___tileRow_2;
		VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* L_3 = __this->___feature_3;
		NullCheck(L_3);
		VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* L_4;
		L_4 = VectorTileFeature_get_Layer_m0E92A34258394F30DA0B79366DA457F1D5686513(L_3, NULL);
		NullCheck(L_4);
		uint64_t L_5;
		L_5 = VectorTileLayer_get_Extent_mFB5EF172BF62792AF9B627198F04E726853E34ED_inline(L_4, NULL);
		LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A L_6;
		L_6 = Point2d_1_ToLngLat_mCC32951512D81F562142C4C5F31FB7ECBC0F5FF0((&___g0), L_0, L_1, L_2, L_5, (bool)0, Point2d_1_ToLngLat_mCC32951512D81F562142C4C5F31FB7ECBC0F5FF0_RuntimeMethod_var);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VectorTileFeature_get_GeometryType_m1B172EA93E82D9A2EFD260D5C8987A07F0D5C2B9_inline (VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CGeometryTypeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* VectorTileFeature_get_Tags_m6C3D7B1E0D2D8A2556B30477380E875B71D5D6FD_inline (VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___U3CTagsU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VectorTileLayer_get_Keys_m157821142F1C9D336D778F5ECA60E245B9E3A7C4_inline (VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CKeysU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* VectorTileLayer_get_Values_m7205B500E0CE5CBFACF3C5D979C91555EE2080DD_inline (VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___U3CValuesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t VectorTileFeature_get_Id_m6C935824B52256D56FAD374CE82633CF3F305E9E_inline (VectorTileFeature_tD0B4ACFD4EE569AF571748C6B67C410278169CB8* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CIdU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VectorTileLayer_get_Name_m5F4D7AC4654505F7C682BFA2537B899F4B40B339_inline (VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double LatLng_get_Lng_m295F62037C2E227C135B6CFC38C83E2C766246D8_inline (LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CLngU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double LatLng_get_Lat_m268778CA00639DA990141BF8D5A940C46B8616D4_inline (LatLng_t6559F5E1D7A69AC9B5A31505E17E4CB100CD3D7A* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CLatU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t VectorTileLayer_get_Extent_mFB5EF172BF62792AF9B627198F04E726853E34ED_inline (VectorTileLayer_t476671EE8E8C4AA6F72D739FCF3C25EC24234746* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CExtentU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
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
