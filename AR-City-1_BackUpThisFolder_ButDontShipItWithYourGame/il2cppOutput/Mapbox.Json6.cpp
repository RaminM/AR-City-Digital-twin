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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<Mapbox.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t59639FFDEDDA26FD70F88DC0A69EE6064A8E8730;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>
struct IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>
struct IEnumerable_1_t3CF62242A258E986307D7CCF84A4C03FB96055D8;
// System.Collections.Generic.IEnumerator`1<Mapbox.Json.Bson.BsonProperty>
struct IEnumerator_1_tCBEB9A95FEAFC26D6C6175CD936254A28A5246D0;
// System.Collections.Generic.IEnumerator`1<Mapbox.Json.Bson.BsonToken>
struct IEnumerator_1_tAD1D1831AA56A5A0750828AD1E0E260FFFB925E5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonProperty>
struct List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48;
// System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonToken>
struct List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50;
// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>
struct List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7;
// System.Collections.Generic.List`1<Mapbox.Json.JsonPosition>
struct List_1_t750D4DEFDFDF006AC3353935EE058E5CCC569DB2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonReader/ContainerContext>
struct List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Xml.Linq.XHashtable`1<System.WeakReference>
struct XHashtable_1_t2CF715088068F7F6D5D06152C3D4A892E5B07E46;
// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName>
struct XHashtable_1_t2D08921459BE574EC1B2D723734AB79BE4CBE4B5;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// Mapbox.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tF50205580214238B2D18CD09B0644F87E94A27D5;
// Mapbox.Json.Bson.BsonProperty[]
struct BsonPropertyU5BU5D_t1FD63657B614D79ECA7EC77249C75B35535DB115;
// Mapbox.Json.Bson.BsonToken[]
struct BsonTokenU5BU5D_t35AC5C7979DFA57BCA6122BD894EE1254B030FA7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Mapbox.Json.Converters.IXmlNode[]
struct IXmlNodeU5BU5D_t3C364854E0EE56A80820DBB19D06334D214F50E5;
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
// Mapbox.Json.Bson.BsonReader/ContainerContext[]
struct ContainerContextU5BU5D_tDF67ADADAB879E6E815F964B6DC7A3D325934940;
// System.Xml.NameTable/Entry[]
struct EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A;
// System.Xml.XmlNamespaceManager/NamespaceDeclaration[]
struct NamespaceDeclarationU5BU5D_t4DF48D3A2EB82C491A60E8748DE4BAFAA95A0F60;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Mapbox.Json.Bson.BsonArray
struct BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3;
// Mapbox.Json.Bson.BsonBinary
struct BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743;
// Mapbox.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066;
// Mapbox.Json.Bson.BsonBoolean
struct BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C;
// Mapbox.Json.Bson.BsonEmpty
struct BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5;
// Mapbox.Json.Bson.BsonObject
struct BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575;
// Mapbox.Json.Bson.BsonObjectId
struct BsonObjectId_t768D77472D02C64230C469A2609D5F10920D915B;
// Mapbox.Json.Bson.BsonProperty
struct BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7;
// Mapbox.Json.Bson.BsonReader
struct BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49;
// Mapbox.Json.Bson.BsonRegex
struct BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32;
// Mapbox.Json.Bson.BsonString
struct BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF;
// Mapbox.Json.Bson.BsonToken
struct BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A;
// Mapbox.Json.Bson.BsonValue
struct BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749;
// Mapbox.Json.Bson.BsonWriter
struct BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Xml.DomNameTable
struct DomNameTable_tE4318EC10C55A46FD00324E740BFA7D9CEE2AF45;
// System.Xml.EmptyEnumerator
struct EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Mapbox.Json.Serialization.IContractResolver
struct IContractResolver_t847E317B4A611F0C8D16692072A4005F5BB4EC62;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Mapbox.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t51EDF986E43B9F59627E0F877308CBDE97B6CF0E;
// Mapbox.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t86BFC8495CA6BFE64D8FFE0CF7931FDA59A06EAF;
// Mapbox.Json.Serialization.ITraceWriter
struct ITraceWriter_t225EE459C2D64AB81E1D45C21BCD3A6D7E63DBC2;
// Mapbox.Json.Converters.IXmlDocument
struct IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146;
// Mapbox.Json.Converters.IXmlElement
struct IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D;
// Mapbox.Json.Converters.IXmlNode
struct IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_tF7DB6310A471259B33C4081B30E73925164204DB;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Mapbox.Json.JsonConverter
struct JsonConverter_tC8CB30CF9DB17BA7447E3971E88AFFB999BBE451;
// Mapbox.Json.JsonConverterCollection
struct JsonConverterCollection_t7AE3370A5F5B81BA90E9F7CA0586ECE909D538E3;
// Mapbox.Json.JsonReader
struct JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416;
// Mapbox.Json.JsonReaderException
struct JsonReaderException_tED5A0E30E25D1EFE42680402CE8351A159BAC007;
// Mapbox.Json.JsonSerializationException
struct JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B;
// Mapbox.Json.JsonSerializer
struct JsonSerializer_tCFE8A4413AC721597A3840B7D359DF7881652541;
// Mapbox.Json.JsonWriter
struct JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF;
// Mapbox.Json.JsonWriterException
struct JsonWriterException_t64203323809F24258C2DD39887A1143A8B490FCB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Xml.NameTable
struct NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// System.Xml.Linq.XAttribute
struct XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF;
// Mapbox.Json.Converters.XAttributeWrapper
struct XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E;
// System.Xml.Linq.XCData
struct XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B;
// System.Xml.Linq.XComment
struct XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D;
// Mapbox.Json.Converters.XCommentWrapper
struct XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C;
// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF;
// Mapbox.Json.Converters.XContainerWrapper
struct XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B;
// System.Xml.Linq.XDeclaration
struct XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990;
// Mapbox.Json.Converters.XDeclarationWrapper
struct XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E;
// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1;
// System.Xml.Linq.XDocumentType
struct XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817;
// Mapbox.Json.Converters.XDocumentTypeWrapper
struct XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830;
// Mapbox.Json.Converters.XDocumentWrapper
struct XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB;
// System.Xml.Linq.XElement
struct XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909;
// Mapbox.Json.Converters.XElementWrapper
struct XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD;
// System.Xml.Linq.XName
struct XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C;
// System.Xml.Linq.XNamespace
struct XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C;
// System.Xml.Linq.XNode
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30;
// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29;
// Mapbox.Json.Converters.XObjectWrapper
struct XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69;
// System.Xml.Linq.XProcessingInstruction
struct XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795;
// Mapbox.Json.Converters.XProcessingInstructionWrapper
struct XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051;
// System.Xml.Linq.XText
struct XText_t006159E7F735736D41BBC0738FFB066A14B31AE2;
// Mapbox.Json.Converters.XTextWrapper
struct XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04;
// System.Xml.XmlAttribute
struct XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0;
// System.Xml.XmlDeclaration
struct XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79;
// Mapbox.Json.Converters.XmlDeclarationWrapper
struct XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E;
// System.Xml.XmlDocument
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B;
// System.Xml.XmlDocumentType
struct XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E;
// Mapbox.Json.Converters.XmlDocumentTypeWrapper
struct XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2;
// Mapbox.Json.Converters.XmlDocumentWrapper
struct XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37;
// System.Xml.XmlElement
struct XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1;
// Mapbox.Json.Converters.XmlElementWrapper
struct XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64;
// System.Xml.XmlImplementation
struct XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C;
// System.Xml.XmlName
struct XmlName_t0704430D24D202146901D342E34D878246E14F33;
// System.Xml.XmlNameTable
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F;
// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B;
// Mapbox.Json.Converters.XmlNodeConverter
struct XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9;
// Mapbox.Json.Converters.XmlNodeWrapper
struct XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3;
// System.Xml.XmlResolver
struct XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t048A12CE7D00EF330EF32A388B69A240899F88D1;
// Mapbox.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Text.UTF8Encoding/UTF8EncodingSealed
struct UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonReaderState_tCD746077F8C296A3334662E080F355D17C8E3A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonType_t9F7E06B1805EDD8C0A94188EA357B3D92A3E7A6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeUtils_t8E988632A08EDACE43652EADEF6F28FE355DC0AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t3F0EA0DDCA13A266C5D30DF4D35193EFBF1083D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tF45EB5F17668BC1F66862376D62AAC21E48E7C50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3CF62242A258E986307D7CCF84A4C03FB96055D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t14D6DCE9D9AA35992A6A7A1E7E89CCF8C2A477BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAD1D1831AA56A5A0750828AD1E0E260FFFB925E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tCBEB9A95FEAFC26D6C6175CD936254A28A5246D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlDeclaration_t42BEBEB4A4019272CB336747C8376AC47B561AA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlDocumentType_t15297B02A3814B45A73874CEC92E158C292239DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonToken_t649A9AC7D3BACB7B8384AA021FA250F864F25592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_t2DDFB02C988ADAB392C238D29859D9F8518340CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral013D189FFF6214B6307FB356F81DB4FD46A89D0E;
IL2CPP_EXTERN_C String_t* _stringLiteral040ACBC1C698075688E5B27E50C6370BEB2676A0;
IL2CPP_EXTERN_C String_t* _stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F;
IL2CPP_EXTERN_C String_t* _stringLiteral06A61D64D27460EF04BE4DCF66F6E64E285C68A4;
IL2CPP_EXTERN_C String_t* _stringLiteral0C97C66F7D6312F0BCB5A4E3E9ED7F8F1CF50F6A;
IL2CPP_EXTERN_C String_t* _stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E;
IL2CPP_EXTERN_C String_t* _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075;
IL2CPP_EXTERN_C String_t* _stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B;
IL2CPP_EXTERN_C String_t* _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46;
IL2CPP_EXTERN_C String_t* _stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93;
IL2CPP_EXTERN_C String_t* _stringLiteral1613296BA787F8ADE0D3584C042EB5CB7EE8B9EC;
IL2CPP_EXTERN_C String_t* _stringLiteral161567E318CEB965509FE84CE4198A12E62440AF;
IL2CPP_EXTERN_C String_t* _stringLiteral1DE5E11A719EDB4CA85B9D81FAB9B419521AF411;
IL2CPP_EXTERN_C String_t* _stringLiteral22DA2AE2AAC47006D97A25A98C6CDC909DE59894;
IL2CPP_EXTERN_C String_t* _stringLiteral2923AF57406AD3628AA00F2F47378348C0E89B4C;
IL2CPP_EXTERN_C String_t* _stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062;
IL2CPP_EXTERN_C String_t* _stringLiteral37FDA2B361182A202537DCA1203AB3BEC2779E2F;
IL2CPP_EXTERN_C String_t* _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE;
IL2CPP_EXTERN_C String_t* _stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84;
IL2CPP_EXTERN_C String_t* _stringLiteral450A121B534CE8146DA53AF9EA5328F6753B270F;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4;
IL2CPP_EXTERN_C String_t* _stringLiteral4C48A326ACCC25E558DC329A6C92D8184942B973;
IL2CPP_EXTERN_C String_t* _stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564;
IL2CPP_EXTERN_C String_t* _stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692;
IL2CPP_EXTERN_C String_t* _stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47;
IL2CPP_EXTERN_C String_t* _stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94;
IL2CPP_EXTERN_C String_t* _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160;
IL2CPP_EXTERN_C String_t* _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral6E0489F9FAF23DF58DCABE03DAEB479BD06406A5;
IL2CPP_EXTERN_C String_t* _stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral75842F038DF44EADD0CCA67D4F35D7BA0B0D7A4D;
IL2CPP_EXTERN_C String_t* _stringLiteral7630F7A0C27B2EE30DD70CE0777AD917869A5FC4;
IL2CPP_EXTERN_C String_t* _stringLiteral7659A39A96628D27A60957C9360035C1790C449D;
IL2CPP_EXTERN_C String_t* _stringLiteral810C723B6D33105E6B3277736A780EFDA0438806;
IL2CPP_EXTERN_C String_t* _stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8CD217E7BE4DABC0AB52B3661A45AF8DB008E8C1;
IL2CPP_EXTERN_C String_t* _stringLiteral8F520303D59E86AC4C7A7D3637D6BFB77BF0A90F;
IL2CPP_EXTERN_C String_t* _stringLiteral8F72A13E7E8E1CB50038C54FE7CC02AB7582F7AA;
IL2CPP_EXTERN_C String_t* _stringLiteral96E8BF0E5DDD81FBBF5598805554859ED641E1E2;
IL2CPP_EXTERN_C String_t* _stringLiteral9A514EDAC534931C94A111265660666E05658496;
IL2CPP_EXTERN_C String_t* _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3;
IL2CPP_EXTERN_C String_t* _stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF;
IL2CPP_EXTERN_C String_t* _stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE8864CE32A6E593EF9DA8C7FCDB920CEE839A0;
IL2CPP_EXTERN_C String_t* _stringLiteralB6FEE3D4E67CA183A789224E46967A517687086A;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476;
IL2CPP_EXTERN_C String_t* _stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A;
IL2CPP_EXTERN_C String_t* _stringLiteralC9159179D678574C69291BCB3CFA5FAC9393D0C8;
IL2CPP_EXTERN_C String_t* _stringLiteralD372CCFC3C301AA5EC25EDCDE56A31E9545CDA18;
IL2CPP_EXTERN_C String_t* _stringLiteralD462B8D5192FB7491E85A3C2A4B22B91C958EE73;
IL2CPP_EXTERN_C String_t* _stringLiteralD5885752D9D9B9AFDCC103ACBDA8549090AABA45;
IL2CPP_EXTERN_C String_t* _stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029;
IL2CPP_EXTERN_C String_t* _stringLiteralD76F2E16F30EA8C8C52D4ABD70B672BC7A3AEAB2;
IL2CPP_EXTERN_C String_t* _stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralDB28C3D7E7F56FAA480CEF9C7D0E3BF741423901;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5269102EEAA6174B84EBA318CAFFA90AE3217B;
IL2CPP_EXTERN_C String_t* _stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A;
IL2CPP_EXTERN_C String_t* _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA;
IL2CPP_EXTERN_C String_t* _stringLiteralEB970001F19051B486F81469B35F4DBB22AAD54E;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C String_t* _stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C String_t* _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAD954A5D5DC7494CB8B4AE55EDFCFE125A1338;
IL2CPP_EXTERN_C String_t* _stringLiteralFDE19EF7EBB97E368AFBF9A1B8DC90708B67C9A4;
IL2CPP_EXTERN_C const RuntimeMethod* BsonBinaryWriter_CalculateSize_m5850C4F7F232921297849749A5D3B8CBDC7EC830_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonBinaryWriter_WriteTokenInternal_m048B932AE355398EB04A7A65875834BC8728DD31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonObjectId__ctor_m88B0E9AC984AFB481D3CEFF61A513FE9500F5C0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_GetString_m00C1730E16CE2E31B37E33594E4A8EAFA576AC78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadCodeWScope_m6EBE1D0B7690046ACBE5FD7F52D514703DB35550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadNormal_m9147175D636209D3CACA0BEAE5213F079BB7AD2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadReference_mCBDCEEEFF1D0F7F9D87CBFCB706FAF7C815F6ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_ReadType_m1B70D60EF5CAAF908B75DE000E91F598DEDD91FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonReader_Read_m4D4DF46F066226EEC658E0AB0F6F9D32DB6E7B89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteComment_m723894F8DC01A3199FFB66AC8715DEE1A72AB781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteObjectId_m8CCDD6623A6351F0FF838CC71EF6AC7D7B4DE04C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteRawValue_m8B7794C370C6104A637B4341C2B7BD0E00B3E459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteRaw_m6FF70E67B50BC589543981EFC9365CBA3ED30474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteStartConstructor_m9F7A78868AFC1C4BD1026F21451814495646708B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteValue_m52843087A675F962727C7725035AD2C8381F660F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BsonWriter_WriteValue_mEB77580C13C5F6D9D2AAB70D23EA56DB572E1FDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m35D4FAE86E88A7DFD8DCC32E6B9BDBA79141334A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3D41BD78797E29AAF6FDE9479F91472F7B516A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA7020313AEBA9E4A7DAE503DBCAEFE672F00F84F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0D3124CA3C28FBB1BFF01F565F63CE4F138FB3CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEE052C4A26B9352C73A0229B08AA14054C4BC6AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mDED0CD97369710B277312528B306B96F9C12A4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mD6DADF9AA2F49BAACCDA3AA814DB55A684955CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_mCA1E5CF0D60E80910E0DD561823028F1C60C365A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m33E80F76CCFF196C5E4AEE6E13F6DD76AA352844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7D18F4DC373A3FE92B8F971B6989D9BF873955DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA4D2C31AFD0DD873964EFF962E2FF218AE55BEF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBF2CD42F88092F5551C872CD1BA10F737A06B7B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2D70C9CFD69E7CAEE0090C6334556DAC28CFD77E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m203422A8DB100660FCB294F26F074EEF2F9E2E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XObjectWrapper_AppendChild_mBF6D8D110F8AFCDE3A93D9997C996F1BEE735DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XObjectWrapper_set_Value_mC4D6E660C07567634D7E66571C62B81A747DFEFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_AddAttribute_mD3D3836C2D55BE4B57534DEB3C4E36BB3E45CE49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_CreateDocumentType_m1F95FCD2E64405C26A23A7ADD2592CAC149FF332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_CreateInstruction_m9E9169BFC2DFE4B314EDB1353439366F85B25E96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_DeserializeNode_m507372274683541B47D8C8A7531C41794D895AB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_GetPropertyName_m8706C2B027138EA86E361564670FD4901C719C52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_ReadAttributeElements_m97ED3E9F20B2D81BDDFAA863F47D6DB2027C4DAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_ReadElement_m79B9E65A63A56BC9AD08F5AC4B2D24A3F167FF54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_ReadJson_m8141C2FFC7E2E4A34CFC5FCFB6EF801BD4D567C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_SerializeNode_m8B2FE5E1BE4EB807C6723AAB59AF530A34F77FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlNodeConverter_WrapXml_m340D791D84C06BBAEA1E7364C086B682B96D0D71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonProperty>
struct List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BsonPropertyU5BU5D_t1FD63657B614D79ECA7EC77249C75B35535DB115* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BsonPropertyU5BU5D_t1FD63657B614D79ECA7EC77249C75B35535DB115* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonToken>
struct List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BsonTokenU5BU5D_t35AC5C7979DFA57BCA6122BD894EE1254B030FA7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BsonTokenU5BU5D_t35AC5C7979DFA57BCA6122BD894EE1254B030FA7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>
struct List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IXmlNodeU5BU5D_t3C364854E0EE56A80820DBB19D06334D214F50E5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IXmlNodeU5BU5D_t3C364854E0EE56A80820DBB19D06334D214F50E5* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonReader/ContainerContext>
struct List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ContainerContextU5BU5D_tDF67ADADAB879E6E815F964B6DC7A3D325934940* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ContainerContextU5BU5D_tDF67ADADAB879E6E815F964B6DC7A3D325934940* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// Mapbox.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066  : public RuntimeObject
{
	// System.IO.BinaryWriter Mapbox.Json.Bson.BsonBinaryWriter::_writer
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ____writer_1;
	// System.Byte[] Mapbox.Json.Bson.BsonBinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_2;
	// System.DateTimeKind Mapbox.Json.Bson.BsonBinaryWriter::<DateTimeKindHandling>k__BackingField
	int32_t ___U3CDateTimeKindHandlingU3Ek__BackingField_3;
};

struct BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_StaticFields
{
	// System.Text.Encoding Mapbox.Json.Bson.BsonBinaryWriter::Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___Encoding_0;
};

// Mapbox.Json.Bson.BsonObjectId
struct BsonObjectId_t768D77472D02C64230C469A2609D5F10920D915B  : public RuntimeObject
{
	// System.Byte[] Mapbox.Json.Bson.BsonObjectId::<Value>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CValueU3Ek__BackingField_0;
};

// Mapbox.Json.Bson.BsonProperty
struct BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7  : public RuntimeObject
{
	// Mapbox.Json.Bson.BsonString Mapbox.Json.Bson.BsonProperty::<Name>k__BackingField
	BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* ___U3CNameU3Ek__BackingField_0;
	// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonProperty::<Value>k__BackingField
	BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___U3CValueU3Ek__BackingField_1;
};

// Mapbox.Json.Bson.BsonToken
struct BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A  : public RuntimeObject
{
	// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonToken::<Parent>k__BackingField
	BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___U3CParentU3Ek__BackingField_0;
	// System.Int32 Mapbox.Json.Bson.BsonToken::<CalculatedSize>k__BackingField
	int32_t ___U3CCalculatedSizeU3Ek__BackingField_1;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
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

// Mapbox.Json.JsonConverter
struct JsonConverter_tC8CB30CF9DB17BA7447E3971E88AFFB999BBE451  : public RuntimeObject
{
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
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

// System.Xml.Linq.XDeclaration
struct XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990  : public RuntimeObject
{
	// System.String System.Xml.Linq.XDeclaration::_version
	String_t* ____version_0;
	// System.String System.Xml.Linq.XDeclaration::_encoding
	String_t* ____encoding_1;
	// System.String System.Xml.Linq.XDeclaration::_standalone
	String_t* ____standalone_2;
};

// System.Xml.Linq.XName
struct XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C  : public RuntimeObject
{
	// System.Xml.Linq.XNamespace System.Xml.Linq.XName::_ns
	XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C* ____ns_0;
	// System.String System.Xml.Linq.XName::_localName
	String_t* ____localName_1;
	// System.Int32 System.Xml.Linq.XName::_hashCode
	int32_t ____hashCode_2;
};

// System.Xml.Linq.XNamespace
struct XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C  : public RuntimeObject
{
	// System.String System.Xml.Linq.XNamespace::_namespaceName
	String_t* ____namespaceName_4;
	// System.Int32 System.Xml.Linq.XNamespace::_hashCode
	int32_t ____hashCode_5;
	// System.Xml.Linq.XHashtable`1<System.Xml.Linq.XName> System.Xml.Linq.XNamespace::_names
	XHashtable_1_t2D08921459BE574EC1B2D723734AB79BE4CBE4B5* ____names_6;
};

struct XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C_StaticFields
{
	// System.Xml.Linq.XHashtable`1<System.WeakReference> System.Xml.Linq.XNamespace::s_namespaces
	XHashtable_1_t2CF715088068F7F6D5D06152C3D4A892E5B07E46* ___s_namespaces_0;
	// System.WeakReference System.Xml.Linq.XNamespace::s_refNone
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___s_refNone_1;
	// System.WeakReference System.Xml.Linq.XNamespace::s_refXml
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___s_refXml_2;
	// System.WeakReference System.Xml.Linq.XNamespace::s_refXmlns
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___s_refXmlns_3;
};

// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29  : public RuntimeObject
{
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___parent_0;
	// System.Object System.Xml.Linq.XObject::annotations
	RuntimeObject* ___annotations_1;
};

// Mapbox.Json.Converters.XObjectWrapper
struct XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69  : public RuntimeObject
{
	// System.Xml.Linq.XObject Mapbox.Json.Converters.XObjectWrapper::_xmlObject
	XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ____xmlObject_0;
};

// System.Xml.XmlNameTable
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8  : public RuntimeObject
{
};

// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F  : public RuntimeObject
{
	// System.Xml.XmlNamespaceManager/NamespaceDeclaration[] System.Xml.XmlNamespaceManager::nsdecls
	NamespaceDeclarationU5BU5D_t4DF48D3A2EB82C491A60E8748DE4BAFAA95A0F60* ___nsdecls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::lastDecl
	int32_t ___lastDecl_1;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* ___nameTable_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopeId
	int32_t ___scopeId_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::hashTable
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___hashTable_4;
	// System.Boolean System.Xml.XmlNamespaceManager::useHashtable
	bool ___useHashtable_5;
	// System.String System.Xml.XmlNamespaceManager::xml
	String_t* ___xml_6;
	// System.String System.Xml.XmlNamespaceManager::xmlNs
	String_t* ___xmlNs_7;
};

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___parentNode_0;
};

// System.Xml.XmlNodeList
struct XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85  : public RuntimeObject
{
};

// Mapbox.Json.Converters.XmlNodeWrapper
struct XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3  : public RuntimeObject
{
	// System.Xml.XmlNode Mapbox.Json.Converters.XmlNodeWrapper::_node
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ____node_0;
	// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XmlNodeWrapper::_childNodes
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* ____childNodes_1;
	// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XmlNodeWrapper::_attributes
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* ____attributes_2;
};

// System.Xml.XmlResolver
struct XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF  : public RuntimeObject
{
};

// Mapbox.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB  : public RuntimeObject
{
	// Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonReader/ContainerContext::Type
	int8_t ___Type_0;
	// System.Int32 Mapbox.Json.Bson.BsonReader/ContainerContext::Length
	int32_t ___Length_1;
	// System.Int32 Mapbox.Json.Bson.BsonReader/ContainerContext::Position
	int32_t ___Position_2;
};

// System.Collections.Generic.List`1/Enumerator<Mapbox.Json.Bson.BsonProperty>
struct Enumerator_t3F0EA0DDCA13A266C5D30DF4D35193EFBF1083D2 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Mapbox.Json.Bson.BsonToken>
struct Enumerator_tF45EB5F17668BC1F66862376D62AAC21E48E7C50 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Mapbox.Json.Converters.IXmlNode>
struct Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Mapbox.Json.DateFormatHandling>
struct Nullable_1_tD0E9CA4B30D4BAE6F36D70DE3568D21DB3FFB96B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Mapbox.Json.DateParseHandling>
struct Nullable_1_t0E5157D3DEA4E61FE46ED682BA4ACC4BBF03388A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Mapbox.Json.DateTimeZoneHandling>
struct Nullable_1_t6E39CBBB21629344B5555B36B9C1AEFBA754DBBA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Mapbox.Json.FloatFormatHandling>
struct Nullable_1_t6DCDCC0A7C968E6C84A0C183205035EF7D98EBBE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Mapbox.Json.FloatParseHandling>
struct Nullable_1_tA33CA9E41A88C4C47EAF47F1B3DF53E0751F9521 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Mapbox.Json.Formatting>
struct Nullable_1_tE13ECB0E201A2AC187918B1E8E9ED66C025BDA52 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Mapbox.Json.StringEscapeHandling>
struct Nullable_1_tC3113DA767C2AEF92F9809ADCB64F1D31202EFDC 
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

// Mapbox.Json.Bson.BsonArray
struct BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3  : public BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A
{
	// System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonToken> Mapbox.Json.Bson.BsonArray::_children
	List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50* ____children_2;
};

// Mapbox.Json.Bson.BsonEmpty
struct BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5  : public BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A
{
	// Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonEmpty::<Type>k__BackingField
	int8_t ___U3CTypeU3Ek__BackingField_4;
};

struct BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_StaticFields
{
	// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonEmpty::Null
	BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___Null_2;
	// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonEmpty::Undefined
	BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___Undefined_3;
};

// Mapbox.Json.Bson.BsonObject
struct BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575  : public BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A
{
	// System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonProperty> Mapbox.Json.Bson.BsonObject::_children
	List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48* ____children_2;
};

// Mapbox.Json.Bson.BsonRegex
struct BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32  : public BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A
{
	// Mapbox.Json.Bson.BsonString Mapbox.Json.Bson.BsonRegex::<Pattern>k__BackingField
	BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* ___U3CPatternU3Ek__BackingField_2;
	// Mapbox.Json.Bson.BsonString Mapbox.Json.Bson.BsonRegex::<Options>k__BackingField
	BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* ___U3COptionsU3Ek__BackingField_3;
};

// Mapbox.Json.Bson.BsonValue
struct BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749  : public BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A
{
	// System.Object Mapbox.Json.Bson.BsonValue::_value
	RuntimeObject* ____value_2;
	// Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonValue::_type
	int8_t ____type_3;
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

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

// Mapbox.Json.JsonPosition
struct JsonPosition_t0D64A24195A4953E327757BFBC8F0E897D5CBEE9 
{
	// Mapbox.Json.JsonContainerType Mapbox.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Mapbox.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Mapbox.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Mapbox.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};

struct JsonPosition_t0D64A24195A4953E327757BFBC8F0E897D5CBEE9_StaticFields
{
	// System.Char[] Mapbox.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SpecialCharacters_0;
};
// Native definition for P/Invoke marshalling of Mapbox.Json.JsonPosition
struct JsonPosition_t0D64A24195A4953E327757BFBC8F0E897D5CBEE9_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Mapbox.Json.JsonPosition
struct JsonPosition_t0D64A24195A4953E327757BFBC8F0E897D5CBEE9_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// System.Xml.NameTable
struct NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46  : public XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8
{
	// System.Xml.NameTable/Entry[] System.Xml.NameTable::entries
	EntryU5BU5D_tE4AE7874F9098D7C9B34C34630C2F2698981939A* ___entries_0;
	// System.Int32 System.Xml.NameTable::count
	int32_t ___count_1;
	// System.Int32 System.Xml.NameTable::mask
	int32_t ___mask_2;
	// System.Int32 System.Xml.NameTable::hashCodeRandomizer
	int32_t ___hashCodeRandomizer_3;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
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

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE  : public Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095
{
	// System.Boolean System.Text.UTF8Encoding::_emitUTF8Identifier
	bool ____emitUTF8Identifier_18;
	// System.Boolean System.Text.UTF8Encoding::_isThrowException
	bool ____isThrowException_19;
};

struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_StaticFields
{
	// System.Text.UTF8Encoding/UTF8EncodingSealed System.Text.UTF8Encoding::s_default
	UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36* ___s_default_16;
	// System.Byte[] System.Text.UTF8Encoding::s_preamble
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_preamble_17;
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

// System.Xml.Linq.XAttribute
struct XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF  : public XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29
{
	// System.Xml.Linq.XAttribute System.Xml.Linq.XAttribute::next
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___next_2;
	// System.Xml.Linq.XName System.Xml.Linq.XAttribute::name
	XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___name_3;
	// System.String System.Xml.Linq.XAttribute::value
	String_t* ___value_4;
};

// Mapbox.Json.Converters.XAttributeWrapper
struct XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E  : public XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69
{
};

// Mapbox.Json.Converters.XCommentWrapper
struct XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C  : public XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69
{
};

// Mapbox.Json.Converters.XContainerWrapper
struct XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B  : public XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69
{
	// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XContainerWrapper::_childNodes
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* ____childNodes_1;
};

// Mapbox.Json.Converters.XDeclarationWrapper
struct XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E  : public XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69
{
	// System.Xml.Linq.XDeclaration Mapbox.Json.Converters.XDeclarationWrapper::<Declaration>k__BackingField
	XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ___U3CDeclarationU3Ek__BackingField_1;
};

// Mapbox.Json.Converters.XDocumentTypeWrapper
struct XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830  : public XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69
{
	// System.Xml.Linq.XDocumentType Mapbox.Json.Converters.XDocumentTypeWrapper::_documentType
	XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* ____documentType_1;
};

// System.Xml.Linq.XNode
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30  : public XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29
{
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* ___next_2;
};

// Mapbox.Json.Converters.XProcessingInstructionWrapper
struct XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051  : public XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69
{
};

// Mapbox.Json.Converters.XTextWrapper
struct XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04  : public XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69
{
};

// System.Xml.XmlAttribute
struct XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	// System.Xml.XmlName System.Xml.XmlAttribute::name
	XmlName_t0704430D24D202146901D342E34D878246E14F33* ___name_1;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastChild
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___lastChild_2;
};

// Mapbox.Json.Converters.XmlDeclarationWrapper
struct XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E  : public XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3
{
	// System.Xml.XmlDeclaration Mapbox.Json.Converters.XmlDeclarationWrapper::_declaration
	XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* ____declaration_3;
};

// System.Xml.XmlDocument
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t4B3F467B76BD95C919C40424196C55B38EEC0F4D* ___implementation_1;
	// System.Xml.DomNameTable System.Xml.XmlDocument::domNameTable
	DomNameTable_tE4318EC10C55A46FD00324E740BFA7D9CEE2AF45* ___domNameTable_2;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastChild
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___lastChild_3;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocument::entities
	XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C* ___entities_4;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIdMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___htElementIdMap_5;
	// System.Collections.Hashtable System.Xml.XmlDocument::htElementIDAttrDecl
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___htElementIDAttrDecl_6;
	// System.Xml.Schema.SchemaInfo System.Xml.XmlDocument::schemaInfo
	SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* ___schemaInfo_7;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t048A12CE7D00EF330EF32A388B69A240899F88D1* ___schemas_8;
	// System.Boolean System.Xml.XmlDocument::reportValidity
	bool ___reportValidity_9;
	// System.Boolean System.Xml.XmlDocument::actualLoadingStatus
	bool ___actualLoadingStatus_10;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertingDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeInsertingDelegate_11;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeInsertedDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeInsertedDelegate_12;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovingDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeRemovingDelegate_13;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeRemovedDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeRemovedDelegate_14;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangingDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeChangingDelegate_15;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::onNodeChangedDelegate
	XmlNodeChangedEventHandler_t907F6E9CB8DE238635028EC468AD41CAB0BA269B* ___onNodeChangedDelegate_16;
	// System.Boolean System.Xml.XmlDocument::fEntRefNodesPresent
	bool ___fEntRefNodesPresent_17;
	// System.Boolean System.Xml.XmlDocument::fCDataNodesPresent
	bool ___fCDataNodesPresent_18;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_19;
	// System.Boolean System.Xml.XmlDocument::isLoading
	bool ___isLoading_20;
	// System.String System.Xml.XmlDocument::strDocumentName
	String_t* ___strDocumentName_21;
	// System.String System.Xml.XmlDocument::strDocumentFragmentName
	String_t* ___strDocumentFragmentName_22;
	// System.String System.Xml.XmlDocument::strCommentName
	String_t* ___strCommentName_23;
	// System.String System.Xml.XmlDocument::strTextName
	String_t* ___strTextName_24;
	// System.String System.Xml.XmlDocument::strCDataSectionName
	String_t* ___strCDataSectionName_25;
	// System.String System.Xml.XmlDocument::strEntityName
	String_t* ___strEntityName_26;
	// System.String System.Xml.XmlDocument::strID
	String_t* ___strID_27;
	// System.String System.Xml.XmlDocument::strXmlns
	String_t* ___strXmlns_28;
	// System.String System.Xml.XmlDocument::strXml
	String_t* ___strXml_29;
	// System.String System.Xml.XmlDocument::strSpace
	String_t* ___strSpace_30;
	// System.String System.Xml.XmlDocument::strLang
	String_t* ___strLang_31;
	// System.String System.Xml.XmlDocument::strEmpty
	String_t* ___strEmpty_32;
	// System.String System.Xml.XmlDocument::strNonSignificantWhitespaceName
	String_t* ___strNonSignificantWhitespaceName_33;
	// System.String System.Xml.XmlDocument::strSignificantWhitespaceName
	String_t* ___strSignificantWhitespaceName_34;
	// System.String System.Xml.XmlDocument::strReservedXmlns
	String_t* ___strReservedXmlns_35;
	// System.String System.Xml.XmlDocument::strReservedXml
	String_t* ___strReservedXml_36;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_37;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF* ___resolver_38;
	// System.Boolean System.Xml.XmlDocument::bSetResolver
	bool ___bSetResolver_39;
	// System.Object System.Xml.XmlDocument::objLock
	RuntimeObject* ___objLock_40;
};

struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_StaticFields
{
	// System.Xml.EmptyEnumerator System.Xml.XmlDocument::EmptyEnumerator
	EmptyEnumerator_t84EC9187C8460EE98E675ED9258AE4DF2A6776DA* ___EmptyEnumerator_41;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::NotKnownSchemaInfo
	RuntimeObject* ___NotKnownSchemaInfo_42;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::ValidSchemaInfo
	RuntimeObject* ___ValidSchemaInfo_43;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::InvalidSchemaInfo
	RuntimeObject* ___InvalidSchemaInfo_44;
};

// Mapbox.Json.Converters.XmlDocumentTypeWrapper
struct XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2  : public XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3
{
	// System.Xml.XmlDocumentType Mapbox.Json.Converters.XmlDocumentTypeWrapper::_documentType
	XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* ____documentType_3;
};

// Mapbox.Json.Converters.XmlDocumentWrapper
struct XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37  : public XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3
{
	// System.Xml.XmlDocument Mapbox.Json.Converters.XmlDocumentWrapper::_document
	XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ____document_3;
};

// Mapbox.Json.Converters.XmlElementWrapper
struct XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64  : public XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3
{
	// System.Xml.XmlElement Mapbox.Json.Converters.XmlElementWrapper::_element
	XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* ____element_3;
};

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::next
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___next_1;
};

// Mapbox.Json.Converters.XmlNodeConverter
struct XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9  : public JsonConverter_tC8CB30CF9DB17BA7447E3971E88AFFB999BBE451
{
	// System.String Mapbox.Json.Converters.XmlNodeConverter::<DeserializeRootElementName>k__BackingField
	String_t* ___U3CDeserializeRootElementNameU3Ek__BackingField_8;
	// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::<WriteArrayAttribute>k__BackingField
	bool ___U3CWriteArrayAttributeU3Ek__BackingField_9;
	// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::<OmitRootObject>k__BackingField
	bool ___U3COmitRootObjectU3Ek__BackingField_10;
};

struct XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_StaticFields
{
	// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XmlNodeConverter::EmptyChildNodes
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* ___EmptyChildNodes_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10_t4C3493D394EB92FD27787A647E590B653F7D78D5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t4C3493D394EB92FD27787A647E590B653F7D78D5__padding[10];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t3CE58FDE358C8C9A57EA85359E0000E214C6D11B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t3CE58FDE358C8C9A57EA85359E0000E214C6D11B__padding[12];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D120_t359022E4D04B5535D3D703BA59986E98733E4AC1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t359022E4D04B5535D3D703BA59986E98733E4AC1__padding[120];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=168
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D168_tDBB473929496405E9EE487B32C282BC90B16FFEF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D168_tDBB473929496405E9EE487B32C282BC90B16FFEF__padding[168];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D28_t3E042FBCE5E0832E72D3E102A02FF783A9EFF97E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t3E042FBCE5E0832E72D3E102A02FF783A9EFF97E__padding[28];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D52_t981F2A5CD8B257DE26DA8DF6A1E52CBC5C2B7652 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t981F2A5CD8B257DE26DA8DF6A1E52CBC5C2B7652__padding[52];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6_tCAAA75334A1AF04FC4DB69E3FF96B5D5531FBA46 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_tCAAA75334A1AF04FC4DB69E3FF96B5D5531FBA46__padding[6];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D60_t831CD9C34A69CA7B380CB7CE7BCA91A52B00310D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D60_t831CD9C34A69CA7B380CB7CE7BCA91A52B00310D__padding[60];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D84_tF57B4EA7A2295336A06C8FD46D96D0C51A0A5BD5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D84_tF57B4EA7A2295336A06C8FD46D96D0C51A0A5BD5__padding[84];
	};
};
#pragma pack(pop, tp)

// System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0 
{
	// System.Object System.Xml.XmlNamedNodeMap/SmallXmlNodeList::field
	RuntimeObject* ___field_0;
};
// Native definition for P/Invoke marshalling of System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshaled_pinvoke
{
	Il2CppIUnknown* ___field_0;
};
// Native definition for COM marshalling of System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshaled_com
{
	Il2CppIUnknown* ___field_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t8413D2ACBEACBCA1499D2D285691423A81C4A5AF  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t8413D2ACBEACBCA1499D2D285691423A81C4A5AF_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84 <PrivateImplementationDetails>::2BCA00E758D64214B1CD1A6C1F5AFE3E50FF4E63
	__StaticArrayInitTypeSizeU3D84_tF57B4EA7A2295336A06C8FD46D96D0C51A0A5BD5 ___2BCA00E758D64214B1CD1A6C1F5AFE3E50FF4E63_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::309F1F566327763634CE1DC6323D5D9C398F4D42
	__StaticArrayInitTypeSizeU3D120_t359022E4D04B5535D3D703BA59986E98733E4AC1 ___309F1F566327763634CE1DC6323D5D9C398F4D42_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::3DE43C11C7130AF9014115BCDC2584DFE6B50579
	__StaticArrayInitTypeSizeU3D6_tCAAA75334A1AF04FC4DB69E3FF96B5D5531FBA46 ___3DE43C11C7130AF9014115BCDC2584DFE6B50579_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=168 <PrivateImplementationDetails>::55357EC07A4C0DA4B54C468ED12E82299968130F
	__StaticArrayInitTypeSizeU3D168_tDBB473929496405E9EE487B32C282BC90B16FFEF ___55357EC07A4C0DA4B54C468ED12E82299968130F_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::8D8384B5ECAC0436BBA54D23E278830A8800475A
	__StaticArrayInitTypeSizeU3D60_t831CD9C34A69CA7B380CB7CE7BCA91A52B00310D ___8D8384B5ECAC0436BBA54D23E278830A8800475A_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::93F6CC875194F5F37568D800D647ED31D6E33EC3
	__StaticArrayInitTypeSizeU3D120_t359022E4D04B5535D3D703BA59986E98733E4AC1 ___93F6CC875194F5F37568D800D647ED31D6E33EC3_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::9E31F24F64765FCAA589F589324D17C9FCF6A06D
	__StaticArrayInitTypeSizeU3D28_t3E042FBCE5E0832E72D3E102A02FF783A9EFF97E ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::ADFD2E1C801C825415DD53F4F2F72A13B389313C
	__StaticArrayInitTypeSizeU3D12_t3CE58FDE358C8C9A57EA85359E0000E214C6D11B ___ADFD2E1C801C825415DD53F4F2F72A13B389313C_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB
	__StaticArrayInitTypeSizeU3D10_t4C3493D394EB92FD27787A647E590B653F7D78D5 ___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::DD3AEFEADB1CD615F3017763F1568179FEE640B0
	__StaticArrayInitTypeSizeU3D52_t981F2A5CD8B257DE26DA8DF6A1E52CBC5C2B7652 ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::E92B39D8233061927D9ACDE54665E68E7535635A
	__StaticArrayInitTypeSizeU3D52_t981F2A5CD8B257DE26DA8DF6A1E52CBC5C2B7652 ___E92B39D8233061927D9ACDE54665E68E7535635A_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=168 <PrivateImplementationDetails>::F0325B26CE0D81D2D40DD8FD25FA68C1D9EBA59B
	__StaticArrayInitTypeSizeU3D168_tDBB473929496405E9EE487B32C282BC90B16FFEF ___F0325B26CE0D81D2D40DD8FD25FA68C1D9EBA59B_11;
};

// Mapbox.Json.Bson.BsonBinary
struct BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743  : public BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749
{
	// Mapbox.Json.Bson.BsonBinaryType Mapbox.Json.Bson.BsonBinary::<BinaryType>k__BackingField
	uint8_t ___U3CBinaryTypeU3Ek__BackingField_4;
};

// Mapbox.Json.Bson.BsonBoolean
struct BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C  : public BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749
{
};

struct BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_StaticFields
{
	// Mapbox.Json.Bson.BsonBoolean Mapbox.Json.Bson.BsonBoolean::False
	BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C* ___False_4;
	// Mapbox.Json.Bson.BsonBoolean Mapbox.Json.Bson.BsonBoolean::True
	BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C* ___True_5;
};

// Mapbox.Json.Bson.BsonString
struct BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF  : public BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749
{
	// System.Int32 Mapbox.Json.Bson.BsonString::<ByteCount>k__BackingField
	int32_t ___U3CByteCountU3Ek__BackingField_4;
	// System.Boolean Mapbox.Json.Bson.BsonString::<IncludeLength>k__BackingField
	bool ___U3CIncludeLengthU3Ek__BackingField_5;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
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

// Mapbox.Json.JsonReader
struct JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416  : public RuntimeObject
{
	// Mapbox.Json.JsonToken Mapbox.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Mapbox.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Mapbox.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Mapbox.Json.JsonReader/State Mapbox.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Mapbox.Json.JsonPosition Mapbox.Json.JsonReader::_currentPosition
	JsonPosition_t0D64A24195A4953E327757BFBC8F0E897D5CBEE9 ____currentPosition_4;
	// System.Globalization.CultureInfo Mapbox.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Mapbox.Json.DateTimeZoneHandling Mapbox.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Mapbox.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Mapbox.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Mapbox.Json.DateParseHandling Mapbox.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Mapbox.Json.FloatParseHandling Mapbox.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Mapbox.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Mapbox.Json.JsonPosition> Mapbox.Json.JsonReader::_stack
	List_1_t750D4DEFDFDF006AC3353935EE058E5CCC569DB2* ____stack_12;
	// System.Boolean Mapbox.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Mapbox.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Mapbox.Json.JsonSerializer
struct JsonSerializer_tCFE8A4413AC721597A3840B7D359DF7881652541  : public RuntimeObject
{
	// Mapbox.Json.TypeNameHandling Mapbox.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// Mapbox.Json.TypeNameAssemblyFormatHandling Mapbox.Json.JsonSerializer::_typeNameAssemblyFormatHandling
	int32_t ____typeNameAssemblyFormatHandling_1;
	// Mapbox.Json.PreserveReferencesHandling Mapbox.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Mapbox.Json.ReferenceLoopHandling Mapbox.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Mapbox.Json.MissingMemberHandling Mapbox.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Mapbox.Json.ObjectCreationHandling Mapbox.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Mapbox.Json.NullValueHandling Mapbox.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Mapbox.Json.DefaultValueHandling Mapbox.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Mapbox.Json.ConstructorHandling Mapbox.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Mapbox.Json.MetadataPropertyHandling Mapbox.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Mapbox.Json.JsonConverterCollection Mapbox.Json.JsonSerializer::_converters
	JsonConverterCollection_t7AE3370A5F5B81BA90E9F7CA0586ECE909D538E3* ____converters_10;
	// Mapbox.Json.Serialization.IContractResolver Mapbox.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Mapbox.Json.Serialization.ITraceWriter Mapbox.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Mapbox.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// Mapbox.Json.Serialization.ISerializationBinder Mapbox.Json.JsonSerializer::_serializationBinder
	RuntimeObject* ____serializationBinder_14;
	// System.Runtime.Serialization.StreamingContext Mapbox.Json.JsonSerializer::_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ____context_15;
	// Mapbox.Json.Serialization.IReferenceResolver Mapbox.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Mapbox.Json.Formatting> Mapbox.Json.JsonSerializer::_formatting
	Nullable_1_tE13ECB0E201A2AC187918B1E8E9ED66C025BDA52 ____formatting_17;
	// System.Nullable`1<Mapbox.Json.DateFormatHandling> Mapbox.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_tD0E9CA4B30D4BAE6F36D70DE3568D21DB3FFB96B ____dateFormatHandling_18;
	// System.Nullable`1<Mapbox.Json.DateTimeZoneHandling> Mapbox.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_t6E39CBBB21629344B5555B36B9C1AEFBA754DBBA ____dateTimeZoneHandling_19;
	// System.Nullable`1<Mapbox.Json.DateParseHandling> Mapbox.Json.JsonSerializer::_dateParseHandling
	Nullable_1_t0E5157D3DEA4E61FE46ED682BA4ACC4BBF03388A ____dateParseHandling_20;
	// System.Nullable`1<Mapbox.Json.FloatFormatHandling> Mapbox.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_t6DCDCC0A7C968E6C84A0C183205035EF7D98EBBE ____floatFormatHandling_21;
	// System.Nullable`1<Mapbox.Json.FloatParseHandling> Mapbox.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tA33CA9E41A88C4C47EAF47F1B3DF53E0751F9521 ____floatParseHandling_22;
	// System.Nullable`1<Mapbox.Json.StringEscapeHandling> Mapbox.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_tC3113DA767C2AEF92F9809ADCB64F1D31202EFDC ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Mapbox.Json.JsonSerializer::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_24;
	// System.Nullable`1<System.Int32> Mapbox.Json.JsonSerializer::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_25;
	// System.Boolean Mapbox.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Mapbox.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_27;
	// System.String Mapbox.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Mapbox.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Mapbox.Json.Serialization.ErrorEventArgs> Mapbox.Json.JsonSerializer::Error
	EventHandler_1_t59639FFDEDDA26FD70F88DC0A69EE6064A8E8730* ___Error_30;
};

// Mapbox.Json.JsonWriter
struct JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Mapbox.Json.JsonPosition> Mapbox.Json.JsonWriter::_stack
	List_1_t750D4DEFDFDF006AC3353935EE058E5CCC569DB2* ____stack_2;
	// Mapbox.Json.JsonPosition Mapbox.Json.JsonWriter::_currentPosition
	JsonPosition_t0D64A24195A4953E327757BFBC8F0E897D5CBEE9 ____currentPosition_3;
	// Mapbox.Json.JsonWriter/State Mapbox.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Mapbox.Json.Formatting Mapbox.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Mapbox.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Mapbox.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Mapbox.Json.DateFormatHandling Mapbox.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Mapbox.Json.DateTimeZoneHandling Mapbox.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Mapbox.Json.StringEscapeHandling Mapbox.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Mapbox.Json.FloatFormatHandling Mapbox.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Mapbox.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Mapbox.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_13;
};

struct JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF_StaticFields
{
	// Mapbox.Json.JsonWriter/State[][] Mapbox.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tF50205580214238B2D18CD09B0644F87E94A27D5* ___StateArray_0;
	// Mapbox.Json.JsonWriter/State[][] Mapbox.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_tF50205580214238B2D18CD09B0644F87E94A27D5* ___StateArrayTempate_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Xml.Linq.XComment
struct XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.String System.Xml.Linq.XComment::value
	String_t* ___value_3;
};

// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject* ___content_3;
};

// System.Xml.Linq.XDocumentType
struct XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.String System.Xml.Linq.XDocumentType::_name
	String_t* ____name_3;
	// System.String System.Xml.Linq.XDocumentType::_publicId
	String_t* ____publicId_4;
	// System.String System.Xml.Linq.XDocumentType::_systemId
	String_t* ____systemId_5;
	// System.String System.Xml.Linq.XDocumentType::_internalSubset
	String_t* ____internalSubset_6;
};

// Mapbox.Json.Converters.XDocumentWrapper
struct XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB  : public XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B
{
};

// Mapbox.Json.Converters.XElementWrapper
struct XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD  : public XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B
{
	// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XElementWrapper::_attributes
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* ____attributes_2;
};

// System.Xml.Linq.XProcessingInstruction
struct XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.String System.Xml.Linq.XProcessingInstruction::target
	String_t* ___target_3;
	// System.String System.Xml.Linq.XProcessingInstruction::data
	String_t* ___data_4;
};

// System.Xml.Linq.XText
struct XText_t006159E7F735736D41BBC0738FFB066A14B31AE2  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.String System.Xml.Linq.XText::text
	String_t* ___text_3;
};

// System.Xml.XmlCharacterData
struct XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	// System.String System.Xml.XmlCharacterData::data
	String_t* ___data_2;
};

// System.Xml.XmlDeclaration
struct XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	// System.String System.Xml.XmlDeclaration::version
	String_t* ___version_2;
	// System.String System.Xml.XmlDeclaration::encoding
	String_t* ___encoding_3;
	// System.String System.Xml.XmlDeclaration::standalone
	String_t* ___standalone_4;
};

// System.Xml.XmlDocumentType
struct XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	// System.String System.Xml.XmlDocumentType::name
	String_t* ___name_2;
	// System.String System.Xml.XmlDocumentType::publicId
	String_t* ___publicId_3;
	// System.String System.Xml.XmlDocumentType::systemId
	String_t* ___systemId_4;
	// System.String System.Xml.XmlDocumentType::internalSubset
	String_t* ___internalSubset_5;
	// System.Boolean System.Xml.XmlDocumentType::namespaces
	bool ___namespaces_6;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::entities
	XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C* ___entities_7;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::notations
	XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C* ___notations_8;
	// System.Xml.Schema.SchemaInfo System.Xml.XmlDocumentType::schemaInfo
	SchemaInfo_t42F4B1099B63BCF2D3BBF7F35A79AF6B90B0927E* ___schemaInfo_9;
};

// System.Xml.XmlElement
struct XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	// System.Xml.XmlName System.Xml.XmlElement::name
	XmlName_t0704430D24D202146901D342E34D878246E14F33* ___name_2;
	// System.Xml.XmlAttributeCollection System.Xml.XmlElement::attributes
	XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* ___attributes_3;
	// System.Xml.XmlLinkedNode System.Xml.XmlElement::lastChild
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___lastChild_4;
};

// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C  : public RuntimeObject
{
	// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::parent
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___parent_0;
	// System.Xml.XmlNamedNodeMap/SmallXmlNodeList System.Xml.XmlNamedNodeMap::nodes
	SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0 ___nodes_1;
};

// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	// System.String System.Xml.XmlProcessingInstruction::target
	String_t* ___target_2;
	// System.String System.Xml.XmlProcessingInstruction::data
	String_t* ___data_3;
};

// Mapbox.Json.Bson.BsonReader
struct BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49  : public JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416
{
	// System.IO.BinaryReader Mapbox.Json.Bson.BsonReader::_reader
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ____reader_20;
	// System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonReader/ContainerContext> Mapbox.Json.Bson.BsonReader::_stack
	List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* ____stack_21;
	// System.Byte[] Mapbox.Json.Bson.BsonReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_22;
	// System.Char[] Mapbox.Json.Bson.BsonReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_23;
	// Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonReader::_currentElementType
	int8_t ____currentElementType_24;
	// Mapbox.Json.Bson.BsonReader/BsonReaderState Mapbox.Json.Bson.BsonReader::_bsonReaderState
	int32_t ____bsonReaderState_25;
	// Mapbox.Json.Bson.BsonReader/ContainerContext Mapbox.Json.Bson.BsonReader::_currentContext
	ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* ____currentContext_26;
	// System.Boolean Mapbox.Json.Bson.BsonReader::_readRootValueAsArray
	bool ____readRootValueAsArray_27;
	// System.Boolean Mapbox.Json.Bson.BsonReader::_jsonNet35BinaryCompatibility
	bool ____jsonNet35BinaryCompatibility_28;
	// System.DateTimeKind Mapbox.Json.Bson.BsonReader::_dateTimeKindHandling
	int32_t ____dateTimeKindHandling_29;
};

struct BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields
{
	// System.Byte[] Mapbox.Json.Bson.BsonReader::SeqRange1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange1_16;
	// System.Byte[] Mapbox.Json.Bson.BsonReader::SeqRange2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange2_17;
	// System.Byte[] Mapbox.Json.Bson.BsonReader::SeqRange3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange3_18;
	// System.Byte[] Mapbox.Json.Bson.BsonReader::SeqRange4
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SeqRange4_19;
};

// Mapbox.Json.Bson.BsonWriter
struct BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589  : public JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF
{
	// Mapbox.Json.Bson.BsonBinaryWriter Mapbox.Json.Bson.BsonWriter::_writer
	BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* ____writer_14;
	// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonWriter::_root
	BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ____root_15;
	// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonWriter::_parent
	BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ____parent_16;
	// System.String Mapbox.Json.Bson.BsonWriter::_propertyName
	String_t* ____propertyName_17;
};

// Mapbox.Json.JsonException
struct JsonException_t32B128ABDF710536EEA777025C4F67BB19B09C77  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// System.Xml.Linq.XCData
struct XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B  : public XText_t006159E7F735736D41BBC0738FFB066A14B31AE2
{
};

// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1  : public XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF
{
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::_declaration
	XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ____declaration_4;
};

// System.Xml.Linq.XElement
struct XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909  : public XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF
{
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___name_4;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::lastAttr
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___lastAttr_5;
};

// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0  : public XmlNamedNodeMap_t13203D1B3861C62568AFFA1D644C04ABCBFC130C
{
};

// System.Xml.XmlCDataSection
struct XmlCDataSection_t2D6B8A6CFF3ACB0BD27368A8D5A56FD674B1E8CA  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};

// System.Xml.XmlComment
struct XmlComment_tD3C4E7E2E90A8CA25C46D2616BCF138D40072AD9  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};

// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};

// System.Xml.XmlText
struct XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};

// System.Xml.XmlWhitespace
struct XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24  : public XmlCharacterData_t95604E2FDB152E89A58F9D51414A2903012E758B
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Mapbox.Json.JsonReaderException
struct JsonReaderException_tED5A0E30E25D1EFE42680402CE8351A159BAC007  : public JsonException_t32B128ABDF710536EEA777025C4F67BB19B09C77
{
	// System.Int32 Mapbox.Json.JsonReaderException::<LineNumber>k__BackingField
	int32_t ___U3CLineNumberU3Ek__BackingField_18;
	// System.Int32 Mapbox.Json.JsonReaderException::<LinePosition>k__BackingField
	int32_t ___U3CLinePositionU3Ek__BackingField_19;
	// System.String Mapbox.Json.JsonReaderException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_20;
};

// Mapbox.Json.JsonSerializationException
struct JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B  : public JsonException_t32B128ABDF710536EEA777025C4F67BB19B09C77
{
};

// Mapbox.Json.JsonWriterException
struct JsonWriterException_t64203323809F24258C2DD39887A1143A8B490FCB  : public JsonException_t32B128ABDF710536EEA777025C4F67BB19B09C77
{
	// System.String Mapbox.Json.JsonWriterException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_18;
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Void Mapbox.Json.Converters.XmlNodeWrapper::.ctor(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0 (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlDeclarationWrapper::.ctor(System.Xml.XmlDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclarationWrapper__ctor_m9FDDDA0FBD82CEAF8FF3C6256D851FFCD6B5C85F (XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E* __this, XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* ___declaration0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlDocumentTypeWrapper::.ctor(System.Xml.XmlDocumentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocumentTypeWrapper__ctor_mD321B23EDA79640A11AE168CCA6DEC4064303D13 (XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2* __this, XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* ___documentType0, const RuntimeMethod* method) ;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* XmlDocument_CreateElement_m4CFE00BFBBAE8805B2E5B7566E7C896334092E93 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlElementWrapper::.ctor(System.Xml.XmlElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementWrapper__ctor_m714BAB9651F0643A4F5A82CD00B6DA34CC04C47B (XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64* __this, XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* ___element0, const RuntimeMethod* method) ;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* XmlDocument_CreateElement_m4180DF31B3B4CD8516B7881494D99720648BD95B (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, String_t* ___qualifiedName0, String_t* ___namespaceURI1, const RuntimeMethod* method) ;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* XmlDocument_CreateAttribute_m42F583C11D788DB6E7B1C2EFAF112CB0C6118D06 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper_set_Value_m72A8EF4DDA642C556975B212D232C761F7CE980B (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* XmlDocument_CreateAttribute_m5DC489B6B051905264E2FD30A58CD380337D2F18 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, String_t* ___qualifiedName0, String_t* ___namespaceURI1, const RuntimeMethod* method) ;
// System.Xml.XmlElement System.Xml.XmlDocument::get_DocumentElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* XmlDocument_get_DocumentElement_mE87523DCD2D59F8BA6175DBA01D70133E202A2C8 (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) ;
// System.Object Mapbox.Json.Converters.XmlNodeWrapper::get_WrappedNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_get_WrappedNode_m21C31BA1FEDAF91F4E47EC76315D8B71C7B8E6FA (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlElement::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlElement_get_IsEmpty_m3FD670ABE3BE49AF263E1B75875FA606CC671B5F (XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlDeclaration::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDeclaration_get_Version_m50261F1E46B645E69A99504F494FFD3BF915E633_inline (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlDeclaration::get_Encoding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDeclaration_get_Encoding_m09D89DCD8457C62A6E49B9506A65A271DDBD011F_inline (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlDeclaration::set_Encoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclaration_set_Encoding_m743178C17460B204CFFEFFC0960A77E4A6289A8B (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlDeclaration::get_Standalone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDeclaration_get_Standalone_m46CC1833EE3C478318FF865E98A6899E440DDC6C_inline (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlDeclaration::set_Standalone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclaration_set_Standalone_m867389C9FBF0064E3FDA7EBDEAD4CF30E84F49C2 (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlDocumentType::get_SystemId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlDocumentType::get_PublicId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlDocumentType::get_InternalSubset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>::.ctor(System.Int32)
inline void List_1__ctor_mA4D2C31AFD0DD873964EFF962E2FF218AE55BEF8 (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlNodeWrapper::WrapNode(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_WrapNode_m2D7E269564290F8F1DE7689247650CB65C097E6E (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>::Add(T)
inline void List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_inline (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean Mapbox.Json.Converters.XmlNodeWrapper::get_HasAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeWrapper_get_HasAttributes_m1779D5EC9E16009CDFF52BEBF8E219FB8B87038B (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XObjectWrapper::.ctor(System.Xml.Linq.XObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02 (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* __this, XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ___xmlObject0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XDeclarationWrapper::set_Declaration(System.Xml.Linq.XDeclaration)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDeclarationWrapper_set_Declaration_m8BDFA5A476DBAC0D90BA8A04F0CFA00799C359CF_inline (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ___value0, const RuntimeMethod* method) ;
// System.Xml.Linq.XDeclaration Mapbox.Json.Converters.XDeclarationWrapper::get_Declaration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* XDeclarationWrapper_get_Declaration_m0648B146E73B0281844EB091BDE77D15B198461A_inline (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDeclaration::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Version_m675EDE875CAF23C6801015479393247D2B8A05E7_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDeclaration::get_Encoding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Encoding_mA27D7E3A1673EE7D2A52F7D93A17FD9A33C4D5E0_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDeclaration::set_Encoding(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDeclaration_set_Encoding_m13C45B72D33CFE9CCBA3450D0D3DF6A56D46CCD9_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDeclaration::get_Standalone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Standalone_mCC775D6A93C6ED7C87BFFA4E3565675B4139CE7D_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDeclaration::set_Standalone(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDeclaration_set_Standalone_mBFF62587A08487D5C7332D76AD4D3C55FB81BF33_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDocumentType::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_Name_m297D10AE558AA29F11E05CCAEF2D74C43F980AE9_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDocumentType::get_SystemId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_SystemId_m864BD298982BDA1D5B9C4DB6CB904B78FAFA04A7_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDocumentType::get_PublicId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_PublicId_mAFD124B111C0B665C14A2078EE4E30C28F1854FC_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XDocumentType::get_InternalSubset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_InternalSubset_m6914F698B32A68A55C15AD4B971FEBFA85183DA1_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) ;
// System.Object Mapbox.Json.Converters.XObjectWrapper::get_WrappedNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObjectWrapper_get_WrappedNode_m4EC29CC3F6E03FF4901BBA0414E7F65A535C1EB3 (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XContainerWrapper::.ctor(System.Xml.Linq.XContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainerWrapper__ctor_m9F96198F331B60161A21FF45CDFA86E68D5D96F2 (XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B* __this, XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___container0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XContainerWrapper::get_ChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* XContainerWrapper_get_ChildNodes_m3B23ED688F50323717F5C155E6F16930075CD23F (XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XDocument Mapbox.Json.Converters.XDocumentWrapper::get_Document()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* XDocumentWrapper_get_Document_m971103CC80292AF259B10D21B7A0CCA4EC21D089 (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::get_Declaration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* XDocument_get_Declaration_m54F6FE679582E4CC7FBC6FD3565260BC308D98CA_inline (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>::get_Count()
inline int32_t List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_inline (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554 (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Mapbox.Json.Converters.XDeclarationWrapper::.ctor(System.Xml.Linq.XDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclarationWrapper__ctor_mE71E2B801E2AD95DB22A4FA21E51140E9ED9831C (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ___declaration0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>::Insert(System.Int32,T)
inline void List_1_Insert_mDED0CD97369710B277312528B306B96F9C12A4BA (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Boolean Mapbox.Json.Converters.XContainerWrapper::get_HasChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XContainerWrapper_get_HasChildNodes_m84AA4C5BB4AC0AAD06AACB06B870D032D24B38C3 (XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XComment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XComment__ctor_mF1891F18BA45A4D593BF20DA9DC98AC2B2DE8020 (XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XText::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XText__ctor_m30153536CE7D619BF5609B3D3453109B3ECDD28D (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XCData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XCData__ctor_m649661856E9B7BA8D204EB3FB1CE80D76998D416 (XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDeclaration::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclaration__ctor_m8107AC3F844468E3C2A20075B14A09D24A3768BF (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, String_t* ___version0, String_t* ___encoding1, String_t* ___standalone2, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentType__ctor_mD192CD368E807CA6B4AB0B5094A903CBFA37CA46 (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XDocumentTypeWrapper::.ctor(System.Xml.Linq.XDocumentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentTypeWrapper__ctor_m1D1885E2B8C00C1564C5272A83A10AC965586EE2 (XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830* __this, XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* ___documentType0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstruction__ctor_m9D42D9DF59625543003025C09E1AED9659A1E862 (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* __this, String_t* ___target0, String_t* ___data1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XProcessingInstructionWrapper::.ctor(System.Xml.Linq.XProcessingInstruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstructionWrapper__ctor_m34C367FB925CDF1944C27F7362BE49333A605165 (XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051* __this, XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* ___processingInstruction0, const RuntimeMethod* method) ;
// System.Xml.Linq.XName System.Xml.Linq.XName::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XName_op_Implicit_m3A259E71F7D76AA504349A98DAE3C47D7A943736 (String_t* ___expandedName0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement__ctor_mFDCA9C62F1562D0E005F47D0298A49C57DBC126C (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___name0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XElementWrapper::.ctor(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementWrapper__ctor_mAA1B46972A8E2EF79C2F0CD9E1FED049602893BC (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* ___element0, const RuntimeMethod* method) ;
// System.String Mapbox.Json.Utilities.MiscellaneousUtils::GetLocalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiscellaneousUtils_GetLocalName_m19145909870A85DB240B9787E656A6935B824605 (String_t* ___qualifiedName0, const RuntimeMethod* method) ;
// System.Xml.Linq.XName System.Xml.Linq.XName::Get(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XName_Get_mECF7FD66C88749DF760999F9C6F506BA9A0D0373 (String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XName,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute__ctor_m913E6ED815250651BF84B13AE1C1B79C6C7F9CE0 (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XAttributeWrapper::.ctor(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttributeWrapper__ctor_mCC13B9B3C59AEC4B7FB301D70669A46181858497 (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* __this, XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___attribute0, const RuntimeMethod* method) ;
// System.Xml.Linq.XElement System.Xml.Linq.XDocument::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* XDocument_get_Root_mB2847BD75F5350D1D795E2A2691BF9CB210300C8 (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDocument::set_Declaration(System.Xml.Linq.XDeclaration)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDocument_set_Declaration_m3DAB9857DC323A55ABA6F973614AABE5FB59A672_inline (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ___value0, const RuntimeMethod* method) ;
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XContainerWrapper::AppendChild(Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainerWrapper_AppendChild_m71191CF3DF2E9CAD29BEF6397036A57B6C63A6D7 (XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) ;
// System.Xml.Linq.XText Mapbox.Json.Converters.XTextWrapper::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* XTextWrapper_get_Text_mE42D3E1D2FA07E8A5DAAC007D9820B89BF5F6E97 (XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XText::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XText_get_Value_m5B2A033755DE27DEC73860B9E94AA41BB55E208C_inline (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XText::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XText_set_Value_m285A62B03AEFA17C99B9637F5E9BD62A5E707C38 (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Xml.Linq.XElement System.Xml.Linq.XObject::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* __this, const RuntimeMethod* method) ;
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XContainerWrapper::WrapNode(System.Xml.Linq.XObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainerWrapper_WrapNode_mE22313217245C0CAEF4AC55C9A915BA9292FB3C8 (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ___node0, const RuntimeMethod* method) ;
// System.Xml.Linq.XComment Mapbox.Json.Converters.XCommentWrapper::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* XCommentWrapper_get_Text_mB31B28FCC890F53A17B0E1715A7E9751FC166AF6 (XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XComment::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XComment_get_Value_mD2D3D9900752AD9FA019947C965FF6FAF2B3E7DA_inline (XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XComment::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XComment_set_Value_m6D36A232DE1A2E3C39E0F54F6A8078AECD7FE375 (XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Xml.Linq.XProcessingInstruction Mapbox.Json.Converters.XProcessingInstructionWrapper::get_ProcessingInstruction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* XProcessingInstructionWrapper_get_ProcessingInstruction_m5AFCF669A121BFA1D235CB9EAEEC483C4E088687 (XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XProcessingInstruction::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XProcessingInstruction_get_Target_mBB98BD38B91EBDC03558F4990591BE33FC1EB0DE_inline (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XProcessingInstruction::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XProcessingInstruction_get_Data_mF06C89FCF9F580497E3B59331676AFC9AA3F416B_inline (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XProcessingInstruction::set_Data(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstruction_set_Data_m6E09DD3B0921B4C9C342471380541E710F8F8714 (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>::.ctor()
inline void List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Xml.Linq.XContainer Mapbox.Json.Converters.XContainerWrapper::get_Container()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* XContainerWrapper_get_Container_mF54299E0998036C9127BF86960CA9E27BD40F141 (XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode> System.Xml.Linq.XContainer::Nodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainer_Nodes_mBB3D95BB437752701F9A687E56EA226C0F27EFE4 (XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XNode System.Xml.Linq.XContainer::get_LastNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* XContainer_get_LastNode_mA0896FBB61341D138E2F48F032D6C8169DEEED5E (XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XDocumentWrapper::.ctor(System.Xml.Linq.XDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentWrapper__ctor_mF2733CE1AB416482731B9CDD3AB2597DD1CD0F4D (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* ___document0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XTextWrapper::.ctor(System.Xml.Linq.XText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XTextWrapper__ctor_m79A2D0B3F647D4B87CEDC5507D6B211B7CEBCE29 (XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04* __this, XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* ___text0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XCommentWrapper::.ctor(System.Xml.Linq.XComment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XCommentWrapper__ctor_mBA254C434387D8C5982C8E2AC7BC2E2F3697874F (XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C* __this, XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* ___text0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XContainer::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainer_Add_m26111A020919619F03525ED30091D4501090075B (XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* __this, RuntimeObject* ___content0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XAttribute Mapbox.Json.Converters.XAttributeWrapper::get_Attribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* XAttributeWrapper_get_Attribute_mE626218F3407D831A8D132830CF42C808F27F807 (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XAttribute::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XAttribute_get_Value_mDCE15378AC161DF20094EF77EFF017A6F6766EB1_inline (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XAttribute::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttribute_set_Value_m6BB4BE5ED1708B0C3EB39A38DC36E8FE7BAA6C4C (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Xml.Linq.XName System.Xml.Linq.XAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XName::get_LocalName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline (XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XName::get_NamespaceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XName_get_NamespaceName_mBEAFAB116BBDFE5B13EE2672C6C9DB3E58D257D3 (XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XElement Mapbox.Json.Converters.XElementWrapper::get_Element()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* XElementWrapper_get_Element_mE91FB02E9F795A47C4D10F4A104CD793CFD0658C (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Linq.XElement::get_HasAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElement_get_HasAttributes_m5ACE856A8490A467C7B9F7EC29D37147E6D4B022 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// System.Boolean Mapbox.Json.Converters.XElementWrapper::HasImplicitNamespaceAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElementWrapper_HasImplicitNamespaceAttribute_m47A1C45A836F237665294ACA53F9E190AF5A8F4E (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, String_t* ___namespaceUri0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement::Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XElement_Attributes_m6B330A71FCAFA7A746FF494CC45F8B757F2CEF37 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String Mapbox.Json.Converters.XElementWrapper::GetPrefixOfNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_GetPrefixOfNamespace_m9B2B9487E395FF17BC607F6F21BEB1798750D42C (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, String_t* ___namespaceUri0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XElement::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElement_get_Value_mC49BD0D0A616BD26B1B8E2D33D2E22D2F5A667BA (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XElement::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElement_set_Value_mC305400046C92E8072E180C50982C6C6EEF98F66 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Xml.Linq.XName System.Xml.Linq.XElement::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XElement_get_Name_mAF691F0AFE4F732FE836AEAC566536C1231AA74D_inline (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C* XNamespace_op_Implicit_m82CA31E66BE67924ED340B6CF69B6DF3E8FAC7DC (String_t* ___namespaceName0, const RuntimeMethod* method) ;
// System.String System.Xml.Linq.XElement::GetPrefixOfNamespace(System.Xml.Linq.XNamespace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElement_GetPrefixOfNamespace_mD293E0A204AED396C6768157226CBC6A72BFAD11 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C* ___ns0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Linq.XElement::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElement_get_IsEmpty_m4451FEC389D90F236A5537E14D0638D40C44D049 (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) ;
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlNodeConverter::WrapXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_WrapXml_m340D791D84C06BBAEA1E7364C086B682B96D0D71 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.NameTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameTable__ctor_mB02EE27092095D81E839D51519C4FBDA2227C261 (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNamespaceManager__ctor_m18E69120CE5886E06630CCCC3215D2C67FC669DB (XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* __this, XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* ___nameTable0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeConverter::PushParentNamespaces(Mapbox.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_PushParentNamespaces_m17513FA7B9D606704BCF002CF56B9826253E5112 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) ;
// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::get_OmitRootObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_OmitRootObject_m9DE79B549A43F09B4B1E32D4D2884814EEF438D0_inline (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeConverter::SerializeNode(Mapbox.Json.JsonWriter,Mapbox.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_SerializeNode_m8B2FE5E1BE4EB807C6723AAB59AF530A34F77FDA (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* ___writer0, RuntimeObject* ___node1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, bool ___writePropertyName3, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>::Reverse()
inline void List_1_Reverse_mCA1E5CF0D60E80910E0DD561823028F1C60C365A (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*, const RuntimeMethod*))List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>::GetEnumerator()
inline Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832 (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 (*) (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Mapbox.Json.Converters.IXmlNode>::Dispose()
inline void Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF (Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Mapbox.Json.Converters.IXmlNode>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_inline (Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mapbox.Json.Converters.IXmlNode>::MoveNext()
inline bool Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF (Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.Xml.XmlConvert::DecodeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_DecodeName_m59D31842CBCDCD2657BCE42AC8D8DFA818FB9437 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String Mapbox.Json.Converters.XmlNodeConverter::ResolveFullName(Mapbox.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_ResolveFullName_mF5384ED3AE05EF0F6CE9B4AD5FFA655BA4A7AD7C (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonSerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializationException__ctor_m273E671F4E28041EC651C496F36ACCCC2B277C75 (JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XmlConvert::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlConvert_ToBoolean_mB95C798BD6D849071E6A686CBF85851C25C7006A (String_t* ___s0, const RuntimeMethod* method) ;
// System.String Mapbox.Json.Converters.XmlNodeConverter::GetPropertyName(Mapbox.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_GetPropertyName_m8706C2B027138EA86E361564670FD4901C719C52 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeConverter::WriteGroupedNodes(Mapbox.Json.JsonWriter,System.Xml.XmlNamespaceManager,System.Boolean,System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_WriteGroupedNodes_m28A066A095C051F48903F880FBA70214B6A7152C (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* ___writer0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, bool ___writePropertyName2, List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* ___groupedNodes3, String_t* ___elementNames4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::WriteGroupedNodes(Mapbox.Json.JsonWriter,System.Xml.XmlNamespaceManager,System.Boolean,Mapbox.Json.Converters.IXmlNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_WriteGroupedNodes_mE9E7AA47D54E0DA14D77CF4BA4B325800D9A0750 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* ___writer0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, bool ___writePropertyName2, RuntimeObject* ___node3, String_t* ___elementNames4, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::IsArray(Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsArray_mE380754B6C1FCFBE25A0221801DF9A230EE6DB4B (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, RuntimeObject* ___node0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeConverter::SerializeGroupedNodes(Mapbox.Json.JsonWriter,Mapbox.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_SerializeGroupedNodes_mCDBC0B058159857B2F95C6F1429445FA8EFB8ED1 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* ___writer0, RuntimeObject* ___node1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, bool ___writePropertyName3, const RuntimeMethod* method) ;
// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::AllSameName(Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_AllSameName_mF4F1D85CF9674392BDDDDB7FBF1CE31D695E8150 (RuntimeObject* ___node0, const RuntimeMethod* method) ;
// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::ValueAttributes(System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_ValueAttributes_m08CBF846C3D879A151F1C11BD32A1BDCA04BBC40 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* ___c0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XDocument::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocument__ctor_m75DFDCC516F6DB707830B7147BB51FEE9F72DDAD (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlDocument::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocument__ctor_m09B578D51E249702C90A99B87A31ABE8CE4027DC (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlDocumentWrapper::.ctor(System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocumentWrapper__ctor_mEB02EE61CB0E9FB4C2E9FDCA1B753A374F2762E1 (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___document0, const RuntimeMethod* method) ;
// System.String Mapbox.Json.Converters.XmlNodeConverter::get_DeserializeRootElementName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_get_DeserializeRootElementName_m63868C331A460D89644180CDA035032E503B68EB_inline (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeConverter::ReadElement(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,Mapbox.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_ReadElement_m79B9E65A63A56BC9AD08F5AC4B2D24A3F167FF54 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeConverter::DeserializeNode(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_DeserializeNode_m507372274683541B47D8C8A7531C41794D895AB7 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, RuntimeObject* ___currentNode3, const RuntimeMethod* method) ;
// System.Void System.Xml.Linq.XNode::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XNode_Remove_m74CDB71751058523C66B0529333D7D0E880C29F9 (XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* __this, const RuntimeMethod* method) ;
// System.String Mapbox.Json.Converters.XmlNodeConverter::ConvertTokenToXmlValue(Mapbox.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeConverter::CreateInstruction(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,Mapbox.Json.Converters.IXmlNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateInstruction_m9E9169BFC2DFE4B314EDB1353439366F85B25E96 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeConverter::CreateDocumentType(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateDocumentType_m1F95FCD2E64405C26A23A7ADD2592CAC149FF332 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeConverter::ReadArrayElements(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,System.String,Mapbox.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_ReadArrayElements_m0FEAC6B5162D676384932E8CE8094C22DF059BC0 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, String_t* ___propertyName2, RuntimeObject* ___currentNode3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, const RuntimeMethod* method) ;
// Mapbox.Json.JsonSerializationException Mapbox.Json.JsonSerializationException::Create(Mapbox.Json.JsonReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* JsonSerializationException_Create_mB3DA7EF81E2739FBD8EF3788EE7C1A6C2B54E013 (JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Mapbox.Json.Converters.XmlNodeConverter::ReadAttributeElements(Mapbox.Json.JsonReader,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* XmlNodeConverter_ReadAttributeElements_m97ED3E9F20B2D81BDDFAA863F47D6DB2027C4DAD (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) ;
// System.String Mapbox.Json.Utilities.MiscellaneousUtils::GetPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiscellaneousUtils_GetPrefix_m1848294B9DCB302F65ADC18C811484DD0F1C6AFF (String_t* ___qualifiedName0, const RuntimeMethod* method) ;
// System.Boolean Mapbox.Json.Utilities.StringUtils::StartsWith(System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringUtils_StartsWith_mD1F92D46271A829C3BA4365E467B9E312AFBDC05 (String_t* ___source0, Il2CppChar ___value1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeConverter::AddAttribute(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,Mapbox.Json.Converters.IXmlNode,System.String,System.String,System.Xml.XmlNamespaceManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_AddAttribute_mD3D3836C2D55BE4B57534DEB3C4E36BB3E45CE49 (JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, String_t* ___attributeName4, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager5, String_t* ___attributePrefix6, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeConverter::CreateElement(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,Mapbox.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateElement_m8D399D1657C48760279A3E88E754AA935E40322A (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___elementName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, String_t* ___elementPrefix5, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___attributeNameValues6, const RuntimeMethod* method) ;
// Mapbox.Json.Converters.IXmlElement Mapbox.Json.Converters.XmlNodeConverter::CreateElement(System.String,Mapbox.Json.Converters.IXmlDocument,System.String,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_CreateElement_m7CAE75AFC8F9C182D42E597039DC159C17C21E3A (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, String_t* ___elementName0, RuntimeObject* ___document1, String_t* ___elementPrefix2, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager3, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String System.Xml.XmlConvert::EncodeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_EncodeName_m5CDC8BEC5CE63A019C9E7C52AADF9F44B90E6CB5 (String_t* ___name0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String Mapbox.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mC9CE0D3DDDE9E57C4812561FCA179F29AE68BEA1 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject* ___arg02, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mFC2B58A063E63501E3CB452206B18C317E2782A9 (int64_t ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m4EE078C46CC4FF023E0286740CFE95E945C5185E (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m0A47C3C098CDB47726C29D7A70B7349D6DA57555 (float ___value0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m8DED60F2E0251A3D389F1DD22AA5AF9CD440ABE8 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m04C12A2A45109D8E79C729DE12EF0A29301C2A2B (double ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m0E8AE169ABC127B0A317EE6312A04BC1F8AB4C63 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mD598BDDD270BE18CCBABE0569FF42529F06ADADF (bool ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m94540B3F4E815CA0CEDD0B655248460FD19E419A (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) ;
// System.DateTime System.Convert::ToDateTime(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Convert_ToDateTime_m773A330A58097085E94630181F3A77B9F0963327 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.DateTimeKind System.DateTime::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Xml.XmlDateTimeSerializationMode Mapbox.Json.Utilities.DateTimeUtils::ToSerializationMode(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTimeUtils_ToSerializationMode_m32FC50B5D2CDC54C34B2CE5C322586723714D26B (int32_t ___kind0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.DateTime,System.Xml.XmlDateTimeSerializationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mCD438E48326A2EECD1839100F45A2626B3B65598 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, int32_t ___dateTimeOption1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeConverter::DeserializeValue(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,System.String,Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_DeserializeValue_m355184EF6A8AB71B0BF766F612836CAAE08B6099 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, String_t* ___propertyName3, RuntimeObject* ___currentNode4, const RuntimeMethod* method) ;
// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::get_WriteArrayAttribute()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_WriteArrayAttribute_m20361156D5F9DCCF34428D0D8019CC5D9DA08AEB_inline (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Converters.XmlNodeConverter::AddJsonArrayAttribute(Mapbox.Json.Converters.IXmlElement,Mapbox.Json.Converters.IXmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_AddJsonArrayAttribute_m6D57E42956502B3413B0E1FC501345673D70F9F6 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, RuntimeObject* ___element0, RuntimeObject* ___document1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::IsNamespaceAttribute(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsNamespaceAttribute_m06B6ADAC0C7CA98C185EBC6A83103808DAFBD508 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, String_t* ___attributeName0, String_t** ___prefix1, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// System.Boolean Mapbox.Json.Utilities.JsonTokenUtils::IsPrimitiveToken(Mapbox.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonTokenUtils_IsPrimitiveToken_m465B9010968D563626EC6D46AD0F0A87CADC6008 (int32_t ___token0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_mDB5267B1FA9EC26F11778A4F1B30FDF76B14D068 (JsonConverter_tC8CB30CF9DB17BA7447E3971E88AFFB999BBE451* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinaryWriter_set_DateTimeKindHandling_m9784B0D935227D6F5FEFA90A9A5A2922151F52D9_inline (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Mapbox.Json.Bson.BsonBinaryWriter::CalculateSize(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_m5850C4F7F232921297849749A5D3B8CBDC7EC830 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___t0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::WriteTokenInternal(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteTokenInternal_m048B932AE355398EB04A7A65875834BC8728DD31 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___t0, const RuntimeMethod* method) ;
// System.Int32 Mapbox.Json.Bson.BsonToken::get_CalculatedSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonToken_get_CalculatedSize_m01453B84E1D67C1030D478C7C21D57171B1EB1B3_inline (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Mapbox.Json.Bson.BsonProperty> Mapbox.Json.Bson.BsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_GetEnumerator_m51EB57A06242CFF4EF309CC464453FC3775C80C8 (BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* __this, const RuntimeMethod* method) ;
// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonProperty::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* BsonProperty_get_Value_mBE4596AD58E9F63AA81C15D3F5C761CC85B58FB4_inline (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, const RuntimeMethod* method) ;
// Mapbox.Json.Bson.BsonString Mapbox.Json.Bson.BsonProperty::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* BsonProperty_get_Name_m65D854351FC3F54004885367CE6F069138EA2D60_inline (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, const RuntimeMethod* method) ;
// System.Object Mapbox.Json.Bson.BsonValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55 (BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.Json.Bson.BsonString::get_ByteCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonString_get_ByteCount_mEF2800D322BC09FAF0919B6558A5CC558612E052_inline (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::WriteString(System.String,System.Int32,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteString_m6625E0946FEBB2DEDE9E4204434B2268B69EF19C (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, String_t* ___s0, int32_t ___byteCount1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___calculatedlengthPrefix2, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Mapbox.Json.Bson.BsonToken> Mapbox.Json.Bson.BsonArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_GetEnumerator_m1F55A56BFB40EE3D62AF021034B5508BA5C85085 (BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* __this, const RuntimeMethod* method) ;
// System.String System.UInt64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Int32 Mapbox.Json.Utilities.MathUtils::IntLength(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MathUtils_IntLength_mF04B5F768FE71C717A843A3CADDDE2316D96D079 (uint64_t ___i0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m5C8BF1D45F508E7AEDA393AE72555148527E3ED3 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.DateTimeKind Mapbox.Json.Bson.BsonBinaryWriter::get_DateTimeKindHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_get_DateTimeKindHandling_m48A909892A9B9F7763DB0089B4AAC5267D3191A0_inline (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToLocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int64 Mapbox.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_mCB62B10EFD14F41A577BBAFED8F5EEB98E27716B (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, bool ___convertToUtc1, const RuntimeMethod* method) ;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeOffset_get_UtcDateTime_mE7EB39F361C89E1367CBC03C3410BA34F194DA40 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTimeOffset::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTimeOffset_get_Offset_mE90E2548227F1EE8BF4A6A5EB71B32D48D3035A4 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.Int64 Mapbox.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m219A7D77BAB7C622ED9C50C1BCC73AD70529AEDF (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___offset1, const RuntimeMethod* method) ;
// Mapbox.Json.Bson.BsonBinaryType Mapbox.Json.Bson.BsonBinary::get_BinaryType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BsonBinary_get_BinaryType_m5FED0D314A30309D1595CBB52EDE39073F3CA9CA_inline (BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* __this, const RuntimeMethod* method) ;
// Mapbox.Json.Bson.BsonString Mapbox.Json.Bson.BsonRegex::get_Pattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* BsonRegex_get_Pattern_m36879EB708797B79197B819554E1BD6A991A841E_inline (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, const RuntimeMethod* method) ;
// Mapbox.Json.Bson.BsonString Mapbox.Json.Bson.BsonRegex::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* BsonRegex_get_Options_m8F99D03B24CD4C983ADFA8B75F0132754FED99FC_inline (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::WriteUtf8Bytes(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteUtf8Bytes_mFA27694CFFDFFBD6FC3F4AF35F6D412919DAF6FE (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, String_t* ___s0, int32_t ___byteCount1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonToken::set_CalculatedSize(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_CalculatedSize_m08934C5720485BDB0A3FABFE97DA80DDC605DFD7_inline (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Mapbox.Json.Bson.BsonBinaryWriter::CalculateSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_mEFEDDFC7E9165635E236A13CFA2CB69017176673 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, int32_t ___stringByteCount0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonString::set_ByteCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonString_set_ByteCount_mE7E976EB6563475F6249A35DF1CF4CE9E5AEF6D4_inline (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Mapbox.Json.Bson.BsonString::get_IncludeLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BsonString_get_IncludeLength_m5C733F8EB1568A0E38BA95FF7672F2F78EEE8A32_inline (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.Json.Bson.BsonBinaryWriter::CalculateSizeWithLength(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSizeWithLength_mA079D616EF3B4D7D62A134E23D1AF7F7239B8706 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, int32_t ___stringByteCount0, bool ___includeSize1, const RuntimeMethod* method) ;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34 (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* __this, bool ___encoderShouldEmitUTF8Identifier0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonReader::.ctor(System.IO.Stream,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_mF3F4E3AD44A9E579AF2AC2F8BC481705346807B3 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___readRootValueAsArray1, int32_t ___dateTimeKindHandling2, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonReader::.ctor(System.IO.BinaryReader,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_mE15805E0F3C2CB416039A3B15A7BFC35A45C3B68 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, bool ___readRootValueAsArray1, int32_t ___dateTimeKindHandling2, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m48E8B7AF87AC569C8DCBB32B06D3A6671417623F (JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_m99B404ADE499F4D8BCC9A8637E084100E511C974 (RuntimeObject* ___value0, String_t* ___parameterName1, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonReader/ContainerContext>::.ctor()
inline void List_1__ctor_mBF2CD42F88092F5551C872CD1BA10F737A06B7B2 (List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonReader::ReadType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonReader_ReadType_m52779020C8A03268A8140FB74EB1598DB461C2EF (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// System.String Mapbox.Json.Bson.BsonReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadString_mA54F602BAA2FDB0AD41FF7072574828861EAC7F9 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// System.Boolean Mapbox.Json.Bson.BsonReader::ReadNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadNormal_m9147175D636209D3CACA0BEAE5213F079BB7AD2A (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// System.Boolean Mapbox.Json.Bson.BsonReader::ReadReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadReference_mCBDCEEEFF1D0F7F9D87CBFCB706FAF7C815F6ED5 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// System.Boolean Mapbox.Json.Bson.BsonReader::ReadCodeWScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadCodeWScope_m6EBE1D0B7690046ACBE5FD7F52D514703DB35550 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// Mapbox.Json.JsonReaderException Mapbox.Json.JsonReaderException::Create(Mapbox.Json.JsonReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonReaderException_tED5A0E30E25D1EFE42680402CE8351A159BAC007* JsonReaderException_Create_m8BC295B22A2C261A42958B82B77645CAF5E388F3 (JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonReader::SetToken(Mapbox.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB (JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* __this, int32_t ___newToken0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m32ECC89F2AB9357A99ACD71636F91C61A9FBBACE (JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* __this, const RuntimeMethod* method) ;
// System.Boolean Mapbox.Json.JsonReader::get_CloseInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_CloseInput_m51AE195DBA1B5EFF8B9DC87B3D0FF9571BEEC51F_inline (JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonReader::SetToken(Mapbox.Json.JsonToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD (JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* __this, int32_t ___newToken0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 Mapbox.Json.Bson.BsonReader::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_ReadInt32_m0808A5601A0BBDF2DE2C8D2B58E0A03925D21AB3 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// System.String Mapbox.Json.Bson.BsonReader::ReadLengthString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadLengthString_mE6DB085B50A41C1F69D3A1B420472B056B8D2646 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// Mapbox.Json.JsonReader/State Mapbox.Json.JsonReader::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_get_CurrentState_m99749CB261A0F139D62A50FC2BDA54C6D3CA5B64 (JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonReader/ContainerContext::.ctor(Mapbox.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerContext__ctor_mE3E21549280E431F9B1AB5CBE78910577C646870 (ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* __this, int8_t ___type0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonReader::PushContext(Mapbox.Json.Bson.BsonReader/ContainerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PushContext_m861B9ED1F9808B3AAEB9943A8B4EB9B59E7DA9B0 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* ___newContext0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Byte[] Mapbox.Json.Bson.BsonReader::ReadBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBytes_m9CEECA06D68C8DC08E4B3B2CC5FFDFC16D679B91 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonReader::ReadType(Mapbox.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_ReadType_m1B70D60EF5CAAF908B75DE000E91F598DEDD91FA (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, int8_t ___type0, const RuntimeMethod* method) ;
// System.String Mapbox.Json.Bson.BsonReader::ReadElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadElement_m5025348152E531BB91E24EFB32E95EE76489A67F (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// System.Byte Mapbox.Json.Bson.BsonReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonReader_ReadByte_mF0D4E581C3BAF383E21AA7C4E027B23008593EE3 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonReader::PopContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PopContext_mED4D9455A92EC49156FC3156EF7E8F8294FF4571 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonReader::MovePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_MovePosition_m14DB571E20E36B0BCE0485A52B6FCD8343605A5F (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, int32_t ___count0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonReader/ContainerContext>::get_Count()
inline int32_t List_1_get_Count_m2D70C9CFD69E7CAEE0090C6334556DAC28CFD77E_inline (List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonReader/ContainerContext>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mD6DADF9AA2F49BAACCDA3AA814DB55A684955CD5 (List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonReader/ContainerContext>::get_Item(System.Int32)
inline ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* List_1_get_Item_m203422A8DB100660FCB294F26F074EEF2F9E2E0D (List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* (*) (List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonReader/ContainerContext>::Add(T)
inline void List_1_Add_m3D41BD78797E29AAF6FDE9479F91472F7B516A38_inline (List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* __this, ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4*, ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Double Mapbox.Json.Bson.BsonReader::ReadDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BsonReader_ReadDouble_m468806A237F1F78466D91B23F14B3C4F958CA106 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m2A6822B7BCB33F60B9425C58248111D316C3FE4C (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Byte[] Mapbox.Json.Bson.BsonReader::ReadBinary(Mapbox.Json.Bson.BsonBinaryType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBinary_mAE7FCA9E107889C9890FED43D84426E3D7295066 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, uint8_t* ___binaryType0, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C (Guid_t* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m6148BAC617B69CACDF14A8C74836767DFF0CB6A9 (uint8_t ___value0, const RuntimeMethod* method) ;
// System.Int64 Mapbox.Json.Bson.BsonReader::ReadInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BsonReader_ReadInt64_mDFBE1E9B059A76464EFCA61D746CDD830F802DA6 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// System.DateTime Mapbox.Json.Utilities.DateTimeUtils::ConvertJavaScriptTicksToDateTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeUtils_ConvertJavaScriptTicksToDateTime_m8B22AC356D0C625FE6CBE1F7B3E4897929A7AE25 (int64_t ___javaScriptTicks0, const RuntimeMethod* method) ;
// System.DateTimeKind Mapbox.Json.Bson.BsonReader::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_get_DateTimeKindHandling_mF9DC49C4358FF1485FDABD37FAF93BE67894EA40 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_SpecifyKind_mFC3F6DD6AD017F62A8AF81DAD5620AEC474871D0 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, int32_t ___kind1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonReader::EnsureBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_EnsureBuffers_m572A8A900F5CED85B8236AE0B63764B92E0FCDBF (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 Mapbox.Json.Bson.BsonReader::GetLastFullCharStop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_GetLastFullCharStop_m748DE4E99A97333563675AF442F0134F403A1186 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747 (StringBuilder_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.String Mapbox.Json.Bson.BsonReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_GetString_m00C1730E16CE2E31B37E33594E4A8EAFA576AC78 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, int32_t ___length0, const RuntimeMethod* method) ;
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Mapbox.Json.Bson.BsonReader::BytesInSequence(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_BytesInSequence_mDA09FEBFB6B41F2CF1A3E88D0CC3D2B6FFB82015 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, uint8_t ___b0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty__ctor_m195E1E9968634BD126A898538B15CF4FD951B991 (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonString::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString__ctor_m9B6A87F650F0F55CCDDAD2408A4196EB5C83477D (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* __this, RuntimeObject* ___value0, bool ___includeLength1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonProperty::set_Name(Mapbox.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Name_m4E44D5817F32C0A44B53049CE0E9860A3529F4DF_inline (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonProperty::set_Value(Mapbox.Json.Bson.BsonToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m6262FA6F4DB2A07775283502E1C601C86BE22347_inline (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonProperty>::Add(T)
inline void List_1_Add_m35D4FAE86E88A7DFD8DCC32E6B9BDBA79141334A_inline (List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48* __this, BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48*, BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Mapbox.Json.Bson.BsonToken::set_Parent(Mapbox.Json.Bson.BsonToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m040E360901B30DD918486B8B77556931A6CF2B78_inline (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonProperty>::GetEnumerator()
inline Enumerator_t3F0EA0DDCA13A266C5D30DF4D35193EFBF1083D2 List_1_GetEnumerator_mEE052C4A26B9352C73A0229B08AA14054C4BC6AF (List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3F0EA0DDCA13A266C5D30DF4D35193EFBF1083D2 (*) (List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonProperty>::.ctor()
inline void List_1__ctor_m33E80F76CCFF196C5E4AEE6E13F6DD76AA352844 (List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Mapbox.Json.Bson.BsonToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken__ctor_m052A50AE983053F05E062FA78E90470B07DA30A4 (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonToken>::Add(T)
inline void List_1_Add_mA7020313AEBA9E4A7DAE503DBCAEFE672F00F84F_inline (List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50*, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonToken>::GetEnumerator()
inline Enumerator_tF45EB5F17668BC1F66862376D62AAC21E48E7C50 List_1_GetEnumerator_m0D3124CA3C28FBB1BFF01F565F63CE4F138FB3CF (List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF45EB5F17668BC1F66862376D62AAC21E48E7C50 (*) (List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mapbox.Json.Bson.BsonToken>::.ctor()
inline void List_1__ctor_m7D18F4DC373A3FE92B8F971B6989D9BF873955DC (List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Mapbox.Json.Bson.BsonEmpty::.ctor(Mapbox.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonEmpty__ctor_m7A84DA77F889B6BD28AA759A161A47F3ED5D940C (BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5* __this, int8_t ___type0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonValue::.ctor(System.Object,Mapbox.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonValue__ctor_m2DF71672FC8A566BCC9CFDD95098CE638A80EB17 (BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* __this, RuntimeObject* ___value0, int8_t ___type1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonBoolean::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBoolean__ctor_m2F89DFF1EBC0DC102A6EB9564B24CC01FF5B2155 (BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonBinary::set_BinaryType(Mapbox.Json.Bson.BsonBinaryType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinary_set_BinaryType_m23CE616B32B60E52F61256013D7F19BF3ED84408_inline (BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonRegex::set_Pattern(Mapbox.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_mE0B87BC70E119C6E9128D09A9FB074125DF147D2_inline (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonRegex::set_Options(Mapbox.Json.Bson.BsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m9FCF2D68FE87670FC2B423CE7F721F5A070F9879_inline (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m7ED56DB8C6FB174E30D25083B51AC5F858B42380 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::.ctor(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter__ctor_m6CE085BC6C16558994487190540171174366D41A (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Flush_m9F56DDD029DD4F398F9793EB94F9D464738FBA98 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteEnd(Mapbox.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteEnd_m168045378C9132FE9ACA70BE631D5351B3C8B1DE (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, int32_t ___token0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonWriter::RemoveParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_RemoveParent_m8553CD2269A82D3826B797C20989684B11DD3EB0 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, const RuntimeMethod* method) ;
// System.Int32 Mapbox.Json.JsonWriter::get_Top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriter_get_Top_mFF452D8D0D5DFE88183204E374CCDDA8138F883B (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::WriteToken(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteToken_mF1E488619C95DE9AD32A619C2ECED1E6DA6EDF50 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___t0, const RuntimeMethod* method) ;
// Mapbox.Json.JsonWriterException Mapbox.Json.JsonWriterException::Create(Mapbox.Json.JsonWriter,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonWriterException_t64203323809F24258C2DD39887A1143A8B490FCB* JsonWriterException_Create_mD009AB0881993AF9E5BF137CDEDC40632B67E5C5 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* ___writer0, String_t* ___message1, Exception_t* ___ex2, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteStartArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteStartArray_m460470C000D464EFE4AE7F23D48530081E0A1DA8 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray__ctor_m68B265DD70752AA8BA2CBBB31908C8A1B92B9BDE (BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonWriter::AddParent(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddParent_mE4102DF064DA38D78B170103FF8779CE32B6ED47 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___container0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteStartObject_m52674465141534624E0B0E7AAAE207C113651AAB (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject__ctor_m6EAD0EED9FBD7F7F245FD906568370BD8A5B287F (BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m95AAA36B54E9383F8311E02D0F2076DCCAD2DD86 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Close_m82BDEB4F8C7087BE9B5840B986D66F6B470C9A1C (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, const RuntimeMethod* method) ;
// System.Boolean Mapbox.Json.JsonWriter::get_CloseOutput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_CloseOutput_m3ACB637809C079F2607259E59A17B6638D481891_inline (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Close_m09BEDDEBE87FB047DA4A52BBD20621BF509E3CA7 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonWriter::AddToken(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___token0, const RuntimeMethod* method) ;
// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonToken::get_Parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* BsonToken_get_Parent_mE73528DB8EB7A79693941A6C276F7B61F0B0AAFE_inline (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonObject::Add(System.String,Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject_Add_mC64442319636E991D2A72E8A8C88C9F2D37F83ED (BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* __this, String_t* ___name0, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___token1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonArray::Add(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray_Add_m77D71CE3EC7509A0423014251320BE19E81FA8B5 (BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___token0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m57D0245FD258312645471B3BAAB9EFC879636B94 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteNull_m79158BFFC7088255E6EBECBBD461F52FDFD3C152 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteUndefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteUndefined_mD4D7F40BA3AD0620A803CB91812D371CB7493031 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m327941C893EB04ED3743B135DCE2DA8076D81293 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m8B24BE5094BFB45664DCDF33CCBB292B631975CB (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonWriter::AddValue(System.Object,Mapbox.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, RuntimeObject* ___value0, int8_t ___type1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mF8442D41D1EB788EF87D381DF8186EE825CB9BC4 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mFBCCE6E0D7A024055D2E32835ADE24123C8DE558 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m757D59315B2410B145DFB168BDF6C1AA435B1E1E (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mA43F0B47117AF435383945F89A607F7C3A89ABE8 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m1D0605644D4FEC35B8DB362E1EC745931A6A1F57 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m06A36155A2625050723D29B7094B61A54342CC23 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mC84022E01C5321B0F6CBCA8C3B3E00D2C3E18C29 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, int16_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mE7EFE86FC8D53A20D8EA400EF981F96F30232CA5 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m234B67022A6DC905CE61FA2B843DEE44C67D5E7D (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.Char::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m34499826F048A38EB8216D5844A5DA49F54719C8 (Il2CppChar* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mACD2E6ADD9639D2376CDED38F8488C6C939BE386 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mA7CBE33F2D802A843DFEAD545F669D1E66D6E055 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, int8_t ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m624570D7886863EE6FD6379BB7CB3B137D126A7B (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m7B36690404B526044BFB08006CFD0B9E4C4B3324 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// Mapbox.Json.DateTimeZoneHandling Mapbox.Json.JsonWriter::get_DateTimeZoneHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriter_get_DateTimeZoneHandling_m1F2F7F73014392B7B0C81951D27F79937B2937DF (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, const RuntimeMethod* method) ;
// System.DateTime Mapbox.Json.Utilities.DateTimeUtils::EnsureDateTime(System.DateTime,Mapbox.Json.DateTimeZoneHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeUtils_EnsureDateTime_mCF4EF2B9FEF732DF77DC9DF932A30F85D345D16D (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, int32_t ___timeZone1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m935DF5A62B016C7CCEEE269172BEC92DD72FB5CC (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mAD94EEA70AB5A9CF063DBE740B42439D937AF3CE (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonBinary::.ctor(System.Byte[],Mapbox.Json.Bson.BsonBinaryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinary__ctor_m1D7304B7DC2E5EB27DDCF48069334EE415056017 (BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, uint8_t ___binaryType1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mCF5C669D03F88A045C1AB51B399CA5FBA11F6CEE (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, Guid_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.Guid::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m9F9A72D76B4BF3C804D75198E745A1D62840564F (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.String System.TimeSpan::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeSpan_ToString_m44D5BF48E35E18BB8B99A86B6535DA5E847FFE92 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Equality_mD7D7AAB7023C0873B37D8B8C7195BEF34002A194 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri10, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri21, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::WriteValue(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m220B3B8AF44D9E16462F7242FC9D99C7B5DD5F9C (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::UpdateScopeWithFinishedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_UpdateScopeWithFinishedValue_mAA5018ABDE05337A6AEC2DDBC36F2F7A1F2E3D2F (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.JsonWriter::AutoComplete(Mapbox.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_AutoComplete_mFA90823128389B616765C32C2A9BF2B9FA68C4D2 (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, int32_t ___tokenBeingWritten0, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonRegex::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex__ctor_m826B79D0D51E405BA482E0DCADA290E632C84AFF (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, String_t* ___pattern0, String_t* ___options1, const RuntimeMethod* method) ;
// System.Void Mapbox.Json.Bson.BsonObjectId::set_Value(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonObjectId_set_Value_mB2CBEAD50CC497F3A233A8E7487F1CEAACC2F196_inline (BsonObjectId_t768D77472D02C64230C469A2609D5F10920D915B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.Json.Converters.XmlDocumentWrapper::.ctor(System.Xml.XmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocumentWrapper__ctor_mEB02EE61CB0E9FB4C2E9FDCA1B753A374F2762E1 (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___document0, const RuntimeMethod* method) 
{
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = ___document0;
		XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0(__this, L_0, NULL);
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_1 = ___document0;
		__this->____document_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____document_3), (void*)L_1);
		return;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlDocumentWrapper::CreateComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateComment_m98ECFB1D8649DB59743EC279D158AA71870F928D (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___data0;
		NullCheck(L_0);
		XmlComment_tD3C4E7E2E90A8CA25C46D2616BCF138D40072AD9* L_2;
		L_2 = VirtualFuncInvoker1< XmlComment_tD3C4E7E2E90A8CA25C46D2616BCF138D40072AD9*, String_t* >::Invoke(60 /* System.Xml.XmlComment System.Xml.XmlDocument::CreateComment(System.String) */, L_0, L_1);
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_3 = (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3*)il2cpp_codegen_object_new(XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0(L_3, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlDocumentWrapper::CreateTextNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateTextNode_m4635C8835E9E120A6FF8D5B18892960C998B1D20 (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A* L_2;
		L_2 = VirtualFuncInvoker1< XmlText_t30AEB94C64DEFEE255D907869C96FDD25C6E812A*, String_t* >::Invoke(66 /* System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String) */, L_0, L_1);
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_3 = (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3*)il2cpp_codegen_object_new(XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0(L_3, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlDocumentWrapper::CreateCDataSection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateCDataSection_m596F8F774B4B83E46DF4E2FC3CC6D6D3C13AE9FD (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___data0;
		NullCheck(L_0);
		XmlCDataSection_t2D6B8A6CFF3ACB0BD27368A8D5A56FD674B1E8CA* L_2;
		L_2 = VirtualFuncInvoker1< XmlCDataSection_t2D6B8A6CFF3ACB0BD27368A8D5A56FD674B1E8CA*, String_t* >::Invoke(59 /* System.Xml.XmlCDataSection System.Xml.XmlDocument::CreateCDataSection(System.String) */, L_0, L_1);
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_3 = (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3*)il2cpp_codegen_object_new(XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0(L_3, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlDocumentWrapper::CreateWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateWhitespace_m066FED029ECB15B68183FEB5F02051EA641ED015 (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24* L_2;
		L_2 = VirtualFuncInvoker1< XmlWhitespace_t19767FEBC987857ADED0437FC1554F86E7D00D24*, String_t* >::Invoke(68 /* System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String) */, L_0, L_1);
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_3 = (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3*)il2cpp_codegen_object_new(XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0(L_3, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlDocumentWrapper::CreateSignificantWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateSignificantWhitespace_mEFE45871A6E664579CB7173DF4737491C2DE83F6 (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE* L_2;
		L_2 = VirtualFuncInvoker1< XmlSignificantWhitespace_t43EAA36EF021A2B6DBD9FA49B85501A43BE9CBCE*, String_t* >::Invoke(67 /* System.Xml.XmlSignificantWhitespace System.Xml.XmlDocument::CreateSignificantWhitespace(System.String) */, L_0, L_1);
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_3 = (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3*)il2cpp_codegen_object_new(XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0(L_3, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlDocumentWrapper::CreateXmlDeclaration(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateXmlDeclaration_mB834775A3E7F8D3ECA1369F9E2FCC70A0FC289D7 (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, String_t* ___version0, String_t* ___encoding1, String_t* ___standalone2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___version0;
		String_t* L_2 = ___encoding1;
		String_t* L_3 = ___standalone2;
		NullCheck(L_0);
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_4;
		L_4 = VirtualFuncInvoker3< XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79*, String_t*, String_t*, String_t* >::Invoke(65 /* System.Xml.XmlDeclaration System.Xml.XmlDocument::CreateXmlDeclaration(System.String,System.String,System.String) */, L_0, L_1, L_2, L_3);
		XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E* L_5 = (XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E*)il2cpp_codegen_object_new(XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XmlDeclarationWrapper__ctor_m9FDDDA0FBD82CEAF8FF3C6256D851FFCD6B5C85F(L_5, L_4, NULL);
		V_0 = L_5;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlDocumentWrapper::CreateXmlDocumentType(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateXmlDocumentType_m2A3EB03C9CFC670179679C0A1EC723096F71DC60 (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___name0;
		String_t* L_2 = ___publicId1;
		String_t* L_3 = ___systemId2;
		NullCheck(L_0);
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_4;
		L_4 = VirtualFuncInvoker4< XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E*, String_t*, String_t*, String_t*, String_t* >::Invoke(61 /* System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(System.String,System.String,System.String,System.String) */, L_0, L_1, L_2, L_3, (String_t*)NULL);
		XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2* L_5 = (XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2*)il2cpp_codegen_object_new(XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XmlDocumentTypeWrapper__ctor_mD321B23EDA79640A11AE168CCA6DEC4064303D13(L_5, L_4, NULL);
		V_0 = L_5;
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlDocumentWrapper::CreateProcessingInstruction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateProcessingInstruction_m532AB3D2A59010318FF145F4FA3B25FA628AB41A (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, String_t* ___target0, String_t* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___target0;
		String_t* L_2 = ___data1;
		NullCheck(L_0);
		XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3* L_3;
		L_3 = VirtualFuncInvoker2< XmlProcessingInstruction_t8182CD263F29029BCB56A5FBB720DEB0D51EA5A3*, String_t*, String_t* >::Invoke(64 /* System.Xml.XmlProcessingInstruction System.Xml.XmlDocument::CreateProcessingInstruction(System.String,System.String) */, L_0, L_1, L_2);
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_4 = (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3*)il2cpp_codegen_object_new(XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0(L_4, L_3, NULL);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Mapbox.Json.Converters.IXmlElement Mapbox.Json.Converters.XmlDocumentWrapper::CreateElement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateElement_mCC483E0E8097B709F77F297870E6A036E8FBCECF (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, String_t* ___elementName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___elementName0;
		NullCheck(L_0);
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_2;
		L_2 = XmlDocument_CreateElement_m4CFE00BFBBAE8805B2E5B7566E7C896334092E93(L_0, L_1, NULL);
		XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64* L_3 = (XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64*)il2cpp_codegen_object_new(XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlElementWrapper__ctor_m714BAB9651F0643A4F5A82CD00B6DA34CC04C47B(L_3, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Mapbox.Json.Converters.IXmlElement Mapbox.Json.Converters.XmlDocumentWrapper::CreateElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateElement_mBA7B1B9C451343329A55FA1D19C869FC93E3A8D4 (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, String_t* ___qualifiedName0, String_t* ___namespaceUri1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___qualifiedName0;
		String_t* L_2 = ___namespaceUri1;
		NullCheck(L_0);
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_3;
		L_3 = XmlDocument_CreateElement_m4180DF31B3B4CD8516B7881494D99720648BD95B(L_0, L_1, L_2, NULL);
		XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64* L_4 = (XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64*)il2cpp_codegen_object_new(XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XmlElementWrapper__ctor_m714BAB9651F0643A4F5A82CD00B6DA34CC04C47B(L_4, L_3, NULL);
		V_0 = L_4;
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlDocumentWrapper::CreateAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateAttribute_mEF0539DDF599250B978F9C7FFAFB401185C07164 (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_2;
		L_2 = XmlDocument_CreateAttribute_m42F583C11D788DB6E7B1C2EFAF112CB0C6118D06(L_0, L_1, NULL);
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_3 = (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3*)il2cpp_codegen_object_new(XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0(L_3, L_2, NULL);
		V_0 = L_3;
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_4 = V_0;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		XmlNodeWrapper_set_Value_m72A8EF4DDA642C556975B212D232C761F7CE980B(L_4, L_5, NULL);
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_6 = V_0;
		V_1 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlDocumentWrapper::CreateAttribute(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_CreateAttribute_m4B56C6B6635386586067FE2A8D5507D887824CF9 (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, String_t* ___qualifiedName0, String_t* ___namespaceUri1, String_t* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		String_t* L_1 = ___qualifiedName0;
		String_t* L_2 = ___namespaceUri1;
		NullCheck(L_0);
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_3;
		L_3 = XmlDocument_CreateAttribute_m5DC489B6B051905264E2FD30A58CD380337D2F18(L_0, L_1, L_2, NULL);
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_4 = (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3*)il2cpp_codegen_object_new(XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0(L_4, L_3, NULL);
		V_0 = L_4;
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_5 = V_0;
		String_t* L_6 = ___value2;
		NullCheck(L_5);
		XmlNodeWrapper_set_Value_m72A8EF4DDA642C556975B212D232C761F7CE980B(L_5, L_6, NULL);
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_7 = V_0;
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_8 = V_1;
		return L_8;
	}
}
// Mapbox.Json.Converters.IXmlElement Mapbox.Json.Converters.XmlDocumentWrapper::get_DocumentElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlDocumentWrapper_get_DocumentElement_m8DC787AA078BAAFAD77B9EDED72D9CC6197EC19D (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_0 = __this->____document_3;
		NullCheck(L_0);
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_1;
		L_1 = XmlDocument_get_DocumentElement_mE87523DCD2D59F8BA6175DBA01D70133E202A2C8(L_0, NULL);
		V_0 = (bool)((((RuntimeObject*)(XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_1 = (RuntimeObject*)NULL;
		goto IL_002b;
	}

IL_0018:
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_3 = __this->____document_3;
		NullCheck(L_3);
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_4;
		L_4 = XmlDocument_get_DocumentElement_mE87523DCD2D59F8BA6175DBA01D70133E202A2C8(L_3, NULL);
		XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64* L_5 = (XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64*)il2cpp_codegen_object_new(XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XmlElementWrapper__ctor_m714BAB9651F0643A4F5A82CD00B6DA34CC04C47B(L_5, L_4, NULL);
		V_1 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
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
// System.Void Mapbox.Json.Converters.XmlElementWrapper::.ctor(System.Xml.XmlElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementWrapper__ctor_m714BAB9651F0643A4F5A82CD00B6DA34CC04C47B (XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64* __this, XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* ___element0, const RuntimeMethod* method) 
{
	{
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_0 = ___element0;
		XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0(__this, L_0, NULL);
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_1 = ___element0;
		__this->____element_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____element_3), (void*)L_1);
		return;
	}
}
// System.Void Mapbox.Json.Converters.XmlElementWrapper::SetAttributeNode(Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementWrapper_SetAttributeNode_mAD44411A1509694DE42E60907A5C29EF6FB7C532 (XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64* __this, RuntimeObject* ___attribute0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___attribute0;
		V_0 = ((XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3*)CastclassClass((RuntimeObject*)L_0, XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var));
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_1 = __this->____element_3;
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = XmlNodeWrapper_get_WrappedNode_m21C31BA1FEDAF91F4E47EC76315D8B71C7B8E6FA(L_2, NULL);
		NullCheck(L_1);
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_4;
		L_4 = VirtualFuncInvoker1< XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18*, XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* >::Invoke(60 /* System.Xml.XmlAttribute System.Xml.XmlElement::SetAttributeNode(System.Xml.XmlAttribute) */, L_1, ((XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18*)CastclassClass((RuntimeObject*)L_3, XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.String Mapbox.Json.Converters.XmlElementWrapper::GetPrefixOfNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlElementWrapper_GetPrefixOfNamespace_mD7873981A97B9D4235F86F41BA83D5622C4A7307 (XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64* __this, String_t* ___namespaceUri0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_0 = __this->____element_3;
		String_t* L_1 = ___namespaceUri0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(46 /* System.String System.Xml.XmlNode::GetPrefixOfNamespace(System.String) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Mapbox.Json.Converters.XmlElementWrapper::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlElementWrapper_get_IsEmpty_m883A3501882E15340472B40C4B3193DAFEAAA243 (XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_0 = __this->____element_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = XmlElement_get_IsEmpty_m3FD670ABE3BE49AF263E1B75875FA606CC671B5F(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
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
// System.Void Mapbox.Json.Converters.XmlDeclarationWrapper::.ctor(System.Xml.XmlDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclarationWrapper__ctor_m9FDDDA0FBD82CEAF8FF3C6256D851FFCD6B5C85F (XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E* __this, XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* ___declaration0, const RuntimeMethod* method) 
{
	{
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_0 = ___declaration0;
		XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0(__this, L_0, NULL);
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_1 = ___declaration0;
		__this->____declaration_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____declaration_3), (void*)L_1);
		return;
	}
}
// System.String Mapbox.Json.Converters.XmlDeclarationWrapper::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDeclarationWrapper_get_Version_mFDA4B2E8AEF09317C98ED55352CC89D275D32CAE (XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_0 = __this->____declaration_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlDeclaration_get_Version_m50261F1E46B645E69A99504F494FFD3BF915E633_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Mapbox.Json.Converters.XmlDeclarationWrapper::get_Encoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDeclarationWrapper_get_Encoding_m863C069420C8CC1B7E0043870C73E7CA054B914D (XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_0 = __this->____declaration_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlDeclaration_get_Encoding_m09D89DCD8457C62A6E49B9506A65A271DDBD011F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Converters.XmlDeclarationWrapper::set_Encoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclarationWrapper_set_Encoding_m87D676A764B5BDB102A6A21E15F10C67E3A245F1 (XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_0 = __this->____declaration_3;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XmlDeclaration_set_Encoding_m743178C17460B204CFFEFFC0960A77E4A6289A8B(L_0, L_1, NULL);
		return;
	}
}
// System.String Mapbox.Json.Converters.XmlDeclarationWrapper::get_Standalone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDeclarationWrapper_get_Standalone_mB94DD63F1E8F0562B0397B97F0FF1512D50B08FC (XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_0 = __this->____declaration_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlDeclaration_get_Standalone_m46CC1833EE3C478318FF865E98A6899E440DDC6C_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Converters.XmlDeclarationWrapper::set_Standalone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclarationWrapper_set_Standalone_m9B0F50B8633857ED2018405C453ED0B4FDF7A97E (XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* L_0 = __this->____declaration_3;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XmlDeclaration_set_Standalone_m867389C9FBF0064E3FDA7EBDEAD4CF30E84F49C2(L_0, L_1, NULL);
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
// System.Void Mapbox.Json.Converters.XmlDocumentTypeWrapper::.ctor(System.Xml.XmlDocumentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocumentTypeWrapper__ctor_mD321B23EDA79640A11AE168CCA6DEC4064303D13 (XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2* __this, XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* ___documentType0, const RuntimeMethod* method) 
{
	{
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_0 = ___documentType0;
		XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0(__this, L_0, NULL);
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_1 = ___documentType0;
		__this->____documentType_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____documentType_3), (void*)L_1);
		return;
	}
}
// System.String Mapbox.Json.Converters.XmlDocumentTypeWrapper::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentTypeWrapper_get_Name_mFE48623DF471999910FC474AA0EC8F6C711A9EDB (XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_0 = __this->____documentType_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlNode::get_Name() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Mapbox.Json.Converters.XmlDocumentTypeWrapper::get_System()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentTypeWrapper_get_System_m097A8286371D097009C8248AAC8C8DCF943B14F8 (XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_0 = __this->____documentType_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Mapbox.Json.Converters.XmlDocumentTypeWrapper::get_Public()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentTypeWrapper_get_Public_m9BFCB8EF1630DFDD2DA5CCFDE00CD9E4C667D285 (XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_0 = __this->____documentType_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Mapbox.Json.Converters.XmlDocumentTypeWrapper::get_InternalSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentTypeWrapper_get_InternalSubset_m1F70A7E8982B25A95F5CC6ED11F7BB45A3626EA1 (XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* L_0 = __this->____documentType_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Mapbox.Json.Converters.XmlDocumentTypeWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlDocumentTypeWrapper_get_LocalName_m98B8CC6FA5FC361818D8AE1C8F232FBDF4152556 (XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2923AF57406AD3628AA00F2F47378348C0E89B4C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteral2923AF57406AD3628AA00F2F47378348C0E89B4C;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_0 = V_0;
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
// System.Void Mapbox.Json.Converters.XmlNodeWrapper::.ctor(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0 (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___node0;
		__this->____node_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____node_0), (void*)L_0);
		return;
	}
}
// System.Object Mapbox.Json.Converters.XmlNodeWrapper::get_WrappedNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_get_WrappedNode_m21C31BA1FEDAF91F4E47EC76315D8B71C7B8E6FA (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Xml.XmlNodeType Mapbox.Json.Converters.XmlNodeWrapper::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeWrapper_get_NodeType_mA8DE5CE354D0D44D93343F84CF7FB3DB82ECE53F (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.String Mapbox.Json.Converters.XmlNodeWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeWrapper_get_LocalName_mB32B445453EAC60CC162D2999E8E42440E8E160A (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(36 /* System.String System.Xml.XmlNode::get_LocalName() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XmlNodeWrapper::get_ChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* XmlNodeWrapper_get_ChildNodes_mA610AA031B898D0DCCBD50C2202905E086905ED1 (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA4D2C31AFD0DD873964EFF962E2FF218AE55BEF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* V_5 = NULL;
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_0 = __this->____childNodes_1;
		V_0 = (bool)((((RuntimeObject*)(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00a4;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = __this->____node_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Xml.XmlNode::get_HasChildNodes() */, L_2);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_5 = ((XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var))->___EmptyChildNodes_0;
		__this->____childNodes_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childNodes_1), (void*)L_5);
		goto IL_00a3;
	}

IL_0033:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = __this->____node_0;
		NullCheck(L_6);
		XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* L_7;
		L_7 = VirtualFuncInvoker0< XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* >::Invoke(11 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_6);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_7);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_9 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)il2cpp_codegen_object_new(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_mA4D2C31AFD0DD873964EFF962E2FF218AE55BEF8(L_9, L_8, List_1__ctor_mA4D2C31AFD0DD873964EFF962E2FF218AE55BEF8_RuntimeMethod_var);
		__this->____childNodes_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childNodes_1), (void*)L_9);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_10 = __this->____node_0;
		NullCheck(L_10);
		XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* L_11;
		L_11 = VirtualFuncInvoker0< XmlNodeList_tFC0CEED3A006BEDF6A1A420F7CB55AC33E9B7F85* >::Invoke(11 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_10);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_11);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_13 = V_2;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_14 = V_4;
					if (!L_14)
					{
						goto IL_00a1;
					}
				}
				{
					RuntimeObject* L_15 = V_4;
					NullCheck(L_15);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
				}

IL_00a1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0083_1;
			}

IL_0063_1:
			{
				RuntimeObject* L_16 = V_2;
				NullCheck(L_16);
				RuntimeObject* L_17;
				L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				V_3 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)CastclassClass((RuntimeObject*)L_17, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var));
				List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_18 = __this->____childNodes_1;
				XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_19 = V_3;
				RuntimeObject* L_20;
				L_20 = XmlNodeWrapper_WrapNode_m2D7E269564290F8F1DE7689247650CB65C097E6E(L_19, NULL);
				NullCheck(L_18);
				List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_inline(L_18, L_20, List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
			}

IL_0083_1:
			{
				RuntimeObject* L_21 = V_2;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_0063_1;
				}
			}
			{
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
	}

IL_00a3:
	{
	}

IL_00a4:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_23 = __this->____childNodes_1;
		V_5 = L_23;
		goto IL_00ae;
	}

IL_00ae:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_24 = V_5;
		return L_24;
	}
}
// System.Boolean Mapbox.Json.Converters.XmlNodeWrapper::get_HasChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeWrapper_get_HasChildNodes_m21300C07F23314850D0986737BF16B6BB498843C (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Xml.XmlNode::get_HasChildNodes() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlNodeWrapper::WrapNode(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_WrapNode_m2D7E269564290F8F1DE7689247650CB65C097E6E (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = ___node0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)10))))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_0046;
	}

IL_001c:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5 = ___node0;
		XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64* L_6 = (XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64*)il2cpp_codegen_object_new(XmlElementWrapper_t4C8BA457D1A7DFC58B96BDFAB2081211E5A9CE64_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlElementWrapper__ctor_m714BAB9651F0643A4F5A82CD00B6DA34CC04C47B(L_6, ((XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1*)CastclassClass((RuntimeObject*)L_5, XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_6;
		goto IL_004f;
	}

IL_002a:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_7 = ___node0;
		XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E* L_8 = (XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E*)il2cpp_codegen_object_new(XmlDeclarationWrapper_t84DE56F3E8E3E71DE7C8C530E0CA9FDE16C2DF3E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		XmlDeclarationWrapper__ctor_m9FDDDA0FBD82CEAF8FF3C6256D851FFCD6B5C85F(L_8, ((XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79*)CastclassClass((RuntimeObject*)L_7, XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_8;
		goto IL_004f;
	}

IL_0038:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_9 = ___node0;
		XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2* L_10 = (XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2*)il2cpp_codegen_object_new(XmlDocumentTypeWrapper_t841476605EC1E67B57C284EB40547FB9ACD4E3E2_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		XmlDocumentTypeWrapper__ctor_mD321B23EDA79640A11AE168CCA6DEC4064303D13(L_10, ((XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E*)CastclassClass((RuntimeObject*)L_9, XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_10;
		goto IL_004f;
	}

IL_0046:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_11 = ___node0;
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_12 = (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3*)il2cpp_codegen_object_new(XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		XmlNodeWrapper__ctor_m57BBF225C3B63CA8BEAF8D7187EC04DF892CB9D0(L_12, L_11, NULL);
		V_1 = L_12;
		goto IL_004f;
	}

IL_004f:
	{
		RuntimeObject* L_13 = V_1;
		return L_13;
	}
}
// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XmlNodeWrapper::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* XmlNodeWrapper_get_Attributes_m61B78C7064B8D888C032EB05C5AAB937CFA1C663 (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA4D2C31AFD0DD873964EFF962E2FF218AE55BEF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* V_5 = NULL;
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_0 = __this->____attributes_2;
		V_0 = (bool)((((RuntimeObject*)(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_009f;
		}
	}
	{
		bool L_2;
		L_2 = XmlNodeWrapper_get_HasAttributes_m1779D5EC9E16009CDFF52BEBF8E219FB8B87038B(__this, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_4 = ((XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var))->___EmptyChildNodes_0;
		__this->____attributes_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)L_4);
		goto IL_009e;
	}

IL_002e:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5 = __this->____node_0;
		NullCheck(L_5);
		XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* L_6;
		L_6 = VirtualFuncInvoker0< XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* >::Invoke(14 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_5);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlNamedNodeMap::get_Count() */, L_6);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_8 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)il2cpp_codegen_object_new(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_mA4D2C31AFD0DD873964EFF962E2FF218AE55BEF8(L_8, L_7, List_1__ctor_mA4D2C31AFD0DD873964EFF962E2FF218AE55BEF8_RuntimeMethod_var);
		__this->____attributes_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)L_8);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_9 = __this->____node_0;
		NullCheck(L_9);
		XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* L_10;
		L_10 = VirtualFuncInvoker0< XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* >::Invoke(14 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::GetEnumerator() */, L_10);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0088:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_12 = V_2;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_13 = V_4;
					if (!L_13)
					{
						goto IL_009c;
					}
				}
				{
					RuntimeObject* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_009c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007e_1;
			}

IL_005e_1:
			{
				RuntimeObject* L_15 = V_2;
				NullCheck(L_15);
				RuntimeObject* L_16;
				L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				V_3 = ((XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18*)CastclassClass((RuntimeObject*)L_16, XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var));
				List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_17 = __this->____attributes_2;
				XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_18 = V_3;
				RuntimeObject* L_19;
				L_19 = XmlNodeWrapper_WrapNode_m2D7E269564290F8F1DE7689247650CB65C097E6E(L_18, NULL);
				NullCheck(L_17);
				List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_inline(L_17, L_19, List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
			}

IL_007e_1:
			{
				RuntimeObject* L_20 = V_2;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_005e_1;
				}
			}
			{
				goto IL_009d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
	}

IL_009e:
	{
	}

IL_009f:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_22 = __this->____attributes_2;
		V_5 = L_22;
		goto IL_00a9;
	}

IL_00a9:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_23 = V_5;
		return L_23;
	}
}
// System.Boolean Mapbox.Json.Converters.XmlNodeWrapper::get_HasAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeWrapper_get_HasAttributes_m1779D5EC9E16009CDFF52BEBF8E219FB8B87038B (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* G_B4_0 = NULL;
	XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		V_0 = ((XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1*)IsInstClass((RuntimeObject*)L_0, XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1_il2cpp_TypeInfo_var));
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(56 /* System.Boolean System.Xml.XmlElement::get_HasAttributes() */, L_3);
		V_2 = L_4;
		goto IL_003c;
	}

IL_001f:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_5 = __this->____node_0;
		NullCheck(L_5);
		XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* L_6;
		L_6 = VirtualFuncInvoker0< XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* >::Invoke(14 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_5);
		XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0031;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0039;
	}

IL_0031:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlNamedNodeMap::get_Count() */, G_B4_0);
		G_B5_0 = ((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
	}

IL_0039:
	{
		V_2 = (bool)G_B5_0;
		goto IL_003c;
	}

IL_003c:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlNodeWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_get_ParentNode_mA5C02D2CAE65C8941DD9C23237983B87D938BD70 (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* V_0 = NULL;
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* G_B3_0 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		V_0 = ((XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18*)IsInstClass((RuntimeObject*)L_0, XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18_il2cpp_TypeInfo_var));
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_1 = V_0;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_2 = __this->____node_0;
		NullCheck(L_2);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3;
		L_3 = VirtualFuncInvoker0< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(10 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_2);
		G_B3_0 = L_3;
		goto IL_0023;
	}

IL_001d:
	{
		XmlAttribute_t4B6CC461196FBF5CC9F777E74CC82C98E0CA9D18* L_4 = V_0;
		NullCheck(L_4);
		XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_5;
		L_5 = VirtualFuncInvoker0< XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* >::Invoke(57 /* System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement() */, L_4);
		G_B3_0 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)(L_5));
	}

IL_0023:
	{
		V_1 = G_B3_0;
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = V_1;
		V_2 = (bool)((((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		V_3 = (RuntimeObject*)NULL;
		goto IL_003a;
	}

IL_0031:
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_8 = V_1;
		RuntimeObject* L_9;
		L_9 = XmlNodeWrapper_WrapNode_m2D7E269564290F8F1DE7689247650CB65C097E6E(L_8, NULL);
		V_3 = L_9;
		goto IL_003a;
	}

IL_003a:
	{
		RuntimeObject* L_10 = V_3;
		return L_10;
	}
}
// System.String Mapbox.Json.Converters.XmlNodeWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeWrapper_get_Value_m67F5D08817DE14B255A0E9981E19CD65C194FC70 (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlNode::get_Value() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper_set_Value_m72A8EF4DDA642C556975B212D232C761F7CE980B (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(8 /* System.Void System.Xml.XmlNode::set_Value(System.String) */, L_0, L_1);
		return;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlNodeWrapper::AppendChild(Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_AppendChild_m4FCB38B6C47076C10D1C0FEA59A8A14F689DA472 (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___newChild0;
		V_0 = ((XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3*)CastclassClass((RuntimeObject*)L_0, XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3_il2cpp_TypeInfo_var));
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_1 = __this->____node_0;
		XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* L_2 = V_0;
		NullCheck(L_2);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_3 = L_2->____node_0;
		NullCheck(L_1);
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_4;
		L_4 = VirtualFuncInvoker1< XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* >::Invoke(25 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_1, L_3);
		__this->____childNodes_1 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childNodes_1), (void*)(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)NULL);
		__this->____attributes_2 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)NULL);
		RuntimeObject* L_5 = ___newChild0;
		V_1 = L_5;
		goto IL_002c;
	}

IL_002c:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// System.String Mapbox.Json.Converters.XmlNodeWrapper::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeWrapper_get_NamespaceUri_mD3EF3B31B6F572B7094A56B33D2877E10008528B (XmlNodeWrapper_t3932FD6596087A29D89B55070C0E85B34E5610A3* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_0 = __this->____node_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(33 /* System.String System.Xml.XmlNode::get_NamespaceURI() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
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
// System.Xml.Linq.XDeclaration Mapbox.Json.Converters.XDeclarationWrapper::get_Declaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* XDeclarationWrapper_get_Declaration_m0648B146E73B0281844EB091BDE77D15B198461A (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0 = __this->___U3CDeclarationU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mapbox.Json.Converters.XDeclarationWrapper::set_Declaration(System.Xml.Linq.XDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclarationWrapper_set_Declaration_m8BDFA5A476DBAC0D90BA8A04F0CFA00799C359CF (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ___value0, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0 = ___value0;
		__this->___U3CDeclarationU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeclarationU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Json.Converters.XDeclarationWrapper::.ctor(System.Xml.Linq.XDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclarationWrapper__ctor_mE71E2B801E2AD95DB22A4FA21E51140E9ED9831C (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ___declaration0, const RuntimeMethod* method) 
{
	{
		XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02(__this, (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)NULL, NULL);
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0 = ___declaration0;
		XDeclarationWrapper_set_Declaration_m8BDFA5A476DBAC0D90BA8A04F0CFA00799C359CF_inline(__this, L_0, NULL);
		return;
	}
}
// System.Xml.XmlNodeType Mapbox.Json.Converters.XDeclarationWrapper::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XDeclarationWrapper_get_NodeType_mE10A660FF4D2A7B152761061E65823B0278DD35D (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		goto IL_0006;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.String Mapbox.Json.Converters.XDeclarationWrapper::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDeclarationWrapper_get_Version_mBA55B7CB64E42218C466918B727F1DD84042EFF0 (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0;
		L_0 = XDeclarationWrapper_get_Declaration_m0648B146E73B0281844EB091BDE77D15B198461A_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDeclaration_get_Version_m675EDE875CAF23C6801015479393247D2B8A05E7_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Mapbox.Json.Converters.XDeclarationWrapper::get_Encoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDeclarationWrapper_get_Encoding_m1CDBB14FEFA76EFA1DB0E36248DDCA87AB9453DD (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0;
		L_0 = XDeclarationWrapper_get_Declaration_m0648B146E73B0281844EB091BDE77D15B198461A_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDeclaration_get_Encoding_mA27D7E3A1673EE7D2A52F7D93A17FD9A33C4D5E0_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Converters.XDeclarationWrapper::set_Encoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclarationWrapper_set_Encoding_m711DB4ACE4C443F10007608884EB60756AA0E278 (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0;
		L_0 = XDeclarationWrapper_get_Declaration_m0648B146E73B0281844EB091BDE77D15B198461A_inline(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XDeclaration_set_Encoding_m13C45B72D33CFE9CCBA3450D0D3DF6A56D46CCD9_inline(L_0, L_1, NULL);
		return;
	}
}
// System.String Mapbox.Json.Converters.XDeclarationWrapper::get_Standalone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDeclarationWrapper_get_Standalone_m0010964AF51CB83278D0F9754EACBDFE03EF825A (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0;
		L_0 = XDeclarationWrapper_get_Declaration_m0648B146E73B0281844EB091BDE77D15B198461A_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDeclaration_get_Standalone_mCC775D6A93C6ED7C87BFFA4E3565675B4139CE7D_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Converters.XDeclarationWrapper::set_Standalone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeclarationWrapper_set_Standalone_m2F47CDCAFDB4AE5BBA09DB637C1FF87A69C9453B (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0;
		L_0 = XDeclarationWrapper_get_Declaration_m0648B146E73B0281844EB091BDE77D15B198461A_inline(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XDeclaration_set_Standalone_mBFF62587A08487D5C7332D76AD4D3C55FB81BF33_inline(L_0, L_1, NULL);
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
// System.Void Mapbox.Json.Converters.XDocumentTypeWrapper::.ctor(System.Xml.Linq.XDocumentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentTypeWrapper__ctor_m1D1885E2B8C00C1564C5272A83A10AC965586EE2 (XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830* __this, XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* ___documentType0, const RuntimeMethod* method) 
{
	{
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_0 = ___documentType0;
		XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02(__this, L_0, NULL);
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_1 = ___documentType0;
		__this->____documentType_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____documentType_1), (void*)L_1);
		return;
	}
}
// System.String Mapbox.Json.Converters.XDocumentTypeWrapper::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentTypeWrapper_get_Name_m2E695498111C52F2209DAE5D99E0A6590412CDF4 (XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_0 = __this->____documentType_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDocumentType_get_Name_m297D10AE558AA29F11E05CCAEF2D74C43F980AE9_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Mapbox.Json.Converters.XDocumentTypeWrapper::get_System()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentTypeWrapper_get_System_mCE29522917088B580864C79F9501FD1B72671BC7 (XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_0 = __this->____documentType_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDocumentType_get_SystemId_m864BD298982BDA1D5B9C4DB6CB904B78FAFA04A7_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Mapbox.Json.Converters.XDocumentTypeWrapper::get_Public()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentTypeWrapper_get_Public_m83338E12CE18B9A83D5FF794448E1EB0FD0F9F2E (XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_0 = __this->____documentType_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDocumentType_get_PublicId_mAFD124B111C0B665C14A2078EE4E30C28F1854FC_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Mapbox.Json.Converters.XDocumentTypeWrapper::get_InternalSubset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentTypeWrapper_get_InternalSubset_m0851A6DEF2916A1848932881F5B8A7943BABB04B (XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_0 = __this->____documentType_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XDocumentType_get_InternalSubset_m6914F698B32A68A55C15AD4B971FEBFA85183DA1_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Mapbox.Json.Converters.XDocumentTypeWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XDocumentTypeWrapper_get_LocalName_m758A6F30637885FFAD5A190C96119253B58CD3B9 (XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2923AF57406AD3628AA00F2F47378348C0E89B4C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteral2923AF57406AD3628AA00F2F47378348C0E89B4C;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_0 = V_0;
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
// System.Xml.Linq.XDocument Mapbox.Json.Converters.XDocumentWrapper::get_Document()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* XDocumentWrapper_get_Document_m971103CC80292AF259B10D21B7A0CCA4EC21D089 (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m4EC29CC3F6E03FF4901BBA0414E7F65A535C1EB3(__this, NULL);
		V_0 = ((XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1*)CastclassClass((RuntimeObject*)L_0, XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.Json.Converters.XDocumentWrapper::.ctor(System.Xml.Linq.XDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDocumentWrapper__ctor_mF2733CE1AB416482731B9CDD3AB2597DD1CD0F4D (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* ___document0, const RuntimeMethod* method) 
{
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_0 = ___document0;
		XContainerWrapper__ctor_m9F96198F331B60161A21FF45CDFA86E68D5D96F2(__this, L_0, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XDocumentWrapper::get_ChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* XDocumentWrapper_get_ChildNodes_m7D60FBDC253FB01F34937020540387345124D0ED (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mDED0CD97369710B277312528B306B96F9C12A4BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* V_0 = NULL;
	bool V_1 = false;
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* V_2 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_0;
		L_0 = XContainerWrapper_get_ChildNodes_m3B23ED688F50323717F5C155E6F16930075CD23F(__this, NULL);
		V_0 = L_0;
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_1;
		L_1 = XDocumentWrapper_get_Document_m971103CC80292AF259B10D21B7A0CCA4EC21D089(__this, NULL);
		NullCheck(L_1);
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_2;
		L_2 = XDocument_get_Declaration_m54F6FE679582E4CC7FBC6FD3565260BC308D98CA_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_inline(L_3, List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554(L_5, 0, List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Mapbox.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_6);
		G_B4_0 = ((((int32_t)((((int32_t)L_7) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B4_0 = 1;
	}

IL_0033:
	{
		G_B6_0 = G_B4_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
	}

IL_0036:
	{
		V_1 = (bool)G_B6_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_9 = V_0;
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_10;
		L_10 = XDocumentWrapper_get_Document_m971103CC80292AF259B10D21B7A0CCA4EC21D089(__this, NULL);
		NullCheck(L_10);
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_11;
		L_11 = XDocument_get_Declaration_m54F6FE679582E4CC7FBC6FD3565260BC308D98CA_inline(L_10, NULL);
		XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* L_12 = (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E*)il2cpp_codegen_object_new(XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		XDeclarationWrapper__ctor_mE71E2B801E2AD95DB22A4FA21E51140E9ED9831C(L_12, L_11, NULL);
		NullCheck(L_9);
		List_1_Insert_mDED0CD97369710B277312528B306B96F9C12A4BA(L_9, 0, L_12, List_1_Insert_mDED0CD97369710B277312528B306B96F9C12A4BA_RuntimeMethod_var);
	}

IL_0054:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_13 = V_0;
		V_2 = L_13;
		goto IL_0058;
	}

IL_0058:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_14 = V_2;
		return L_14;
	}
}
// System.Boolean Mapbox.Json.Converters.XDocumentWrapper::get_HasChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XDocumentWrapper_get_HasChildNodes_mB1A898E1F215BA93B020AC57F241A2764D573F5C (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = XContainerWrapper_get_HasChildNodes_m84AA4C5BB4AC0AAD06AACB06B870D032D24B38C3(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0021;
	}

IL_0010:
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_2;
		L_2 = XDocumentWrapper_get_Document_m971103CC80292AF259B10D21B7A0CCA4EC21D089(__this, NULL);
		NullCheck(L_2);
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_3;
		L_3 = XDocument_get_Declaration_m54F6FE679582E4CC7FBC6FD3565260BC308D98CA_inline(L_2, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XDocumentWrapper::CreateComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateComment_m0789FD9DECFFF6609DC3CBB75DEF5C37DCE602AC (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___text0;
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_1 = (XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D*)il2cpp_codegen_object_new(XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XComment__ctor_mF1891F18BA45A4D593BF20DA9DC98AC2B2DE8020(L_1, L_0, NULL);
		XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* L_2 = (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69*)il2cpp_codegen_object_new(XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02(L_2, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XDocumentWrapper::CreateTextNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateTextNode_m1C82199AC25B865548544D3F6A00F8103D29E4DA (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___text0;
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_1 = (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2*)il2cpp_codegen_object_new(XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XText__ctor_m30153536CE7D619BF5609B3D3453109B3ECDD28D(L_1, L_0, NULL);
		XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* L_2 = (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69*)il2cpp_codegen_object_new(XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02(L_2, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XDocumentWrapper::CreateCDataSection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateCDataSection_mFA308C5BBBDFB26452169FCFE1CF2591A9CB594F (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___data0;
		XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B* L_1 = (XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B*)il2cpp_codegen_object_new(XCData_tCE86E0709C47284A8D0A6CBE09CDFD6B8609BF3B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XCData__ctor_m649661856E9B7BA8D204EB3FB1CE80D76998D416(L_1, L_0, NULL);
		XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* L_2 = (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69*)il2cpp_codegen_object_new(XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02(L_2, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XDocumentWrapper::CreateWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateWhitespace_m7ABF29F2D71C5E522B491A2C3A8FE9793CA9D669 (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___text0;
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_1 = (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2*)il2cpp_codegen_object_new(XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XText__ctor_m30153536CE7D619BF5609B3D3453109B3ECDD28D(L_1, L_0, NULL);
		XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* L_2 = (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69*)il2cpp_codegen_object_new(XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02(L_2, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XDocumentWrapper::CreateSignificantWhitespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateSignificantWhitespace_m4E1CB8C065EBD9BD8DA10FF34A191D902CDBF0B1 (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___text0;
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_1 = (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2*)il2cpp_codegen_object_new(XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XText__ctor_m30153536CE7D619BF5609B3D3453109B3ECDD28D(L_1, L_0, NULL);
		XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* L_2 = (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69*)il2cpp_codegen_object_new(XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02(L_2, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XDocumentWrapper::CreateXmlDeclaration(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateXmlDeclaration_m828BF75F0B2349181DF22D4ADAD16576AE84F47E (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, String_t* ___version0, String_t* ___encoding1, String_t* ___standalone2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___version0;
		String_t* L_1 = ___encoding1;
		String_t* L_2 = ___standalone2;
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_3 = (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990*)il2cpp_codegen_object_new(XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XDeclaration__ctor_m8107AC3F844468E3C2A20075B14A09D24A3768BF(L_3, L_0, L_1, L_2, NULL);
		XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* L_4 = (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E*)il2cpp_codegen_object_new(XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XDeclarationWrapper__ctor_mE71E2B801E2AD95DB22A4FA21E51140E9ED9831C(L_4, L_3, NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XDocumentWrapper::CreateXmlDocumentType(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateXmlDocumentType_m175DA300180360123DE0614FAAB1F3709FD570EA (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___publicId1;
		String_t* L_2 = ___systemId2;
		String_t* L_3 = ___internalSubset3;
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_4 = (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817*)il2cpp_codegen_object_new(XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XDocumentType__ctor_mD192CD368E807CA6B4AB0B5094A903CBFA37CA46(L_4, L_0, L_1, L_2, L_3, NULL);
		XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830* L_5 = (XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830*)il2cpp_codegen_object_new(XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XDocumentTypeWrapper__ctor_m1D1885E2B8C00C1564C5272A83A10AC965586EE2(L_5, L_4, NULL);
		V_0 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XDocumentWrapper::CreateProcessingInstruction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateProcessingInstruction_m64E1A7357DE37A3A057EFEF6214F3A489E79C917 (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, String_t* ___target0, String_t* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___target0;
		String_t* L_1 = ___data1;
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_2 = (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795*)il2cpp_codegen_object_new(XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XProcessingInstruction__ctor_m9D42D9DF59625543003025C09E1AED9659A1E862(L_2, L_0, L_1, NULL);
		XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051* L_3 = (XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051*)il2cpp_codegen_object_new(XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XProcessingInstructionWrapper__ctor_m34C367FB925CDF1944C27F7362BE49333A605165(L_3, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Mapbox.Json.Converters.IXmlElement Mapbox.Json.Converters.XDocumentWrapper::CreateElement(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateElement_mA5DC74DE69B924813B6FD1C8A718C94970CE578D (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, String_t* ___elementName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___elementName0;
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XName_op_Implicit_m3A259E71F7D76AA504349A98DAE3C47D7A943736(L_0, NULL);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_2 = (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)il2cpp_codegen_object_new(XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XElement__ctor_mFDCA9C62F1562D0E005F47D0298A49C57DBC126C(L_2, L_1, NULL);
		XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* L_3 = (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD*)il2cpp_codegen_object_new(XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XElementWrapper__ctor_mAA1B46972A8E2EF79C2F0CD9E1FED049602893BC(L_3, L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Mapbox.Json.Converters.IXmlElement Mapbox.Json.Converters.XDocumentWrapper::CreateElement(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateElement_m8C34DD6A86802F4D52D5A935771671990AC2565D (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, String_t* ___qualifiedName0, String_t* ___namespaceUri1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		String_t* L_0 = ___qualifiedName0;
		String_t* L_1;
		L_1 = MiscellaneousUtils_GetLocalName_m19145909870A85DB240B9787E656A6935B824605(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		String_t* L_3 = ___namespaceUri1;
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_4;
		L_4 = XName_Get_mECF7FD66C88749DF760999F9C6F506BA9A0D0373(L_2, L_3, NULL);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_5 = (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)il2cpp_codegen_object_new(XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XElement__ctor_mFDCA9C62F1562D0E005F47D0298A49C57DBC126C(L_5, L_4, NULL);
		XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* L_6 = (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD*)il2cpp_codegen_object_new(XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XElementWrapper__ctor_mAA1B46972A8E2EF79C2F0CD9E1FED049602893BC(L_6, L_5, NULL);
		V_1 = L_6;
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XDocumentWrapper::CreateAttribute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateAttribute_m9DE54D369A7D5C73DCB4A3C61BC3D0F02EC4103A (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XName_op_Implicit_m3A259E71F7D76AA504349A98DAE3C47D7A943736(L_0, NULL);
		String_t* L_2 = ___value1;
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_3 = (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF*)il2cpp_codegen_object_new(XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XAttribute__ctor_m913E6ED815250651BF84B13AE1C1B79C6C7F9CE0(L_3, L_1, L_2, NULL);
		XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* L_4 = (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E*)il2cpp_codegen_object_new(XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XAttributeWrapper__ctor_mCC13B9B3C59AEC4B7FB301D70669A46181858497(L_4, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XDocumentWrapper::CreateAttribute(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_CreateAttribute_m66C92D4198A429116853A215AFCDD24EE79A4CB2 (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, String_t* ___qualifiedName0, String_t* ___namespaceUri1, String_t* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		String_t* L_0 = ___qualifiedName0;
		String_t* L_1;
		L_1 = MiscellaneousUtils_GetLocalName_m19145909870A85DB240B9787E656A6935B824605(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		String_t* L_3 = ___namespaceUri1;
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_4;
		L_4 = XName_Get_mECF7FD66C88749DF760999F9C6F506BA9A0D0373(L_2, L_3, NULL);
		String_t* L_5 = ___value2;
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_6 = (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF*)il2cpp_codegen_object_new(XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XAttribute__ctor_m913E6ED815250651BF84B13AE1C1B79C6C7F9CE0(L_6, L_4, L_5, NULL);
		XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* L_7 = (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E*)il2cpp_codegen_object_new(XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		XAttributeWrapper__ctor_mCC13B9B3C59AEC4B7FB301D70669A46181858497(L_7, L_6, NULL);
		V_1 = L_7;
		goto IL_001d;
	}

IL_001d:
	{
		RuntimeObject* L_8 = V_1;
		return L_8;
	}
}
// Mapbox.Json.Converters.IXmlElement Mapbox.Json.Converters.XDocumentWrapper::get_DocumentElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_get_DocumentElement_m8F51A0458937611CC4FB44783E3760B05FDADFB4 (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_0;
		L_0 = XDocumentWrapper_get_Document_m971103CC80292AF259B10D21B7A0CCA4EC21D089(__this, NULL);
		NullCheck(L_0);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XDocument_get_Root_mB2847BD75F5350D1D795E2A2691BF9CB210300C8(L_0, NULL);
		V_0 = (bool)((((RuntimeObject*)(XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_1 = (RuntimeObject*)NULL;
		goto IL_002b;
	}

IL_0018:
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_3;
		L_3 = XDocumentWrapper_get_Document_m971103CC80292AF259B10D21B7A0CCA4EC21D089(__this, NULL);
		NullCheck(L_3);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_4;
		L_4 = XDocument_get_Root_mB2847BD75F5350D1D795E2A2691BF9CB210300C8(L_3, NULL);
		XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* L_5 = (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD*)il2cpp_codegen_object_new(XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		XElementWrapper__ctor_mAA1B46972A8E2EF79C2F0CD9E1FED049602893BC(L_5, L_4, NULL);
		V_1 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XDocumentWrapper::AppendChild(Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocumentWrapper_AppendChild_mD7A60CA39FB7D144BA3812A84A40BDE2EFC422D7 (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___newChild0;
		V_0 = ((XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E*)IsInstClass((RuntimeObject*)L_0, XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E_il2cpp_TypeInfo_var));
		XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_3;
		L_3 = XDocumentWrapper_get_Document_m971103CC80292AF259B10D21B7A0CCA4EC21D089(__this, NULL);
		XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* L_4 = V_0;
		NullCheck(L_4);
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_5;
		L_5 = XDeclarationWrapper_get_Declaration_m0648B146E73B0281844EB091BDE77D15B198461A_inline(L_4, NULL);
		NullCheck(L_3);
		XDocument_set_Declaration_m3DAB9857DC323A55ABA6F973614AABE5FB59A672_inline(L_3, L_5, NULL);
		XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* L_6 = V_0;
		V_2 = L_6;
		goto IL_0032;
	}

IL_0027:
	{
		RuntimeObject* L_7 = ___newChild0;
		RuntimeObject* L_8;
		L_8 = XContainerWrapper_AppendChild_m71191CF3DF2E9CAD29BEF6397036A57B6C63A6D7(__this, L_7, NULL);
		V_2 = L_8;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject* L_9 = V_2;
		return L_9;
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
// System.Xml.Linq.XText Mapbox.Json.Converters.XTextWrapper::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* XTextWrapper_get_Text_mE42D3E1D2FA07E8A5DAAC007D9820B89BF5F6E97 (XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m4EC29CC3F6E03FF4901BBA0414E7F65A535C1EB3(__this, NULL);
		V_0 = ((XText_t006159E7F735736D41BBC0738FFB066A14B31AE2*)CastclassClass((RuntimeObject*)L_0, XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.Json.Converters.XTextWrapper::.ctor(System.Xml.Linq.XText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XTextWrapper__ctor_m79A2D0B3F647D4B87CEDC5507D6B211B7CEBCE29 (XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04* __this, XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* ___text0, const RuntimeMethod* method) 
{
	{
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_0 = ___text0;
		XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02(__this, L_0, NULL);
		return;
	}
}
// System.String Mapbox.Json.Converters.XTextWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XTextWrapper_get_Value_mF14B59AEC03251C4397A4BB9DE5B6341E071E307 (XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_0;
		L_0 = XTextWrapper_get_Text_mE42D3E1D2FA07E8A5DAAC007D9820B89BF5F6E97(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XText_get_Value_m5B2A033755DE27DEC73860B9E94AA41BB55E208C_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Converters.XTextWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XTextWrapper_set_Value_mA5492C2757204ACF8C073297ED4680CC2FF1C7F5 (XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_0;
		L_0 = XTextWrapper_get_Text_mE42D3E1D2FA07E8A5DAAC007D9820B89BF5F6E97(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XText_set_Value_m285A62B03AEFA17C99B9637F5E9BD62A5E707C38(L_0, L_1, NULL);
		return;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XTextWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XTextWrapper_get_ParentNode_m59C4DE8571A22F7612C421B40FBCBAA0B59FC5EA (XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_0;
		L_0 = XTextWrapper_get_Text_mE42D3E1D2FA07E8A5DAAC007D9820B89BF5F6E97(__this, NULL);
		NullCheck(L_0);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_0, NULL);
		V_0 = (bool)((((RuntimeObject*)(XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_1 = (RuntimeObject*)NULL;
		goto IL_002b;
	}

IL_0018:
	{
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_3;
		L_3 = XTextWrapper_get_Text_mE42D3E1D2FA07E8A5DAAC007D9820B89BF5F6E97(__this, NULL);
		NullCheck(L_3);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_4;
		L_4 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_3, NULL);
		RuntimeObject* L_5;
		L_5 = XContainerWrapper_WrapNode_mE22313217245C0CAEF4AC55C9A915BA9292FB3C8(L_4, NULL);
		V_1 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
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
// System.Xml.Linq.XComment Mapbox.Json.Converters.XCommentWrapper::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* XCommentWrapper_get_Text_mB31B28FCC890F53A17B0E1715A7E9751FC166AF6 (XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m4EC29CC3F6E03FF4901BBA0414E7F65A535C1EB3(__this, NULL);
		V_0 = ((XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D*)CastclassClass((RuntimeObject*)L_0, XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.Json.Converters.XCommentWrapper::.ctor(System.Xml.Linq.XComment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XCommentWrapper__ctor_mBA254C434387D8C5982C8E2AC7BC2E2F3697874F (XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C* __this, XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* ___text0, const RuntimeMethod* method) 
{
	{
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_0 = ___text0;
		XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02(__this, L_0, NULL);
		return;
	}
}
// System.String Mapbox.Json.Converters.XCommentWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XCommentWrapper_get_Value_m58E75F9DAB91FB87135F5F170F8B7E5CB3271481 (XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_0;
		L_0 = XCommentWrapper_get_Text_mB31B28FCC890F53A17B0E1715A7E9751FC166AF6(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XComment_get_Value_mD2D3D9900752AD9FA019947C965FF6FAF2B3E7DA_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Converters.XCommentWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XCommentWrapper_set_Value_mF488C9731F7919FB397D486B6DC009B0C347140E (XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_0;
		L_0 = XCommentWrapper_get_Text_mB31B28FCC890F53A17B0E1715A7E9751FC166AF6(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XComment_set_Value_m6D36A232DE1A2E3C39E0F54F6A8078AECD7FE375(L_0, L_1, NULL);
		return;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XCommentWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XCommentWrapper_get_ParentNode_m2DBE4930E9A9C0FE41DDAB0E05B47DFB6AC3ABB8 (XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_0;
		L_0 = XCommentWrapper_get_Text_mB31B28FCC890F53A17B0E1715A7E9751FC166AF6(__this, NULL);
		NullCheck(L_0);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_0, NULL);
		V_0 = (bool)((((RuntimeObject*)(XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_1 = (RuntimeObject*)NULL;
		goto IL_002b;
	}

IL_0018:
	{
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_3;
		L_3 = XCommentWrapper_get_Text_mB31B28FCC890F53A17B0E1715A7E9751FC166AF6(__this, NULL);
		NullCheck(L_3);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_4;
		L_4 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_3, NULL);
		RuntimeObject* L_5;
		L_5 = XContainerWrapper_WrapNode_mE22313217245C0CAEF4AC55C9A915BA9292FB3C8(L_4, NULL);
		V_1 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
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
// System.Xml.Linq.XProcessingInstruction Mapbox.Json.Converters.XProcessingInstructionWrapper::get_ProcessingInstruction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* XProcessingInstructionWrapper_get_ProcessingInstruction_m5AFCF669A121BFA1D235CB9EAEEC483C4E088687 (XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m4EC29CC3F6E03FF4901BBA0414E7F65A535C1EB3(__this, NULL);
		V_0 = ((XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795*)CastclassClass((RuntimeObject*)L_0, XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.Json.Converters.XProcessingInstructionWrapper::.ctor(System.Xml.Linq.XProcessingInstruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstructionWrapper__ctor_m34C367FB925CDF1944C27F7362BE49333A605165 (XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051* __this, XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* ___processingInstruction0, const RuntimeMethod* method) 
{
	{
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_0 = ___processingInstruction0;
		XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02(__this, L_0, NULL);
		return;
	}
}
// System.String Mapbox.Json.Converters.XProcessingInstructionWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XProcessingInstructionWrapper_get_LocalName_m021ED604ED36D8212D9E9B45D958D83E2F22C9DF (XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_0;
		L_0 = XProcessingInstructionWrapper_get_ProcessingInstruction_m5AFCF669A121BFA1D235CB9EAEEC483C4E088687(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XProcessingInstruction_get_Target_mBB98BD38B91EBDC03558F4990591BE33FC1EB0DE_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Mapbox.Json.Converters.XProcessingInstructionWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XProcessingInstructionWrapper_get_Value_m4D8CBA44D6D77716E75A2D68D3870473B790D9E0 (XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_0;
		L_0 = XProcessingInstructionWrapper_get_ProcessingInstruction_m5AFCF669A121BFA1D235CB9EAEEC483C4E088687(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XProcessingInstruction_get_Data_mF06C89FCF9F580497E3B59331676AFC9AA3F416B_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Converters.XProcessingInstructionWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XProcessingInstructionWrapper_set_Value_mB456CB63B73E7C9E97DE8D92DDBDACEB239D2574 (XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_0;
		L_0 = XProcessingInstructionWrapper_get_ProcessingInstruction_m5AFCF669A121BFA1D235CB9EAEEC483C4E088687(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XProcessingInstruction_set_Data_m6E09DD3B0921B4C9C342471380541E710F8F8714(L_0, L_1, NULL);
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
// System.Xml.Linq.XContainer Mapbox.Json.Converters.XContainerWrapper::get_Container()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* XContainerWrapper_get_Container_mF54299E0998036C9127BF86960CA9E27BD40F141 (XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m4EC29CC3F6E03FF4901BBA0414E7F65A535C1EB3(__this, NULL);
		V_0 = ((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)CastclassClass((RuntimeObject*)L_0, XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.Json.Converters.XContainerWrapper::.ctor(System.Xml.Linq.XContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XContainerWrapper__ctor_m9F96198F331B60161A21FF45CDFA86E68D5D96F2 (XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B* __this, XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___container0, const RuntimeMethod* method) 
{
	{
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_0 = ___container0;
		XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02(__this, L_0, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XContainerWrapper::get_ChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* XContainerWrapper_get_ChildNodes_m3B23ED688F50323717F5C155E6F16930075CD23F (XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3CF62242A258E986307D7CCF84A4C03FB96055D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t14D6DCE9D9AA35992A6A7A1E7E89CCF8C2A477BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* V_3 = NULL;
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* V_4 = NULL;
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_0 = __this->____childNodes_1;
		V_0 = (bool)((((RuntimeObject*)(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007d;
		}
	}
	{
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(23 /* System.Boolean Mapbox.Json.Converters.XContainerWrapper::get_HasChildNodes() */, __this);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_4 = ((XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var))->___EmptyChildNodes_0;
		__this->____childNodes_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childNodes_1), (void*)L_4);
		goto IL_007c;
	}

IL_002b:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_5 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)il2cpp_codegen_object_new(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C(L_5, List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C_RuntimeMethod_var);
		__this->____childNodes_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childNodes_1), (void*)L_5);
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_6;
		L_6 = XContainerWrapper_get_Container_mF54299E0998036C9127BF86960CA9E27BD40F141(__this, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = XContainer_Nodes_mBB3D95BB437752701F9A687E56EA226C0F27EFE4(L_6, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t3CF62242A258E986307D7CCF84A4C03FB96055D8_il2cpp_TypeInfo_var, L_7);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_2;
					if (!L_9)
					{
						goto IL_007a;
					}
				}
				{
					RuntimeObject* L_10 = V_2;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_007a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0066_1;
			}

IL_004b_1:
			{
				RuntimeObject* L_11 = V_2;
				NullCheck(L_11);
				XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_12;
				L_12 = InterfaceFuncInvoker0< XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>::get_Current() */, IEnumerator_1_t14D6DCE9D9AA35992A6A7A1E7E89CCF8C2A477BF_il2cpp_TypeInfo_var, L_11);
				V_3 = L_12;
				List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_13 = __this->____childNodes_1;
				XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_14 = V_3;
				RuntimeObject* L_15;
				L_15 = XContainerWrapper_WrapNode_mE22313217245C0CAEF4AC55C9A915BA9292FB3C8(L_14, NULL);
				NullCheck(L_13);
				List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_inline(L_13, L_15, List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
			}

IL_0066_1:
			{
				RuntimeObject* L_16 = V_2;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_004b_1;
				}
			}
			{
				goto IL_007b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007b:
	{
	}

IL_007c:
	{
	}

IL_007d:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_18 = __this->____childNodes_1;
		V_4 = L_18;
		goto IL_0087;
	}

IL_0087:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_19 = V_4;
		return L_19;
	}
}
// System.Boolean Mapbox.Json.Converters.XContainerWrapper::get_HasChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XContainerWrapper_get_HasChildNodes_m84AA4C5BB4AC0AAD06AACB06B870D032D24B38C3 (XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_0;
		L_0 = XContainerWrapper_get_Container_mF54299E0998036C9127BF86960CA9E27BD40F141(__this, NULL);
		NullCheck(L_0);
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_1;
		L_1 = XContainer_get_LastNode_mA0896FBB61341D138E2F48F032D6C8169DEEED5E(L_0, NULL);
		V_0 = (bool)((!(((RuntimeObject*)(XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XContainerWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainerWrapper_get_ParentNode_m58BE7755BD5D3CC5D926D5F78CE10E42F44E8047 (XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_0;
		L_0 = XContainerWrapper_get_Container_mF54299E0998036C9127BF86960CA9E27BD40F141(__this, NULL);
		NullCheck(L_0);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_0, NULL);
		V_0 = (bool)((((RuntimeObject*)(XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_1 = (RuntimeObject*)NULL;
		goto IL_002b;
	}

IL_0018:
	{
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_3;
		L_3 = XContainerWrapper_get_Container_mF54299E0998036C9127BF86960CA9E27BD40F141(__this, NULL);
		NullCheck(L_3);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_4;
		L_4 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_3, NULL);
		RuntimeObject* L_5;
		L_5 = XContainerWrapper_WrapNode_mE22313217245C0CAEF4AC55C9A915BA9292FB3C8(L_4, NULL);
		V_1 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XContainerWrapper::WrapNode(System.Xml.Linq.XObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainerWrapper_WrapNode_mE22313217245C0CAEF4AC55C9A915BA9292FB3C8 (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* V_0 = NULL;
	XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* V_1 = NULL;
	XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* V_2 = NULL;
	XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* V_3 = NULL;
	XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* V_4 = NULL;
	XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* V_5 = NULL;
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* V_6 = NULL;
	XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* V_7 = NULL;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_0 = ___node0;
		V_0 = ((XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1*)IsInstClass((RuntimeObject*)L_0, XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var));
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_1 = V_0;
		V_8 = (bool)((!(((RuntimeObject*)(XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_8;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_3 = V_0;
		XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* L_4 = (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB*)il2cpp_codegen_object_new(XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XDocumentWrapper__ctor_mF2733CE1AB416482731B9CDD3AB2597DD1CD0F4D(L_4, L_3, NULL);
		V_9 = L_4;
		goto IL_0103;
	}

IL_0020:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_5 = ___node0;
		V_1 = ((XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)IsInstClass((RuntimeObject*)L_5, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var));
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_6 = V_1;
		V_10 = (bool)((!(((RuntimeObject*)(XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_10;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_8 = V_1;
		XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* L_9 = (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD*)il2cpp_codegen_object_new(XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		XElementWrapper__ctor_mAA1B46972A8E2EF79C2F0CD9E1FED049602893BC(L_9, L_8, NULL);
		V_9 = L_9;
		goto IL_0103;
	}

IL_003f:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_10 = ___node0;
		V_2 = ((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)IsInstClass((RuntimeObject*)L_10, XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF_il2cpp_TypeInfo_var));
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_11 = V_2;
		V_11 = (bool)((!(((RuntimeObject*)(XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_11;
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_13 = V_2;
		XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B* L_14 = (XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B*)il2cpp_codegen_object_new(XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		XContainerWrapper__ctor_m9F96198F331B60161A21FF45CDFA86E68D5D96F2(L_14, L_13, NULL);
		V_9 = L_14;
		goto IL_0103;
	}

IL_005e:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_15 = ___node0;
		V_3 = ((XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795*)IsInstClass((RuntimeObject*)L_15, XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795_il2cpp_TypeInfo_var));
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_16 = V_3;
		V_12 = (bool)((!(((RuntimeObject*)(XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_12;
		if (!L_17)
		{
			goto IL_007d;
		}
	}
	{
		XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* L_18 = V_3;
		XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051* L_19 = (XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051*)il2cpp_codegen_object_new(XProcessingInstructionWrapper_t4C8CF2A8BC2027EF681973CC9A74831BB1031051_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		XProcessingInstructionWrapper__ctor_m34C367FB925CDF1944C27F7362BE49333A605165(L_19, L_18, NULL);
		V_9 = L_19;
		goto IL_0103;
	}

IL_007d:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_20 = ___node0;
		V_4 = ((XText_t006159E7F735736D41BBC0738FFB066A14B31AE2*)IsInstClass((RuntimeObject*)L_20, XText_t006159E7F735736D41BBC0738FFB066A14B31AE2_il2cpp_TypeInfo_var));
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_21 = V_4;
		V_13 = (bool)((!(((RuntimeObject*)(XText_t006159E7F735736D41BBC0738FFB066A14B31AE2*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_22 = V_13;
		if (!L_22)
		{
			goto IL_009c;
		}
	}
	{
		XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* L_23 = V_4;
		XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04* L_24 = (XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04*)il2cpp_codegen_object_new(XTextWrapper_t1484F54070D4745CB33FBE451805039B0A2FEF04_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		XTextWrapper__ctor_m79A2D0B3F647D4B87CEDC5507D6B211B7CEBCE29(L_24, L_23, NULL);
		V_9 = L_24;
		goto IL_0103;
	}

IL_009c:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_25 = ___node0;
		V_5 = ((XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D*)IsInstClass((RuntimeObject*)L_25, XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D_il2cpp_TypeInfo_var));
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_26 = V_5;
		V_14 = (bool)((!(((RuntimeObject*)(XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D*)L_26) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_27 = V_14;
		if (!L_27)
		{
			goto IL_00bb;
		}
	}
	{
		XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* L_28 = V_5;
		XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C* L_29 = (XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C*)il2cpp_codegen_object_new(XCommentWrapper_t663790082A641D1857CB4005AE0E12E29CA0C77C_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		XCommentWrapper__ctor_mBA254C434387D8C5982C8E2AC7BC2E2F3697874F(L_29, L_28, NULL);
		V_9 = L_29;
		goto IL_0103;
	}

IL_00bb:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_30 = ___node0;
		V_6 = ((XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF*)IsInstClass((RuntimeObject*)L_30, XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var));
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_31 = V_6;
		V_15 = (bool)((!(((RuntimeObject*)(XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_32 = V_15;
		if (!L_32)
		{
			goto IL_00da;
		}
	}
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_33 = V_6;
		XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* L_34 = (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E*)il2cpp_codegen_object_new(XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		XAttributeWrapper__ctor_mCC13B9B3C59AEC4B7FB301D70669A46181858497(L_34, L_33, NULL);
		V_9 = L_34;
		goto IL_0103;
	}

IL_00da:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_35 = ___node0;
		V_7 = ((XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817*)IsInstClass((RuntimeObject*)L_35, XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817_il2cpp_TypeInfo_var));
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_36 = V_7;
		V_16 = (bool)((!(((RuntimeObject*)(XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817*)L_36) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_37 = V_16;
		if (!L_37)
		{
			goto IL_00f9;
		}
	}
	{
		XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* L_38 = V_7;
		XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830* L_39 = (XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830*)il2cpp_codegen_object_new(XDocumentTypeWrapper_t0DAF9F22885AB87FC0391B9574DE3F2BEE5D8830_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		XDocumentTypeWrapper__ctor_m1D1885E2B8C00C1564C5272A83A10AC965586EE2(L_39, L_38, NULL);
		V_9 = L_39;
		goto IL_0103;
	}

IL_00f9:
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_40 = ___node0;
		XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* L_41 = (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69*)il2cpp_codegen_object_new(XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02(L_41, L_40, NULL);
		V_9 = L_41;
		goto IL_0103;
	}

IL_0103:
	{
		RuntimeObject* L_42 = V_9;
		return L_42;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XContainerWrapper::AppendChild(Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XContainerWrapper_AppendChild_m71191CF3DF2E9CAD29BEF6397036A57B6C63A6D7 (XContainerWrapper_tAE4DF9DB50D058C6603B31468CD1B0E88B21D46B* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* L_0;
		L_0 = XContainerWrapper_get_Container_mF54299E0998036C9127BF86960CA9E27BD40F141(__this, NULL);
		RuntimeObject* L_1 = ___newChild0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Object Mapbox.Json.Converters.IXmlNode::get_WrappedNode() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		XContainer_Add_m26111A020919619F03525ED30091D4501090075B(L_0, L_2, NULL);
		__this->____childNodes_1 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childNodes_1), (void*)(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)NULL);
		RuntimeObject* L_3 = ___newChild0;
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		RuntimeObject* L_4 = V_0;
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
// System.Void Mapbox.Json.Converters.XObjectWrapper::.ctor(System.Xml.Linq.XObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02 (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* __this, XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* ___xmlObject0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_0 = ___xmlObject0;
		__this->____xmlObject_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xmlObject_0), (void*)L_0);
		return;
	}
}
// System.Object Mapbox.Json.Converters.XObjectWrapper::get_WrappedNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObjectWrapper_get_WrappedNode_m4EC29CC3F6E03FF4901BBA0414E7F65A535C1EB3 (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_0 = __this->____xmlObject_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Xml.XmlNodeType Mapbox.Json.Converters.XObjectWrapper::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XObjectWrapper_get_NodeType_mF9F86BDC644CBC764F2E550E6245E1FE31BF25A2 (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_0 = __this->____xmlObject_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.String Mapbox.Json.Converters.XObjectWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XObjectWrapper_get_LocalName_m96391AAA69653568FC072C03231B63718595C63E (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		V_0 = (String_t*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XObjectWrapper::get_ChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* XObjectWrapper_get_ChildNodes_m28EC8035E935B7B35DF4325D529604D7CF8041DE (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_0 = ((XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var))->___EmptyChildNodes_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XObjectWrapper::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* XObjectWrapper_get_Attributes_mB19D6B345F5C0B0E642FDEC2B5B007106A1C26B5 (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_0 = ((XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var))->___EmptyChildNodes_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_1 = V_0;
		return L_1;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XObjectWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObjectWrapper_get_ParentNode_mF729B8C17198137427DED132425943F3B9A8D4F3 (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		V_0 = (RuntimeObject*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// System.String Mapbox.Json.Converters.XObjectWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XObjectWrapper_get_Value_m0CA4AE2EBE77C17AF3F618E4715BCF913F529588 (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		V_0 = (String_t*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void Mapbox.Json.Converters.XObjectWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObjectWrapper_set_Value_mC4D6E660C07567634D7E66571C62B81A747DFEFB (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XObjectWrapper_set_Value_mC4D6E660C07567634D7E66571C62B81A747DFEFB_RuntimeMethod_var)));
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XObjectWrapper::AppendChild(Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObjectWrapper_AppendChild_mBF6D8D110F8AFCDE3A93D9997C996F1BEE735DBC (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XObjectWrapper_AppendChild_mBF6D8D110F8AFCDE3A93D9997C996F1BEE735DBC_RuntimeMethod_var)));
	}
}
// System.String Mapbox.Json.Converters.XObjectWrapper::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XObjectWrapper_get_NamespaceUri_m81FB3FB54F5E7AD3D1055510C75E992995CDB1B1 (XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		V_0 = (String_t*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_0 = V_0;
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
// System.Xml.Linq.XAttribute Mapbox.Json.Converters.XAttributeWrapper::get_Attribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* XAttributeWrapper_get_Attribute_mE626218F3407D831A8D132830CF42C808F27F807 (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m4EC29CC3F6E03FF4901BBA0414E7F65A535C1EB3(__this, NULL);
		V_0 = ((XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF*)CastclassClass((RuntimeObject*)L_0, XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.Json.Converters.XAttributeWrapper::.ctor(System.Xml.Linq.XAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttributeWrapper__ctor_mCC13B9B3C59AEC4B7FB301D70669A46181858497 (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* __this, XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* ___attribute0, const RuntimeMethod* method) 
{
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0 = ___attribute0;
		XObjectWrapper__ctor_m23F44742432EE9362FA36E49C125A2BA9B930C02(__this, L_0, NULL);
		return;
	}
}
// System.String Mapbox.Json.Converters.XAttributeWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XAttributeWrapper_get_Value_m97F93E51335D64C2547AD15280C7B92430228E16 (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_mE626218F3407D831A8D132830CF42C808F27F807(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XAttribute_get_Value_mDCE15378AC161DF20094EF77EFF017A6F6766EB1_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Converters.XAttributeWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttributeWrapper_set_Value_m03568F297D0DF38A15F38C4397DD7EA4670F49DC (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_mE626218F3407D831A8D132830CF42C808F27F807(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XAttribute_set_Value_m6BB4BE5ED1708B0C3EB39A38DC36E8FE7BAA6C4C(L_0, L_1, NULL);
		return;
	}
}
// System.String Mapbox.Json.Converters.XAttributeWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XAttributeWrapper_get_LocalName_m18B843BBBAD5F2F24B0967641E1B2CA9562672AA (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_mE626218F3407D831A8D132830CF42C808F27F807(__this, NULL);
		NullCheck(L_0);
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Mapbox.Json.Converters.XAttributeWrapper::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XAttributeWrapper_get_NamespaceUri_m160E1DA1957F298AD6C4DE1EE887BA215531A63C (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_mE626218F3407D831A8D132830CF42C808F27F807(__this, NULL);
		NullCheck(L_0);
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XName_get_NamespaceName_mBEAFAB116BBDFE5B13EE2672C6C9DB3E58D257D3(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XAttributeWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XAttributeWrapper_get_ParentNode_m583EE3FFC3DD706BE08BC879FC95BF250A3850E8 (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_0;
		L_0 = XAttributeWrapper_get_Attribute_mE626218F3407D831A8D132830CF42C808F27F807(__this, NULL);
		NullCheck(L_0);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_0, NULL);
		V_0 = (bool)((((RuntimeObject*)(XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_1 = (RuntimeObject*)NULL;
		goto IL_002b;
	}

IL_0018:
	{
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_3;
		L_3 = XAttributeWrapper_get_Attribute_mE626218F3407D831A8D132830CF42C808F27F807(__this, NULL);
		NullCheck(L_3);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_4;
		L_4 = XObject_get_Parent_m192B7F82C3DF6A43672AD9C61B704A40DCA0213C(L_3, NULL);
		RuntimeObject* L_5;
		L_5 = XContainerWrapper_WrapNode_mE22313217245C0CAEF4AC55C9A915BA9292FB3C8(L_4, NULL);
		V_1 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
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
// System.Xml.Linq.XElement Mapbox.Json.Converters.XElementWrapper::get_Element()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* XElementWrapper_get_Element_mE91FB02E9F795A47C4D10F4A104CD793CFD0658C (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = XObjectWrapper_get_WrappedNode_m4EC29CC3F6E03FF4901BBA0414E7F65A535C1EB3(__this, NULL);
		V_0 = ((XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)CastclassClass((RuntimeObject*)L_0, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.Json.Converters.XElementWrapper::.ctor(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementWrapper__ctor_mAA1B46972A8E2EF79C2F0CD9E1FED049602893BC (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* ___element0, const RuntimeMethod* method) 
{
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0 = ___element0;
		XContainerWrapper__ctor_m9F96198F331B60161A21FF45CDFA86E68D5D96F2(__this, L_0, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Converters.XElementWrapper::SetAttributeNode(Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementWrapper_SetAttributeNode_mABFC13CA5FF0BA675422B565F0EFE39D3570B4E6 (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, RuntimeObject* ___attribute0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___attribute0;
		V_0 = ((XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69*)CastclassClass((RuntimeObject*)L_0, XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69_il2cpp_TypeInfo_var));
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_1;
		L_1 = XElementWrapper_get_Element_mE91FB02E9F795A47C4D10F4A104CD793CFD0658C(__this, NULL);
		XObjectWrapper_t1030F886063CBC6733A306C839C26F5A55FD2D69* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = XObjectWrapper_get_WrappedNode_m4EC29CC3F6E03FF4901BBA0414E7F65A535C1EB3(L_2, NULL);
		NullCheck(L_1);
		XContainer_Add_m26111A020919619F03525ED30091D4501090075B(L_1, L_3, NULL);
		__this->____attributes_2 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)NULL);
		return;
	}
}
// System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.XElementWrapper::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* XElementWrapper_get_Attributes_mDC02C6C3838C12DB8A34F8BC3725B1E17EABCB6F (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mDED0CD97369710B277312528B306B96F9C12A4BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* V_4 = NULL;
	bool V_5 = false;
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* V_6 = NULL;
	int32_t G_B4_0 = 0;
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_0 = __this->____attributes_2;
		V_0 = (bool)((((RuntimeObject*)(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00d3;
		}
	}
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_2;
		L_2 = XElementWrapper_get_Element_mE91FB02E9F795A47C4D10F4A104CD793CFD0658C(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = XElement_get_HasAttributes_m5ACE856A8490A467C7B9F7EC29D37147E6D4B022(L_2, NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String Mapbox.Json.Converters.XObjectWrapper::get_NamespaceUri() */, __this);
		bool L_5;
		L_5 = XElementWrapper_HasImplicitNamespaceAttribute_m47A1C45A836F237665294ACA53F9E190AF5A8F4E(__this, L_4, NULL);
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
	}

IL_0031:
	{
		V_1 = (bool)G_B4_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_7 = ((XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var))->___EmptyChildNodes_0;
		__this->____attributes_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)L_7);
		goto IL_00d2;
	}

IL_0047:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_8 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)il2cpp_codegen_object_new(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C(L_8, List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C_RuntimeMethod_var);
		__this->____attributes_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)L_8);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_9;
		L_9 = XElementWrapper_get_Element_mE91FB02E9F795A47C4D10F4A104CD793CFD0658C(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = XElement_Attributes_m6B330A71FCAFA7A746FF494CC45F8B757F2CEF37(L_9, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_0098;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_0098:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0084_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_14 = V_3;
				NullCheck(L_14);
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_15;
				L_15 = InterfaceFuncInvoker0< XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var, L_14);
				V_4 = L_15;
				List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_16 = __this->____attributes_2;
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_17 = V_4;
				XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* L_18 = (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E*)il2cpp_codegen_object_new(XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E_il2cpp_TypeInfo_var);
				NullCheck(L_18);
				XAttributeWrapper__ctor_mCC13B9B3C59AEC4B7FB301D70669A46181858497(L_18, L_17, NULL);
				NullCheck(L_16);
				List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_inline(L_16, L_18, List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
			}

IL_0084_1:
			{
				RuntimeObject* L_19 = V_3;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_0099;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0099:
	{
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String Mapbox.Json.Converters.XObjectWrapper::get_NamespaceUri() */, __this);
		V_2 = L_21;
		String_t* L_22 = V_2;
		bool L_23;
		L_23 = XElementWrapper_HasImplicitNamespaceAttribute_m47A1C45A836F237665294ACA53F9E190AF5A8F4E(__this, L_22, NULL);
		V_5 = L_23;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00d1;
		}
	}
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_25 = __this->____attributes_2;
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_26;
		L_26 = XName_op_Implicit_m3A259E71F7D76AA504349A98DAE3C47D7A943736(_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
		String_t* L_27 = V_2;
		XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_28 = (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF*)il2cpp_codegen_object_new(XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		XAttribute__ctor_m913E6ED815250651BF84B13AE1C1B79C6C7F9CE0(L_28, L_26, L_27, NULL);
		XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E* L_29 = (XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E*)il2cpp_codegen_object_new(XAttributeWrapper_tC1AFB0EE7FC50C2F717879E850932F933BFDAB4E_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		XAttributeWrapper__ctor_mCC13B9B3C59AEC4B7FB301D70669A46181858497(L_29, L_28, NULL);
		NullCheck(L_25);
		List_1_Insert_mDED0CD97369710B277312528B306B96F9C12A4BA(L_25, 0, L_29, List_1_Insert_mDED0CD97369710B277312528B306B96F9C12A4BA_RuntimeMethod_var);
	}

IL_00d1:
	{
	}

IL_00d2:
	{
	}

IL_00d3:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_30 = __this->____attributes_2;
		V_6 = L_30;
		goto IL_00dd;
	}

IL_00dd:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_31 = V_6;
		return L_31;
	}
}
// System.Boolean Mapbox.Json.Converters.XElementWrapper::HasImplicitNamespaceAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElementWrapper_HasImplicitNamespaceAttribute_m47A1C45A836F237665294ACA53F9E190AF5A8F4E (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, String_t* ___namespaceUri0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B15_0 = 0;
	{
		String_t* L_0 = ___namespaceUri0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_2 = ___namespaceUri0;
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(18 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XObjectWrapper::get_ParentNode() */, __this);
		RuntimeObject* L_4 = L_3;
		G_B2_0 = L_4;
		G_B2_1 = L_2;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			goto IL_0017;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_001c;
	}

IL_0017:
	{
		NullCheck(G_B3_0);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Mapbox.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, G_B3_0);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
	}

IL_001c:
	{
		bool L_6;
		L_6 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(G_B4_1, G_B4_0, NULL);
		G_B6_0 = ((int32_t)(L_6));
		goto IL_0024;
	}

IL_0023:
	{
		G_B6_0 = 0;
	}

IL_0024:
	{
		V_0 = (bool)G_B6_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_00e2;
		}
	}
	{
		String_t* L_8 = ___namespaceUri0;
		String_t* L_9;
		L_9 = XElementWrapper_GetPrefixOfNamespace_m9B2B9487E395FF17BC607F6F21BEB1798750D42C(__this, L_8, NULL);
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_00e1;
		}
	}
	{
		V_2 = (bool)0;
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_12;
		L_12 = XElementWrapper_get_Element_mE91FB02E9F795A47C4D10F4A104CD793CFD0658C(__this, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = XElement_get_HasAttributes_m5ACE856A8490A467C7B9F7EC29D37147E6D4B022(L_12, NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_00d0;
		}
	}
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_15;
		L_15 = XElementWrapper_get_Element_mE91FB02E9F795A47C4D10F4A104CD793CFD0658C(__this, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = XElement_Attributes_m6B330A71FCAFA7A746FF494CC45F8B757F2CEF37(L_15, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t148EAB2068C5F48E82A9E0C643BB154B8BB34257_il2cpp_TypeInfo_var, L_16);
		V_4 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c2:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_18 = V_4;
					if (!L_18)
					{
						goto IL_00ce;
					}
				}
				{
					RuntimeObject* L_19 = V_4;
					NullCheck(L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
				}

IL_00ce:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b7_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_20 = V_4;
				NullCheck(L_20);
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_21;
				L_21 = InterfaceFuncInvoker0< XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t48AB7213FE0C045660B7F1D0FEA232BA22210BC4_il2cpp_TypeInfo_var, L_20);
				V_5 = L_21;
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_22 = V_5;
				NullCheck(L_22);
				XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_23;
				L_23 = XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline(L_22, NULL);
				NullCheck(L_23);
				String_t* L_24;
				L_24 = XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline(L_23, NULL);
				bool L_25;
				L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
				if (!L_25)
				{
					goto IL_00ab_1;
				}
			}
			{
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_26 = V_5;
				NullCheck(L_26);
				XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_27;
				L_27 = XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline(L_26, NULL);
				NullCheck(L_27);
				String_t* L_28;
				L_28 = XName_get_NamespaceName_mBEAFAB116BBDFE5B13EE2672C6C9DB3E58D257D3(L_27, NULL);
				bool L_29;
				L_29 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_28, NULL);
				if (!L_29)
				{
					goto IL_00ab_1;
				}
			}
			{
				XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* L_30 = V_5;
				NullCheck(L_30);
				String_t* L_31;
				L_31 = XAttribute_get_Value_mDCE15378AC161DF20094EF77EFF017A6F6766EB1_inline(L_30, NULL);
				String_t* L_32 = ___namespaceUri0;
				bool L_33;
				L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, L_32, NULL);
				G_B15_0 = ((int32_t)(L_33));
				goto IL_00ac_1;
			}

IL_00ab_1:
			{
				G_B15_0 = 0;
			}

IL_00ac_1:
			{
				V_6 = (bool)G_B15_0;
				bool L_34 = V_6;
				if (!L_34)
				{
					goto IL_00b6_1;
				}
			}
			{
				V_2 = (bool)1;
			}

IL_00b6_1:
			{
			}

IL_00b7_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00cf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cf:
	{
	}

IL_00d0:
	{
		bool L_37 = V_2;
		V_7 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_7;
		if (!L_38)
		{
			goto IL_00e0;
		}
	}
	{
		V_8 = (bool)1;
		goto IL_00e7;
	}

IL_00e0:
	{
	}

IL_00e1:
	{
	}

IL_00e2:
	{
		V_8 = (bool)0;
		goto IL_00e7;
	}

IL_00e7:
	{
		bool L_39 = V_8;
		return L_39;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XElementWrapper::AppendChild(Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XElementWrapper_AppendChild_mD1ACEA32320121EA51EEAE87AEFD7406C3213CDF (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, RuntimeObject* ___newChild0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___newChild0;
		RuntimeObject* L_1;
		L_1 = XContainerWrapper_AppendChild_m71191CF3DF2E9CAD29BEF6397036A57B6C63A6D7(__this, L_0, NULL);
		V_0 = L_1;
		__this->____attributes_2 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____attributes_2), (void*)(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)NULL);
		RuntimeObject* L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_3 = V_1;
		return L_3;
	}
}
// System.String Mapbox.Json.Converters.XElementWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_get_Value_m7B078204A442954FA7F1BE39641A11186E6B4E49 (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mE91FB02E9F795A47C4D10F4A104CD793CFD0658C(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XElement_get_Value_mC49BD0D0A616BD26B1B8E2D33D2E22D2F5A667BA(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Converters.XElementWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementWrapper_set_Value_mBF17FAA3E9A580B544C8E24318D30C6FE615EBEB (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mE91FB02E9F795A47C4D10F4A104CD793CFD0658C(__this, NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		XElement_set_Value_mC305400046C92E8072E180C50982C6C6EEF98F66(L_0, L_1, NULL);
		return;
	}
}
// System.String Mapbox.Json.Converters.XElementWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_get_LocalName_mF92A71B3CE007E47219AA1801A086F819DBA5612 (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mE91FB02E9F795A47C4D10F4A104CD793CFD0658C(__this, NULL);
		NullCheck(L_0);
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XElement_get_Name_mAF691F0AFE4F732FE836AEAC566536C1231AA74D_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Mapbox.Json.Converters.XElementWrapper::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_get_NamespaceUri_m1105B05ED623D8F071D881EA4E32CD012660786A (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mE91FB02E9F795A47C4D10F4A104CD793CFD0658C(__this, NULL);
		NullCheck(L_0);
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_1;
		L_1 = XElement_get_Name_mAF691F0AFE4F732FE836AEAC566536C1231AA74D_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = XName_get_NamespaceName_mBEAFAB116BBDFE5B13EE2672C6C9DB3E58D257D3(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Mapbox.Json.Converters.XElementWrapper::GetPrefixOfNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XElementWrapper_GetPrefixOfNamespace_m9B2B9487E395FF17BC607F6F21BEB1798750D42C (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, String_t* ___namespaceUri0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mE91FB02E9F795A47C4D10F4A104CD793CFD0658C(__this, NULL);
		String_t* L_1 = ___namespaceUri0;
		XNamespace_t86B6F8515F5E20D387B83EBDE0890C4559A4012C* L_2;
		L_2 = XNamespace_op_Implicit_m82CA31E66BE67924ED340B6CF69B6DF3E8FAC7DC(L_1, NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = XElement_GetPrefixOfNamespace_mD293E0A204AED396C6768157226CBC6A72BFAD11(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Mapbox.Json.Converters.XElementWrapper::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XElementWrapper_get_IsEmpty_mA0B1F807D380552C5D02C0CC687598B395354E91 (XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_0;
		L_0 = XElementWrapper_get_Element_mE91FB02E9F795A47C4D10F4A104CD793CFD0658C(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = XElement_get_IsEmpty_m4451FEC389D90F236A5537E14D0638D40C44D049(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
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
// System.String Mapbox.Json.Converters.XmlNodeConverter::get_DeserializeRootElementName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_get_DeserializeRootElementName_m63868C331A460D89644180CDA035032E503B68EB (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDeserializeRootElementNameU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::set_DeserializeRootElementName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_set_DeserializeRootElementName_mAD9A4920FF08258645EE6398DBDE6DC4A6156AD8 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDeserializeRootElementNameU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeserializeRootElementNameU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::get_WriteArrayAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_WriteArrayAttribute_m20361156D5F9DCCF34428D0D8019CC5D9DA08AEB (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CWriteArrayAttributeU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::set_WriteArrayAttribute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_set_WriteArrayAttribute_m8210B10846225A2C53414B3A5D4FF1C8E7BB7D36 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CWriteArrayAttributeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::get_OmitRootObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_OmitRootObject_m9DE79B549A43F09B4B1E32D4D2884814EEF438D0 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3COmitRootObjectU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::set_OmitRootObject(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_set_OmitRootObject_m7409A26D05C7A851AC0AECD026A5470224E13879 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3COmitRootObjectU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::WriteJson(Mapbox.Json.JsonWriter,System.Object,Mapbox.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_WriteJson_mE6FA42B1191261C1C6A84F5110A9FD2C0834CB70 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* ___writer0, RuntimeObject* ___value1, JsonSerializer_tCFE8A4413AC721597A3840B7D359DF7881652541* ___serializer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___value1;
		RuntimeObject* L_1;
		L_1 = XmlNodeConverter_WrapXml_m340D791D84C06BBAEA1E7364C086B682B96D0D71(__this, L_0, NULL);
		V_0 = L_1;
		NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* L_2 = (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46*)il2cpp_codegen_object_new(NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NameTable__ctor_mB02EE27092095D81E839D51519C4FBDA2227C261(L_2, NULL);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_3 = (XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F*)il2cpp_codegen_object_new(XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlNamespaceManager__ctor_m18E69120CE5886E06630CCCC3215D2C67FC669DB(L_3, L_2, NULL);
		V_1 = L_3;
		RuntimeObject* L_4 = V_0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_5 = V_1;
		XmlNodeConverter_PushParentNamespaces_m17513FA7B9D606704BCF002CF56B9826253E5112(__this, L_4, L_5, NULL);
		bool L_6;
		L_6 = XmlNodeConverter_get_OmitRootObject_m9DE79B549A43F09B4B1E32D4D2884814EEF438D0_inline(__this, NULL);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_8 = ___writer0;
		NullCheck(L_8);
		VirtualActionInvoker0::Invoke(8 /* System.Void Mapbox.Json.JsonWriter::WriteStartObject() */, L_8);
	}

IL_0033:
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_9 = ___writer0;
		RuntimeObject* L_10 = V_0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_11 = V_1;
		bool L_12;
		L_12 = XmlNodeConverter_get_OmitRootObject_m9DE79B549A43F09B4B1E32D4D2884814EEF438D0_inline(__this, NULL);
		XmlNodeConverter_SerializeNode_m8B2FE5E1BE4EB807C6723AAB59AF530A34F77FDA(__this, L_9, L_10, L_11, (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0), NULL);
		bool L_13;
		L_13 = XmlNodeConverter_get_OmitRootObject_m9DE79B549A43F09B4B1E32D4D2884814EEF438D0_inline(__this, NULL);
		V_3 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_15 = ___writer0;
		NullCheck(L_15);
		VirtualActionInvoker0::Invoke(9 /* System.Void Mapbox.Json.JsonWriter::WriteEndObject() */, L_15);
	}

IL_005c:
	{
		return;
	}
}
// Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.XmlNodeConverter::WrapXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_WrapXml_m340D791D84C06BBAEA1E7364C086B682B96D0D71 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* V_0 = NULL;
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		RuntimeObject* L_0 = ___value0;
		V_0 = ((XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)IsInstClass((RuntimeObject*)L_0, XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_il2cpp_TypeInfo_var));
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = XContainerWrapper_WrapNode_mE22313217245C0CAEF4AC55C9A915BA9292FB3C8(L_3, NULL);
		V_3 = L_4;
		goto IL_0045;
	}

IL_001a:
	{
		RuntimeObject* L_5 = ___value0;
		V_1 = ((XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)IsInstClass((RuntimeObject*)L_5, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_il2cpp_TypeInfo_var));
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_6 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* L_8 = V_1;
		RuntimeObject* L_9;
		L_9 = XmlNodeWrapper_WrapNode_m2D7E269564290F8F1DE7689247650CB65C097E6E(L_8, NULL);
		V_3 = L_9;
		goto IL_0045;
	}

IL_0035:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral96E8BF0E5DDD81FBBF5598805554859ED641E1E2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_WrapXml_m340D791D84C06BBAEA1E7364C086B682B96D0D71_RuntimeMethod_var)));
	}

IL_0045:
	{
		RuntimeObject* L_11 = V_3;
		return L_11;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::PushParentNamespaces(Mapbox.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_PushParentNamespaces_m17513FA7B9D606704BCF002CF56B9826253E5112 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_mCA1E5CF0D60E80910E0DD561823028F1C60C365A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	int32_t G_B15_0 = 0;
	{
		V_0 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)NULL;
		RuntimeObject* L_0 = ___node0;
		V_1 = L_0;
		goto IL_0030;
	}

IL_0007:
	{
		RuntimeObject* L_1 = V_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Mapbox.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_1);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_4 = V_0;
		V_3 = (bool)((((RuntimeObject*)(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_6 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)il2cpp_codegen_object_new(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C(L_6, List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0026:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_7 = V_0;
		RuntimeObject* L_8 = V_1;
		NullCheck(L_7);
		List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_inline(L_7, L_8, List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
	}

IL_002f:
	{
	}

IL_0030:
	{
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlNode::get_ParentNode() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_11 = L_10;
		V_1 = L_11;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0007;
		}
	}
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_13 = V_0;
		V_5 = (bool)((!(((RuntimeObject*)(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_010e;
		}
	}
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_15 = V_0;
		NullCheck(L_15);
		List_1_Reverse_mCA1E5CF0D60E80910E0DD561823028F1C60C365A(L_15, List_1_Reverse_mCA1E5CF0D60E80910E0DD561823028F1C60C365A_RuntimeMethod_var);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_16 = V_0;
		NullCheck(L_16);
		Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 L_17;
		L_17 = List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832(L_16, List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fe:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF((&V_6), Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f0_1;
			}

IL_0064_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_inline((&V_6), Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
				V_7 = L_18;
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_19 = ___manager1;
				NullCheck(L_19);
				VirtualActionInvoker0::Invoke(10 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_19);
				RuntimeObject* L_20 = V_7;
				NullCheck(L_20);
				List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_21;
				L_21 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(3 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_20);
				NullCheck(L_21);
				Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 L_22;
				L_22 = List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832(L_21, List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
				V_8 = L_22;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00e0_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF((&V_8), Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00d5_2;
					}

IL_0086_2:
					{
						RuntimeObject* L_23;
						L_23 = Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_inline((&V_8), Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
						V_9 = L_23;
						RuntimeObject* L_24 = V_9;
						NullCheck(L_24);
						String_t* L_25;
						L_25 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Mapbox.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_24);
						bool L_26;
						L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, NULL);
						if (!L_26)
						{
							goto IL_00b6_2;
						}
					}
					{
						RuntimeObject* L_27 = V_9;
						NullCheck(L_27);
						String_t* L_28;
						L_28 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_27);
						bool L_29;
						L_29 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_28, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
						G_B15_0 = ((int32_t)(L_29));
						goto IL_00b7_2;
					}

IL_00b6_2:
					{
						G_B15_0 = 0;
					}

IL_00b7_2:
					{
						V_10 = (bool)G_B15_0;
						bool L_30 = V_10;
						if (!L_30)
						{
							goto IL_00d4_2;
						}
					}
					{
						XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_31 = ___manager1;
						RuntimeObject* L_32 = V_9;
						NullCheck(L_32);
						String_t* L_33;
						L_33 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_32);
						RuntimeObject* L_34 = V_9;
						NullCheck(L_34);
						String_t* L_35;
						L_35 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Mapbox.Json.Converters.IXmlNode::get_Value() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_34);
						NullCheck(L_31);
						VirtualActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_31, L_33, L_35);
					}

IL_00d4_2:
					{
					}

IL_00d5_2:
					{
						bool L_36;
						L_36 = Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF((&V_8), Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
						if (L_36)
						{
							goto IL_0086_2;
						}
					}
					{
						goto IL_00ef_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00ef_1:
			{
			}

IL_00f0_1:
			{
				bool L_37;
				L_37 = Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF((&V_6), Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_010d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010d:
	{
	}

IL_010e:
	{
		return;
	}
}
// System.String Mapbox.Json.Converters.XmlNodeConverter::ResolveFullName(Mapbox.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_ResolveFullName_mF5384ED3AE05EF0F6CE9B4AD5FFA655BA4A7AD7C (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	String_t* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___node0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Mapbox.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_2 = ___node0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_2);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_5 = ___node0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Mapbox.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_5);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, NULL);
		if (L_7)
		{
			goto IL_003b;
		}
	}

IL_002d:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_8 = ___manager1;
		RuntimeObject* L_9 = ___node0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Mapbox.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_8);
		String_t* L_11;
		L_11 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, L_8, L_10);
		G_B5_0 = L_11;
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = ((String_t*)(NULL));
	}

IL_003c:
	{
		V_0 = G_B5_0;
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_15 = V_0;
		RuntimeObject* L_16 = ___node0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_16);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = XmlConvert_DecodeName_m59D31842CBCDCD2657BCE42AC8D8DFA818FB9437(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_15, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_18, NULL);
		V_2 = L_19;
		goto IL_0073;
	}

IL_0064:
	{
		RuntimeObject* L_20 = ___node0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_20);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_22;
		L_22 = XmlConvert_DecodeName_m59D31842CBCDCD2657BCE42AC8D8DFA818FB9437(L_21, NULL);
		V_2 = L_22;
		goto IL_0073;
	}

IL_0073:
	{
		String_t* L_23 = V_2;
		return L_23;
	}
}
// System.String Mapbox.Json.Converters.XmlNodeConverter::GetPropertyName(Mapbox.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_GetPropertyName_m8706C2B027138EA86E361564670FD4901C719C52 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, RuntimeObject* ___node0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB28C3D7E7F56FAA480CEF9C7D0E3BF741423901);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___node0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Mapbox.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_00b3;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_0121;
			}
			case 3:
			{
				goto IL_009d;
			}
			case 4:
			{
				goto IL_0131;
			}
			case 5:
			{
				goto IL_0131;
			}
			case 6:
			{
				goto IL_00e7;
			}
			case 7:
			{
				goto IL_00a8;
			}
			case 8:
			{
				goto IL_0131;
			}
			case 9:
			{
				goto IL_00fc;
			}
			case 10:
			{
				goto IL_0131;
			}
			case 11:
			{
				goto IL_0131;
			}
			case 12:
			{
				goto IL_0129;
			}
			case 13:
			{
				goto IL_0119;
			}
			case 14:
			{
				goto IL_0131;
			}
			case 15:
			{
				goto IL_0131;
			}
			case 16:
			{
				goto IL_0111;
			}
		}
	}
	{
		goto IL_0131;
	}

IL_0059:
	{
		RuntimeObject* L_3 = ___node0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Mapbox.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_3);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_7 = ___node0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_7);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_8, NULL);
		V_2 = L_9;
		goto IL_014c;
	}

IL_0084:
	{
		RuntimeObject* L_10 = ___node0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_11 = ___manager1;
		String_t* L_12;
		L_12 = XmlNodeConverter_ResolveFullName_mF5384ED3AE05EF0F6CE9B4AD5FFA655BA4A7AD7C(__this, L_10, L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, L_12, NULL);
		V_2 = L_13;
		goto IL_014c;
	}

IL_009d:
	{
		V_2 = _stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655;
		goto IL_014c;
	}

IL_00a8:
	{
		V_2 = _stringLiteralDB28C3D7E7F56FAA480CEF9C7D0E3BF741423901;
		goto IL_014c;
	}

IL_00b3:
	{
		RuntimeObject* L_14 = ___node0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Mapbox.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_14);
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_00db;
		}
	}
	{
		RuntimeObject* L_18 = ___node0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_18);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9E6DEA6E609FD74FD29A7E5BB6D900CCBA5F3FBF, L_19, NULL);
		V_2 = L_20;
		goto IL_014c;
	}

IL_00db:
	{
		RuntimeObject* L_21 = ___node0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_22 = ___manager1;
		String_t* L_23;
		L_23 = XmlNodeConverter_ResolveFullName_mF5384ED3AE05EF0F6CE9B4AD5FFA655BA4A7AD7C(__this, L_21, L_22, NULL);
		V_2 = L_23;
		goto IL_014c;
	}

IL_00e7:
	{
		RuntimeObject* L_24 = ___node0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_25 = ___manager1;
		String_t* L_26;
		L_26 = XmlNodeConverter_ResolveFullName_mF5384ED3AE05EF0F6CE9B4AD5FFA655BA4A7AD7C(__this, L_24, L_25, NULL);
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, L_26, NULL);
		V_2 = L_27;
		goto IL_014c;
	}

IL_00fc:
	{
		RuntimeObject* L_28 = ___node0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_29 = ___manager1;
		String_t* L_30;
		L_30 = XmlNodeConverter_ResolveFullName_mF5384ED3AE05EF0F6CE9B4AD5FFA655BA4A7AD7C(__this, L_28, L_29, NULL);
		String_t* L_31;
		L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46, L_30, NULL);
		V_2 = L_31;
		goto IL_014c;
	}

IL_0111:
	{
		V_2 = _stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47;
		goto IL_014c;
	}

IL_0119:
	{
		V_2 = _stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C;
		goto IL_014c;
	}

IL_0121:
	{
		V_2 = _stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4;
		goto IL_014c;
	}

IL_0129:
	{
		V_2 = _stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520;
		goto IL_014c;
	}

IL_0131:
	{
		RuntimeObject* L_32 = ___node0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Mapbox.Json.Converters.IXmlNode::get_NodeType() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var)), L_32);
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var)), &L_34);
		String_t* L_36;
		L_36 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral810C723B6D33105E6B3277736A780EFDA0438806)), L_35, NULL);
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_37 = (JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		JsonSerializationException__ctor_m273E671F4E28041EC651C496F36ACCCC2B277C75(L_37, L_36, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_GetPropertyName_m8706C2B027138EA86E361564670FD4901C719C52_RuntimeMethod_var)));
	}

IL_014c:
	{
		String_t* L_38 = V_2;
		return L_38;
	}
}
// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::IsArray(Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsArray_mE380754B6C1FCFBE25A0221801DF9A230EE6DB4B (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, RuntimeObject* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___node0;
		NullCheck(L_0);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(3 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 L_2;
		L_2 = List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832(L_1, List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF((&V_0), Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0052_1;
			}

IL_0010_1:
			{
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_inline((&V_0), Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
				V_1 = L_3;
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				String_t* L_5;
				L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_4);
				bool L_6;
				L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A, NULL);
				if (!L_6)
				{
					goto IL_003d_1;
				}
			}
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Mapbox.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_7);
				bool L_9;
				L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
				G_B5_0 = ((int32_t)(L_9));
				goto IL_003e_1;
			}

IL_003d_1:
			{
				G_B5_0 = 0;
			}

IL_003e_1:
			{
				V_2 = (bool)G_B5_0;
				bool L_10 = V_2;
				if (!L_10)
				{
					goto IL_0051_1;
				}
			}
			{
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				String_t* L_12;
				L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Mapbox.Json.Converters.IXmlNode::get_Value() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_11);
				il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = XmlConvert_ToBoolean_mB95C798BD6D849071E6A686CBF85851C25C7006A(L_12, NULL);
				V_3 = L_13;
				goto IL_0070;
			}

IL_0051_1:
			{
			}

IL_0052_1:
			{
				bool L_14;
				L_14 = Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF((&V_0), Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_006c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		V_3 = (bool)0;
		goto IL_0070;
	}

IL_0070:
	{
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::SerializeGroupedNodes(Mapbox.Json.JsonWriter,Mapbox.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_SerializeGroupedNodes_mCDBC0B058159857B2F95C6F1429445FA8EFB8ED1 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* ___writer0, RuntimeObject* ___node1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, bool ___writePropertyName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA4D2C31AFD0DD873964EFF962E2FF218AE55BEF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	String_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* V_11 = NULL;
	int32_t V_12 = 0;
	bool V_13 = false;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 V_20;
	memset((&V_20), 0, sizeof(V_20));
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_21;
	memset((&V_21), 0, sizeof(V_21));
	List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* V_22 = NULL;
	bool V_23 = false;
	{
		RuntimeObject* L_0 = ___node1;
		NullCheck(L_0);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_inline(L_1, List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_004a;
	}

IL_0018:
	{
		goto IL_024f;
	}

IL_001e:
	{
		RuntimeObject* L_5 = ___node1;
		NullCheck(L_5);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_6;
		L_6 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554(L_6, 0, List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_8 = ___manager2;
		String_t* L_9;
		L_9 = XmlNodeConverter_GetPropertyName_m8706C2B027138EA86E361564670FD4901C719C52(__this, L_7, L_8, NULL);
		V_1 = L_9;
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_10 = ___writer0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_11 = ___manager2;
		bool L_12 = ___writePropertyName3;
		RuntimeObject* L_13 = ___node1;
		NullCheck(L_13);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_14;
		L_14 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_13);
		String_t* L_15 = V_1;
		XmlNodeConverter_WriteGroupedNodes_m28A066A095C051F48903F880FBA70214B6A7152C(__this, L_10, L_11, L_12, L_14, L_15, NULL);
		goto IL_024f;
	}

IL_004a:
	{
		V_2 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		V_3 = (String_t*)NULL;
		V_4 = 0;
		goto IL_018f;
	}

IL_0057:
	{
		RuntimeObject* L_16 = ___node1;
		NullCheck(L_16);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_17;
		L_17 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_16);
		int32_t L_18 = V_4;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554(L_17, L_18, List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		V_5 = L_19;
		RuntimeObject* L_20 = V_5;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_21 = ___manager2;
		String_t* L_22;
		L_22 = XmlNodeConverter_GetPropertyName_m8706C2B027138EA86E361564670FD4901C719C52(__this, L_20, L_21, NULL);
		V_6 = L_22;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_23 = V_2;
		V_7 = (bool)((((RuntimeObject*)(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)L_23) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_25 = V_3;
		V_8 = (bool)((((RuntimeObject*)(String_t*)L_25) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_0094;
		}
	}
	{
		String_t* L_27 = V_6;
		V_3 = L_27;
		goto IL_011f;
	}

IL_0094:
	{
		String_t* L_28 = V_6;
		String_t* L_29 = V_3;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, L_29, NULL);
		V_9 = L_30;
		bool L_31 = V_9;
		if (!L_31)
		{
			goto IL_00a6;
		}
	}
	{
		goto IL_011f;
	}

IL_00a6:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_32 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_32, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_2 = L_32;
		int32_t L_33 = V_4;
		V_10 = (bool)((((int32_t)L_33) > ((int32_t)1))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_35 = V_4;
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_36 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)il2cpp_codegen_object_new(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		List_1__ctor_mA4D2C31AFD0DD873964EFF962E2FF218AE55BEF8(L_36, L_35, List_1__ctor_mA4D2C31AFD0DD873964EFF962E2FF218AE55BEF8_RuntimeMethod_var);
		V_11 = L_36;
		V_12 = 0;
		goto IL_00e4;
	}

IL_00c7:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_37 = V_11;
		RuntimeObject* L_38 = ___node1;
		NullCheck(L_38);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_39;
		L_39 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_38);
		int32_t L_40 = V_12;
		NullCheck(L_39);
		RuntimeObject* L_41;
		L_41 = List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554(L_39, L_40, List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		NullCheck(L_37);
		List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_inline(L_37, L_41, List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
		int32_t L_42 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00e4:
	{
		int32_t L_43 = V_12;
		int32_t L_44 = V_4;
		V_13 = (bool)((((int32_t)L_43) < ((int32_t)L_44))? 1 : 0);
		bool L_45 = V_13;
		if (L_45)
		{
			goto IL_00c7;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_46 = V_2;
		String_t* L_47 = V_3;
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_48 = V_11;
		NullCheck(L_46);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_46, L_47, L_48, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		goto IL_0113;
	}

IL_00fd:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_49 = V_2;
		String_t* L_50 = V_3;
		RuntimeObject* L_51 = ___node1;
		NullCheck(L_51);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_52;
		L_52 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_51);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554(L_52, 0, List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		NullCheck(L_49);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_49, L_50, L_53, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
	}

IL_0113:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_54 = V_2;
		String_t* L_55 = V_6;
		RuntimeObject* L_56 = V_5;
		NullCheck(L_54);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_54, L_55, L_56, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
	}

IL_011f:
	{
		goto IL_0188;
	}

IL_0122:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_57 = V_2;
		String_t* L_58 = V_6;
		NullCheck(L_57);
		bool L_59;
		L_59 = Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8(L_57, L_58, (&V_14), Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		V_15 = (bool)((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_15;
		if (!L_60)
		{
			goto IL_0145;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_61 = V_2;
		String_t* L_62 = V_6;
		RuntimeObject* L_63 = V_5;
		NullCheck(L_61);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_61, L_62, L_63, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		goto IL_0187;
	}

IL_0145:
	{
		RuntimeObject* L_64 = V_14;
		V_16 = ((List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)IsInstClass((RuntimeObject*)L_64, List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var));
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_65 = V_16;
		V_17 = (bool)((((RuntimeObject*)(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)L_65) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_66 = V_17;
		if (!L_66)
		{
			goto IL_017c;
		}
	}
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_67 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)il2cpp_codegen_object_new(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C(L_67, List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C_RuntimeMethod_var);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_68 = L_67;
		RuntimeObject* L_69 = V_14;
		NullCheck(L_68);
		List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_inline(L_68, ((RuntimeObject*)Castclass((RuntimeObject*)L_69, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var)), List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
		V_16 = L_68;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_70 = V_2;
		String_t* L_71 = V_6;
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_72 = V_16;
		NullCheck(L_70);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_70, L_71, L_72, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
	}

IL_017c:
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_73 = V_16;
		RuntimeObject* L_74 = V_5;
		NullCheck(L_73);
		List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_inline(L_73, L_74, List_1_Add_m2E3FB126127FD26D76094DC7FC692FC6ED55EB43_RuntimeMethod_var);
	}

IL_0187:
	{
	}

IL_0188:
	{
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_018f:
	{
		int32_t L_76 = V_4;
		RuntimeObject* L_77 = ___node1;
		NullCheck(L_77);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_78;
		L_78 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_77);
		NullCheck(L_78);
		int32_t L_79;
		L_79 = List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_inline(L_78, List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		V_18 = (bool)((((int32_t)L_76) < ((int32_t)L_79))? 1 : 0);
		bool L_80 = V_18;
		if (L_80)
		{
			goto IL_0057;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_81 = V_2;
		V_19 = (bool)((((RuntimeObject*)(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)L_81) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_82 = V_19;
		if (!L_82)
		{
			goto IL_01ca;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_83 = ___writer0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_84 = ___manager2;
		bool L_85 = ___writePropertyName3;
		RuntimeObject* L_86 = ___node1;
		NullCheck(L_86);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_87;
		L_87 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_86);
		String_t* L_88 = V_3;
		XmlNodeConverter_WriteGroupedNodes_m28A066A095C051F48903F880FBA70214B6A7152C(__this, L_83, L_84, L_85, L_87, L_88, NULL);
		goto IL_024d;
	}

IL_01ca:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_89 = V_2;
		NullCheck(L_89);
		Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 L_90;
		L_90 = Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC(L_89, Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		V_20 = L_90;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_023d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F((&V_20), Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0232_1;
			}

IL_01d6_1:
			{
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_91;
				L_91 = Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline((&V_20), Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
				V_21 = L_91;
				RuntimeObject* L_92;
				L_92 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_21), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_22 = ((List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)IsInstClass((RuntimeObject*)L_92, List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var));
				List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_93 = V_22;
				V_23 = (bool)((!(((RuntimeObject*)(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)L_93) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_94 = V_23;
				if (!L_94)
				{
					goto IL_0211_1;
				}
			}
			{
				JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_95 = ___writer0;
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_96 = ___manager2;
				bool L_97 = ___writePropertyName3;
				List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_98 = V_22;
				String_t* L_99;
				L_99 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_21), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				XmlNodeConverter_WriteGroupedNodes_m28A066A095C051F48903F880FBA70214B6A7152C(__this, L_95, L_96, L_97, L_98, L_99, NULL);
				goto IL_0231_1;
			}

IL_0211_1:
			{
				JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_100 = ___writer0;
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_101 = ___manager2;
				bool L_102 = ___writePropertyName3;
				RuntimeObject* L_103;
				L_103 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_21), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				String_t* L_104;
				L_104 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_21), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				XmlNodeConverter_WriteGroupedNodes_mE9E7AA47D54E0DA14D77CF4BA4B325800D9A0750(__this, L_100, L_101, L_102, ((RuntimeObject*)Castclass((RuntimeObject*)L_103, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var)), L_104, NULL);
			}

IL_0231_1:
			{
			}

IL_0232_1:
			{
				bool L_105;
				L_105 = Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E((&V_20), Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
				if (L_105)
				{
					goto IL_01d6_1;
				}
			}
			{
				goto IL_024c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_024c:
	{
	}

IL_024d:
	{
		goto IL_024f;
	}

IL_024f:
	{
		return;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::WriteGroupedNodes(Mapbox.Json.JsonWriter,System.Xml.XmlNamespaceManager,System.Boolean,System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_WriteGroupedNodes_m28A066A095C051F48903F880FBA70214B6A7152C (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* ___writer0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, bool ___writePropertyName2, List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* ___groupedNodes3, String_t* ___elementNames4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_0 = ___groupedNodes3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_inline(L_0, List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_3 = ___groupedNodes3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554(L_3, 0, List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		bool L_5;
		L_5 = XmlNodeConverter_IsArray_mE380754B6C1FCFBE25A0221801DF9A230EE6DB4B(__this, L_4, NULL);
		V_0 = L_5;
		goto IL_0026;
	}

IL_0022:
	{
		V_0 = (bool)1;
	}

IL_0026:
	{
		bool L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_8 = ___writer0;
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_9 = ___groupedNodes3;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554(L_9, 0, List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_11 = ___manager1;
		bool L_12 = ___writePropertyName2;
		XmlNodeConverter_SerializeNode_m8B2FE5E1BE4EB807C6723AAB59AF530A34F77FDA(__this, L_8, L_10, L_11, L_12, NULL);
		goto IL_0095;
	}

IL_0044:
	{
		bool L_13 = ___writePropertyName2;
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_15 = ___writer0;
		String_t* L_16 = ___elementNames4;
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String) */, L_15, L_16);
	}

IL_0055:
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_17 = ___writer0;
		NullCheck(L_17);
		VirtualActionInvoker0::Invoke(10 /* System.Void Mapbox.Json.JsonWriter::WriteStartArray() */, L_17);
		V_4 = 0;
		goto IL_007c;
	}

IL_0061:
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_18 = ___writer0;
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_19 = ___groupedNodes3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554(L_19, L_20, List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_22 = ___manager1;
		XmlNodeConverter_SerializeNode_m8B2FE5E1BE4EB807C6723AAB59AF530A34F77FDA(__this, L_18, L_21, L_22, (bool)0, NULL);
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007c:
	{
		int32_t L_24 = V_4;
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_25 = ___groupedNodes3;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_inline(L_25, List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_24) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0061;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_28 = ___writer0;
		NullCheck(L_28);
		VirtualActionInvoker0::Invoke(11 /* System.Void Mapbox.Json.JsonWriter::WriteEndArray() */, L_28);
	}

IL_0095:
	{
		return;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::WriteGroupedNodes(Mapbox.Json.JsonWriter,System.Xml.XmlNamespaceManager,System.Boolean,Mapbox.Json.Converters.IXmlNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_WriteGroupedNodes_mE9E7AA47D54E0DA14D77CF4BA4B325800D9A0750 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* ___writer0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, bool ___writePropertyName2, RuntimeObject* ___node3, String_t* ___elementNames4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___node3;
		bool L_1;
		L_1 = XmlNodeConverter_IsArray_mE380754B6C1FCFBE25A0221801DF9A230EE6DB4B(__this, L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_4 = ___writer0;
		RuntimeObject* L_5 = ___node3;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_6 = ___manager1;
		bool L_7 = ___writePropertyName2;
		XmlNodeConverter_SerializeNode_m8B2FE5E1BE4EB807C6723AAB59AF530A34F77FDA(__this, L_4, L_5, L_6, L_7, NULL);
		goto IL_004e;
	}

IL_0022:
	{
		bool L_8 = ___writePropertyName2;
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_10 = ___writer0;
		String_t* L_11 = ___elementNames4;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String) */, L_10, L_11);
	}

IL_0033:
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_12 = ___writer0;
		NullCheck(L_12);
		VirtualActionInvoker0::Invoke(10 /* System.Void Mapbox.Json.JsonWriter::WriteStartArray() */, L_12);
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_13 = ___writer0;
		RuntimeObject* L_14 = ___node3;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_15 = ___manager1;
		XmlNodeConverter_SerializeNode_m8B2FE5E1BE4EB807C6723AAB59AF530A34F77FDA(__this, L_13, L_14, L_15, (bool)0, NULL);
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_16 = ___writer0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(11 /* System.Void Mapbox.Json.JsonWriter::WriteEndArray() */, L_16);
	}

IL_004e:
	{
		return;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::SerializeNode(Mapbox.Json.JsonWriter,Mapbox.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_SerializeNode_m8B2FE5E1BE4EB807C6723AAB59AF530A34F77FDA (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* ___writer0, RuntimeObject* ___node1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, bool ___writePropertyName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDeclaration_t42BEBEB4A4019272CB336747C8376AC47B561AA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocumentType_t15297B02A3814B45A73874CEC92E158C292239DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	int32_t V_14 = 0;
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
	int32_t G_B7_0 = 0;
	String_t* G_B15_0 = NULL;
	int32_t G_B26_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B48_0 = 0;
	{
		RuntimeObject* L_0 = ___node1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Mapbox.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_0278;
			}
			case 2:
			{
				goto IL_0278;
			}
			case 3:
			{
				goto IL_0278;
			}
			case 4:
			{
				goto IL_04a0;
			}
			case 5:
			{
				goto IL_04a0;
			}
			case 6:
			{
				goto IL_0278;
			}
			case 7:
			{
				goto IL_025c;
			}
			case 8:
			{
				goto IL_0059;
			}
			case 9:
			{
				goto IL_03be;
			}
			case 10:
			{
				goto IL_0059;
			}
			case 11:
			{
				goto IL_04a0;
			}
			case 12:
			{
				goto IL_0278;
			}
			case 13:
			{
				goto IL_0278;
			}
			case 14:
			{
				goto IL_04a0;
			}
			case 15:
			{
				goto IL_04a0;
			}
			case 16:
			{
				goto IL_0308;
			}
		}
	}
	{
		goto IL_04a0;
	}

IL_0059:
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_3 = ___writer0;
		RuntimeObject* L_4 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_5 = ___manager2;
		bool L_6 = ___writePropertyName3;
		XmlNodeConverter_SerializeGroupedNodes_mCDBC0B058159857B2F95C6F1429445FA8EFB8ED1(__this, L_3, L_4, L_5, L_6, NULL);
		goto IL_04bb;
	}

IL_006a:
	{
		RuntimeObject* L_7 = ___node1;
		bool L_8;
		L_8 = XmlNodeConverter_IsArray_mE380754B6C1FCFBE25A0221801DF9A230EE6DB4B(__this, L_7, NULL);
		if (!L_8)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_9 = ___node1;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = XmlNodeConverter_AllSameName_mF4F1D85CF9674392BDDDDB7FBF1CE31D695E8150(L_9, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_11 = ___node1;
		NullCheck(L_11);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_12;
		L_12 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_inline(L_12, List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		G_B7_0 = ((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
		goto IL_008c;
	}

IL_008b:
	{
		G_B7_0 = 0;
	}

IL_008c:
	{
		V_3 = (bool)G_B7_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_00a2;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_15 = ___writer0;
		RuntimeObject* L_16 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_17 = ___manager2;
		XmlNodeConverter_SerializeGroupedNodes_mCDBC0B058159857B2F95C6F1429445FA8EFB8ED1(__this, L_15, L_16, L_17, (bool)0, NULL);
		goto IL_0257;
	}

IL_00a2:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_18 = ___manager2;
		NullCheck(L_18);
		VirtualActionInvoker0::Invoke(10 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_18);
		RuntimeObject* L_19 = ___node1;
		NullCheck(L_19);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_20;
		L_20 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(3 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 L_21;
		L_21 = List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832(L_20, List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		V_4 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0125:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF((&V_4), Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_011a_1;
			}

IL_00ba_1:
			{
				RuntimeObject* L_22;
				L_22 = Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_inline((&V_4), Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
				V_5 = L_22;
				RuntimeObject* L_23 = V_5;
				NullCheck(L_23);
				String_t* L_24;
				L_24 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Mapbox.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_23);
				bool L_25;
				L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, NULL);
				V_6 = L_25;
				bool L_26 = V_6;
				if (!L_26)
				{
					goto IL_0119_1;
				}
			}
			{
				RuntimeObject* L_27 = V_5;
				NullCheck(L_27);
				String_t* L_28;
				L_28 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_27);
				bool L_29;
				L_29 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_28, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, NULL);
				if (L_29)
				{
					goto IL_00f6_1;
				}
			}
			{
				String_t* L_30 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				G_B15_0 = L_30;
				goto IL_0102_1;
			}

IL_00f6_1:
			{
				RuntimeObject* L_31 = V_5;
				NullCheck(L_31);
				String_t* L_32;
				L_32 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_31);
				il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
				String_t* L_33;
				L_33 = XmlConvert_DecodeName_m59D31842CBCDCD2657BCE42AC8D8DFA818FB9437(L_32, NULL);
				G_B15_0 = L_33;
			}

IL_0102_1:
			{
				V_7 = G_B15_0;
				RuntimeObject* L_34 = V_5;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Mapbox.Json.Converters.IXmlNode::get_Value() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_34);
				V_8 = L_35;
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_36 = ___manager2;
				String_t* L_37 = V_7;
				String_t* L_38 = V_8;
				NullCheck(L_36);
				VirtualActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_36, L_37, L_38);
			}

IL_0119_1:
			{
			}

IL_011a_1:
			{
				bool L_39;
				L_39 = Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF((&V_4), Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_00ba_1;
				}
			}
			{
				goto IL_0134;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0134:
	{
		bool L_40 = ___writePropertyName3;
		V_9 = L_40;
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_014d;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_42 = ___writer0;
		RuntimeObject* L_43 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_44 = ___manager2;
		String_t* L_45;
		L_45 = XmlNodeConverter_GetPropertyName_m8706C2B027138EA86E361564670FD4901C719C52(__this, L_43, L_44, NULL);
		NullCheck(L_42);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String) */, L_42, L_45);
	}

IL_014d:
	{
		RuntimeObject* L_46 = ___node1;
		NullCheck(L_46);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_47;
		L_47 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(3 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_46);
		bool L_48;
		L_48 = XmlNodeConverter_ValueAttributes_m08CBF846C3D879A151F1C11BD32A1BDCA04BBC40(__this, L_47, NULL);
		if (L_48)
		{
			goto IL_017f;
		}
	}
	{
		RuntimeObject* L_49 = ___node1;
		NullCheck(L_49);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_50;
		L_50 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_49);
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_inline(L_50, List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		if ((!(((uint32_t)L_51) == ((uint32_t)1))))
		{
			goto IL_017f;
		}
	}
	{
		RuntimeObject* L_52 = ___node1;
		NullCheck(L_52);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_53;
		L_53 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_52);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554(L_53, 0, List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		NullCheck(L_54);
		int32_t L_55;
		L_55 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Mapbox.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_54);
		G_B26_0 = ((((int32_t)L_55) == ((int32_t)3))? 1 : 0);
		goto IL_0180;
	}

IL_017f:
	{
		G_B26_0 = 0;
	}

IL_0180:
	{
		V_10 = (bool)G_B26_0;
		bool L_56 = V_10;
		if (!L_56)
		{
			goto IL_01a5;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_57 = ___writer0;
		RuntimeObject* L_58 = ___node1;
		NullCheck(L_58);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_59;
		L_59 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_58);
		NullCheck(L_59);
		RuntimeObject* L_60;
		L_60 = List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554(L_59, 0, List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		NullCheck(L_60);
		String_t* L_61;
		L_61 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Mapbox.Json.Converters.IXmlNode::get_Value() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_60);
		NullCheck(L_57);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Mapbox.Json.JsonWriter::WriteValue(System.String) */, L_57, L_61);
		goto IL_024f;
	}

IL_01a5:
	{
		RuntimeObject* L_62 = ___node1;
		NullCheck(L_62);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_63;
		L_63 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_62);
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_inline(L_63, List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		if (L_64)
		{
			goto IL_01c2;
		}
	}
	{
		RuntimeObject* L_65 = ___node1;
		NullCheck(L_65);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_66;
		L_66 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(3 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_65);
		NullCheck(L_66);
		int32_t L_67;
		L_67 = List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_inline(L_66, List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		G_B31_0 = ((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
		goto IL_01c3;
	}

IL_01c2:
	{
		G_B31_0 = 0;
	}

IL_01c3:
	{
		V_11 = (bool)G_B31_0;
		bool L_68 = V_11;
		if (!L_68)
		{
			goto IL_01fb;
		}
	}
	{
		RuntimeObject* L_69 = ___node1;
		V_12 = ((RuntimeObject*)Castclass((RuntimeObject*)L_69, IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var));
		RuntimeObject* L_70 = V_12;
		NullCheck(L_70);
		bool L_71;
		L_71 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Mapbox.Json.Converters.IXmlElement::get_IsEmpty() */, IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var, L_70);
		V_13 = L_71;
		bool L_72 = V_13;
		if (!L_72)
		{
			goto IL_01ea;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_73 = ___writer0;
		NullCheck(L_73);
		VirtualActionInvoker0::Invoke(22 /* System.Void Mapbox.Json.JsonWriter::WriteNull() */, L_73);
		goto IL_01f8;
	}

IL_01ea:
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_74 = ___writer0;
		String_t* L_75 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_74);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Mapbox.Json.JsonWriter::WriteValue(System.String) */, L_74, L_75);
	}

IL_01f8:
	{
		goto IL_024f;
	}

IL_01fb:
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_76 = ___writer0;
		NullCheck(L_76);
		VirtualActionInvoker0::Invoke(8 /* System.Void Mapbox.Json.JsonWriter::WriteStartObject() */, L_76);
		V_14 = 0;
		goto IL_0227;
	}

IL_0208:
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_77 = ___writer0;
		RuntimeObject* L_78 = ___node1;
		NullCheck(L_78);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_79;
		L_79 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(3 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_78);
		int32_t L_80 = V_14;
		NullCheck(L_79);
		RuntimeObject* L_81;
		L_81 = List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554(L_79, L_80, List_1_get_Item_m16D3BFAD3889661D4224B1E41B4BECF7DEFF0554_RuntimeMethod_var);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_82 = ___manager2;
		XmlNodeConverter_SerializeNode_m8B2FE5E1BE4EB807C6723AAB59AF530A34F77FDA(__this, L_77, L_81, L_82, (bool)1, NULL);
		int32_t L_83 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_0227:
	{
		int32_t L_84 = V_14;
		RuntimeObject* L_85 = ___node1;
		NullCheck(L_85);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_86;
		L_86 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(3 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_Attributes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_85);
		NullCheck(L_86);
		int32_t L_87;
		L_87 = List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_inline(L_86, List_1_get_Count_m0B5DE5A9F0CFC1782E7E7C59233AC3824E23A1B0_RuntimeMethod_var);
		V_15 = (bool)((((int32_t)L_84) < ((int32_t)L_87))? 1 : 0);
		bool L_88 = V_15;
		if (L_88)
		{
			goto IL_0208;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_89 = ___writer0;
		RuntimeObject* L_90 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_91 = ___manager2;
		XmlNodeConverter_SerializeGroupedNodes_mCDBC0B058159857B2F95C6F1429445FA8EFB8ED1(__this, L_89, L_90, L_91, (bool)1, NULL);
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_92 = ___writer0;
		NullCheck(L_92);
		VirtualActionInvoker0::Invoke(9 /* System.Void Mapbox.Json.JsonWriter::WriteEndObject() */, L_92);
	}

IL_024f:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_93 = ___manager2;
		NullCheck(L_93);
		bool L_94;
		L_94 = VirtualFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_93);
	}

IL_0257:
	{
		goto IL_04bb;
	}

IL_025c:
	{
		bool L_95 = ___writePropertyName3;
		V_16 = L_95;
		bool L_96 = V_16;
		if (!L_96)
		{
			goto IL_0273;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_97 = ___writer0;
		RuntimeObject* L_98 = ___node1;
		NullCheck(L_98);
		String_t* L_99;
		L_99 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Mapbox.Json.Converters.IXmlNode::get_Value() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_98);
		NullCheck(L_97);
		VirtualActionInvoker1< String_t* >::Invoke(64 /* System.Void Mapbox.Json.JsonWriter::WriteComment(System.String) */, L_97, L_99);
	}

IL_0273:
	{
		goto IL_04bb;
	}

IL_0278:
	{
		RuntimeObject* L_100 = ___node1;
		NullCheck(L_100);
		String_t* L_101;
		L_101 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Mapbox.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_100);
		bool L_102;
		L_102 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_101, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, NULL);
		if (!L_102)
		{
			goto IL_029c;
		}
	}
	{
		RuntimeObject* L_103 = ___node1;
		NullCheck(L_103);
		String_t* L_104;
		L_104 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Mapbox.Json.Converters.IXmlNode::get_Value() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_103);
		bool L_105;
		L_105 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_104, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
		G_B48_0 = ((int32_t)(L_105));
		goto IL_029d;
	}

IL_029c:
	{
		G_B48_0 = 0;
	}

IL_029d:
	{
		V_17 = (bool)G_B48_0;
		bool L_106 = V_17;
		if (!L_106)
		{
			goto IL_02a9;
		}
	}
	{
		goto IL_04bb;
	}

IL_02a9:
	{
		RuntimeObject* L_107 = ___node1;
		NullCheck(L_107);
		String_t* L_108;
		L_108 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Mapbox.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_107);
		bool L_109;
		L_109 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_108, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
		V_18 = L_109;
		bool L_110 = V_18;
		if (!L_110)
		{
			goto IL_02dd;
		}
	}
	{
		RuntimeObject* L_111 = ___node1;
		NullCheck(L_111);
		String_t* L_112;
		L_112 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_111);
		bool L_113;
		L_113 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_112, _stringLiteralC3CA1105B0687AB04E8DB2CE95902C75EC2B661A, NULL);
		V_19 = L_113;
		bool L_114 = V_19;
		if (!L_114)
		{
			goto IL_02dc;
		}
	}
	{
		goto IL_04bb;
	}

IL_02dc:
	{
	}

IL_02dd:
	{
		bool L_115 = ___writePropertyName3;
		V_20 = L_115;
		bool L_116 = V_20;
		if (!L_116)
		{
			goto IL_02f6;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_117 = ___writer0;
		RuntimeObject* L_118 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_119 = ___manager2;
		String_t* L_120;
		L_120 = XmlNodeConverter_GetPropertyName_m8706C2B027138EA86E361564670FD4901C719C52(__this, L_118, L_119, NULL);
		NullCheck(L_117);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String) */, L_117, L_120);
	}

IL_02f6:
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_121 = ___writer0;
		RuntimeObject* L_122 = ___node1;
		NullCheck(L_122);
		String_t* L_123;
		L_123 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Mapbox.Json.Converters.IXmlNode::get_Value() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_122);
		NullCheck(L_121);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Mapbox.Json.JsonWriter::WriteValue(System.String) */, L_121, L_123);
		goto IL_04bb;
	}

IL_0308:
	{
		RuntimeObject* L_124 = ___node1;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_124, IXmlDeclaration_t42BEBEB4A4019272CB336747C8376AC47B561AA7_il2cpp_TypeInfo_var));
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_125 = ___writer0;
		RuntimeObject* L_126 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_127 = ___manager2;
		String_t* L_128;
		L_128 = XmlNodeConverter_GetPropertyName_m8706C2B027138EA86E361564670FD4901C719C52(__this, L_126, L_127, NULL);
		NullCheck(L_125);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String) */, L_125, L_128);
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_129 = ___writer0;
		NullCheck(L_129);
		VirtualActionInvoker0::Invoke(8 /* System.Void Mapbox.Json.JsonWriter::WriteStartObject() */, L_129);
		RuntimeObject* L_130 = V_1;
		NullCheck(L_130);
		String_t* L_131;
		L_131 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Mapbox.Json.Converters.IXmlDeclaration::get_Version() */, IXmlDeclaration_t42BEBEB4A4019272CB336747C8376AC47B561AA7_il2cpp_TypeInfo_var, L_130);
		bool L_132;
		L_132 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_131, NULL);
		V_21 = (bool)((((int32_t)L_132) == ((int32_t)0))? 1 : 0);
		bool L_133 = V_21;
		if (!L_133)
		{
			goto IL_0354;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_134 = ___writer0;
		NullCheck(L_134);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String) */, L_134, _stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564);
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_135 = ___writer0;
		RuntimeObject* L_136 = V_1;
		NullCheck(L_136);
		String_t* L_137;
		L_137 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Mapbox.Json.Converters.IXmlDeclaration::get_Version() */, IXmlDeclaration_t42BEBEB4A4019272CB336747C8376AC47B561AA7_il2cpp_TypeInfo_var, L_136);
		NullCheck(L_135);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Mapbox.Json.JsonWriter::WriteValue(System.String) */, L_135, L_137);
	}

IL_0354:
	{
		RuntimeObject* L_138 = V_1;
		NullCheck(L_138);
		String_t* L_139;
		L_139 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlDeclaration::get_Encoding() */, IXmlDeclaration_t42BEBEB4A4019272CB336747C8376AC47B561AA7_il2cpp_TypeInfo_var, L_138);
		bool L_140;
		L_140 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_139, NULL);
		V_22 = (bool)((((int32_t)L_140) == ((int32_t)0))? 1 : 0);
		bool L_141 = V_22;
		if (!L_141)
		{
			goto IL_0383;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_142 = ___writer0;
		NullCheck(L_142);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String) */, L_142, _stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A);
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_143 = ___writer0;
		RuntimeObject* L_144 = V_1;
		NullCheck(L_144);
		String_t* L_145;
		L_145 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlDeclaration::get_Encoding() */, IXmlDeclaration_t42BEBEB4A4019272CB336747C8376AC47B561AA7_il2cpp_TypeInfo_var, L_144);
		NullCheck(L_143);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Mapbox.Json.JsonWriter::WriteValue(System.String) */, L_143, L_145);
	}

IL_0383:
	{
		RuntimeObject* L_146 = V_1;
		NullCheck(L_146);
		String_t* L_147;
		L_147 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Mapbox.Json.Converters.IXmlDeclaration::get_Standalone() */, IXmlDeclaration_t42BEBEB4A4019272CB336747C8376AC47B561AA7_il2cpp_TypeInfo_var, L_146);
		bool L_148;
		L_148 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_147, NULL);
		V_23 = (bool)((((int32_t)L_148) == ((int32_t)0))? 1 : 0);
		bool L_149 = V_23;
		if (!L_149)
		{
			goto IL_03b2;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_150 = ___writer0;
		NullCheck(L_150);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String) */, L_150, _stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062);
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_151 = ___writer0;
		RuntimeObject* L_152 = V_1;
		NullCheck(L_152);
		String_t* L_153;
		L_153 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Mapbox.Json.Converters.IXmlDeclaration::get_Standalone() */, IXmlDeclaration_t42BEBEB4A4019272CB336747C8376AC47B561AA7_il2cpp_TypeInfo_var, L_152);
		NullCheck(L_151);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Mapbox.Json.JsonWriter::WriteValue(System.String) */, L_151, L_153);
	}

IL_03b2:
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_154 = ___writer0;
		NullCheck(L_154);
		VirtualActionInvoker0::Invoke(9 /* System.Void Mapbox.Json.JsonWriter::WriteEndObject() */, L_154);
		goto IL_04bb;
	}

IL_03be:
	{
		RuntimeObject* L_155 = ___node1;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_155, IXmlDocumentType_t15297B02A3814B45A73874CEC92E158C292239DB_il2cpp_TypeInfo_var));
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_156 = ___writer0;
		RuntimeObject* L_157 = ___node1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_158 = ___manager2;
		String_t* L_159;
		L_159 = XmlNodeConverter_GetPropertyName_m8706C2B027138EA86E361564670FD4901C719C52(__this, L_157, L_158, NULL);
		NullCheck(L_156);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String) */, L_156, L_159);
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_160 = ___writer0;
		NullCheck(L_160);
		VirtualActionInvoker0::Invoke(8 /* System.Void Mapbox.Json.JsonWriter::WriteStartObject() */, L_160);
		RuntimeObject* L_161 = V_2;
		NullCheck(L_161);
		String_t* L_162;
		L_162 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Mapbox.Json.Converters.IXmlDocumentType::get_Name() */, IXmlDocumentType_t15297B02A3814B45A73874CEC92E158C292239DB_il2cpp_TypeInfo_var, L_161);
		bool L_163;
		L_163 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_162, NULL);
		V_24 = (bool)((((int32_t)L_163) == ((int32_t)0))? 1 : 0);
		bool L_164 = V_24;
		if (!L_164)
		{
			goto IL_040a;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_165 = ___writer0;
		NullCheck(L_165);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String) */, L_165, _stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F);
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_166 = ___writer0;
		RuntimeObject* L_167 = V_2;
		NullCheck(L_167);
		String_t* L_168;
		L_168 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Mapbox.Json.Converters.IXmlDocumentType::get_Name() */, IXmlDocumentType_t15297B02A3814B45A73874CEC92E158C292239DB_il2cpp_TypeInfo_var, L_167);
		NullCheck(L_166);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Mapbox.Json.JsonWriter::WriteValue(System.String) */, L_166, L_168);
	}

IL_040a:
	{
		RuntimeObject* L_169 = V_2;
		NullCheck(L_169);
		String_t* L_170;
		L_170 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Mapbox.Json.Converters.IXmlDocumentType::get_Public() */, IXmlDocumentType_t15297B02A3814B45A73874CEC92E158C292239DB_il2cpp_TypeInfo_var, L_169);
		bool L_171;
		L_171 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_170, NULL);
		V_25 = (bool)((((int32_t)L_171) == ((int32_t)0))? 1 : 0);
		bool L_172 = V_25;
		if (!L_172)
		{
			goto IL_0439;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_173 = ___writer0;
		NullCheck(L_173);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String) */, L_173, _stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E);
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_174 = ___writer0;
		RuntimeObject* L_175 = V_2;
		NullCheck(L_175);
		String_t* L_176;
		L_176 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Mapbox.Json.Converters.IXmlDocumentType::get_Public() */, IXmlDocumentType_t15297B02A3814B45A73874CEC92E158C292239DB_il2cpp_TypeInfo_var, L_175);
		NullCheck(L_174);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Mapbox.Json.JsonWriter::WriteValue(System.String) */, L_174, L_176);
	}

IL_0439:
	{
		RuntimeObject* L_177 = V_2;
		NullCheck(L_177);
		String_t* L_178;
		L_178 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlDocumentType::get_System() */, IXmlDocumentType_t15297B02A3814B45A73874CEC92E158C292239DB_il2cpp_TypeInfo_var, L_177);
		bool L_179;
		L_179 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_178, NULL);
		V_26 = (bool)((((int32_t)L_179) == ((int32_t)0))? 1 : 0);
		bool L_180 = V_26;
		if (!L_180)
		{
			goto IL_0468;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_181 = ___writer0;
		NullCheck(L_181);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String) */, L_181, _stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94);
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_182 = ___writer0;
		RuntimeObject* L_183 = V_2;
		NullCheck(L_183);
		String_t* L_184;
		L_184 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlDocumentType::get_System() */, IXmlDocumentType_t15297B02A3814B45A73874CEC92E158C292239DB_il2cpp_TypeInfo_var, L_183);
		NullCheck(L_182);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Mapbox.Json.JsonWriter::WriteValue(System.String) */, L_182, L_184);
	}

IL_0468:
	{
		RuntimeObject* L_185 = V_2;
		NullCheck(L_185);
		String_t* L_186;
		L_186 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Mapbox.Json.Converters.IXmlDocumentType::get_InternalSubset() */, IXmlDocumentType_t15297B02A3814B45A73874CEC92E158C292239DB_il2cpp_TypeInfo_var, L_185);
		bool L_187;
		L_187 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_186, NULL);
		V_27 = (bool)((((int32_t)L_187) == ((int32_t)0))? 1 : 0);
		bool L_188 = V_27;
		if (!L_188)
		{
			goto IL_0497;
		}
	}
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_189 = ___writer0;
		NullCheck(L_189);
		VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void Mapbox.Json.JsonWriter::WritePropertyName(System.String) */, L_189, _stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692);
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_190 = ___writer0;
		RuntimeObject* L_191 = V_2;
		NullCheck(L_191);
		String_t* L_192;
		L_192 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Mapbox.Json.Converters.IXmlDocumentType::get_InternalSubset() */, IXmlDocumentType_t15297B02A3814B45A73874CEC92E158C292239DB_il2cpp_TypeInfo_var, L_191);
		NullCheck(L_190);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Mapbox.Json.JsonWriter::WriteValue(System.String) */, L_190, L_192);
	}

IL_0497:
	{
		JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* L_193 = ___writer0;
		NullCheck(L_193);
		VirtualActionInvoker0::Invoke(9 /* System.Void Mapbox.Json.JsonWriter::WriteEndObject() */, L_193);
		goto IL_04bb;
	}

IL_04a0:
	{
		RuntimeObject* L_194 = ___node1;
		NullCheck(L_194);
		int32_t L_195;
		L_195 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Mapbox.Json.Converters.IXmlNode::get_NodeType() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var)), L_194);
		int32_t L_196 = L_195;
		RuntimeObject* L_197 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeType_tCA25567E42A464038FDA6BA318EC0A9627B4CB95_il2cpp_TypeInfo_var)), &L_196);
		String_t* L_198;
		L_198 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8CD217E7BE4DABC0AB52B3661A45AF8DB008E8C1)), L_197, NULL);
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_199 = (JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B_il2cpp_TypeInfo_var)));
		NullCheck(L_199);
		JsonSerializationException__ctor_m273E671F4E28041EC651C496F36ACCCC2B277C75(L_199, L_198, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_199, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_SerializeNode_m8B2FE5E1BE4EB807C6723AAB59AF530A34F77FDA_RuntimeMethod_var)));
	}

IL_04bb:
	{
		return;
	}
}
// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::AllSameName(Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_AllSameName_mF4F1D85CF9674392BDDDDB7FBF1CE31D695E8150 (RuntimeObject* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___node0;
		NullCheck(L_0);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 L_2;
		L_2 = List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832(L_1, List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF((&V_0), Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0034_1;
			}

IL_0010_1:
			{
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_inline((&V_0), Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
				V_1 = L_3;
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				String_t* L_5;
				L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_4);
				RuntimeObject* L_6 = ___node0;
				NullCheck(L_6);
				String_t* L_7;
				L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_6);
				bool L_8;
				L_8 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_5, L_7, NULL);
				V_2 = L_8;
				bool L_9 = V_2;
				if (!L_9)
				{
					goto IL_0033_1;
				}
			}
			{
				V_3 = (bool)0;
				goto IL_0052;
			}

IL_0033_1:
			{
			}

IL_0034_1:
			{
				bool L_10;
				L_10 = Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF((&V_0), Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		V_3 = (bool)1;
		goto IL_0052;
	}

IL_0052:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
// System.Object Mapbox.Json.Converters.XmlNodeConverter::ReadJson(Mapbox.Json.JsonReader,System.Type,System.Object,Mapbox.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_ReadJson_m8141C2FFC7E2E4A34CFC5FCFB6EF801BD4D567C7 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, Type_t* ___objectType1, RuntimeObject* ___existingValue2, JsonSerializer_tCFE8A4413AC721597A3840B7D359DF7881652541* ___serializer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* V_14 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B21_0 = 0;
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_0);
		V_3 = L_1;
		int32_t L_2 = V_3;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_3 = V_3;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)11))))
		{
			goto IL_0015;
		}
	}
	{
		goto IL_001f;
	}

IL_0015:
	{
		V_4 = NULL;
		goto IL_0185;
	}

IL_001d:
	{
		goto IL_002a;
	}

IL_001f:
	{
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_4 = (JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		JsonSerializationException__ctor_m273E671F4E28041EC651C496F36ACCCC2B277C75(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5885752D9D9B9AFDCC103ACBDA8549090AABA45)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadJson_m8141C2FFC7E2E4A34CFC5FCFB6EF801BD4D567C7_RuntimeMethod_var)));
	}

IL_002a:
	{
		NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46* L_5 = (NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46*)il2cpp_codegen_object_new(NameTable_t0164DCE377A0A6E712CF54BE4CE5DA58A5537B46_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		NameTable__ctor_mB02EE27092095D81E839D51519C4FBDA2227C261(L_5, NULL);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_6 = (XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F*)il2cpp_codegen_object_new(XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlNamespaceManager__ctor_m18E69120CE5886E06630CCCC3215D2C67FC669DB(L_6, L_5, NULL);
		V_0 = L_6;
		V_1 = (RuntimeObject*)NULL;
		V_2 = (RuntimeObject*)NULL;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		Type_t* L_9 = ___objectType1;
		NullCheck(L_8);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_8, L_9);
		V_5 = L_10;
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0094;
		}
	}
	{
		Type_t* L_12 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		if ((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14)))
		{
			goto IL_006f;
		}
	}
	{
		Type_t* L_15 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		G_B11_0 = ((((int32_t)((((RuntimeObject*)(Type_t*)L_15) == ((RuntimeObject*)(Type_t*)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0070;
	}

IL_006f:
	{
		G_B11_0 = 0;
	}

IL_0070:
	{
		V_7 = (bool)G_B11_0;
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0082;
		}
	}
	{
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_19 = (JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		JsonSerializationException__ctor_m273E671F4E28041EC651C496F36ACCCC2B277C75(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F520303D59E86AC4C7A7D3637D6BFB77BF0A90F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadJson_m8141C2FFC7E2E4A34CFC5FCFB6EF801BD4D567C7_RuntimeMethod_var)));
	}

IL_0082:
	{
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_20 = (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1*)il2cpp_codegen_object_new(XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		XDocument__ctor_m75DFDCC516F6DB707830B7147BB51FEE9F72DDAD(L_20, NULL);
		V_6 = L_20;
		XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* L_21 = V_6;
		XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB* L_22 = (XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB*)il2cpp_codegen_object_new(XDocumentWrapper_t97C101D0299D5D57D09C62DFC0134CF342D74FFB_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		XDocumentWrapper__ctor_mF2733CE1AB416482731B9CDD3AB2597DD1CD0F4D(L_22, L_21, NULL);
		V_1 = L_22;
		RuntimeObject* L_23 = V_1;
		V_2 = L_23;
	}

IL_0094:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		Type_t* L_26 = ___objectType1;
		NullCheck(L_25);
		bool L_27;
		L_27 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_25, L_26);
		V_8 = L_27;
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_00e8;
		}
	}
	{
		Type_t* L_29 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		V_10 = (bool)((((int32_t)((((RuntimeObject*)(Type_t*)L_29) == ((RuntimeObject*)(Type_t*)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_00cd;
		}
	}
	{
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_33 = (JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B_il2cpp_TypeInfo_var)));
		NullCheck(L_33);
		JsonSerializationException__ctor_m273E671F4E28041EC651C496F36ACCCC2B277C75(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1613296BA787F8ADE0D3584C042EB5CB7EE8B9EC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadJson_m8141C2FFC7E2E4A34CFC5FCFB6EF801BD4D567C7_RuntimeMethod_var)));
	}

IL_00cd:
	{
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_34 = (XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B*)il2cpp_codegen_object_new(XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		XmlDocument__ctor_m09B578D51E249702C90A99B87A31ABE8CE4027DC(L_34, NULL);
		V_9 = L_34;
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_35 = V_9;
		NullCheck(L_35);
		VirtualActionInvoker1< XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF* >::Invoke(58 /* System.Void System.Xml.XmlDocument::set_XmlResolver(System.Xml.XmlResolver) */, L_35, (XmlResolver_tE25A33DFCB87A939D11BC8543970F6857AEC3DCF*)NULL);
		XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* L_36 = V_9;
		XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37* L_37 = (XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37*)il2cpp_codegen_object_new(XmlDocumentWrapper_t4DB22DA9B5979B3A53E473CB783ED56AF0306B37_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		XmlDocumentWrapper__ctor_mEB02EE61CB0E9FB4C2E9FDCA1B753A374F2762E1(L_37, L_36, NULL);
		V_1 = L_37;
		RuntimeObject* L_38 = V_1;
		V_2 = L_38;
	}

IL_00e8:
	{
		RuntimeObject* L_39 = V_1;
		if (!L_39)
		{
			goto IL_00f1;
		}
	}
	{
		RuntimeObject* L_40 = V_2;
		G_B21_0 = ((((RuntimeObject*)(RuntimeObject*)L_40) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B21_0 = 1;
	}

IL_00f2:
	{
		V_11 = (bool)G_B21_0;
		bool L_41 = V_11;
		if (!L_41)
		{
			goto IL_010a;
		}
	}
	{
		Type_t* L_42 = ___objectType1;
		String_t* L_43;
		L_43 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD372CCFC3C301AA5EC25EDCDE56A31E9545CDA18)), L_42, NULL);
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_44 = (JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B_il2cpp_TypeInfo_var)));
		NullCheck(L_44);
		JsonSerializationException__ctor_m273E671F4E28041EC651C496F36ACCCC2B277C75(L_44, L_43, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadJson_m8141C2FFC7E2E4A34CFC5FCFB6EF801BD4D567C7_RuntimeMethod_var)));
	}

IL_010a:
	{
		String_t* L_45;
		L_45 = XmlNodeConverter_get_DeserializeRootElementName_m63868C331A460D89644180CDA035032E503B68EB_inline(__this, NULL);
		bool L_46;
		L_46 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_45, NULL);
		V_12 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_12;
		if (!L_47)
		{
			goto IL_0133;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_48 = ___reader0;
		RuntimeObject* L_49 = V_1;
		RuntimeObject* L_50 = V_2;
		String_t* L_51;
		L_51 = XmlNodeConverter_get_DeserializeRootElementName_m63868C331A460D89644180CDA035032E503B68EB_inline(__this, NULL);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_52 = V_0;
		XmlNodeConverter_ReadElement_m79B9E65A63A56BC9AD08F5AC4B2D24A3F167FF54(__this, L_48, L_49, L_50, L_51, L_52, NULL);
		goto IL_0147;
	}

IL_0133:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_53 = ___reader0;
		NullCheck(L_53);
		bool L_54;
		L_54 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_53);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_55 = ___reader0;
		RuntimeObject* L_56 = V_1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_57 = V_0;
		RuntimeObject* L_58 = V_2;
		XmlNodeConverter_DeserializeNode_m507372274683541B47D8C8A7531C41794D895AB7(__this, L_55, L_56, L_57, L_58, NULL);
	}

IL_0147:
	{
		Type_t* L_59 = ___objectType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		V_13 = (bool)((((RuntimeObject*)(Type_t*)L_59) == ((RuntimeObject*)(Type_t*)L_61))? 1 : 0);
		bool L_62 = V_13;
		if (!L_62)
		{
			goto IL_017b;
		}
	}
	{
		RuntimeObject* L_63 = V_1;
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(12 /* Mapbox.Json.Converters.IXmlElement Mapbox.Json.Converters.IXmlDocument::get_DocumentElement() */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_63);
		NullCheck(L_64);
		RuntimeObject* L_65;
		L_65 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Object Mapbox.Json.Converters.IXmlNode::get_WrappedNode() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_64);
		V_14 = ((XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909*)CastclassClass((RuntimeObject*)L_65, XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909_il2cpp_TypeInfo_var));
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_66 = V_14;
		NullCheck(L_66);
		XNode_Remove_m74CDB71751058523C66B0529333D7D0E880C29F9(L_66, NULL);
		XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* L_67 = V_14;
		V_4 = L_67;
		goto IL_0185;
	}

IL_017b:
	{
		RuntimeObject* L_68 = V_1;
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Object Mapbox.Json.Converters.IXmlNode::get_WrappedNode() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_68);
		V_4 = L_69;
		goto IL_0185;
	}

IL_0185:
	{
		RuntimeObject* L_70 = V_4;
		return L_70;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::DeserializeValue(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,System.String,Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_DeserializeValue_m355184EF6A8AB71B0BF766F612836CAAE08B6099 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, String_t* ___propertyName3, RuntimeObject* ___currentNode4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD462B8D5192FB7491E85A3C2A4B22B91C958EE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B12_0 = 0;
	{
		String_t* L_0 = ___propertyName3;
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral4760011519A4AB7E8521F6795430114E80AA83E4, NULL);
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralA2ADAC70CFE2DCB556D061A93CBD008778646655, NULL);
		if (L_4)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralF6C0C11953123BBAC57A7E215512C2CA4CF68520, NULL);
		if (L_6)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral83B3ACB1C0AB14BABA0BD386F8695E096686811C, NULL);
		if (L_8)
		{
			goto IL_0088;
		}
	}
	{
		goto IL_009f;
	}

IL_003a:
	{
		RuntimeObject* L_9 = ___currentNode4;
		RuntimeObject* L_10 = ___document1;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_11 = ___reader0;
		String_t* L_12;
		L_12 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_11, NULL);
		NullCheck(L_10);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateTextNode(System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_10, L_12);
		NullCheck(L_9);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlNode::AppendChild(Mapbox.Json.Converters.IXmlNode) */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_9, L_13);
		goto IL_011c;
	}

IL_0054:
	{
		RuntimeObject* L_15 = ___currentNode4;
		RuntimeObject* L_16 = ___document1;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_17 = ___reader0;
		String_t* L_18;
		L_18 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_17, NULL);
		NullCheck(L_16);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(2 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateCDataSection(System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_16, L_18);
		NullCheck(L_15);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlNode::AppendChild(Mapbox.Json.Converters.IXmlNode) */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_15, L_19);
		goto IL_011c;
	}

IL_006e:
	{
		RuntimeObject* L_21 = ___currentNode4;
		RuntimeObject* L_22 = ___document1;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_23 = ___reader0;
		String_t* L_24;
		L_24 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_23, NULL);
		NullCheck(L_22);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(3 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateWhitespace(System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_22, L_24);
		NullCheck(L_21);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlNode::AppendChild(Mapbox.Json.Converters.IXmlNode) */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_21, L_25);
		goto IL_011c;
	}

IL_0088:
	{
		RuntimeObject* L_27 = ___currentNode4;
		RuntimeObject* L_28 = ___document1;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_29 = ___reader0;
		String_t* L_30;
		L_30 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_29, NULL);
		NullCheck(L_28);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(4 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateSignificantWhitespace(System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_28, L_30);
		NullCheck(L_27);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlNode::AppendChild(Mapbox.Json.Converters.IXmlNode) */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_27, L_31);
		goto IL_011c;
	}

IL_009f:
	{
		String_t* L_33 = ___propertyName3;
		bool L_34;
		L_34 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_33, NULL);
		if (L_34)
		{
			goto IL_00b6;
		}
	}
	{
		String_t* L_35 = ___propertyName3;
		NullCheck(L_35);
		Il2CppChar L_36;
		L_36 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_35, 0, NULL);
		G_B12_0 = ((((int32_t)L_36) == ((int32_t)((int32_t)63)))? 1 : 0);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B12_0 = 0;
	}

IL_00b7:
	{
		V_1 = (bool)G_B12_0;
		bool L_37 = V_1;
		if (!L_37)
		{
			goto IL_00cc;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_38 = ___reader0;
		RuntimeObject* L_39 = ___document1;
		RuntimeObject* L_40 = ___currentNode4;
		String_t* L_41 = ___propertyName3;
		XmlNodeConverter_CreateInstruction_m9E9169BFC2DFE4B314EDB1353439366F85B25E96(__this, L_38, L_39, L_40, L_41, NULL);
		goto IL_011a;
	}

IL_00cc:
	{
		String_t* L_42 = ___propertyName3;
		bool L_43;
		L_43 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_42, _stringLiteralD462B8D5192FB7491E85A3C2A4B22B91C958EE73, 5, NULL);
		V_2 = L_43;
		bool L_44 = V_2;
		if (!L_44)
		{
			goto IL_00ec;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_45 = ___reader0;
		RuntimeObject* L_46 = ___document1;
		RuntimeObject* L_47 = ___currentNode4;
		XmlNodeConverter_CreateDocumentType_m1F95FCD2E64405C26A23A7ADD2592CAC149FF332(__this, L_45, L_46, L_47, NULL);
		goto IL_011a;
	}

IL_00ec:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_48 = ___reader0;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_48);
		V_3 = (bool)((((int32_t)L_49) == ((int32_t)2))? 1 : 0);
		bool L_50 = V_3;
		if (!L_50)
		{
			goto IL_010b;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_51 = ___reader0;
		RuntimeObject* L_52 = ___document1;
		String_t* L_53 = ___propertyName3;
		RuntimeObject* L_54 = ___currentNode4;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_55 = ___manager2;
		XmlNodeConverter_ReadArrayElements_m0FEAC6B5162D676384932E8CE8094C22DF059BC0(__this, L_51, L_52, L_53, L_54, L_55, NULL);
		goto IL_011c;
	}

IL_010b:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_56 = ___reader0;
		RuntimeObject* L_57 = ___document1;
		RuntimeObject* L_58 = ___currentNode4;
		String_t* L_59 = ___propertyName3;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_60 = ___manager2;
		XmlNodeConverter_ReadElement_m79B9E65A63A56BC9AD08F5AC4B2D24A3F167FF54(__this, L_56, L_57, L_58, L_59, L_60, NULL);
	}

IL_011a:
	{
		goto IL_011c;
	}

IL_011c:
	{
		return;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::ReadElement(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,Mapbox.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_ReadElement_m79B9E65A63A56BC9AD08F5AC4B2D24A3F167FF54 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	bool V_6 = false;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	{
		String_t* L_0 = ___propertyName3;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_3 = ___reader0;
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_4;
		L_4 = JsonSerializationException_Create_mB3DA7EF81E2739FBD8EF3788EE7C1A6C2B54E013(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDE19EF7EBB97E368AFBF9A1B8DC90708B67C9A4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadElement_m79B9E65A63A56BC9AD08F5AC4B2D24A3F167FF54_RuntimeMethod_var)));
	}

IL_0019:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_5 = ___reader0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_6 = ___manager4;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7;
		L_7 = XmlNodeConverter_ReadAttributeElements_m97ED3E9F20B2D81BDDFAA863F47D6DB2027C4DAD(__this, L_5, L_6, NULL);
		V_0 = L_7;
		String_t* L_8 = ___propertyName3;
		String_t* L_9;
		L_9 = MiscellaneousUtils_GetPrefix_m1848294B9DCB302F65ADC18C811484DD0F1C6AFF(L_8, NULL);
		V_1 = L_9;
		String_t* L_10 = ___propertyName3;
		bool L_11;
		L_11 = StringUtils_StartsWith_mD1F92D46271A829C3BA4365E467B9E312AFBDC05(L_10, ((int32_t)64), NULL);
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_13 = ___propertyName3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_13, 1, NULL);
		V_4 = L_14;
		String_t* L_15 = V_4;
		String_t* L_16;
		L_16 = MiscellaneousUtils_GetPrefix_m1848294B9DCB302F65ADC18C811484DD0F1C6AFF(L_15, NULL);
		V_5 = L_16;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_17 = ___reader0;
		RuntimeObject* L_18 = ___document1;
		RuntimeObject* L_19 = ___currentNode2;
		String_t* L_20 = ___propertyName3;
		String_t* L_21 = V_4;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_22 = ___manager4;
		String_t* L_23 = V_5;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		XmlNodeConverter_AddAttribute_mD3D3836C2D55BE4B57534DEB3C4E36BB3E45CE49(L_17, L_18, L_19, L_20, L_21, L_22, L_23, NULL);
		goto IL_0126;
	}

IL_0062:
	{
		String_t* L_24 = ___propertyName3;
		bool L_25;
		L_25 = StringUtils_StartsWith_mD1F92D46271A829C3BA4365E467B9E312AFBDC05(L_24, ((int32_t)36), NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_0116;
		}
	}
	{
		String_t* L_27 = ___propertyName3;
		V_7 = L_27;
		String_t* L_28 = V_7;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B, NULL);
		if (L_29)
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_30 = V_7;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA, NULL);
		if (L_31)
		{
			goto IL_00ea;
		}
	}
	{
		String_t* L_32 = V_7;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382, NULL);
		if (L_33)
		{
			goto IL_00ea;
		}
	}
	{
		String_t* L_34 = V_7;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E, NULL);
		if (L_35)
		{
			goto IL_00ea;
		}
	}
	{
		String_t* L_36 = V_7;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F, NULL);
		if (L_37)
		{
			goto IL_00ea;
		}
	}
	{
		goto IL_0115;
	}

IL_00c1:
	{
		String_t* L_38 = ___propertyName3;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_38, 1, NULL);
		___propertyName3 = L_39;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_40 = ___manager4;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, L_40, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		V_1 = L_41;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_42 = ___reader0;
		RuntimeObject* L_43 = ___document1;
		RuntimeObject* L_44 = ___currentNode2;
		String_t* L_45 = ___propertyName3;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_46 = ___manager4;
		String_t* L_47 = V_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_48 = V_0;
		XmlNodeConverter_CreateElement_m8D399D1657C48760279A3E88E754AA935E40322A(__this, L_42, L_43, L_44, L_45, L_46, L_47, L_48, NULL);
		goto IL_0126;
	}

IL_00ea:
	{
		String_t* L_49 = ___propertyName3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_49, 1, NULL);
		V_8 = L_50;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_51 = ___manager4;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, L_51, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		V_9 = L_52;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_53 = ___reader0;
		RuntimeObject* L_54 = ___document1;
		RuntimeObject* L_55 = ___currentNode2;
		String_t* L_56 = ___propertyName3;
		String_t* L_57 = V_8;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_58 = ___manager4;
		String_t* L_59 = V_9;
		il2cpp_codegen_runtime_class_init_inline(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		XmlNodeConverter_AddAttribute_mD3D3836C2D55BE4B57534DEB3C4E36BB3E45CE49(L_53, L_54, L_55, L_56, L_57, L_58, L_59, NULL);
		goto IL_0126;
	}

IL_0115:
	{
	}

IL_0116:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_60 = ___reader0;
		RuntimeObject* L_61 = ___document1;
		RuntimeObject* L_62 = ___currentNode2;
		String_t* L_63 = ___propertyName3;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_64 = ___manager4;
		String_t* L_65 = V_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_66 = V_0;
		XmlNodeConverter_CreateElement_m8D399D1657C48760279A3E88E754AA935E40322A(__this, L_60, L_61, L_62, L_63, L_64, L_65, L_66, NULL);
	}

IL_0126:
	{
		return;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::CreateElement(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,Mapbox.Json.Converters.IXmlNode,System.String,System.Xml.XmlNamespaceManager,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateElement_m8D399D1657C48760279A3E88E754AA935E40322A (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___elementName3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, String_t* ___elementPrefix5, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___attributeNameValues6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	bool V_9 = false;
	RuntimeObject* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	RuntimeObject* G_B7_2 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	{
		String_t* L_0 = ___elementName3;
		RuntimeObject* L_1 = ___document1;
		String_t* L_2 = ___elementPrefix5;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_3 = ___manager4;
		RuntimeObject* L_4;
		L_4 = XmlNodeConverter_CreateElement_m7CAE75AFC8F9C182D42E597039DC159C17C21E3A(__this, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		RuntimeObject* L_5 = ___currentNode2;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlNode::AppendChild(Mapbox.Json.Converters.IXmlNode) */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_5, L_6);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = ___attributeNameValues6;
		V_1 = (bool)((!(((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00b6;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = ___attributeNameValues6;
		NullCheck(L_10);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_11;
		L_11 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_10, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_2), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009b_1;
			}

IL_002f_1:
			{
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_12;
				L_12 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_2), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_3 = L_12;
				String_t* L_13;
				L_13 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_3), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
				String_t* L_14;
				L_14 = XmlConvert_EncodeName_m5CDC8BEC5CE63A019C9E7C52AADF9F44B90E6CB5(L_13, NULL);
				V_4 = L_14;
				String_t* L_15;
				L_15 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_3), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_16;
				L_16 = MiscellaneousUtils_GetPrefix_m1848294B9DCB302F65ADC18C811484DD0F1C6AFF(L_15, NULL);
				V_5 = L_16;
				String_t* L_17 = V_5;
				bool L_18;
				L_18 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_17, NULL);
				if (!L_18)
				{
					goto IL_006e_1;
				}
			}
			{
				RuntimeObject* L_19 = ___document1;
				String_t* L_20 = V_4;
				String_t* L_21;
				L_21 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_3), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_19);
				RuntimeObject* L_22;
				L_22 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(10 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_19, L_20, L_21);
				G_B8_0 = L_22;
				goto IL_008f_1;
			}

IL_006e_1:
			{
				RuntimeObject* L_23 = ___document1;
				String_t* L_24 = V_4;
				XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_25 = ___manager4;
				String_t* L_26 = V_5;
				NullCheck(L_25);
				String_t* L_27;
				L_27 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(16 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_25, L_26);
				String_t* L_28 = L_27;
				G_B6_0 = L_28;
				G_B6_1 = L_24;
				G_B6_2 = L_23;
				if (L_28)
				{
					G_B7_0 = L_28;
					G_B7_1 = L_24;
					G_B7_2 = L_23;
					goto IL_0083_1;
				}
			}
			{
				String_t* L_29 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				G_B7_0 = L_29;
				G_B7_1 = G_B6_1;
				G_B7_2 = G_B6_2;
			}

IL_0083_1:
			{
				String_t* L_30;
				L_30 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_3), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(G_B7_2);
				RuntimeObject* L_31;
				L_31 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(11 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String,System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, G_B7_2, G_B7_1, G_B7_0, L_30);
				G_B8_0 = L_31;
			}

IL_008f_1:
			{
				V_6 = G_B8_0;
				RuntimeObject* L_32 = V_0;
				RuntimeObject* L_33 = V_6;
				NullCheck(L_32);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Mapbox.Json.Converters.IXmlElement::SetAttributeNode(Mapbox.Json.Converters.IXmlNode) */, IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var, L_32, L_33);
			}

IL_009b_1:
			{
				bool L_34;
				L_34 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_2), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_00b5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b5:
	{
	}

IL_00b6:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_35 = ___reader0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_35);
		V_7 = L_36;
		int32_t L_37 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_37, 7)))
		{
			case 0:
			{
				goto IL_00f1;
			}
			case 1:
			{
				goto IL_00f1;
			}
			case 2:
			{
				goto IL_00f1;
			}
			case 3:
			{
				goto IL_00f1;
			}
			case 4:
			{
				goto IL_0118;
			}
			case 5:
			{
				goto IL_0130;
			}
			case 6:
			{
				goto IL_011a;
			}
			case 7:
			{
				goto IL_0130;
			}
			case 8:
			{
				goto IL_0130;
			}
			case 9:
			{
				goto IL_00f1;
			}
		}
	}
	{
		goto IL_0130;
	}

IL_00f1:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_38 = ___reader0;
		String_t* L_39;
		L_39 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_38, NULL);
		V_8 = L_39;
		String_t* L_40 = V_8;
		V_9 = (bool)((!(((RuntimeObject*)(String_t*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_0116;
		}
	}
	{
		RuntimeObject* L_42 = V_0;
		RuntimeObject* L_43 = ___document1;
		String_t* L_44 = V_8;
		NullCheck(L_43);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateTextNode(System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_43, L_44);
		NullCheck(L_42);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlNode::AppendChild(Mapbox.Json.Converters.IXmlNode) */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_42, L_45);
	}

IL_0116:
	{
		goto IL_0162;
	}

IL_0118:
	{
		goto IL_0162;
	}

IL_011a:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_47 = ___manager4;
		String_t* L_48 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_49 = ___manager4;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_49);
		NullCheck(L_47);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(13 /* System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String) */, L_47, L_48, L_50);
		goto IL_0162;
	}

IL_0130:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_51 = ___manager4;
		NullCheck(L_51);
		VirtualActionInvoker0::Invoke(10 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_51);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_52 = ___reader0;
		RuntimeObject* L_53 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_54 = ___manager4;
		RuntimeObject* L_55 = V_0;
		XmlNodeConverter_DeserializeNode_m507372274683541B47D8C8A7531C41794D895AB7(__this, L_52, L_53, L_54, L_55, NULL);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_56 = ___manager4;
		NullCheck(L_56);
		bool L_57;
		L_57 = VirtualFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_56);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_58 = ___manager4;
		String_t* L_59 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_60 = ___manager4;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_60);
		NullCheck(L_58);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(13 /* System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String) */, L_58, L_59, L_61);
		goto IL_0162;
	}

IL_0162:
	{
		return;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::AddAttribute(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,Mapbox.Json.Converters.IXmlNode,System.String,System.String,System.Xml.XmlNamespaceManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_AddAttribute_mD3D3836C2D55BE4B57534DEB3C4E36BB3E45CE49 (JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, String_t* ___attributeName4, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager5, String_t* ___attributePrefix6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___currentNode2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Mapbox.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_0);
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)9)))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_3 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_5 = ___propertyName3;
		String_t* L_6;
		L_6 = StringUtils_FormatWith_mC9CE0D3DDDE9E57C4812561FCA179F29AE68BEA1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7659A39A96628D27A60957C9360035C1790C449D)), L_4, L_5, NULL);
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_7;
		L_7 = JsonSerializationException_Create_mB3DA7EF81E2739FBD8EF3788EE7C1A6C2B54E013(L_3, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_AddAttribute_mD3D3836C2D55BE4B57534DEB3C4E36BB3E45CE49_RuntimeMethod_var)));
	}

IL_0027:
	{
		String_t* L_8 = ___attributeName4;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = XmlConvert_EncodeName_m5CDC8BEC5CE63A019C9E7C52AADF9F44B90E6CB5(L_8, NULL);
		V_0 = L_9;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_10 = ___reader0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_10);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		V_1 = L_12;
		String_t* L_13 = ___attributePrefix6;
		bool L_14;
		L_14 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_13, NULL);
		if (!L_14)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_15 = ___document1;
		String_t* L_16 = V_0;
		String_t* L_17 = V_1;
		NullCheck(L_15);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(10 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_15, L_16, L_17);
		G_B5_0 = L_18;
		goto IL_005f;
	}

IL_004e:
	{
		RuntimeObject* L_19 = ___document1;
		String_t* L_20 = V_0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_21 = ___manager5;
		String_t* L_22 = ___attributePrefix6;
		NullCheck(L_21);
		String_t* L_23;
		L_23 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(16 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_21, L_22);
		String_t* L_24 = V_1;
		NullCheck(L_19);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(11 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String,System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_19, L_20, L_23, L_24);
		G_B5_0 = L_25;
	}

IL_005f:
	{
		V_2 = G_B5_0;
		RuntimeObject* L_26 = ___currentNode2;
		RuntimeObject* L_27 = V_2;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_26, IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Mapbox.Json.Converters.IXmlElement::SetAttributeNode(Mapbox.Json.Converters.IXmlNode) */, IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_26, IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var)), L_27);
		return;
	}
}
// System.String Mapbox.Json.Converters.XmlNodeConverter::ConvertTokenToXmlValue(Mapbox.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t8E988632A08EDACE43652EADEF6F28FE355DC0AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 7)))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0070;
			}
			case 2:
			{
				goto IL_003d;
			}
			case 3:
			{
				goto IL_00df;
			}
			case 4:
			{
				goto IL_0145;
			}
			case 5:
			{
				goto IL_0149;
			}
			case 6:
			{
				goto IL_0149;
			}
			case 7:
			{
				goto IL_0149;
			}
			case 8:
			{
				goto IL_0149;
			}
			case 9:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0149;
	}

IL_003d:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_3 = ___reader0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_3);
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_004a;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_004f;
	}

IL_004a:
	{
		NullCheck(G_B4_0);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_6;
	}

IL_004f:
	{
		V_2 = G_B5_0;
		goto IL_016a;
	}

IL_0055:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_7 = ___reader0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_7);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_10;
		L_10 = Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31(L_8, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = XmlConvert_ToString_mFC2B58A063E63501E3CB452206B18C317E2782A9(L_10, NULL);
		V_2 = L_11;
		goto IL_016a;
	}

IL_0070:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_12 = ___reader0;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_12);
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_13, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0099;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_15 = ___reader0;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_15);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = XmlConvert_ToString_m4EE078C46CC4FF023E0286740CFE95E945C5185E(((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_16, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), NULL);
		V_2 = L_17;
		goto IL_016a;
	}

IL_0099:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_18 = ___reader0;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_18);
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_19, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00c4;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_21 = ___reader0;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_21);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = XmlConvert_ToString_m0A47C3C098CDB47726C29D7A70B7349D6DA57555(((*(float*)((float*)(float*)UnBox(L_22, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))), NULL);
		V_2 = L_23;
		goto IL_016a;
	}

IL_00c4:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_24 = ___reader0;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_24);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_26;
		L_26 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_27;
		L_27 = Convert_ToDouble_m8DED60F2E0251A3D389F1DD22AA5AF9CD440ABE8(L_25, L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_28;
		L_28 = XmlConvert_ToString_m04C12A2A45109D8E79C729DE12EF0A29301C2A2B(L_27, NULL);
		V_2 = L_28;
		goto IL_016a;
	}

IL_00df:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_29 = ___reader0;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_29);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_31;
		L_31 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Convert_ToBoolean_m0E8AE169ABC127B0A317EE6312A04BC1F8AB4C63(L_30, L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_33;
		L_33 = XmlConvert_ToString_mD598BDDD270BE18CCBABE0569FF42529F06ADADF(L_32, NULL);
		V_2 = L_33;
		goto IL_016a;
	}

IL_00f7:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_34 = ___reader0;
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_34);
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_35, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_36 = V_5;
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_37 = ___reader0;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_37);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_39;
		L_39 = XmlConvert_ToString_m94540B3F4E815CA0CEDD0B655248460FD19E419A(((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_38, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var)))), NULL);
		V_2 = L_39;
		goto IL_016a;
	}

IL_011f:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_40 = ___reader0;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_40);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_42;
		L_42 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_43;
		L_43 = Convert_ToDateTime_m773A330A58097085E94630181F3A77B9F0963327(L_41, L_42, NULL);
		V_1 = L_43;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_44 = V_1;
		int32_t L_45;
		L_45 = DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t8E988632A08EDACE43652EADEF6F28FE355DC0AC_il2cpp_TypeInfo_var);
		int32_t L_46;
		L_46 = DateTimeUtils_ToSerializationMode_m32FC50B5D2CDC54C34B2CE5C322586723714D26B(L_45, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_47;
		L_47 = XmlConvert_ToString_mCD438E48326A2EECD1839100F45A2626B3B65598(L_44, L_46, NULL);
		V_2 = L_47;
		goto IL_016a;
	}

IL_0145:
	{
		V_2 = (String_t*)NULL;
		goto IL_016a;
	}

IL_0149:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_48 = ___reader0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_49;
		L_49 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_50 = ___reader0;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_50);
		int32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonToken_t649A9AC7D3BACB7B8384AA021FA250F864F25592_il2cpp_TypeInfo_var)), &L_52);
		String_t* L_54;
		L_54 = StringUtils_FormatWith_mC9CE0D3DDDE9E57C4812561FCA179F29AE68BEA1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral22DA2AE2AAC47006D97A25A98C6CDC909DE59894)), L_49, L_53, NULL);
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_55;
		L_55 = JsonSerializationException_Create_mB3DA7EF81E2739FBD8EF3788EE7C1A6C2B54E013(L_48, L_54, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E_RuntimeMethod_var)));
	}

IL_016a:
	{
		String_t* L_56 = V_2;
		return L_56;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::ReadArrayElements(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,System.String,Mapbox.Json.Converters.IXmlNode,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_ReadArrayElements_m0FEAC6B5162D676384932E8CE8094C22DF059BC0 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, String_t* ___propertyName2, RuntimeObject* ___currentNode3, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	{
		String_t* L_0 = ___propertyName2;
		String_t* L_1;
		L_1 = MiscellaneousUtils_GetPrefix_m1848294B9DCB302F65ADC18C811484DD0F1C6AFF(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___propertyName2;
		RuntimeObject* L_3 = ___document1;
		String_t* L_4 = V_0;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_5 = ___manager4;
		RuntimeObject* L_6;
		L_6 = XmlNodeConverter_CreateElement_m7CAE75AFC8F9C182D42E597039DC159C17C21E3A(__this, L_2, L_3, L_4, L_5, NULL);
		V_1 = L_6;
		RuntimeObject* L_7 = ___currentNode3;
		RuntimeObject* L_8 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlNode::AppendChild(Mapbox.Json.Converters.IXmlNode) */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_7, L_8);
		V_2 = 0;
		goto IL_0034;
	}

IL_0021:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_10 = ___reader0;
		RuntimeObject* L_11 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_12 = ___manager4;
		String_t* L_13 = ___propertyName2;
		RuntimeObject* L_14 = V_1;
		XmlNodeConverter_DeserializeValue_m355184EF6A8AB71B0BF766F612836CAAE08B6099(__this, L_10, L_11, L_12, L_13, L_14, NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0034:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_16 = ___reader0;
		NullCheck(L_16);
		bool L_17;
		L_17 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_16);
		if (!L_17)
		{
			goto IL_004b;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_18 = ___reader0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_18);
		G_B5_0 = ((((int32_t)((((int32_t)L_19) == ((int32_t)((int32_t)14)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		V_3 = (bool)G_B5_0;
		bool L_20 = V_3;
		if (L_20)
		{
			goto IL_0021;
		}
	}
	{
		bool L_21;
		L_21 = XmlNodeConverter_get_WriteArrayAttribute_m20361156D5F9DCCF34428D0D8019CC5D9DA08AEB_inline(__this, NULL);
		V_4 = L_21;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_23 = V_1;
		RuntimeObject* L_24 = ___document1;
		XmlNodeConverter_AddJsonArrayAttribute_m6D57E42956502B3413B0E1FC501345673D70F9F6(__this, L_23, L_24, NULL);
	}

IL_0067:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		bool L_26;
		L_26 = XmlNodeConverter_get_WriteArrayAttribute_m20361156D5F9DCCF34428D0D8019CC5D9DA08AEB_inline(__this, NULL);
		G_B11_0 = ((int32_t)(L_26));
		goto IL_0074;
	}

IL_0073:
	{
		G_B11_0 = 0;
	}

IL_0074:
	{
		V_5 = (bool)G_B11_0;
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_00e1;
		}
	}
	{
		RuntimeObject* L_28 = V_1;
		NullCheck(L_28);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_29;
		L_29 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_29);
		Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 L_30;
		L_30 = List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832(L_29, List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		V_6 = L_30;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF((&V_6), Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_31;
				L_31 = Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_inline((&V_6), Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
				V_7 = L_31;
				RuntimeObject* L_32 = V_7;
				V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_32, IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var));
				RuntimeObject* L_33 = V_8;
				if (!L_33)
				{
					goto IL_00b1_1;
				}
			}
			{
				RuntimeObject* L_34 = V_8;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_34);
				String_t* L_36 = ___propertyName2;
				bool L_37;
				L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, L_36, NULL);
				G_B17_0 = ((int32_t)(L_37));
				goto IL_00b2_1;
			}

IL_00b1_1:
			{
				G_B17_0 = 0;
			}

IL_00b2_1:
			{
				V_9 = (bool)G_B17_0;
				bool L_38 = V_9;
				if (!L_38)
				{
					goto IL_00c5_1;
				}
			}
			{
				RuntimeObject* L_39 = V_8;
				RuntimeObject* L_40 = ___document1;
				XmlNodeConverter_AddJsonArrayAttribute_m6D57E42956502B3413B0E1FC501345673D70F9F6(__this, L_39, L_40, NULL);
				goto IL_00cf_1;
			}

IL_00c5_1:
			{
			}

IL_00c6_1:
			{
				bool L_41;
				L_41 = Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF((&V_6), Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_008b_1;
				}
			}

IL_00cf_1:
			{
				goto IL_00e0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e0:
	{
	}

IL_00e1:
	{
		return;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::AddJsonArrayAttribute(Mapbox.Json.Converters.IXmlElement,Mapbox.Json.Converters.IXmlDocument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_AddJsonArrayAttribute_m6D57E42956502B3413B0E1FC501345673D70F9F6 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, RuntimeObject* ___element0, RuntimeObject* ___document1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A514EDAC534931C94A111265660666E05658496);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB970001F19051B486F81469B35F4DBB22AAD54E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___element0;
		RuntimeObject* L_1 = ___document1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(11 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String,System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_1, _stringLiteral9A514EDAC534931C94A111265660666E05658496, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Mapbox.Json.Converters.IXmlElement::SetAttributeNode(Mapbox.Json.Converters.IXmlNode) */, IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_3 = ___element0;
		V_0 = (bool)((!(((RuntimeObject*)(XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD*)((XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD*)IsInstClass((RuntimeObject*)L_3, XElementWrapper_t6A22894CDEAC01ACD583BE7AF678D4A5A67FEDFD_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_5 = ___element0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlElement::GetPrefixOfNamespace(System.String) */, IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var, L_5, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_8 = ___element0;
		RuntimeObject* L_9 = ___document1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(11 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateAttribute(System.String,System.String,System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_9, _stringLiteralEB970001F19051B486F81469B35F4DBB22AAD54E, _stringLiteral420B74A52534550B0DD14DCF7D8988C2BD4936CE, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		NullCheck(L_8);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Mapbox.Json.Converters.IXmlElement::SetAttributeNode(Mapbox.Json.Converters.IXmlNode) */, IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var, L_8, L_10);
	}

IL_005b:
	{
	}

IL_005c:
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Mapbox.Json.Converters.XmlNodeConverter::ReadAttributeElements(Mapbox.Json.JsonReader,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* XmlNodeConverter_ReadAttributeElements_m97ED3E9F20B2D81BDDFAA863F47D6DB2027C4DAD (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral450A121B534CE8146DA53AF9EA5328F6753B270F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	bool V_6 = false;
	Il2CppChar V_7 = 0x0;
	String_t* V_8 = NULL;
	Il2CppChar V_9 = 0x0;
	String_t* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	String_t* V_13 = NULL;
	String_t* V_14 = NULL;
	bool V_15 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	RuntimeObject* G_B43_0 = NULL;
	RuntimeObject* G_B42_0 = NULL;
	String_t* G_B44_0 = NULL;
	int32_t G_B57_0 = 0;
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_0);
		V_2 = L_1;
		int32_t L_2 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3)))
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_0044;
			}
			case 3:
			{
				goto IL_0044;
			}
			case 4:
			{
				goto IL_003d;
			}
			case 5:
			{
				goto IL_003d;
			}
			case 6:
			{
				goto IL_003d;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_003d;
			}
		}
	}
	{
		goto IL_0036;
	}

IL_0036:
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0044;
	}

IL_003d:
	{
		V_3 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL;
		goto IL_02eb;
	}

IL_0044:
	{
		V_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL;
		V_1 = (bool)0;
		goto IL_02d2;
	}

IL_004d:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_4);
		V_4 = L_5;
		int32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_005d;
	}

IL_005d:
	{
		int32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)5)))
		{
			goto IL_02b1;
		}
	}
	{
		goto IL_0067;
	}

IL_0067:
	{
		int32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)13))))
		{
			goto IL_02b1;
		}
	}
	{
		goto IL_02b5;
	}

IL_0075:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_9 = ___reader0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_9);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		V_6 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_02ab;
		}
	}
	{
		String_t* L_15 = V_5;
		NullCheck(L_15);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, 0, NULL);
		V_7 = L_16;
		Il2CppChar L_17 = V_7;
		V_9 = L_17;
		Il2CppChar L_18 = V_9;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)36))))
		{
			goto IL_0110;
		}
	}
	{
		goto IL_00ac;
	}

IL_00ac:
	{
		Il2CppChar L_19 = V_9;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)64))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_02a4;
	}

IL_00b7:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = V_0;
		V_11 = (bool)((((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_20) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_21 = V_11;
		if (!L_21)
		{
			goto IL_00c9;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_22 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_22, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_22;
	}

IL_00c9:
	{
		String_t* L_23 = V_5;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_23, 1, NULL);
		V_5 = L_24;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_25 = ___reader0;
		NullCheck(L_25);
		bool L_26;
		L_26 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_25);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_27 = ___reader0;
		String_t* L_28;
		L_28 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_27, NULL);
		V_8 = L_28;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_29 = V_0;
		String_t* L_30 = V_5;
		String_t* L_31 = V_8;
		NullCheck(L_29);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_29, L_30, L_31, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		String_t* L_32 = V_5;
		bool L_33;
		L_33 = XmlNodeConverter_IsNamespaceAttribute_m06B6ADAC0C7CA98C185EBC6A83103808DAFBD508(__this, L_32, (&V_10), NULL);
		V_12 = L_33;
		bool L_34 = V_12;
		if (!L_34)
		{
			goto IL_010b;
		}
	}
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_35 = ___manager1;
		String_t* L_36 = V_10;
		String_t* L_37 = V_8;
		NullCheck(L_35);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_35, L_36, L_37);
	}

IL_010b:
	{
		goto IL_02a8;
	}

IL_0110:
	{
		String_t* L_38 = V_5;
		V_13 = L_38;
		String_t* L_39 = V_13;
		bool L_40;
		L_40 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, _stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B, NULL);
		if (L_40)
		{
			goto IL_015f;
		}
	}
	{
		String_t* L_41 = V_13;
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA, NULL);
		if (L_42)
		{
			goto IL_015f;
		}
	}
	{
		String_t* L_43 = V_13;
		bool L_44;
		L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382, NULL);
		if (L_44)
		{
			goto IL_015f;
		}
	}
	{
		String_t* L_45 = V_13;
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteral11F941DFBA062769D6F047F85D846335446DFB0E, NULL);
		if (L_46)
		{
			goto IL_015f;
		}
	}
	{
		String_t* L_47 = V_13;
		bool L_48;
		L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteral042D5257625C9358C840FA1BA4A978DC0470104F, NULL);
		if (L_48)
		{
			goto IL_015f;
		}
	}
	{
		goto IL_029e;
	}

IL_015f:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_49 = ___manager1;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String) */, L_49, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		V_14 = L_50;
		String_t* L_51 = V_14;
		V_15 = (bool)((((RuntimeObject*)(String_t*)L_51) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_52 = V_15;
		if (!L_52)
		{
			goto IL_0203;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_53 = V_0;
		V_17 = (bool)((((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_53) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_54 = V_17;
		if (!L_54)
		{
			goto IL_018d;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_55 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_55, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_55;
	}

IL_018d:
	{
		il2cpp_codegen_initobj((&V_16), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		goto IL_01a9;
	}

IL_0197:
	{
		int32_t L_56;
		L_56 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_16), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&V_16), ((int32_t)il2cpp_codegen_add(L_56, 1)), Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
	}

IL_01a9:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_57 = ___manager1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_58 = V_16;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_59 = L_58;
		RuntimeObject* L_60 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_59);
		String_t* L_61;
		L_61 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84, L_60, NULL);
		NullCheck(L_57);
		String_t* L_62;
		L_62 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(16 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_57, L_61);
		V_18 = (bool)((!(((RuntimeObject*)(String_t*)L_62) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_63 = V_18;
		if (L_63)
		{
			goto IL_0197;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_64 = V_16;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_65 = L_64;
		RuntimeObject* L_66 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_65);
		String_t* L_67;
		L_67 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84, L_66, NULL);
		V_14 = L_67;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_68 = V_0;
		String_t* L_69 = V_14;
		String_t* L_70;
		L_70 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral450A121B534CE8146DA53AF9EA5328F6753B270F, L_69, NULL);
		NullCheck(L_68);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_68, L_70, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_71 = ___manager1;
		String_t* L_72 = V_14;
		NullCheck(L_71);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(12 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_71, L_72, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
	}

IL_0203:
	{
		String_t* L_73 = V_5;
		bool L_74;
		L_74 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_73, _stringLiteral1298EC2264C4F9A0D3A04140873D9D01F481050B, NULL);
		V_19 = L_74;
		bool L_75 = V_19;
		if (!L_75)
		{
			goto IL_021d;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_02a2;
	}

IL_021d:
	{
		String_t* L_76 = V_5;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_76, 1, NULL);
		V_5 = L_77;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_78 = ___reader0;
		NullCheck(L_78);
		bool L_79;
		L_79 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_78);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_80 = ___reader0;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_80);
		bool L_82;
		L_82 = JsonTokenUtils_IsPrimitiveToken_m465B9010968D563626EC6D46AD0F0A87CADC6008(L_81, NULL);
		V_20 = (bool)((((int32_t)L_82) == ((int32_t)0))? 1 : 0);
		bool L_83 = V_20;
		if (!L_83)
		{
			goto IL_025f;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_84 = ___reader0;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_85 = ___reader0;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_85);
		int32_t L_87 = L_86;
		RuntimeObject* L_88 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonToken_t649A9AC7D3BACB7B8384AA021FA250F864F25592_il2cpp_TypeInfo_var)), &L_87);
		String_t* L_89;
		L_89 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75842F038DF44EADD0CCA67D4F35D7BA0B0D7A4D)), L_88, NULL);
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_90;
		L_90 = JsonSerializationException_Create_mB3DA7EF81E2739FBD8EF3788EE7C1A6C2B54E013(L_84, L_89, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_90, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadAttributeElements_m97ED3E9F20B2D81BDDFAA863F47D6DB2027C4DAD_RuntimeMethod_var)));
	}

IL_025f:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_91 = V_0;
		V_21 = (bool)((((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_91) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_92 = V_21;
		if (!L_92)
		{
			goto IL_0271;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_93 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_93);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_93, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_93;
	}

IL_0271:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_94 = ___reader0;
		NullCheck(L_94);
		RuntimeObject* L_95;
		L_95 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_94);
		RuntimeObject* L_96 = L_95;
		G_B42_0 = L_96;
		if (L_96)
		{
			G_B43_0 = L_96;
			goto IL_027e;
		}
	}
	{
		G_B44_0 = ((String_t*)(NULL));
		goto IL_0283;
	}

IL_027e:
	{
		NullCheck(G_B43_0);
		String_t* L_97;
		L_97 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B43_0);
		G_B44_0 = L_97;
	}

IL_0283:
	{
		V_8 = G_B44_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_98 = V_0;
		String_t* L_99 = V_14;
		String_t* L_100 = V_5;
		String_t* L_101;
		L_101 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_99, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_100, NULL);
		String_t* L_102 = V_8;
		NullCheck(L_98);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_98, L_101, L_102, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		goto IL_02a2;
	}

IL_029e:
	{
		V_1 = (bool)1;
		goto IL_02a2;
	}

IL_02a2:
	{
		goto IL_02a8;
	}

IL_02a4:
	{
		V_1 = (bool)1;
		goto IL_02a8;
	}

IL_02a8:
	{
		goto IL_02af;
	}

IL_02ab:
	{
		V_1 = (bool)1;
	}

IL_02af:
	{
		goto IL_02d1;
	}

IL_02b1:
	{
		V_1 = (bool)1;
		goto IL_02d1;
	}

IL_02b5:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_103 = ___reader0;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_104 = ___reader0;
		NullCheck(L_104);
		int32_t L_105;
		L_105 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_104);
		int32_t L_106 = L_105;
		RuntimeObject* L_107 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonToken_t649A9AC7D3BACB7B8384AA021FA250F864F25592_il2cpp_TypeInfo_var)), &L_106);
		String_t* L_108;
		L_108 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75842F038DF44EADD0CCA67D4F35D7BA0B0D7A4D)), L_107, NULL);
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_109;
		L_109 = JsonSerializationException_Create_mB3DA7EF81E2739FBD8EF3788EE7C1A6C2B54E013(L_103, L_108, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_109, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_ReadAttributeElements_m97ED3E9F20B2D81BDDFAA863F47D6DB2027C4DAD_RuntimeMethod_var)));
	}

IL_02d1:
	{
	}

IL_02d2:
	{
		bool L_110 = V_1;
		if (L_110)
		{
			goto IL_02dd;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_111 = ___reader0;
		NullCheck(L_111);
		bool L_112;
		L_112 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_111);
		G_B57_0 = ((int32_t)(L_112));
		goto IL_02de;
	}

IL_02dd:
	{
		G_B57_0 = 0;
	}

IL_02de:
	{
		V_22 = (bool)G_B57_0;
		bool L_113 = V_22;
		if (L_113)
		{
			goto IL_004d;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_114 = V_0;
		V_3 = L_114;
		goto IL_02eb;
	}

IL_02eb:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_115 = V_3;
		return L_115;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::CreateInstruction(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,Mapbox.Json.Converters.IXmlNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateInstruction_m9E9169BFC2DFE4B314EDB1353439366F85B25E96 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, String_t* ___propertyName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	int32_t G_B14_0 = 0;
	{
		String_t* L_0 = ___propertyName3;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral5EE58BA1E5ECB5C3AED8D32D9B6DA7CB39BB4E47, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00dd;
		}
	}
	{
		V_1 = (String_t*)NULL;
		V_2 = (String_t*)NULL;
		V_3 = (String_t*)NULL;
		goto IL_00a5;
	}

IL_0020:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_3 = ___reader0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		V_5 = L_5;
		String_t* L_6 = V_5;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral539E31D9C32242C0883451A9A8DE262A8C813564, NULL);
		if (L_7)
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_8 = V_5;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteralE7CCD8078E8A58A921106F3AF064603AB958A11A, NULL);
		if (L_9)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_10 = V_5;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral2F62B3631B3843128CF8C3FF2A6EB6BB8DA4B062, NULL);
		if (L_11)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_008d;
	}

IL_005a:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_12 = ___reader0;
		NullCheck(L_12);
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_12);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_14 = ___reader0;
		String_t* L_15;
		L_15 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_14, NULL);
		V_1 = L_15;
		goto IL_00a4;
	}

IL_006b:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_16 = ___reader0;
		NullCheck(L_16);
		bool L_17;
		L_17 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_16);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_18 = ___reader0;
		String_t* L_19;
		L_19 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_18, NULL);
		V_2 = L_19;
		goto IL_00a4;
	}

IL_007c:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_20 = ___reader0;
		NullCheck(L_20);
		bool L_21;
		L_21 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_20);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_22 = ___reader0;
		String_t* L_23;
		L_23 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_22, NULL);
		V_3 = L_23;
		goto IL_00a4;
	}

IL_008d:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_24 = ___reader0;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_25 = ___reader0;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_25);
		String_t* L_27;
		L_27 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9159179D678574C69291BCB3CFA5FAC9393D0C8)), L_26, NULL);
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_28;
		L_28 = JsonSerializationException_Create_mB3DA7EF81E2739FBD8EF3788EE7C1A6C2B54E013(L_24, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_CreateInstruction_m9E9169BFC2DFE4B314EDB1353439366F85B25E96_RuntimeMethod_var)));
	}

IL_00a4:
	{
	}

IL_00a5:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_29 = ___reader0;
		NullCheck(L_29);
		bool L_30;
		L_30 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_29);
		if (!L_30)
		{
			goto IL_00bc;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_31);
		G_B14_0 = ((((int32_t)((((int32_t)L_32) == ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00bd;
	}

IL_00bc:
	{
		G_B14_0 = 0;
	}

IL_00bd:
	{
		V_6 = (bool)G_B14_0;
		bool L_33 = V_6;
		if (L_33)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_34 = ___document1;
		String_t* L_35 = V_1;
		String_t* L_36 = V_2;
		String_t* L_37 = V_3;
		NullCheck(L_34);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, String_t*, String_t* >::Invoke(5 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateXmlDeclaration(System.String,System.String,System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_34, L_35, L_36, L_37);
		V_4 = L_38;
		RuntimeObject* L_39 = ___currentNode2;
		RuntimeObject* L_40 = V_4;
		NullCheck(L_39);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlNode::AppendChild(Mapbox.Json.Converters.IXmlNode) */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_39, L_40);
		goto IL_00ff;
	}

IL_00dd:
	{
		RuntimeObject* L_42 = ___document1;
		String_t* L_43 = ___propertyName3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_43, 1, NULL);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_45 = ___reader0;
		String_t* L_46;
		L_46 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_45, NULL);
		NullCheck(L_42);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(7 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateProcessingInstruction(System.String,System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_42, L_44, L_46);
		V_7 = L_47;
		RuntimeObject* L_48 = ___currentNode2;
		RuntimeObject* L_49 = V_7;
		NullCheck(L_48);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlNode::AppendChild(Mapbox.Json.Converters.IXmlNode) */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_48, L_49);
	}

IL_00ff:
	{
		return;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::CreateDocumentType(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_CreateDocumentType_m1F95FCD2E64405C26A23A7ADD2592CAC149FF332 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, RuntimeObject* ___currentNode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	bool V_6 = false;
	int32_t G_B15_0 = 0;
	{
		V_0 = (String_t*)NULL;
		V_1 = (String_t*)NULL;
		V_2 = (String_t*)NULL;
		V_3 = (String_t*)NULL;
		goto IL_00b2;
	}

IL_000e:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_0 = ___reader0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		V_5 = L_2;
		String_t* L_3 = V_5;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral72D07D1C82E1B7A92C7AB6D9C01CD4050846760F, NULL);
		if (L_4)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_5 = V_5;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralF2EB0B21A975739F9285B24F45AC110ADD74337E, NULL);
		if (L_6)
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_7 = V_5;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral6139809F8F5889653A693440ECEF2DFD4FDCDD94, NULL);
		if (L_8)
		{
			goto IL_0078;
		}
	}
	{
		String_t* L_9 = V_5;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral559483D7AFD5E146A0FF903862BA9AB05FE01692, NULL);
		if (L_10)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_009a;
	}

IL_0056:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_11 = ___reader0;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_11);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_13 = ___reader0;
		String_t* L_14;
		L_14 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_13, NULL);
		V_0 = L_14;
		goto IL_00b1;
	}

IL_0067:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_15 = ___reader0;
		NullCheck(L_15);
		bool L_16;
		L_16 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_15);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_17 = ___reader0;
		String_t* L_18;
		L_18 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_17, NULL);
		V_1 = L_18;
		goto IL_00b1;
	}

IL_0078:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_19 = ___reader0;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_19);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_21 = ___reader0;
		String_t* L_22;
		L_22 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_21, NULL);
		V_2 = L_22;
		goto IL_00b1;
	}

IL_0089:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_23 = ___reader0;
		NullCheck(L_23);
		bool L_24;
		L_24 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_23);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_25 = ___reader0;
		String_t* L_26;
		L_26 = XmlNodeConverter_ConvertTokenToXmlValue_m701C465D96979445F3A58F1F51CD32D35BB03C2E(__this, L_25, NULL);
		V_3 = L_26;
		goto IL_00b1;
	}

IL_009a:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_27 = ___reader0;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_28 = ___reader0;
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_28);
		String_t* L_30;
		L_30 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9159179D678574C69291BCB3CFA5FAC9393D0C8)), L_29, NULL);
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_31;
		L_31 = JsonSerializationException_Create_mB3DA7EF81E2739FBD8EF3788EE7C1A6C2B54E013(L_27, L_30, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_CreateDocumentType_m1F95FCD2E64405C26A23A7ADD2592CAC149FF332_RuntimeMethod_var)));
	}

IL_00b1:
	{
	}

IL_00b2:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_32 = ___reader0;
		NullCheck(L_32);
		bool L_33;
		L_33 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_32);
		if (!L_33)
		{
			goto IL_00c9;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_34 = ___reader0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_34);
		G_B15_0 = ((((int32_t)((((int32_t)L_35) == ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ca;
	}

IL_00c9:
	{
		G_B15_0 = 0;
	}

IL_00ca:
	{
		V_6 = (bool)G_B15_0;
		bool L_36 = V_6;
		if (L_36)
		{
			goto IL_000e;
		}
	}
	{
		RuntimeObject* L_37 = ___document1;
		String_t* L_38 = V_0;
		String_t* L_39 = V_1;
		String_t* L_40 = V_2;
		String_t* L_41 = V_3;
		NullCheck(L_37);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker4< RuntimeObject*, String_t*, String_t*, String_t*, String_t* >::Invoke(6 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateXmlDocumentType(System.String,System.String,System.String,System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_37, L_38, L_39, L_40, L_41);
		V_4 = L_42;
		RuntimeObject* L_43 = ___currentNode2;
		RuntimeObject* L_44 = V_4;
		NullCheck(L_43);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlNode::AppendChild(Mapbox.Json.Converters.IXmlNode) */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_43, L_44);
		return;
	}
}
// Mapbox.Json.Converters.IXmlElement Mapbox.Json.Converters.XmlNodeConverter::CreateElement(System.String,Mapbox.Json.Converters.IXmlDocument,System.String,System.Xml.XmlNamespaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeConverter_CreateElement_m7CAE75AFC8F9C182D42E597039DC159C17C21E3A (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, String_t* ___elementName0, RuntimeObject* ___document1, String_t* ___elementPrefix2, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	{
		String_t* L_0 = ___elementName0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_EncodeName_m5CDC8BEC5CE63A019C9E7C52AADF9F44B90E6CB5(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___elementPrefix2;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_4 = ___manager3;
		String_t* L_5 = ___elementPrefix2;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(16 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_4, L_5);
		G_B3_0 = L_6;
		goto IL_0021;
	}

IL_001a:
	{
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_7 = ___manager3;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_7);
		G_B3_0 = L_8;
	}

IL_0021:
	{
		V_1 = G_B3_0;
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_11 = ___document1;
		String_t* L_12 = V_0;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(8 /* Mapbox.Json.Converters.IXmlElement Mapbox.Json.Converters.IXmlDocument::CreateElement(System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_11, L_12);
		G_B6_0 = L_13;
		goto IL_003b;
	}

IL_0033:
	{
		RuntimeObject* L_14 = ___document1;
		String_t* L_15 = V_0;
		String_t* L_16 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, String_t*, String_t* >::Invoke(9 /* Mapbox.Json.Converters.IXmlElement Mapbox.Json.Converters.IXmlDocument::CreateElement(System.String,System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_14, L_15, L_16);
		G_B6_0 = L_17;
	}

IL_003b:
	{
		V_2 = G_B6_0;
		RuntimeObject* L_18 = V_2;
		V_3 = L_18;
		goto IL_0040;
	}

IL_0040:
	{
		RuntimeObject* L_19 = V_3;
		return L_19;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::DeserializeNode(Mapbox.Json.JsonReader,Mapbox.Json.Converters.IXmlDocument,System.Xml.XmlNamespaceManager,Mapbox.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter_DeserializeNode_m507372274683541B47D8C8A7531C41794D895AB7 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* ___reader0, RuntimeObject* ___document1, XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* ___manager2, RuntimeObject* ___currentNode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B43_0 = 0;
	{
	}

IL_0001:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3)))
		{
			case 0:
			{
				goto IL_014c;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0189;
			}
		}
	}
	{
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)13))))
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)14))))
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_01a6;
	}

IL_0036:
	{
		RuntimeObject* L_5 = ___currentNode3;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Xml.XmlNodeType Mapbox.Json.Converters.IXmlNode::get_NodeType() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_5);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_7 = ___document1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(12 /* Mapbox.Json.Converters.IXmlElement Mapbox.Json.Converters.IXmlDocument::get_DocumentElement() */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_7);
		G_B10_0 = ((!(((RuntimeObject*)(RuntimeObject*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B10_0 = 0;
	}

IL_004d:
	{
		V_3 = (bool)G_B10_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_10 = ___reader0;
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_11;
		L_11 = JsonSerializationException_Create_mB3DA7EF81E2739FBD8EF3788EE7C1A6C2B54E013(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1DE5E11A719EDB4CA85B9D81FAB9B419521AF411)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_DeserializeNode_m507372274683541B47D8C8A7531C41794D895AB7_RuntimeMethod_var)));
	}

IL_005e:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_12 = ___reader0;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_12);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		V_1 = L_14;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_15 = ___reader0;
		NullCheck(L_15);
		bool L_16;
		L_16 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_15);
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_17 = ___reader0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_17);
		V_4 = (bool)((((int32_t)L_18) == ((int32_t)2))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_013b;
		}
	}
	{
		V_5 = 0;
		goto IL_009e;
	}

IL_0089:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_20 = ___reader0;
		RuntimeObject* L_21 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_22 = ___manager2;
		String_t* L_23 = V_1;
		RuntimeObject* L_24 = ___currentNode3;
		XmlNodeConverter_DeserializeValue_m355184EF6A8AB71B0BF766F612836CAAE08B6099(__this, L_20, L_21, L_22, L_23, L_24, NULL);
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_009e:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_26 = ___reader0;
		NullCheck(L_26);
		bool L_27;
		L_27 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_26);
		if (!L_27)
		{
			goto IL_00b5;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_28 = ___reader0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_28);
		G_B18_0 = ((((int32_t)((((int32_t)L_29) == ((int32_t)((int32_t)14)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b6;
	}

IL_00b5:
	{
		G_B18_0 = 0;
	}

IL_00b6:
	{
		V_6 = (bool)G_B18_0;
		bool L_30 = V_6;
		if (L_30)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_31 = V_5;
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_00c9;
		}
	}
	{
		bool L_32;
		L_32 = XmlNodeConverter_get_WriteArrayAttribute_m20361156D5F9DCCF34428D0D8019CC5D9DA08AEB_inline(__this, NULL);
		G_B22_0 = ((int32_t)(L_32));
		goto IL_00ca;
	}

IL_00c9:
	{
		G_B22_0 = 0;
	}

IL_00ca:
	{
		V_7 = (bool)G_B22_0;
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_34 = ___currentNode3;
		NullCheck(L_34);
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_35;
		L_35 = InterfaceFuncInvoker0< List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* >::Invoke(2 /* System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode> Mapbox.Json.Converters.IXmlNode::get_ChildNodes() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_34);
		NullCheck(L_35);
		Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 L_36;
		L_36 = List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832(L_35, List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		V_8 = L_36;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF((&V_8), Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_011d_1;
			}

IL_00e2_1:
			{
				RuntimeObject* L_37;
				L_37 = Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_inline((&V_8), Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
				V_9 = L_37;
				RuntimeObject* L_38 = V_9;
				V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_38, IXmlElement_t23F135396A913BB0D8E8B65C9E12F1D900FD3C1D_il2cpp_TypeInfo_var));
				RuntimeObject* L_39 = V_10;
				if (!L_39)
				{
					goto IL_0108_1;
				}
			}
			{
				RuntimeObject* L_40 = V_10;
				NullCheck(L_40);
				String_t* L_41;
				L_41 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mapbox.Json.Converters.IXmlNode::get_LocalName() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_40);
				String_t* L_42 = V_1;
				bool L_43;
				L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, L_42, NULL);
				G_B28_0 = ((int32_t)(L_43));
				goto IL_0109_1;
			}

IL_0108_1:
			{
				G_B28_0 = 0;
			}

IL_0109_1:
			{
				V_11 = (bool)G_B28_0;
				bool L_44 = V_11;
				if (!L_44)
				{
					goto IL_011c_1;
				}
			}
			{
				RuntimeObject* L_45 = V_10;
				RuntimeObject* L_46 = ___document1;
				XmlNodeConverter_AddJsonArrayAttribute_m6D57E42956502B3413B0E1FC501345673D70F9F6(__this, L_45, L_46, NULL);
				goto IL_0126_1;
			}

IL_011c_1:
			{
			}

IL_011d_1:
			{
				bool L_47;
				L_47 = Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF((&V_8), Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_00e2_1;
				}
			}

IL_0126_1:
			{
				goto IL_0137;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0137:
	{
	}

IL_0138:
	{
		goto IL_014a;
	}

IL_013b:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_48 = ___reader0;
		RuntimeObject* L_49 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_50 = ___manager2;
		String_t* L_51 = V_1;
		RuntimeObject* L_52 = ___currentNode3;
		XmlNodeConverter_DeserializeValue_m355184EF6A8AB71B0BF766F612836CAAE08B6099(__this, L_48, L_49, L_50, L_51, L_52, NULL);
	}

IL_014a:
	{
		goto IL_01c3;
	}

IL_014c:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_53 = ___reader0;
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_53);
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_54);
		V_2 = L_55;
		goto IL_0169;
	}

IL_015a:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_56 = ___reader0;
		RuntimeObject* L_57 = ___document1;
		XmlNamespaceManager_t95431ADE7A94108629DFF894819FB1A9709D810F* L_58 = ___manager2;
		String_t* L_59 = V_2;
		RuntimeObject* L_60 = ___currentNode3;
		XmlNodeConverter_DeserializeValue_m355184EF6A8AB71B0BF766F612836CAAE08B6099(__this, L_56, L_57, L_58, L_59, L_60, NULL);
	}

IL_0169:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_61 = ___reader0;
		NullCheck(L_61);
		bool L_62;
		L_62 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_61);
		if (!L_62)
		{
			goto IL_0180;
		}
	}
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_63 = ___reader0;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_63);
		G_B43_0 = ((((int32_t)((((int32_t)L_64) == ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0181;
	}

IL_0180:
	{
		G_B43_0 = 0;
	}

IL_0181:
	{
		V_12 = (bool)G_B43_0;
		bool L_65 = V_12;
		if (L_65)
		{
			goto IL_015a;
		}
	}
	{
		goto IL_01c2;
	}

IL_0189:
	{
		RuntimeObject* L_66 = ___currentNode3;
		RuntimeObject* L_67 = ___document1;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_68 = ___reader0;
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Mapbox.Json.JsonReader::get_Value() */, L_68);
		NullCheck(L_67);
		RuntimeObject* L_70;
		L_70 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlDocument::CreateComment(System.String) */, IXmlDocument_t806F5580B58F72CE5B9DBE6BBA7D9868AE953146_il2cpp_TypeInfo_var, L_67, ((String_t*)CastclassSealed((RuntimeObject*)L_69, String_t_il2cpp_TypeInfo_var)));
		NullCheck(L_66);
		RuntimeObject* L_71;
		L_71 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(7 /* Mapbox.Json.Converters.IXmlNode Mapbox.Json.Converters.IXmlNode::AppendChild(Mapbox.Json.Converters.IXmlNode) */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_66, L_70);
		goto IL_01c2;
	}

IL_01a4:
	{
		goto IL_01d2;
	}

IL_01a6:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_72 = ___reader0;
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_73 = ___reader0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, L_73);
		int32_t L_75 = L_74;
		RuntimeObject* L_76 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonToken_t649A9AC7D3BACB7B8384AA021FA250F864F25592_il2cpp_TypeInfo_var)), &L_75);
		String_t* L_77;
		L_77 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB6FEE3D4E67CA183A789224E46967A517687086A)), L_76, NULL);
		JsonSerializationException_t862464885032E5445110BE40D4B2DD230C18841B* L_78;
		L_78 = JsonSerializationException_Create_mB3DA7EF81E2739FBD8EF3788EE7C1A6C2B54E013(L_72, L_77, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlNodeConverter_DeserializeNode_m507372274683541B47D8C8A7531C41794D895AB7_RuntimeMethod_var)));
	}

IL_01c2:
	{
	}

IL_01c3:
	{
		JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* L_79 = ___reader0;
		NullCheck(L_79);
		bool L_80;
		L_80 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean Mapbox.Json.JsonReader::Read() */, L_79);
		V_13 = L_80;
		bool L_81 = V_13;
		if (L_81)
		{
			goto IL_0001;
		}
	}

IL_01d2:
	{
		return;
	}
}
// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::IsNamespaceAttribute(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_IsNamespaceAttribute_m06B6ADAC0C7CA98C185EBC6A83103808DAFBD508 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, String_t* ___attributeName0, String_t** ___prefix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		String_t* L_0 = ___attributeName0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_0, _stringLiteral9CDCEEB7A12F71E8DF3D6AC05D04621DD4FBABF3, 4, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_3 = ___attributeName0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)5))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		String_t** L_6 = ___prefix1;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_7);
		V_2 = (bool)1;
		goto IL_0058;
	}

IL_002b:
	{
		String_t* L_8 = ___attributeName0;
		NullCheck(L_8);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, 5, NULL);
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)((int32_t)58)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		String_t** L_11 = ___prefix1;
		String_t* L_12 = ___attributeName0;
		String_t* L_13 = ___attributeName0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		NullCheck(L_12);
		String_t* L_15;
		L_15 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_12, 6, ((int32_t)il2cpp_codegen_subtract(L_14, 6)), NULL);
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_15);
		V_2 = (bool)1;
		goto IL_0058;
	}

IL_0050:
	{
	}

IL_0051:
	{
		String_t** L_16 = ___prefix1;
		*((RuntimeObject**)L_16) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)NULL);
		V_2 = (bool)0;
		goto IL_0058;
	}

IL_0058:
	{
		bool L_17 = V_2;
		return L_17;
	}
}
// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::ValueAttributes(System.Collections.Generic.List`1<Mapbox.Json.Converters.IXmlNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_ValueAttributes_m08CBF846C3D879A151F1C11BD32A1BDCA04BBC40 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_0 = ___c0;
		NullCheck(L_0);
		Enumerator_t2CA20A5DFC0F0861D380BA0C77A56E17783F4E84 L_1;
		L_1 = List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832(L_0, List_1_GetEnumerator_m56F9577C55CA6F46F982CF362727BC9B36956832_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF((&V_0), Enumerator_Dispose_m9E7A7988BD56B62FBBEF55D211F26612C376F7DF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_000b_1:
			{
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_inline((&V_0), Enumerator_get_Current_mC2C874F713560120759C9F0583147DF803BAAE6D_RuntimeMethod_var);
				V_1 = L_2;
				RuntimeObject* L_3 = V_1;
				NullCheck(L_3);
				String_t* L_4;
				L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String Mapbox.Json.Converters.IXmlNode::get_NamespaceUri() */, IXmlNode_t66860B1BA4667E6A8067C9E3A5CFE8DDD1317DFB_il2cpp_TypeInfo_var, L_3);
				bool L_5;
				L_5 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_4, _stringLiteral125BCB7A4232428BFD5FFB1F3E5905A4F6B0B075, NULL);
				V_2 = L_5;
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_002d_1;
				}
			}
			{
				V_3 = (bool)1;
				goto IL_004c;
			}

IL_002d_1:
			{
			}

IL_002e_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF((&V_0), Enumerator_MoveNext_mCBC2D0BAB5224465BA8BDC0F7800D5B986BD1BCF_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		V_3 = (bool)0;
		goto IL_004c;
	}

IL_004c:
	{
		bool L_8 = V_3;
		return L_8;
	}
}
// System.Boolean Mapbox.Json.Converters.XmlNodeConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeConverter_CanConvert_m2C3349C18DB44F2C56A08BFD738AF770AB8239B4 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, Type_t* ___valueType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___valueType0;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_001a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		Type_t* L_7 = ___valueType0;
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_6, L_7);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0033:
	{
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter__ctor_mD963148E1836888EF44EB8253FCF8E12DB5112E6 (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_mDB5267B1FA9EC26F11778A4F1B30FDF76B14D068(__this, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Converters.XmlNodeConverter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeConverter__cctor_m603C944EBC5BF6D4F5FA33D1FDFB1F8532951A89 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7* L_0 = (List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7*)il2cpp_codegen_object_new(List_1_t7C83F1981E05108F404BC2FE3C4C29A873B5CFB7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C(L_0, List_1__ctor_mE53EFDDAF6116B3C5D761AAEFD9D15D05E5FA89C_RuntimeMethod_var);
		((XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var))->___EmptyChildNodes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9_il2cpp_TypeInfo_var))->___EmptyChildNodes_0), (void*)L_0);
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
// System.DateTimeKind Mapbox.Json.Bson.BsonBinaryWriter::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_get_DateTimeKindHandling_m48A909892A9B9F7763DB0089B4AAC5267D3191A0 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDateTimeKindHandlingU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_set_DateTimeKindHandling_m9784B0D935227D6F5FEFA90A9A5A2922151F52D9 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDateTimeKindHandlingU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::.ctor(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter__ctor_m6CE085BC6C16558994487190540171174366D41A (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BsonBinaryWriter_set_DateTimeKindHandling_m9784B0D935227D6F5FEFA90A9A5A2922151F52D9_inline(__this, 1, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___writer0;
		__this->____writer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer_1), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Flush_m9F56DDD029DD4F398F9793EB94F9D464738FBA98 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = __this->____writer_1;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(7 /* System.Void System.IO.BinaryWriter::Flush() */, L_0);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_Close_m09BEDDEBE87FB047DA4A52BBD20621BF509E3CA7 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, const RuntimeMethod* method) 
{
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = __this->____writer_1;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(5 /* System.Void System.IO.BinaryWriter::Close() */, L_0);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::WriteToken(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteToken_mF1E488619C95DE9AD32A619C2ECED1E6DA6EDF50 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___t0, const RuntimeMethod* method) 
{
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = ___t0;
		int32_t L_1;
		L_1 = BsonBinaryWriter_CalculateSize_m5850C4F7F232921297849749A5D3B8CBDC7EC830(__this, L_0, NULL);
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_2 = ___t0;
		BsonBinaryWriter_WriteTokenInternal_m048B932AE355398EB04A7A65875834BC8728DD31(__this, L_2, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::WriteTokenInternal(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteTokenInternal_m048B932AE355398EB04A7A65875834BC8728DD31 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t8E988632A08EDACE43652EADEF6F28FE355DC0AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAD1D1831AA56A5A0750828AD1E0E260FFFB925E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCBEB9A95FEAFC26D6C6175CD936254A28A5246D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0;
	BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* V_3 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_4;
	memset((&V_4), 0, sizeof(V_4));
	BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* V_5 = NULL;
	uint64_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* V_8 = NULL;
	BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* V_9 = NULL;
	BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* V_10 = NULL;
	BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* V_11 = NULL;
	BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* V_12 = NULL;
	BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* V_13 = NULL;
	int64_t V_14 = 0;
	bool V_15 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_19;
	memset((&V_19), 0, sizeof(V_19));
	BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* V_20 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_21 = NULL;
	BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* V_22 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_23 = NULL;
	BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* V_24 = NULL;
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = ___t0;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonToken::get_Type() */, L_0);
		V_0 = L_1;
		int8_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0203;
			}
			case 1:
			{
				goto IL_022f;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_0102;
			}
			case 4:
			{
				goto IL_0331;
			}
			case 5:
			{
				goto IL_027f;
			}
			case 6:
			{
				goto IL_037f;
			}
			case 7:
			{
				goto IL_0266;
			}
			case 8:
			{
				goto IL_0284;
			}
			case 9:
			{
				goto IL_027f;
			}
			case 10:
			{
				goto IL_03aa;
			}
			case 11:
			{
				goto IL_0412;
			}
			case 12:
			{
				goto IL_0412;
			}
			case 13:
			{
				goto IL_0412;
			}
			case 14:
			{
				goto IL_0412;
			}
			case 15:
			{
				goto IL_01ab;
			}
			case 16:
			{
				goto IL_0412;
			}
			case 17:
			{
				goto IL_01d7;
			}
		}
	}
	{
		goto IL_0412;
	}

IL_005d:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_3 = ___t0;
		V_1 = ((BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575*)CastclassClass((RuntimeObject*)L_3, BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_4 = __this->____writer_1;
		BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = BsonToken_get_CalculatedSize_m01453B84E1D67C1030D478C7C21D57171B1EB1B3_inline(L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_4, L_6);
		BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = BsonObject_GetEnumerator_m51EB57A06242CFF4EF309CC464453FC3775C80C8(L_7, NULL);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e4:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_2;
					if (!L_9)
					{
						goto IL_00ee;
					}
				}
				{
					RuntimeObject* L_10 = V_2;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_00ee:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00da_1;
			}

IL_0081_1:
			{
				RuntimeObject* L_11 = V_2;
				NullCheck(L_11);
				BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* L_12;
				L_12 = InterfaceFuncInvoker0< BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Mapbox.Json.Bson.BsonProperty>::get_Current() */, IEnumerator_1_tCBEB9A95FEAFC26D6C6175CD936254A28A5246D0_il2cpp_TypeInfo_var, L_11);
				V_3 = L_12;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = __this->____writer_1;
				BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* L_14 = V_3;
				NullCheck(L_14);
				BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_15;
				L_15 = BsonProperty_get_Value_mBE4596AD58E9F63AA81C15D3F5C761CC85B58FB4_inline(L_14, NULL);
				NullCheck(L_15);
				int8_t L_16;
				L_16 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonToken::get_Type() */, L_15);
				NullCheck(L_13);
				VirtualActionInvoker1< int8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.SByte) */, L_13, L_16);
				BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* L_17 = V_3;
				NullCheck(L_17);
				BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_18;
				L_18 = BsonProperty_get_Name_m65D854351FC3F54004885367CE6F069138EA2D60_inline(L_17, NULL);
				NullCheck(L_18);
				RuntimeObject* L_19;
				L_19 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_18, NULL);
				BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* L_20 = V_3;
				NullCheck(L_20);
				BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_21;
				L_21 = BsonProperty_get_Name_m65D854351FC3F54004885367CE6F069138EA2D60_inline(L_20, NULL);
				NullCheck(L_21);
				int32_t L_22;
				L_22 = BsonString_get_ByteCount_mEF2800D322BC09FAF0919B6558A5CC558612E052_inline(L_21, NULL);
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_23 = V_4;
				BsonBinaryWriter_WriteString_m6625E0946FEBB2DEDE9E4204434B2268B69EF19C(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var)), L_22, L_23, NULL);
				BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* L_24 = V_3;
				NullCheck(L_24);
				BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_25;
				L_25 = BsonProperty_get_Value_mBE4596AD58E9F63AA81C15D3F5C761CC85B58FB4_inline(L_24, NULL);
				BsonBinaryWriter_WriteTokenInternal_m048B932AE355398EB04A7A65875834BC8728DD31(__this, L_25, NULL);
			}

IL_00da_1:
			{
				RuntimeObject* L_26 = V_2;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_0081_1;
				}
			}
			{
				goto IL_00ef;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ef:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_28 = __this->____writer_1;
		NullCheck(L_28);
		VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_28, (uint8_t)0);
		goto IL_0437;
	}

IL_0102:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_29 = ___t0;
		V_5 = ((BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3*)CastclassClass((RuntimeObject*)L_29, BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_30 = __this->____writer_1;
		BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* L_31 = V_5;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = BsonToken_get_CalculatedSize_m01453B84E1D67C1030D478C7C21D57171B1EB1B3_inline(L_31, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_30, L_32);
		V_6 = ((int64_t)0);
		BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* L_33 = V_5;
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = BsonArray_GetEnumerator_m1F55A56BFB40EE3D62AF021034B5508BA5C85085(L_33, NULL);
		V_7 = L_34;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_018b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_35 = V_7;
					if (!L_35)
					{
						goto IL_0197;
					}
				}
				{
					RuntimeObject* L_36 = V_7;
					NullCheck(L_36);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_36);
				}

IL_0197:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0180_1;
			}

IL_012e_1:
			{
				RuntimeObject* L_37 = V_7;
				NullCheck(L_37);
				BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_38;
				L_38 = InterfaceFuncInvoker0< BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Mapbox.Json.Bson.BsonToken>::get_Current() */, IEnumerator_1_tAD1D1831AA56A5A0750828AD1E0E260FFFB925E5_il2cpp_TypeInfo_var, L_37);
				V_8 = L_38;
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_39 = __this->____writer_1;
				BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_40 = V_8;
				NullCheck(L_40);
				int8_t L_41;
				L_41 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonToken::get_Type() */, L_40);
				NullCheck(L_39);
				VirtualActionInvoker1< int8_t >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.SByte) */, L_39, L_41);
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_42;
				L_42 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
				String_t* L_43;
				L_43 = UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7((&V_6), L_42, NULL);
				uint64_t L_44 = V_6;
				int32_t L_45;
				L_45 = MathUtils_IntLength_mF04B5F768FE71C717A843A3CADDDE2316D96D079(L_44, NULL);
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_46 = V_4;
				BsonBinaryWriter_WriteString_m6625E0946FEBB2DEDE9E4204434B2268B69EF19C(__this, L_43, L_45, L_46, NULL);
				BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_47 = V_8;
				BsonBinaryWriter_WriteTokenInternal_m048B932AE355398EB04A7A65875834BC8728DD31(__this, L_47, NULL);
				uint64_t L_48 = V_6;
				V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, ((int64_t)1)));
			}

IL_0180_1:
			{
				RuntimeObject* L_49 = V_7;
				NullCheck(L_49);
				bool L_50;
				L_50 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_49);
				if (L_50)
				{
					goto IL_012e_1;
				}
			}
			{
				goto IL_0198;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0198:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_51 = __this->____writer_1;
		NullCheck(L_51);
		VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_51, (uint8_t)0);
		goto IL_0437;
	}

IL_01ab:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_52 = ___t0;
		V_9 = ((BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749*)CastclassClass((RuntimeObject*)L_52, BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_53 = __this->____writer_1;
		BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* L_54 = V_9;
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_54, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_56;
		L_56 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_57;
		L_57 = Convert_ToInt32_m5C8BF1D45F508E7AEDA393AE72555148527E3ED3(L_55, L_56, NULL);
		NullCheck(L_53);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_53, L_57);
		goto IL_0437;
	}

IL_01d7:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_58 = ___t0;
		V_10 = ((BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749*)CastclassClass((RuntimeObject*)L_58, BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_59 = __this->____writer_1;
		BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* L_60 = V_10;
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_60, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_62;
		L_62 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_63;
		L_63 = Convert_ToInt64_m6CA00ABB70FAD8242C62ED9913F7D7C3B811FC31(L_61, L_62, NULL);
		NullCheck(L_59);
		VirtualActionInvoker1< int64_t >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_59, L_63);
		goto IL_0437;
	}

IL_0203:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_64 = ___t0;
		V_11 = ((BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749*)CastclassClass((RuntimeObject*)L_64, BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_65 = __this->____writer_1;
		BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* L_66 = V_11;
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_66, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_68;
		L_68 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_69;
		L_69 = Convert_ToDouble_m8DED60F2E0251A3D389F1DD22AA5AF9CD440ABE8(L_67, L_68, NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_65, L_69);
		goto IL_0437;
	}

IL_022f:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_70 = ___t0;
		V_12 = ((BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF*)CastclassClass((RuntimeObject*)L_70, BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var));
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_71 = V_12;
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_71, NULL);
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_73 = V_12;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = BsonString_get_ByteCount_mEF2800D322BC09FAF0919B6558A5CC558612E052_inline(L_73, NULL);
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_75 = V_12;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = BsonToken_get_CalculatedSize_m01453B84E1D67C1030D478C7C21D57171B1EB1B3_inline(L_75, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_77), ((int32_t)il2cpp_codegen_subtract(L_76, 4)), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		BsonBinaryWriter_WriteString_m6625E0946FEBB2DEDE9E4204434B2268B69EF19C(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_72, String_t_il2cpp_TypeInfo_var)), L_74, L_77, NULL);
		goto IL_0437;
	}

IL_0266:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_78 = __this->____writer_1;
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_79 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var);
		BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C* L_80 = ((BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var))->___True_5;
		NullCheck(L_78);
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_78, (bool)((((RuntimeObject*)(BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A*)L_79) == ((RuntimeObject*)(BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C*)L_80))? 1 : 0));
		goto IL_0437;
	}

IL_027f:
	{
		goto IL_0437;
	}

IL_0284:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_81 = ___t0;
		V_13 = ((BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749*)CastclassClass((RuntimeObject*)L_81, BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749_il2cpp_TypeInfo_var));
		V_14 = ((int64_t)0);
		BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* L_82 = V_13;
		NullCheck(L_82);
		RuntimeObject* L_83;
		L_83 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_82, NULL);
		V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_83, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_84 = V_15;
		if (!L_84)
		{
			goto IL_02f8;
		}
	}
	{
		BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* L_85 = V_13;
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_85, NULL);
		V_16 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_86, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))));
		int32_t L_87;
		L_87 = BsonBinaryWriter_get_DateTimeKindHandling_m48A909892A9B9F7763DB0089B4AAC5267D3191A0_inline(__this, NULL);
		V_17 = (bool)((((int32_t)L_87) == ((int32_t)1))? 1 : 0);
		bool L_88 = V_17;
		if (!L_88)
		{
			goto IL_02d1;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_89;
		L_89 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&V_16), NULL);
		V_16 = L_89;
		goto IL_02eb;
	}

IL_02d1:
	{
		int32_t L_90;
		L_90 = BsonBinaryWriter_get_DateTimeKindHandling_m48A909892A9B9F7763DB0089B4AAC5267D3191A0_inline(__this, NULL);
		V_18 = (bool)((((int32_t)L_90) == ((int32_t)2))? 1 : 0);
		bool L_91 = V_18;
		if (!L_91)
		{
			goto IL_02eb;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_92;
		L_92 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_16), NULL);
		V_16 = L_92;
	}

IL_02eb:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_93 = V_16;
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t8E988632A08EDACE43652EADEF6F28FE355DC0AC_il2cpp_TypeInfo_var);
		int64_t L_94;
		L_94 = DateTimeUtils_ConvertDateTimeToJavaScriptTicks_mCB62B10EFD14F41A577BBAFED8F5EEB98E27716B(L_93, (bool)0, NULL);
		V_14 = L_94;
		goto IL_031d;
	}

IL_02f8:
	{
		BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* L_95 = V_13;
		NullCheck(L_95);
		RuntimeObject* L_96;
		L_96 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_95, NULL);
		V_19 = ((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_96, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var))));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_97;
		L_97 = DateTimeOffset_get_UtcDateTime_mE7EB39F361C89E1367CBC03C3410BA34F194DA40((&V_19), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_98;
		L_98 = DateTimeOffset_get_Offset_mE90E2548227F1EE8BF4A6A5EB71B32D48D3035A4((&V_19), NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t8E988632A08EDACE43652EADEF6F28FE355DC0AC_il2cpp_TypeInfo_var);
		int64_t L_99;
		L_99 = DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m219A7D77BAB7C622ED9C50C1BCC73AD70529AEDF(L_97, L_98, NULL);
		V_14 = L_99;
	}

IL_031d:
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_100 = __this->____writer_1;
		int64_t L_101 = V_14;
		NullCheck(L_100);
		VirtualActionInvoker1< int64_t >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_100, L_101);
		goto IL_0437;
	}

IL_0331:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_102 = ___t0;
		V_20 = ((BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743*)CastclassClass((RuntimeObject*)L_102, BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743_il2cpp_TypeInfo_var));
		BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* L_103 = V_20;
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_103, NULL);
		V_21 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_104, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_105 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = V_21;
		NullCheck(L_106);
		NullCheck(L_105);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_105, ((int32_t)(((RuntimeArray*)L_106)->max_length)));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_107 = __this->____writer_1;
		BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* L_108 = V_20;
		NullCheck(L_108);
		uint8_t L_109;
		L_109 = BsonBinary_get_BinaryType_m5FED0D314A30309D1595CBB52EDE39073F3CA9CA_inline(L_108, NULL);
		NullCheck(L_107);
		VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_107, L_109);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_110 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = V_21;
		NullCheck(L_110);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_110, L_111);
		goto IL_0437;
	}

IL_037f:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_112 = ___t0;
		V_22 = ((BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749*)CastclassClass((RuntimeObject*)L_112, BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749_il2cpp_TypeInfo_var));
		BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* L_113 = V_22;
		NullCheck(L_113);
		RuntimeObject* L_114;
		L_114 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_113, NULL);
		V_23 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_114, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_115 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_116 = V_23;
		NullCheck(L_115);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_115, L_116);
		goto IL_0437;
	}

IL_03aa:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_117 = ___t0;
		V_24 = ((BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32*)CastclassClass((RuntimeObject*)L_117, BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32_il2cpp_TypeInfo_var));
		BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* L_118 = V_24;
		NullCheck(L_118);
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_119;
		L_119 = BsonRegex_get_Pattern_m36879EB708797B79197B819554E1BD6A991A841E_inline(L_118, NULL);
		NullCheck(L_119);
		RuntimeObject* L_120;
		L_120 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_119, NULL);
		BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* L_121 = V_24;
		NullCheck(L_121);
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_122;
		L_122 = BsonRegex_get_Pattern_m36879EB708797B79197B819554E1BD6A991A841E_inline(L_121, NULL);
		NullCheck(L_122);
		int32_t L_123;
		L_123 = BsonString_get_ByteCount_mEF2800D322BC09FAF0919B6558A5CC558612E052_inline(L_122, NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_124 = V_4;
		BsonBinaryWriter_WriteString_m6625E0946FEBB2DEDE9E4204434B2268B69EF19C(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_120, String_t_il2cpp_TypeInfo_var)), L_123, L_124, NULL);
		BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* L_125 = V_24;
		NullCheck(L_125);
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_126;
		L_126 = BsonRegex_get_Options_m8F99D03B24CD4C983ADFA8B75F0132754FED99FC_inline(L_125, NULL);
		NullCheck(L_126);
		RuntimeObject* L_127;
		L_127 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_126, NULL);
		BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* L_128 = V_24;
		NullCheck(L_128);
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_129;
		L_129 = BsonRegex_get_Options_m8F99D03B24CD4C983ADFA8B75F0132754FED99FC_inline(L_128, NULL);
		NullCheck(L_129);
		int32_t L_130;
		L_130 = BsonString_get_ByteCount_mEF2800D322BC09FAF0919B6558A5CC558612E052_inline(L_129, NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_131 = V_4;
		BsonBinaryWriter_WriteString_m6625E0946FEBB2DEDE9E4204434B2268B69EF19C(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_127, String_t_il2cpp_TypeInfo_var)), L_130, L_131, NULL);
		goto IL_0437;
	}

IL_0412:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_132;
		L_132 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_133 = ___t0;
		NullCheck(L_133);
		int8_t L_134;
		L_134 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonToken::get_Type() */, L_133);
		int8_t L_135 = L_134;
		RuntimeObject* L_136 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_t9F7E06B1805EDD8C0A94188EA357B3D92A3E7A6D_il2cpp_TypeInfo_var)), &L_135);
		String_t* L_137;
		L_137 = StringUtils_FormatWith_mC9CE0D3DDDE9E57C4812561FCA179F29AE68BEA1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E0489F9FAF23DF58DCABE03DAEB479BD06406A5)), L_132, L_136, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_138 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_138);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_138, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2)), L_137, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_138, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonBinaryWriter_WriteTokenInternal_m048B932AE355398EB04A7A65875834BC8728DD31_RuntimeMethod_var)));
	}

IL_0437:
	{
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::WriteString(System.String,System.Int32,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteString_m6625E0946FEBB2DEDE9E4204434B2268B69EF19C (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, String_t* ___s0, int32_t ___byteCount1, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___calculatedlengthPrefix2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___calculatedlengthPrefix2), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = __this->____writer_1;
		int32_t L_3;
		L_3 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&___calculatedlengthPrefix2), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		NullCheck(L_2);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_2, L_3);
	}

IL_0021:
	{
		String_t* L_4 = ___s0;
		int32_t L_5 = ___byteCount1;
		BsonBinaryWriter_WriteUtf8Bytes_mFA27694CFFDFFBD6FC3F4AF35F6D412919DAF6FE(__this, L_4, L_5, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = __this->____writer_1;
		NullCheck(L_6);
		VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_6, (uint8_t)0);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::WriteUtf8Bytes(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter_WriteUtf8Bytes_mFA27694CFFDFFBD6FC3F4AF35F6D412919DAF6FE (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, String_t* ___s0, int32_t ___byteCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		String_t* L_0 = ___s0;
		V_0 = (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_2 = ___byteCount1;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)((int32_t)256)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_006a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____largeByteBuffer_2;
		V_2 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->____largeByteBuffer_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____largeByteBuffer_2), (void*)L_6);
	}

IL_0039:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7 = ((BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var))->___Encoding_0;
		String_t* L_8 = ___s0;
		String_t* L_9 = ___s0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->____largeByteBuffer_2;
		NullCheck(L_7);
		int32_t L_12;
		L_12 = VirtualFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(18 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_7, L_8, 0, L_10, L_11, 0);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->____largeByteBuffer_2;
		int32_t L_15 = ___byteCount1;
		NullCheck(L_13);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(12 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, L_15);
		goto IL_0085;
	}

IL_006a:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_16 = ((BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var))->___Encoding_0;
		String_t* L_17 = ___s0;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		V_3 = L_18;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_19 = __this->____writer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
		NullCheck(L_19);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_19, L_20);
	}

IL_0085:
	{
	}

IL_0086:
	{
		return;
	}
}
// System.Int32 Mapbox.Json.Bson.BsonBinaryWriter::CalculateSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_mEFEDDFC7E9165635E236A13CFA2CB69017176673 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, int32_t ___stringByteCount0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___stringByteCount0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0007;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.Json.Bson.BsonBinaryWriter::CalculateSizeWithLength(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSizeWithLength_mA079D616EF3B4D7D62A134E23D1AF7F7239B8706 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, int32_t ___stringByteCount0, bool ___includeSize1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___includeSize1;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 5;
	}

IL_0008:
	{
		V_0 = G_B3_0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___stringByteCount0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Int32 Mapbox.Json.Bson.BsonBinaryWriter::CalculateSize(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_CalculateSize_m5850C4F7F232921297849749A5D3B8CBDC7EC830 (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAD1D1831AA56A5A0750828AD1E0E260FFFB925E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCBEB9A95FEAFC26D6C6175CD936254A28A5246D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0;
	BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* V_7 = NULL;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	RuntimeObject* V_10 = NULL;
	BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* V_11 = NULL;
	BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* V_12 = NULL;
	String_t* V_13 = NULL;
	BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* V_14 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_15 = NULL;
	BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* V_16 = NULL;
	int32_t V_17 = 0;
	BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* G_B25_0 = NULL;
	BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* G_B24_0 = NULL;
	int32_t G_B26_0 = 0;
	BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* G_B26_1 = NULL;
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = ___t0;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonToken::get_Type() */, L_0);
		V_0 = L_1;
		int8_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0169;
			}
			case 1:
			{
				goto IL_0171;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_00d0;
			}
			case 4:
			{
				goto IL_01e5;
			}
			case 5:
			{
				goto IL_01d5;
			}
			case 6:
			{
				goto IL_0215;
			}
			case 7:
			{
				goto IL_01cd;
			}
			case 8:
			{
				goto IL_01dd;
			}
			case 9:
			{
				goto IL_01d5;
			}
			case 10:
			{
				goto IL_021b;
			}
			case 11:
			{
				goto IL_0260;
			}
			case 12:
			{
				goto IL_0260;
			}
			case 13:
			{
				goto IL_0260;
			}
			case 14:
			{
				goto IL_0260;
			}
			case 15:
			{
				goto IL_0159;
			}
			case 16:
			{
				goto IL_0260;
			}
			case 17:
			{
				goto IL_0161;
			}
		}
	}
	{
		goto IL_0260;
	}

IL_005d:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_3 = ___t0;
		V_1 = ((BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575*)CastclassClass((RuntimeObject*)L_3, BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575_il2cpp_TypeInfo_var));
		V_2 = 4;
		BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = BsonObject_GetEnumerator_m51EB57A06242CFF4EF309CC464453FC3775C80C8(L_4, NULL);
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b1:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_3;
					if (!L_6)
					{
						goto IL_00bb;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_00bb:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a7_1;
			}

IL_0071_1:
			{
				RuntimeObject* L_8 = V_3;
				NullCheck(L_8);
				BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* L_9;
				L_9 = InterfaceFuncInvoker0< BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Mapbox.Json.Bson.BsonProperty>::get_Current() */, IEnumerator_1_tCBEB9A95FEAFC26D6C6175CD936254A28A5246D0_il2cpp_TypeInfo_var, L_8);
				V_4 = L_9;
				V_5 = 1;
				int32_t L_10 = V_5;
				BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* L_11 = V_4;
				NullCheck(L_11);
				BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_12;
				L_12 = BsonProperty_get_Name_m65D854351FC3F54004885367CE6F069138EA2D60_inline(L_11, NULL);
				int32_t L_13;
				L_13 = BsonBinaryWriter_CalculateSize_m5850C4F7F232921297849749A5D3B8CBDC7EC830(__this, L_12, NULL);
				V_5 = ((int32_t)il2cpp_codegen_add(L_10, L_13));
				int32_t L_14 = V_5;
				BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* L_15 = V_4;
				NullCheck(L_15);
				BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_16;
				L_16 = BsonProperty_get_Value_mBE4596AD58E9F63AA81C15D3F5C761CC85B58FB4_inline(L_15, NULL);
				int32_t L_17;
				L_17 = BsonBinaryWriter_CalculateSize_m5850C4F7F232921297849749A5D3B8CBDC7EC830(__this, L_16, NULL);
				V_5 = ((int32_t)il2cpp_codegen_add(L_14, L_17));
				int32_t L_18 = V_2;
				int32_t L_19 = V_5;
				V_2 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
			}

IL_00a7_1:
			{
				RuntimeObject* L_20 = V_3;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0071_1;
				}
			}
			{
				goto IL_00bc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bc:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		BsonToken_set_CalculatedSize_m08934C5720485BDB0A3FABFE97DA80DDC605DFD7_inline(L_23, L_24, NULL);
		int32_t L_25 = V_2;
		V_6 = L_25;
		goto IL_0285;
	}

IL_00d0:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_26 = ___t0;
		V_7 = ((BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3*)CastclassClass((RuntimeObject*)L_26, BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3_il2cpp_TypeInfo_var));
		V_8 = 4;
		V_9 = ((int64_t)0);
		BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* L_27 = V_7;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = BsonArray_GetEnumerator_m1F55A56BFB40EE3D62AF021034B5508BA5C85085(L_27, NULL);
		V_10 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_29 = V_10;
					if (!L_29)
					{
						goto IL_013a;
					}
				}
				{
					RuntimeObject* L_30 = V_10;
					NullCheck(L_30);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
				}

IL_013a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0123_1;
			}

IL_00ec_1:
			{
				RuntimeObject* L_31 = V_10;
				NullCheck(L_31);
				BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_32;
				L_32 = InterfaceFuncInvoker0< BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Mapbox.Json.Bson.BsonToken>::get_Current() */, IEnumerator_1_tAD1D1831AA56A5A0750828AD1E0E260FFFB925E5_il2cpp_TypeInfo_var, L_31);
				V_11 = L_32;
				int32_t L_33 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_33, 1));
				int32_t L_34 = V_8;
				uint64_t L_35 = V_9;
				int32_t L_36;
				L_36 = MathUtils_IntLength_mF04B5F768FE71C717A843A3CADDDE2316D96D079(L_35, NULL);
				int32_t L_37;
				L_37 = BsonBinaryWriter_CalculateSize_mEFEDDFC7E9165635E236A13CFA2CB69017176673(__this, L_36, NULL);
				V_8 = ((int32_t)il2cpp_codegen_add(L_34, L_37));
				int32_t L_38 = V_8;
				BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_39 = V_11;
				int32_t L_40;
				L_40 = BsonBinaryWriter_CalculateSize_m5850C4F7F232921297849749A5D3B8CBDC7EC830(__this, L_39, NULL);
				V_8 = ((int32_t)il2cpp_codegen_add(L_38, L_40));
				uint64_t L_41 = V_9;
				V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)1)));
			}

IL_0123_1:
			{
				RuntimeObject* L_42 = V_10;
				NullCheck(L_42);
				bool L_43;
				L_43 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_42);
				if (L_43)
				{
					goto IL_00ec_1;
				}
			}
			{
				goto IL_013b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013b:
	{
		int32_t L_44 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* L_45 = V_7;
		int32_t L_46 = V_8;
		NullCheck(L_45);
		BsonToken_set_CalculatedSize_m08934C5720485BDB0A3FABFE97DA80DDC605DFD7_inline(L_45, L_46, NULL);
		BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* L_47 = V_7;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = BsonToken_get_CalculatedSize_m01453B84E1D67C1030D478C7C21D57171B1EB1B3_inline(L_47, NULL);
		V_6 = L_48;
		goto IL_0285;
	}

IL_0159:
	{
		V_6 = 4;
		goto IL_0285;
	}

IL_0161:
	{
		V_6 = 8;
		goto IL_0285;
	}

IL_0169:
	{
		V_6 = 8;
		goto IL_0285;
	}

IL_0171:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_49 = ___t0;
		V_12 = ((BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF*)CastclassClass((RuntimeObject*)L_49, BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var));
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_50 = V_12;
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_50, NULL);
		V_13 = ((String_t*)CastclassSealed((RuntimeObject*)L_51, String_t_il2cpp_TypeInfo_var));
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_52 = V_12;
		String_t* L_53 = V_13;
		G_B24_0 = L_52;
		if (L_53)
		{
			G_B25_0 = L_52;
			goto IL_0191;
		}
	}
	{
		G_B26_0 = 0;
		G_B26_1 = G_B24_0;
		goto IL_019d;
	}

IL_0191:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_54 = ((BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var))->___Encoding_0;
		String_t* L_55 = V_13;
		NullCheck(L_54);
		int32_t L_56;
		L_56 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_54, L_55);
		G_B26_0 = L_56;
		G_B26_1 = G_B25_0;
	}

IL_019d:
	{
		NullCheck(G_B26_1);
		BsonString_set_ByteCount_mE7E976EB6563475F6249A35DF1CF4CE9E5AEF6D4_inline(G_B26_1, G_B26_0, NULL);
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_57 = V_12;
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_58 = V_12;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = BsonString_get_ByteCount_mEF2800D322BC09FAF0919B6558A5CC558612E052_inline(L_58, NULL);
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_60 = V_12;
		NullCheck(L_60);
		bool L_61;
		L_61 = BsonString_get_IncludeLength_m5C733F8EB1568A0E38BA95FF7672F2F78EEE8A32_inline(L_60, NULL);
		int32_t L_62;
		L_62 = BsonBinaryWriter_CalculateSizeWithLength_mA079D616EF3B4D7D62A134E23D1AF7F7239B8706(__this, L_59, L_61, NULL);
		NullCheck(L_57);
		BsonToken_set_CalculatedSize_m08934C5720485BDB0A3FABFE97DA80DDC605DFD7_inline(L_57, L_62, NULL);
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_63 = V_12;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = BsonToken_get_CalculatedSize_m01453B84E1D67C1030D478C7C21D57171B1EB1B3_inline(L_63, NULL);
		V_6 = L_64;
		goto IL_0285;
	}

IL_01cd:
	{
		V_6 = 1;
		goto IL_0285;
	}

IL_01d5:
	{
		V_6 = 0;
		goto IL_0285;
	}

IL_01dd:
	{
		V_6 = 8;
		goto IL_0285;
	}

IL_01e5:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_65 = ___t0;
		V_14 = ((BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743*)CastclassClass((RuntimeObject*)L_65, BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743_il2cpp_TypeInfo_var));
		BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* L_66 = V_14;
		NullCheck(L_66);
		RuntimeObject* L_67;
		L_67 = BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55(L_66, NULL);
		V_15 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_67, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* L_68 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_15;
		NullCheck(L_69);
		NullCheck(L_68);
		BsonToken_set_CalculatedSize_m08934C5720485BDB0A3FABFE97DA80DDC605DFD7_inline(L_68, ((int32_t)il2cpp_codegen_add(5, ((int32_t)(((RuntimeArray*)L_69)->max_length)))), NULL);
		BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* L_70 = V_14;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = BsonToken_get_CalculatedSize_m01453B84E1D67C1030D478C7C21D57171B1EB1B3_inline(L_70, NULL);
		V_6 = L_71;
		goto IL_0285;
	}

IL_0215:
	{
		V_6 = ((int32_t)12);
		goto IL_0285;
	}

IL_021b:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_72 = ___t0;
		V_16 = ((BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32*)CastclassClass((RuntimeObject*)L_72, BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32_il2cpp_TypeInfo_var));
		V_17 = 0;
		int32_t L_73 = V_17;
		BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* L_74 = V_16;
		NullCheck(L_74);
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_75;
		L_75 = BsonRegex_get_Pattern_m36879EB708797B79197B819554E1BD6A991A841E_inline(L_74, NULL);
		int32_t L_76;
		L_76 = BsonBinaryWriter_CalculateSize_m5850C4F7F232921297849749A5D3B8CBDC7EC830(__this, L_75, NULL);
		V_17 = ((int32_t)il2cpp_codegen_add(L_73, L_76));
		int32_t L_77 = V_17;
		BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* L_78 = V_16;
		NullCheck(L_78);
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_79;
		L_79 = BsonRegex_get_Options_m8F99D03B24CD4C983ADFA8B75F0132754FED99FC_inline(L_78, NULL);
		int32_t L_80;
		L_80 = BsonBinaryWriter_CalculateSize_m5850C4F7F232921297849749A5D3B8CBDC7EC830(__this, L_79, NULL);
		V_17 = ((int32_t)il2cpp_codegen_add(L_77, L_80));
		BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* L_81 = V_16;
		int32_t L_82 = V_17;
		NullCheck(L_81);
		BsonToken_set_CalculatedSize_m08934C5720485BDB0A3FABFE97DA80DDC605DFD7_inline(L_81, L_82, NULL);
		BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* L_83 = V_16;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = BsonToken_get_CalculatedSize_m01453B84E1D67C1030D478C7C21D57171B1EB1B3_inline(L_83, NULL);
		V_6 = L_84;
		goto IL_0285;
	}

IL_0260:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_85;
		L_85 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_86 = ___t0;
		NullCheck(L_86);
		int8_t L_87;
		L_87 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonToken::get_Type() */, L_86);
		int8_t L_88 = L_87;
		RuntimeObject* L_89 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_t9F7E06B1805EDD8C0A94188EA357B3D92A3E7A6D_il2cpp_TypeInfo_var)), &L_88);
		String_t* L_90;
		L_90 = StringUtils_FormatWith_mC9CE0D3DDDE9E57C4812561FCA179F29AE68BEA1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E0489F9FAF23DF58DCABE03DAEB479BD06406A5)), L_85, L_89, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_91 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_91);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_91, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2)), L_90, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonBinaryWriter_CalculateSize_m5850C4F7F232921297849749A5D3B8CBDC7EC830_RuntimeMethod_var)));
	}

IL_0285:
	{
		int32_t L_92 = V_6;
		return L_92;
	}
}
// System.Void Mapbox.Json.Bson.BsonBinaryWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinaryWriter__cctor_m9A154B02ABCD918E681D2DBDB7D482264EC8461A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_0 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UTF8Encoding__ctor_mBCC79DB57729512321FA4F0E17342F0D1A43EA34(L_0, (bool)0, NULL);
		((BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var))->___Encoding_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_StaticFields*)il2cpp_codegen_static_fields_for(BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var))->___Encoding_0), (void*)L_0);
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
// System.Boolean Mapbox.Json.Bson.BsonReader::get_JsonNet35BinaryCompatibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_get_JsonNet35BinaryCompatibility_mFBBF490B0E2777B2DD52852C97751151986CCEA5 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->____jsonNet35BinaryCompatibility_28;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::set_JsonNet35BinaryCompatibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_set_JsonNet35BinaryCompatibility_mC880A46789FDC2D922B0189A096E3311FA79A3EC (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____jsonNet35BinaryCompatibility_28 = L_0;
		return;
	}
}
// System.Boolean Mapbox.Json.Bson.BsonReader::get_ReadRootValueAsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_get_ReadRootValueAsArray_mA2F309BFA3E0B937896B989284875FDCC1A41B05 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->____readRootValueAsArray_27;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::set_ReadRootValueAsArray(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_set_ReadRootValueAsArray_m8708477856B284E597CAC95BB55737AC4ACDE7A9 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____readRootValueAsArray_27 = L_0;
		return;
	}
}
// System.DateTimeKind Mapbox.Json.Bson.BsonReader::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_get_DateTimeKindHandling_mF9DC49C4358FF1485FDABD37FAF93BE67894EA40 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____dateTimeKindHandling_29;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_set_DateTimeKindHandling_m1EE20C73A8AE56293162914E6638CC288B970FC2 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____dateTimeKindHandling_29 = L_0;
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_m4B3AF2B405AD9AAE226377C54D76A6D41914185D (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		BsonReader__ctor_mF3F4E3AD44A9E579AF2AC2F8BC481705346807B3(__this, L_0, (bool)0, 2, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::.ctor(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_m0275A988080FCEEA635762E6D4D78E79323E27D0 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, const RuntimeMethod* method) 
{
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___reader0;
		BsonReader__ctor_mE15805E0F3C2CB416039A3B15A7BFC35A45C3B68(__this, L_0, (bool)0, 2, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::.ctor(System.IO.Stream,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_mF3F4E3AD44A9E579AF2AC2F8BC481705346807B3 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___readRootValueAsArray1, int32_t ___dateTimeKindHandling2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBF2CD42F88092F5551C872CD1BA10F737A06B7B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonReader__ctor_m48E8B7AF87AC569C8DCBB32B06D3A6671417623F(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		ValidationUtils_ArgumentNotNull_m99B404ADE499F4D8BCC9A8637E084100E511C974(L_0, _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_2, L_1, NULL);
		__this->____reader_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_20), (void*)L_2);
		List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* L_3 = (List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4*)il2cpp_codegen_object_new(List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mBF2CD42F88092F5551C872CD1BA10F737A06B7B2(L_3, List_1__ctor_mBF2CD42F88092F5551C872CD1BA10F737A06B7B2_RuntimeMethod_var);
		__this->____stack_21 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack_21), (void*)L_3);
		bool L_4 = ___readRootValueAsArray1;
		__this->____readRootValueAsArray_27 = L_4;
		int32_t L_5 = ___dateTimeKindHandling2;
		__this->____dateTimeKindHandling_29 = L_5;
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::.ctor(System.IO.BinaryReader,System.Boolean,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__ctor_mE15805E0F3C2CB416039A3B15A7BFC35A45C3B68 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, bool ___readRootValueAsArray1, int32_t ___dateTimeKindHandling2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBF2CD42F88092F5551C872CD1BA10F737A06B7B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonReader__ctor_m48E8B7AF87AC569C8DCBB32B06D3A6671417623F(__this, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___reader0;
		ValidationUtils_ArgumentNotNull_m99B404ADE499F4D8BCC9A8637E084100E511C974(L_0, _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___reader0;
		__this->____reader_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_20), (void*)L_1);
		List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* L_2 = (List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4*)il2cpp_codegen_object_new(List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mBF2CD42F88092F5551C872CD1BA10F737A06B7B2(L_2, List_1__ctor_mBF2CD42F88092F5551C872CD1BA10F737A06B7B2_RuntimeMethod_var);
		__this->____stack_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stack_21), (void*)L_2);
		bool L_3 = ___readRootValueAsArray1;
		__this->____readRootValueAsArray_27 = L_3;
		int32_t L_4 = ___dateTimeKindHandling2;
		__this->____dateTimeKindHandling_29 = L_4;
		return;
	}
}
// System.String Mapbox.Json.Bson.BsonReader::ReadElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadElement_m5025348152E531BB91E24EFB32E95EE76489A67F (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int8_t L_0;
		L_0 = BsonReader_ReadType_m52779020C8A03268A8140FB74EB1598DB461C2EF(__this, NULL);
		__this->____currentElementType_24 = L_0;
		String_t* L_1;
		L_1 = BsonReader_ReadString_mA54F602BAA2FDB0AD41FF7072574828861EAC7F9(__this, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		V_1 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.Boolean Mapbox.Json.Bson.BsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_Read_m4D4DF46F066226EEC658E0AB0F6F9D32DB6E7B89 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->____bsonReaderState_25;
			V_1 = L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0035_1;
				}
				case 1:
				{
					goto IL_003e_1;
				}
				case 2:
				{
					goto IL_003e_1;
				}
				case 3:
				{
					goto IL_003e_1;
				}
				case 4:
				{
					goto IL_0047_1;
				}
				case 5:
				{
					goto IL_0047_1;
				}
				case 6:
				{
					goto IL_0047_1;
				}
				case 7:
				{
					goto IL_0047_1;
				}
				case 8:
				{
					goto IL_0047_1;
				}
			}
		}
		{
			goto IL_0050_1;
		}

IL_0035_1:
		{
			bool L_2;
			L_2 = BsonReader_ReadNormal_m9147175D636209D3CACA0BEAE5213F079BB7AD2A(__this, NULL);
			V_0 = L_2;
			goto IL_0071_1;
		}

IL_003e_1:
		{
			bool L_3;
			L_3 = BsonReader_ReadReference_mCBDCEEEFF1D0F7F9D87CBFCB706FAF7C815F6ED5(__this, NULL);
			V_0 = L_3;
			goto IL_0071_1;
		}

IL_0047_1:
		{
			bool L_4;
			L_4 = BsonReader_ReadCodeWScope_m6EBE1D0B7690046ACBE5FD7F52D514703DB35550(__this, NULL);
			V_0 = L_4;
			goto IL_0071_1;
		}

IL_0050_1:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
			L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			int32_t L_6 = __this->____bsonReaderState_25;
			int32_t L_7 = L_6;
			RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tCD746077F8C296A3334662E080F355D17C8E3A1E_il2cpp_TypeInfo_var)), &L_7);
			String_t* L_9;
			L_9 = StringUtils_FormatWith_mC9CE0D3DDDE9E57C4812561FCA179F29AE68BEA1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBAD954A5D5DC7494CB8B4AE55EDFCFE125A1338)), L_5, L_8, NULL);
			JsonReaderException_tED5A0E30E25D1EFE42680402CE8351A159BAC007* L_10;
			L_10 = JsonReaderException_Create_m8BC295B22A2C261A42958B82B77645CAF5E388F3(__this, L_9, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_Read_m4D4DF46F066226EEC658E0AB0F6F9D32DB6E7B89_RuntimeMethod_var)));
		}

IL_0071_1:
		{
			bool L_11 = V_0;
			V_2 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
			bool L_12 = V_2;
			if (!L_12)
			{
				goto IL_0086_1;
			}
		}
		{
			JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB(__this, 0, NULL);
			V_3 = (bool)0;
			goto IL_0098;
		}

IL_0086_1:
		{
			V_3 = (bool)1;
			goto IL_0098;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008a;
		}
		throw e;
	}

CATCH_008a:
	{// begin catch(System.IO.EndOfStreamException)
		JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB(__this, 0, NULL);
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0098;
	}// end catch (depth: 1)

IL_0098:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_Close_m8FF556F70173BB2BBA6709D74096A941669655F0 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* G_B3_0 = NULL;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* G_B2_0 = NULL;
	{
		JsonReader_Close_m32ECC89F2AB9357A99ACD71636F91C61A9FBBACE(__this, NULL);
		bool L_0;
		L_0 = JsonReader_get_CloseInput_m51AE195DBA1B5EFF8B9DC87B3D0FF9571BEEC51F_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = __this->____reader_20;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001f;
		}
	}
	{
		goto IL_0025;
	}

IL_001f:
	{
		NullCheck(G_B3_0);
		VirtualActionInvoker0::Invoke(6 /* System.Void System.IO.BinaryReader::Close() */, G_B3_0);
	}

IL_0025:
	{
	}

IL_0026:
	{
		return;
	}
}
// System.Boolean Mapbox.Json.Bson.BsonReader::ReadCodeWScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadCodeWScope_m6EBE1D0B7690046ACBE5FD7F52D514703DB35550 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* V_4 = NULL;
	bool V_5 = false;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = __this->____bsonReaderState_25;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 4)))
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_0068;
			}
			case 3:
			{
				goto IL_00b9;
			}
			case 4:
			{
				goto IL_00e3;
			}
		}
	}
	{
		goto IL_00f7;
	}

IL_0029:
	{
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, 4, _stringLiteralD63216A99D4FD683AD72F25F707C7D4A188E2029, NULL);
		__this->____bsonReaderState_25 = 5;
		V_2 = (bool)1;
		goto IL_00fd;
	}

IL_0044:
	{
		int32_t L_2;
		L_2 = BsonReader_ReadInt32_m0808A5601A0BBDF2DE2C8D2B58E0A03925D21AB3(__this, NULL);
		String_t* L_3;
		L_3 = BsonReader_ReadLengthString_mE6DB085B50A41C1F69D3A1B420472B056B8D2646(__this, NULL);
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, ((int32_t)9), L_3, NULL);
		__this->____bsonReaderState_25 = 6;
		V_2 = (bool)1;
		goto IL_00fd;
	}

IL_0068:
	{
		int32_t L_4;
		L_4 = JsonReader_get_CurrentState_m99749CB261A0F139D62A50FC2BDA54C6D3CA5B64(__this, NULL);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)8))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0087;
		}
	}
	{
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, 4, _stringLiteral15F434DE6EB05B31D391B12B5A8516BD141B7A93, NULL);
		V_2 = (bool)1;
		goto IL_00fd;
	}

IL_0087:
	{
		JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB(__this, 1, NULL);
		__this->____bsonReaderState_25 = 7;
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_6 = (ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB*)il2cpp_codegen_object_new(ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ContainerContext__ctor_mE3E21549280E431F9B1AB5CBE78910577C646870(L_6, 3, NULL);
		V_4 = L_6;
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_7 = V_4;
		BsonReader_PushContext_m861B9ED1F9808B3AAEB9943A8B4EB9B59E7DA9B0(__this, L_7, NULL);
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_8 = V_4;
		int32_t L_9;
		L_9 = BsonReader_ReadInt32_m0808A5601A0BBDF2DE2C8D2B58E0A03925D21AB3(__this, NULL);
		NullCheck(L_8);
		L_8->___Length_1 = L_9;
		V_2 = (bool)1;
		goto IL_00fd;
	}

IL_00b9:
	{
		bool L_10;
		L_10 = BsonReader_ReadNormal_m9147175D636209D3CACA0BEAE5213F079BB7AD2A(__this, NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Mapbox.Json.JsonToken Mapbox.Json.JsonReader::get_TokenType() */, __this);
		G_B10_0 = ((((int32_t)L_12) == ((int32_t)((int32_t)13)))? 1 : 0);
		goto IL_00d0;
	}

IL_00cf:
	{
		G_B10_0 = 0;
	}

IL_00d0:
	{
		V_5 = (bool)G_B10_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_00df;
		}
	}
	{
		__this->____bsonReaderState_25 = 8;
	}

IL_00df:
	{
		bool L_14 = V_1;
		V_2 = L_14;
		goto IL_00fd;
	}

IL_00e3:
	{
		JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB(__this, ((int32_t)13), NULL);
		__this->____bsonReaderState_25 = 0;
		V_2 = (bool)1;
		goto IL_00fd;
	}

IL_00f7:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadCodeWScope_m6EBE1D0B7690046ACBE5FD7F52D514703DB35550_RuntimeMethod_var)));
	}

IL_00fd:
	{
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Boolean Mapbox.Json.Bson.BsonReader::ReadReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadReference_mCBDCEEEFF1D0F7F9D87CBFCB706FAF7C815F6ED5 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t L_0;
		L_0 = JsonReader_get_CurrentState_m99749CB261A0F139D62A50FC2BDA54C6D3CA5B64(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_00a4;
		}
	}
	{
		goto IL_010e;
	}

IL_0020:
	{
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, 4, _stringLiteralF96282F5D84FC9B754994ADCFE65DAE2088A7382, NULL);
		__this->____bsonReaderState_25 = 2;
		V_1 = (bool)1;
		goto IL_012a;
	}

IL_003c:
	{
		int32_t L_4 = __this->____bsonReaderState_25;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_6;
		L_6 = BsonReader_ReadLengthString_mE6DB085B50A41C1F69D3A1B420472B056B8D2646(__this, NULL);
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, ((int32_t)9), L_6, NULL);
		V_1 = (bool)1;
		goto IL_012a;
	}

IL_0061:
	{
		int32_t L_7 = __this->____bsonReaderState_25;
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)3))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0087;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BsonReader_ReadBytes_m9CEECA06D68C8DC08E4B3B2CC5FFDFC16D679B91(__this, ((int32_t)12), NULL);
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, ((int32_t)17), (RuntimeObject*)L_9, NULL);
		V_1 = (bool)1;
		goto IL_012a;
	}

IL_0087:
	{
		int32_t L_10 = __this->____bsonReaderState_25;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tCD746077F8C296A3334662E080F355D17C8E3A1E_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_12, NULL);
		JsonReaderException_tED5A0E30E25D1EFE42680402CE8351A159BAC007* L_14;
		L_14 = JsonReaderException_Create_m8BC295B22A2C261A42958B82B77645CAF5E388F3(__this, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mCBDCEEEFF1D0F7F9D87CBFCB706FAF7C815F6ED5_RuntimeMethod_var)));
	}

IL_00a4:
	{
		int32_t L_15 = __this->____bsonReaderState_25;
		V_4 = (bool)((((int32_t)L_15) == ((int32_t)2))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_00cd;
		}
	}
	{
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, 4, _stringLiteralEA05B74022DC98A669248CD353ADDBD7AADAD4AA, NULL);
		__this->____bsonReaderState_25 = 3;
		V_1 = (bool)1;
		goto IL_012a;
	}

IL_00cd:
	{
		int32_t L_17 = __this->____bsonReaderState_25;
		V_5 = (bool)((((int32_t)L_17) == ((int32_t)3))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00f1;
		}
	}
	{
		JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB(__this, ((int32_t)13), NULL);
		__this->____bsonReaderState_25 = 0;
		V_1 = (bool)1;
		goto IL_012a;
	}

IL_00f1:
	{
		int32_t L_19 = __this->____bsonReaderState_25;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReaderState_tCD746077F8C296A3334662E080F355D17C8E3A1E_il2cpp_TypeInfo_var)), &L_20);
		String_t* L_22;
		L_22 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_21, NULL);
		JsonReaderException_tED5A0E30E25D1EFE42680402CE8351A159BAC007* L_23;
		L_23 = JsonReaderException_Create_m8BC295B22A2C261A42958B82B77645CAF5E388F3(__this, L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mCBDCEEEFF1D0F7F9D87CBFCB706FAF7C815F6ED5_RuntimeMethod_var)));
	}

IL_010e:
	{
		int32_t L_24;
		L_24 = JsonReader_get_CurrentState_m99749CB261A0F139D62A50FC2BDA54C6D3CA5B64(__this, NULL);
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&State_t2DDFB02C988ADAB392C238D29859D9F8518340CD_il2cpp_TypeInfo_var)), &L_25);
		String_t* L_27;
		L_27 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66598110B46A51C4B35EB3014DABBD9FFC1FA160)), L_26, NULL);
		JsonReaderException_tED5A0E30E25D1EFE42680402CE8351A159BAC007* L_28;
		L_28 = JsonReaderException_Create_m8BC295B22A2C261A42958B82B77645CAF5E388F3(__this, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadReference_mCBDCEEEFF1D0F7F9D87CBFCB706FAF7C815F6ED5_RuntimeMethod_var)));
	}

IL_012a:
	{
		bool L_29 = V_1;
		return L_29;
	}
}
// System.Boolean Mapbox.Json.Bson.BsonReader::ReadNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonReader_ReadNormal_m9147175D636209D3CACA0BEAE5213F079BB7AD2A (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int8_t V_4 = 0;
	ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B25_0 = 0;
	{
		int32_t L_0;
		L_0 = JsonReader_get_CurrentState_m99749CB261A0F139D62A50FC2BDA54C6D3CA5B64(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0092;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00b0;
			}
			case 4:
			{
				goto IL_01ab;
			}
			case 5:
			{
				goto IL_00b0;
			}
			case 6:
			{
				goto IL_01ab;
			}
			case 7:
			{
				goto IL_0092;
			}
			case 8:
			{
				goto IL_00b0;
			}
			case 9:
			{
				goto IL_01a3;
			}
			case 10:
			{
				goto IL_01a5;
			}
			case 11:
			{
				goto IL_01a7;
			}
			case 12:
			{
				goto IL_01a9;
			}
		}
	}
	{
		goto IL_01ab;
	}

IL_0047:
	{
		bool L_2 = __this->____readRootValueAsArray_27;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = 1;
	}

IL_0054:
	{
		V_3 = G_B5_0;
		bool L_3 = __this->____readRootValueAsArray_27;
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		G_B8_0 = 4;
		goto IL_0061;
	}

IL_0060:
	{
		G_B8_0 = 3;
	}

IL_0061:
	{
		V_4 = G_B8_0;
		int32_t L_4 = V_3;
		JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB(__this, L_4, NULL);
		int8_t L_5 = V_4;
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_6 = (ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB*)il2cpp_codegen_object_new(ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ContainerContext__ctor_mE3E21549280E431F9B1AB5CBE78910577C646870(L_6, L_5, NULL);
		V_5 = L_6;
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_7 = V_5;
		BsonReader_PushContext_m861B9ED1F9808B3AAEB9943A8B4EB9B59E7DA9B0(__this, L_7, NULL);
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_8 = V_5;
		int32_t L_9;
		L_9 = BsonReader_ReadInt32_m0808A5601A0BBDF2DE2C8D2B58E0A03925D21AB3(__this, NULL);
		NullCheck(L_8);
		L_8->___Length_1 = L_9;
		V_6 = (bool)1;
		goto IL_01b6;
	}

IL_0092:
	{
		V_6 = (bool)0;
		goto IL_01b6;
	}

IL_009a:
	{
		int8_t L_10 = __this->____currentElementType_24;
		BsonReader_ReadType_m1B70D60EF5CAAF908B75DE000E91F598DEDD91FA(__this, L_10, NULL);
		V_6 = (bool)1;
		goto IL_01b6;
	}

IL_00b0:
	{
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_11 = __this->____currentContext_26;
		V_1 = L_11;
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_12 = V_1;
		V_7 = (bool)((((RuntimeObject*)(ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_00ca;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_01b6;
	}

IL_00ca:
	{
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___Length_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = L_16->___Position_2;
		int32_t L_18 = V_2;
		V_8 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_0126;
		}
	}
	{
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_20 = V_1;
		NullCheck(L_20);
		int8_t L_21 = L_20->___Type_0;
		V_9 = (bool)((((int32_t)L_21) == ((int32_t)4))? 1 : 0);
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_010f;
		}
	}
	{
		String_t* L_23;
		L_23 = BsonReader_ReadElement_m5025348152E531BB91E24EFB32E95EE76489A67F(__this, NULL);
		int8_t L_24 = __this->____currentElementType_24;
		BsonReader_ReadType_m1B70D60EF5CAAF908B75DE000E91F598DEDD91FA(__this, L_24, NULL);
		V_6 = (bool)1;
		goto IL_01b6;
	}

IL_010f:
	{
		String_t* L_25;
		L_25 = BsonReader_ReadElement_m5025348152E531BB91E24EFB32E95EE76489A67F(__this, NULL);
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, 4, L_25, NULL);
		V_6 = (bool)1;
		goto IL_01b6;
	}

IL_0126:
	{
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = L_26->___Position_2;
		int32_t L_28 = V_2;
		V_10 = (bool)((((int32_t)L_27) == ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_0196;
		}
	}
	{
		uint8_t L_30;
		L_30 = BsonReader_ReadByte_mF0D4E581C3BAF383E21AA7C4E027B23008593EE3(__this, NULL);
		V_12 = (bool)((!(((uint32_t)L_30) <= ((uint32_t)0)))? 1 : 0);
		bool L_31 = V_12;
		if (!L_31)
		{
			goto IL_0152;
		}
	}
	{
		JsonReaderException_tED5A0E30E25D1EFE42680402CE8351A159BAC007* L_32;
		L_32 = JsonReaderException_Create_m8BC295B22A2C261A42958B82B77645CAF5E388F3(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDB5269102EEAA6174B84EBA318CAFFA90AE3217B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m9147175D636209D3CACA0BEAE5213F079BB7AD2A_RuntimeMethod_var)));
	}

IL_0152:
	{
		BsonReader_PopContext_mED4D9455A92EC49156FC3156EF7E8F8294FF4571(__this, NULL);
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_33 = __this->____currentContext_26;
		V_13 = (bool)((!(((RuntimeObject*)(ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB*)L_33) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_34 = V_13;
		if (!L_34)
		{
			goto IL_0177;
		}
	}
	{
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = L_35->___Length_1;
		BsonReader_MovePosition_m14DB571E20E36B0BCE0485A52B6FCD8343605A5F(__this, L_36, NULL);
	}

IL_0177:
	{
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_37 = V_1;
		NullCheck(L_37);
		int8_t L_38 = L_37->___Type_0;
		if ((((int32_t)L_38) == ((int32_t)3)))
		{
			goto IL_0184;
		}
	}
	{
		G_B25_0 = ((int32_t)14);
		goto IL_0186;
	}

IL_0184:
	{
		G_B25_0 = ((int32_t)13);
	}

IL_0186:
	{
		V_11 = G_B25_0;
		int32_t L_39 = V_11;
		JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB(__this, L_39, NULL);
		V_6 = (bool)1;
		goto IL_01b6;
	}

IL_0196:
	{
		JsonReaderException_tED5A0E30E25D1EFE42680402CE8351A159BAC007* L_40;
		L_40 = JsonReaderException_Create_m8BC295B22A2C261A42958B82B77645CAF5E388F3(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEE8864CE32A6E593EF9DA8C7FCDB920CEE839A0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m9147175D636209D3CACA0BEAE5213F079BB7AD2A_RuntimeMethod_var)));
	}

IL_01a3:
	{
		goto IL_01b1;
	}

IL_01a5:
	{
		goto IL_01b1;
	}

IL_01a7:
	{
		goto IL_01b1;
	}

IL_01a9:
	{
		goto IL_01b1;
	}

IL_01ab:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_41 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_41);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_41, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadNormal_m9147175D636209D3CACA0BEAE5213F079BB7AD2A_RuntimeMethod_var)));
	}

IL_01b1:
	{
		V_6 = (bool)0;
		goto IL_01b6;
	}

IL_01b6:
	{
		bool L_42 = V_6;
		return L_42;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::PopContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PopContext_mED4D9455A92EC49156FC3156EF7E8F8294FF4571 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mD6DADF9AA2F49BAACCDA3AA814DB55A684955CD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2D70C9CFD69E7CAEE0090C6334556DAC28CFD77E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m203422A8DB100660FCB294F26F074EEF2F9E2E0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* L_0 = __this->____stack_21;
		List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* L_1 = __this->____stack_21;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m2D70C9CFD69E7CAEE0090C6334556DAC28CFD77E_inline(L_1, List_1_get_Count_m2D70C9CFD69E7CAEE0090C6334556DAC28CFD77E_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_RemoveAt_mD6DADF9AA2F49BAACCDA3AA814DB55A684955CD5(L_0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), List_1_RemoveAt_mD6DADF9AA2F49BAACCDA3AA814DB55A684955CD5_RuntimeMethod_var);
		List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* L_3 = __this->____stack_21;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m2D70C9CFD69E7CAEE0090C6334556DAC28CFD77E_inline(L_3, List_1_get_Count_m2D70C9CFD69E7CAEE0090C6334556DAC28CFD77E_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		__this->____currentContext_26 = (ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_26), (void*)(ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB*)NULL);
		goto IL_0057;
	}

IL_0037:
	{
		List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* L_6 = __this->____stack_21;
		List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* L_7 = __this->____stack_21;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m2D70C9CFD69E7CAEE0090C6334556DAC28CFD77E_inline(L_7, List_1_get_Count_m2D70C9CFD69E7CAEE0090C6334556DAC28CFD77E_RuntimeMethod_var);
		NullCheck(L_6);
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_9;
		L_9 = List_1_get_Item_m203422A8DB100660FCB294F26F074EEF2F9E2E0D(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), List_1_get_Item_m203422A8DB100660FCB294F26F074EEF2F9E2E0D_RuntimeMethod_var);
		__this->____currentContext_26 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_26), (void*)L_9);
	}

IL_0057:
	{
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::PushContext(Mapbox.Json.Bson.BsonReader/ContainerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_PushContext_m861B9ED1F9808B3AAEB9943A8B4EB9B59E7DA9B0 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* ___newContext0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3D41BD78797E29AAF6FDE9479F91472F7B516A38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tB7C89FEC4678ECD219AC0C031A5654257E1297B4* L_0 = __this->____stack_21;
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_1 = ___newContext0;
		NullCheck(L_0);
		List_1_Add_m3D41BD78797E29AAF6FDE9479F91472F7B516A38_inline(L_0, L_1, List_1_Add_m3D41BD78797E29AAF6FDE9479F91472F7B516A38_RuntimeMethod_var);
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_2 = ___newContext0;
		__this->____currentContext_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentContext_26), (void*)L_2);
		return;
	}
}
// System.Byte Mapbox.Json.Bson.BsonReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonReader_ReadByte_mF0D4E581C3BAF383E21AA7C4E027B23008593EE3 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		BsonReader_MovePosition_m14DB571E20E36B0BCE0485A52B6FCD8343605A5F(__this, 1, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		V_0 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::ReadType(Mapbox.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_ReadType_m1B70D60EF5CAAF908B75DE000E91F598DEDD91FA (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, int8_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t8E988632A08EDACE43652EADEF6F28FE355DC0AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0;
	double V_1 = 0.0;
	uint8_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	bool V_6 = false;
	int64_t V_7 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_8;
	memset((&V_8), 0, sizeof(V_8));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_9;
	memset((&V_9), 0, sizeof(V_9));
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	bool V_13 = false;
	ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* V_14 = NULL;
	ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* V_15 = NULL;
	int32_t V_16 = 0;
	RuntimeObject* G_B12_0 = NULL;
	{
		int8_t L_0 = ___type0;
		V_0 = L_0;
		int8_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_00a4;
			}
			case 2:
			{
				goto IL_00b8;
			}
			case 3:
			{
				goto IL_00e4;
			}
			case 4:
			{
				goto IL_0110;
			}
			case 5:
			{
				goto IL_013d;
			}
			case 6:
			{
				goto IL_014b;
			}
			case 7:
			{
				goto IL_0165;
			}
			case 8:
			{
				goto IL_0187;
			}
			case 9:
			{
				goto IL_01df;
			}
			case 10:
			{
				goto IL_01ed;
			}
			case 11:
			{
				goto IL_021f;
			}
			case 12:
			{
				goto IL_0230;
			}
			case 13:
			{
				goto IL_00a4;
			}
			case 14:
			{
				goto IL_0241;
			}
			case 15:
			{
				goto IL_0252;
			}
			case 16:
			{
				goto IL_0268;
			}
			case 17:
			{
				goto IL_0268;
			}
		}
	}
	{
		goto IL_027d;
	}

IL_0058:
	{
		double L_2;
		L_2 = BsonReader_ReadDouble_m468806A237F1F78466D91B23F14B3C4F958CA106(__this, NULL);
		V_1 = L_2;
		int32_t L_3 = ((JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416*)__this)->____floatParseHandling_10;
		V_13 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_13;
		if (!L_4)
		{
			goto IL_008f;
		}
	}
	{
		double L_5 = V_1;
		double L_6 = L_5;
		RuntimeObject* L_7 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_6);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9;
		L_9 = Convert_ToDecimal_m2A6822B7BCB33F60B9425C58248111D316C3FE4C(L_7, L_8, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_10 = L_9;
		RuntimeObject* L_11 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_10);
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, 8, L_11, NULL);
		goto IL_009f;
	}

IL_008f:
	{
		double L_12 = V_1;
		double L_13 = L_12;
		RuntimeObject* L_14 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_13);
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, 8, L_14, NULL);
	}

IL_009f:
	{
		goto IL_0298;
	}

IL_00a4:
	{
		String_t* L_15;
		L_15 = BsonReader_ReadLengthString_mE6DB085B50A41C1F69D3A1B420472B056B8D2646(__this, NULL);
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, ((int32_t)9), L_15, NULL);
		goto IL_0298;
	}

IL_00b8:
	{
		JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB(__this, 1, NULL);
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_16 = (ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB*)il2cpp_codegen_object_new(ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ContainerContext__ctor_mE3E21549280E431F9B1AB5CBE78910577C646870(L_16, 3, NULL);
		V_14 = L_16;
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_17 = V_14;
		BsonReader_PushContext_m861B9ED1F9808B3AAEB9943A8B4EB9B59E7DA9B0(__this, L_17, NULL);
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_18 = V_14;
		int32_t L_19;
		L_19 = BsonReader_ReadInt32_m0808A5601A0BBDF2DE2C8D2B58E0A03925D21AB3(__this, NULL);
		NullCheck(L_18);
		L_18->___Length_1 = L_19;
		goto IL_0298;
	}

IL_00e4:
	{
		JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB(__this, 2, NULL);
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_20 = (ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB*)il2cpp_codegen_object_new(ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		ContainerContext__ctor_mE3E21549280E431F9B1AB5CBE78910577C646870(L_20, 4, NULL);
		V_15 = L_20;
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_21 = V_15;
		BsonReader_PushContext_m861B9ED1F9808B3AAEB9943A8B4EB9B59E7DA9B0(__this, L_21, NULL);
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_22 = V_15;
		int32_t L_23;
		L_23 = BsonReader_ReadInt32_m0808A5601A0BBDF2DE2C8D2B58E0A03925D21AB3(__this, NULL);
		NullCheck(L_22);
		L_22->___Length_1 = L_23;
		goto IL_0298;
	}

IL_0110:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = BsonReader_ReadBinary_mAE7FCA9E107889C9890FED43D84426E3D7295066(__this, (&V_2), NULL);
		V_3 = L_24;
		uint8_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)4))))
		{
			goto IL_012a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_3;
		Guid_t L_27;
		memset((&L_27), 0, sizeof(L_27));
		Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C((&L_27), L_26, /*hidden argument*/NULL);
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Guid_t_il2cpp_TypeInfo_var, &L_28);
		G_B12_0 = L_29;
		goto IL_012b;
	}

IL_012a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_3;
		G_B12_0 = ((RuntimeObject*)(L_30));
	}

IL_012b:
	{
		V_4 = G_B12_0;
		RuntimeObject* L_31 = V_4;
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, ((int32_t)17), L_31, NULL);
		goto IL_0298;
	}

IL_013d:
	{
		JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB(__this, ((int32_t)12), NULL);
		goto IL_0298;
	}

IL_014b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = BsonReader_ReadBytes_m9CEECA06D68C8DC08E4B3B2CC5FFDFC16D679B91(__this, ((int32_t)12), NULL);
		V_5 = L_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_5;
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, ((int32_t)17), (RuntimeObject*)L_33, NULL);
		goto IL_0298;
	}

IL_0165:
	{
		uint8_t L_34;
		L_34 = BsonReader_ReadByte_mF0D4E581C3BAF383E21AA7C4E027B23008593EE3(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Convert_ToBoolean_m6148BAC617B69CACDF14A8C74836767DFF0CB6A9(L_34, NULL);
		V_6 = L_35;
		bool L_36 = V_6;
		bool L_37 = L_36;
		RuntimeObject* L_38 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_37);
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, ((int32_t)10), L_38, NULL);
		goto IL_0298;
	}

IL_0187:
	{
		int64_t L_39;
		L_39 = BsonReader_ReadInt64_mDFBE1E9B059A76464EFCA61D746CDD830F802DA6(__this, NULL);
		V_7 = L_39;
		int64_t L_40 = V_7;
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t8E988632A08EDACE43652EADEF6F28FE355DC0AC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_41;
		L_41 = DateTimeUtils_ConvertJavaScriptTicksToDateTime_m8B22AC356D0C625FE6CBE1F7B3E4897929A7AE25(L_40, NULL);
		V_8 = L_41;
		int32_t L_42;
		L_42 = BsonReader_get_DateTimeKindHandling_mF9DC49C4358FF1485FDABD37FAF93BE67894EA40(__this, NULL);
		V_16 = L_42;
		int32_t L_43 = V_16;
		if (!L_43)
		{
			goto IL_01ad;
		}
	}
	{
		goto IL_01a6;
	}

IL_01a6:
	{
		int32_t L_44 = V_16;
		if ((((int32_t)L_44) == ((int32_t)2)))
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_01c4;
	}

IL_01ad:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_45 = V_8;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_46;
		L_46 = DateTime_SpecifyKind_mFC3F6DD6AD017F62A8AF81DAD5620AEC474871D0(L_45, 0, NULL);
		V_9 = L_46;
		goto IL_01ca;
	}

IL_01b9:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_47;
		L_47 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_8), NULL);
		V_9 = L_47;
		goto IL_01ca;
	}

IL_01c4:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_48 = V_8;
		V_9 = L_48;
		goto IL_01ca;
	}

IL_01ca:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_49 = V_9;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_50 = L_49;
		RuntimeObject* L_51 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_50);
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, ((int32_t)16), L_51, NULL);
		goto IL_0298;
	}

IL_01df:
	{
		JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB(__this, ((int32_t)11), NULL);
		goto IL_0298;
	}

IL_01ed:
	{
		String_t* L_52;
		L_52 = BsonReader_ReadString_mA54F602BAA2FDB0AD41FF7072574828861EAC7F9(__this, NULL);
		V_10 = L_52;
		String_t* L_53;
		L_53 = BsonReader_ReadString_mA54F602BAA2FDB0AD41FF7072574828861EAC7F9(__this, NULL);
		V_11 = L_53;
		String_t* L_54 = V_10;
		String_t* L_55 = V_11;
		String_t* L_56;
		L_56 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_54, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_55, NULL);
		V_12 = L_56;
		String_t* L_57 = V_12;
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, ((int32_t)9), L_57, NULL);
		goto IL_0298;
	}

IL_021f:
	{
		JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB(__this, 1, NULL);
		__this->____bsonReaderState_25 = 1;
		goto IL_0298;
	}

IL_0230:
	{
		String_t* L_58;
		L_58 = BsonReader_ReadLengthString_mE6DB085B50A41C1F69D3A1B420472B056B8D2646(__this, NULL);
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, ((int32_t)9), L_58, NULL);
		goto IL_0298;
	}

IL_0241:
	{
		JsonReader_SetToken_mDE0FF1A9194E08B14DB8B1B670CED118DBB17BCB(__this, 1, NULL);
		__this->____bsonReaderState_25 = 4;
		goto IL_0298;
	}

IL_0252:
	{
		int32_t L_59;
		L_59 = BsonReader_ReadInt32_m0808A5601A0BBDF2DE2C8D2B58E0A03925D21AB3(__this, NULL);
		int64_t L_60 = ((int64_t)L_59);
		RuntimeObject* L_61 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_60);
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, 7, L_61, NULL);
		goto IL_0298;
	}

IL_0268:
	{
		int64_t L_62;
		L_62 = BsonReader_ReadInt64_mDFBE1E9B059A76464EFCA61D746CDD830F802DA6(__this, NULL);
		int64_t L_63 = L_62;
		RuntimeObject* L_64 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_63);
		JsonReader_SetToken_mEFF5A226686B5FAC27BE67828DCF6080E02002DD(__this, 7, L_64, NULL);
		goto IL_0298;
	}

IL_027d:
	{
		int8_t L_65 = ___type0;
		int8_t L_66 = L_65;
		RuntimeObject* L_67 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_t9F7E06B1805EDD8C0A94188EA357B3D92A3E7A6D_il2cpp_TypeInfo_var)), &L_66);
		String_t* L_68;
		L_68 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral06A61D64D27460EF04BE4DCF66F6E64E285C68A4)), L_67, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_69 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_69);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_69, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), L_68, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_ReadType_m1B70D60EF5CAAF908B75DE000E91F598DEDD91FA_RuntimeMethod_var)));
	}

IL_0298:
	{
		return;
	}
}
// System.Byte[] Mapbox.Json.Bson.BsonReader::ReadBinary(Mapbox.Json.Bson.BsonBinaryType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBinary_mAE7FCA9E107889C9890FED43D84426E3D7295066 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, uint8_t* ___binaryType0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = BsonReader_ReadInt32_m0808A5601A0BBDF2DE2C8D2B58E0A03925D21AB3(__this, NULL);
		V_0 = L_0;
		uint8_t* L_1 = ___binaryType0;
		uint8_t L_2;
		L_2 = BsonReader_ReadByte_mF0D4E581C3BAF383E21AA7C4E027B23008593EE3(__this, NULL);
		*((int8_t*)L_1) = (int8_t)L_2;
		uint8_t* L_3 = ___binaryType0;
		int32_t L_4 = *((uint8_t*)L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0020;
		}
	}
	{
		bool L_5 = __this->____jsonNet35BinaryCompatibility_28;
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7;
		L_7 = BsonReader_ReadInt32_m0808A5601A0BBDF2DE2C8D2B58E0A03925D21AB3(__this, NULL);
		V_0 = L_7;
	}

IL_002e:
	{
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BsonReader_ReadBytes_m9CEECA06D68C8DC08E4B3B2CC5FFDFC16D679B91(__this, L_8, NULL);
		V_2 = L_9;
		goto IL_0038;
	}

IL_0038:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		return L_10;
	}
}
// System.String Mapbox.Json.Bson.BsonReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadString_mA54F602BAA2FDB0AD41FF7072574828861EAC7F9 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		BsonReader_EnsureBuffers_m572A8A900F5CED85B8236AE0B63764B92E0FCDBF(__this, NULL);
		V_0 = (StringBuilder_t*)NULL;
		V_1 = 0;
		V_2 = 0;
		goto IL_0151;
	}

IL_0013:
	{
		int32_t L_0 = V_2;
		V_3 = L_0;
		goto IL_0028;
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____byteBuffer_22;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		uint8_t L_4 = V_4;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
	}

IL_0028:
	{
		int32_t L_5 = V_3;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0043;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = __this->____reader_20;
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_6);
		uint8_t L_8 = L_7;
		V_4 = L_8;
		G_B6_0 = ((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 0;
	}

IL_0044:
	{
		V_6 = (bool)G_B6_0;
		bool L_9 = V_6;
		if (L_9)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_10 = V_3;
		int32_t L_11 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
		int32_t L_12 = V_1;
		int32_t L_13 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0062;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		G_B10_0 = ((((RuntimeObject*)(StringBuilder_t*)L_15) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0063;
	}

IL_0062:
	{
		G_B10_0 = 0;
	}

IL_0063:
	{
		V_7 = (bool)G_B10_0;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_00a5;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->____byteBuffer_22;
		int32_t L_19 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = __this->____charBuffer_23;
		NullCheck(L_17);
		int32_t L_21;
		L_21 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_17, L_18, 0, L_19, L_20, 0);
		V_8 = L_21;
		int32_t L_22 = V_1;
		BsonReader_MovePosition_m14DB571E20E36B0BCE0485A52B6FCD8343605A5F(__this, ((int32_t)il2cpp_codegen_add(L_22, 1)), NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_23 = __this->____charBuffer_23;
		int32_t L_24 = V_8;
		String_t* L_25;
		L_25 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_23, 0, L_24, NULL);
		V_9 = L_25;
		goto IL_0159;
	}

IL_00a5:
	{
		int32_t L_26 = V_3;
		int32_t L_27;
		L_27 = BsonReader_GetLastFullCharStop_m748DE4E99A97333563675AF442F0134F403A1186(__this, ((int32_t)il2cpp_codegen_subtract(L_26, 1)), NULL);
		V_10 = L_27;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_28;
		L_28 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->____byteBuffer_22;
		int32_t L_30 = V_10;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = __this->____charBuffer_23;
		NullCheck(L_28);
		int32_t L_32;
		L_32 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_28, L_29, 0, ((int32_t)il2cpp_codegen_add(L_30, 1)), L_31, 0);
		V_11 = L_32;
		StringBuilder_t* L_33 = V_0;
		V_12 = (bool)((((RuntimeObject*)(StringBuilder_t*)L_33) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_34 = V_12;
		if (!L_34)
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t* L_35 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_35, ((int32_t)256), NULL);
		V_0 = L_35;
	}

IL_00e6:
	{
		StringBuilder_t* L_36 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = __this->____charBuffer_23;
		int32_t L_38 = V_11;
		NullCheck(L_36);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_36, L_37, 0, L_38, NULL);
		int32_t L_40 = V_10;
		int32_t L_41 = V_5;
		V_13 = (bool)((((int32_t)L_40) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_41, 1))))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_43 = V_5;
		int32_t L_44 = V_10;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_43, L_44)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->____byteBuffer_22;
		int32_t L_46 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->____byteBuffer_22;
		int32_t L_48 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_45, ((int32_t)il2cpp_codegen_add(L_46, 1)), (RuntimeArray*)L_47, 0, L_48, NULL);
		goto IL_014f;
	}

IL_0128:
	{
		int32_t L_49 = V_3;
		V_14 = (bool)((((int32_t)L_49) < ((int32_t)((int32_t)128)))? 1 : 0);
		bool L_50 = V_14;
		if (!L_50)
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_51 = V_1;
		BsonReader_MovePosition_m14DB571E20E36B0BCE0485A52B6FCD8343605A5F(__this, ((int32_t)il2cpp_codegen_add(L_51, 1)), NULL);
		StringBuilder_t* L_52 = V_0;
		NullCheck(L_52);
		String_t* L_53;
		L_53 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_52);
		V_9 = L_53;
		goto IL_0159;
	}

IL_014c:
	{
		V_2 = 0;
	}

IL_014f:
	{
	}

IL_0151:
	{
		V_15 = (bool)1;
		goto IL_0013;
	}

IL_0159:
	{
		String_t* L_54 = V_9;
		return L_54;
	}
}
// System.String Mapbox.Json.Bson.BsonReader::ReadLengthString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_ReadLengthString_mE6DB085B50A41C1F69D3A1B420472B056B8D2646 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = BsonReader_ReadInt32_m0808A5601A0BBDF2DE2C8D2B58E0A03925D21AB3(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		BsonReader_MovePosition_m14DB571E20E36B0BCE0485A52B6FCD8343605A5F(__this, L_1, NULL);
		int32_t L_2 = V_0;
		String_t* L_3;
		L_3 = BsonReader_GetString_m00C1730E16CE2E31B37E33594E4A8EAFA576AC78(__this, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), NULL);
		V_1 = L_3;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = __this->____reader_20;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = VirtualFuncInvoker0< uint8_t >::Invoke(10 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_4);
		String_t* L_6 = V_1;
		V_2 = L_6;
		goto IL_002a;
	}

IL_002a:
	{
		String_t* L_7 = V_2;
		return L_7;
	}
}
// System.String Mapbox.Json.Bson.BsonReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BsonReader_GetString_m00C1730E16CE2E31B37E33594E4A8EAFA576AC78 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, int32_t ___length0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___length0;
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_4 = L_2;
		goto IL_0150;
	}

IL_0016:
	{
		BsonReader_EnsureBuffers_m572A8A900F5CED85B8236AE0B63764B92E0FCDBF(__this, NULL);
		V_0 = (StringBuilder_t*)NULL;
		V_1 = 0;
		V_2 = 0;
	}

IL_0023:
	{
		int32_t L_3 = ___length0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_5)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_6 = ___length0;
		int32_t L_7 = V_1;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		goto IL_003c;
	}

IL_0035:
	{
		int32_t L_8 = V_2;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_8));
	}

IL_003c:
	{
		V_5 = G_B6_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_9 = __this->____reader_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->____byteBuffer_22;
		int32_t L_11 = V_2;
		int32_t L_12 = V_5;
		NullCheck(L_9);
		int32_t L_13;
		L_13 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, L_11, L_12);
		V_6 = L_13;
		int32_t L_14 = V_6;
		V_7 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_16 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7630F7A0C27B2EE30DD70CE0777AD917869A5FC4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonReader_GetString_m00C1730E16CE2E31B37E33594E4A8EAFA576AC78_RuntimeMethod_var)));
	}

IL_006b:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_6;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		int32_t L_19 = V_6;
		int32_t L_20 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		int32_t L_21 = V_6;
		int32_t L_22 = ___length0;
		V_8 = (bool)((((int32_t)L_21) == ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00b3;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_24;
		L_24 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->____byteBuffer_22;
		int32_t L_26 = V_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_27 = __this->____charBuffer_23;
		NullCheck(L_24);
		int32_t L_28;
		L_28 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_24, L_25, 0, L_26, L_27, 0);
		V_9 = L_28;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = __this->____charBuffer_23;
		int32_t L_30 = V_9;
		String_t* L_31;
		L_31 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_29, 0, L_30, NULL);
		V_4 = L_31;
		goto IL_0150;
	}

IL_00b3:
	{
		int32_t L_32 = V_6;
		int32_t L_33;
		L_33 = BsonReader_GetLastFullCharStop_m748DE4E99A97333563675AF442F0134F403A1186(__this, ((int32_t)il2cpp_codegen_subtract(L_32, 1)), NULL);
		V_10 = L_33;
		StringBuilder_t* L_34 = V_0;
		V_12 = (bool)((((RuntimeObject*)(StringBuilder_t*)L_34) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_36 = ___length0;
		StringBuilder_t* L_37 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_37, L_36, NULL);
		V_0 = L_37;
	}

IL_00d3:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_38;
		L_38 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->____byteBuffer_22;
		int32_t L_40 = V_10;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = __this->____charBuffer_23;
		NullCheck(L_38);
		int32_t L_42;
		L_42 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(25 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_38, L_39, 0, ((int32_t)il2cpp_codegen_add(L_40, 1)), L_41, 0);
		V_11 = L_42;
		StringBuilder_t* L_43 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_44 = __this->____charBuffer_23;
		int32_t L_45 = V_11;
		NullCheck(L_43);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_mC09A30993B77CC4D8E906720683B6386F0E15747(L_43, L_44, 0, L_45, NULL);
		int32_t L_47 = V_10;
		int32_t L_48 = V_6;
		V_13 = (bool)((((int32_t)L_47) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_48, 1))))? 1 : 0);
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_50 = V_6;
		int32_t L_51 = V_10;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_50, L_51)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = __this->____byteBuffer_22;
		int32_t L_53 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = __this->____byteBuffer_22;
		int32_t L_55 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_52, ((int32_t)il2cpp_codegen_add(L_53, 1)), (RuntimeArray*)L_54, 0, L_55, NULL);
		goto IL_0137;
	}

IL_0133:
	{
		V_2 = 0;
	}

IL_0137:
	{
		int32_t L_56 = V_1;
		int32_t L_57 = ___length0;
		V_14 = (bool)((((int32_t)L_56) < ((int32_t)L_57))? 1 : 0);
		bool L_58 = V_14;
		if (L_58)
		{
			goto IL_0023;
		}
	}
	{
		StringBuilder_t* L_59 = V_0;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_59);
		V_4 = L_60;
		goto IL_0150;
	}

IL_0150:
	{
		String_t* L_61 = V_4;
		return L_61;
	}
}
// System.Int32 Mapbox.Json.Bson.BsonReader::GetLastFullCharStop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_GetLastFullCharStop_m748DE4E99A97333563675AF442F0134F403A1186 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___start0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0038;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____byteBuffer_22;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5;
		L_5 = BsonReader_BytesInSequence_mDA09FEBFB6B41F2CF1A3E88D0CC3D2B6FFB82015(__this, L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_0038;
	}

IL_0026:
	{
		int32_t L_9 = V_1;
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_0045;
	}

IL_0031:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_0045;
	}

IL_0038:
	{
		int32_t L_12 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_0007;
		}
	}

IL_0045:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___start0;
		int32_t L_16 = V_0;
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_15, L_16))))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_18 = ___start0;
		V_6 = L_18;
		goto IL_005d;
	}

IL_0057:
	{
		int32_t L_19 = V_0;
		V_6 = L_19;
		goto IL_005d;
	}

IL_005d:
	{
		int32_t L_20 = V_6;
		return L_20;
	}
}
// System.Int32 Mapbox.Json.Bson.BsonReader::BytesInSequence(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_BytesInSequence_mDA09FEBFB6B41F2CF1A3E88D0CC3D2B6FFB82015 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, uint8_t ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	{
		uint8_t L_0 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange1_16;
		NullCheck(L_1);
		int32_t L_2 = 1;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = 1;
		goto IL_0086;
	}

IL_0017:
	{
		uint8_t L_5 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange2_17;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_5) < ((int32_t)L_8)))
		{
			goto IL_0030;
		}
	}
	{
		uint8_t L_9 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange2_17;
		NullCheck(L_10);
		int32_t L_11 = 1;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		G_B5_0 = ((((int32_t)((((int32_t)L_9) > ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B5_0 = 0;
	}

IL_0031:
	{
		V_2 = (bool)G_B5_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		V_1 = 2;
		goto IL_0086;
	}

IL_003a:
	{
		uint8_t L_14 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange3_18;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if ((((int32_t)L_14) < ((int32_t)L_17)))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t L_18 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange3_18;
		NullCheck(L_19);
		int32_t L_20 = 1;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B10_0 = ((((int32_t)((((int32_t)L_18) > ((int32_t)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B10_0 = 0;
	}

IL_0054:
	{
		V_3 = (bool)G_B10_0;
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_005d;
		}
	}
	{
		V_1 = 3;
		goto IL_0086;
	}

IL_005d:
	{
		uint8_t L_23 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange4_19;
		NullCheck(L_24);
		int32_t L_25 = 0;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0076;
		}
	}
	{
		uint8_t L_27 = ___b0;
		il2cpp_codegen_runtime_class_init_inline(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange4_19;
		NullCheck(L_28);
		int32_t L_29 = 1;
		uint8_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		G_B15_0 = ((((int32_t)((((int32_t)L_27) > ((int32_t)L_30))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B15_0 = 0;
	}

IL_0077:
	{
		V_4 = (bool)G_B15_0;
		bool L_31 = V_4;
		if (!L_31)
		{
			goto IL_0082;
		}
	}
	{
		V_1 = 4;
		goto IL_0086;
	}

IL_0082:
	{
		V_1 = 0;
		goto IL_0086;
	}

IL_0086:
	{
		int32_t L_32 = V_1;
		return L_32;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::EnsureBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_EnsureBuffers_m572A8A900F5CED85B8236AE0B63764B92E0FCDBF (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____byteBuffer_22;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->____byteBuffer_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____byteBuffer_22), (void*)L_2);
	}

IL_0020:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____charBuffer_23;
		V_1 = (bool)((((RuntimeObject*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(33 /* System.Int32 System.Text.Encoding::GetMaxCharCount(System.Int32) */, L_5, ((int32_t)128));
		V_2 = L_6;
		int32_t L_7 = V_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->____charBuffer_23 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charBuffer_23), (void*)L_8);
	}

IL_004b:
	{
		return;
	}
}
// System.Double Mapbox.Json.Bson.BsonReader::ReadDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BsonReader_ReadDouble_m468806A237F1F78466D91B23F14B3C4F958CA106 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		BsonReader_MovePosition_m14DB571E20E36B0BCE0485A52B6FCD8343605A5F(__this, 8, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(20 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_0);
		V_0 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		double L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Mapbox.Json.Bson.BsonReader::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonReader_ReadInt32_m0808A5601A0BBDF2DE2C8D2B58E0A03925D21AB3 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		BsonReader_MovePosition_m14DB571E20E36B0BCE0485A52B6FCD8343605A5F(__this, 4, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_0);
		V_0 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int64 Mapbox.Json.Bson.BsonReader::ReadInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BsonReader_ReadInt64_mDFBE1E9B059A76464EFCA61D746CDD830F802DA6 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		BsonReader_MovePosition_m14DB571E20E36B0BCE0485A52B6FCD8343605A5F(__this, 8, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_0);
		V_0 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
// Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonReader::ReadType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonReader_ReadType_m52779020C8A03268A8140FB74EB1598DB461C2EF (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, const RuntimeMethod* method) 
{
	int8_t V_0 = 0;
	{
		BsonReader_MovePosition_m14DB571E20E36B0BCE0485A52B6FCD8343605A5F(__this, 1, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->____reader_20;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = VirtualFuncInvoker0< int8_t >::Invoke(11 /* System.SByte System.IO.BinaryReader::ReadSByte() */, L_0);
		V_0 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		int8_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::MovePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader_MovePosition_m14DB571E20E36B0BCE0485A52B6FCD8343605A5F (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	{
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_0 = __this->____currentContext_26;
		ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Position_2;
		int32_t L_3 = ___count0;
		NullCheck(L_1);
		L_1->___Position_2 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		return;
	}
}
// System.Byte[] Mapbox.Json.Bson.BsonReader::ReadBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonReader_ReadBytes_m9CEECA06D68C8DC08E4B3B2CC5FFDFC16D679B91 (BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49* __this, int32_t ___count0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = ___count0;
		BsonReader_MovePosition_m14DB571E20E36B0BCE0485A52B6FCD8343605A5F(__this, L_0, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = __this->____reader_20;
		int32_t L_2 = ___count0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_1, L_2);
		V_0 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Void Mapbox.Json.Bson.BsonReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonReader__cctor_m45846DB075E88AED596F32CF5329EDA451C7DC4C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)127));
		((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange1_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange1_16), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)194));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)223));
		((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange2_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange2_17), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)224));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)239));
		((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange3_18 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange3_18), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)240));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)244));
		((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange4_19 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_StaticFields*)il2cpp_codegen_static_fields_for(BsonReader_tCB091965F8F73F0D936B041FCA7B7E7F19D7AE49_il2cpp_TypeInfo_var))->___SeqRange4_19), (void*)L_10);
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
// System.Void Mapbox.Json.Bson.BsonReader/ContainerContext::.ctor(Mapbox.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerContext__ctor_mE3E21549280E431F9B1AB5CBE78910577C646870 (ContainerContext_t7F0E39A8C0388D6CC391BD8DE641C6CD6ADD2DEB* __this, int8_t ___type0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int8_t L_0 = ___type0;
		__this->___Type_0 = L_0;
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
// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonToken::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* BsonToken_get_Parent_mE73528DB8EB7A79693941A6C276F7B61F0B0AAFE (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = __this->___U3CParentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mapbox.Json.Bson.BsonToken::set_Parent(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m040E360901B30DD918486B8B77556931A6CF2B78 (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___value0, const RuntimeMethod* method) 
{
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = ___value0;
		__this->___U3CParentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 Mapbox.Json.Bson.BsonToken::get_CalculatedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonToken_get_CalculatedSize_m01453B84E1D67C1030D478C7C21D57171B1EB1B3 (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCalculatedSizeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mapbox.Json.Bson.BsonToken::set_CalculatedSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken_set_CalculatedSize_m08934C5720485BDB0A3FABFE97DA80DDC605DFD7 (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCalculatedSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonToken__ctor_m052A50AE983053F05E062FA78E90470B07DA30A4 (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, const RuntimeMethod* method) 
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
// System.Void Mapbox.Json.Bson.BsonObject::Add(System.String,Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject_Add_mC64442319636E991D2A72E8A8C88C9F2D37F83ED (BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* __this, String_t* ___name0, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___token1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m35D4FAE86E88A7DFD8DCC32E6B9BDBA79141334A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48* L_0 = __this->____children_2;
		BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* L_1 = (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7*)il2cpp_codegen_object_new(BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonProperty__ctor_m195E1E9968634BD126A898538B15CF4FD951B991(L_1, NULL);
		BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* L_2 = L_1;
		String_t* L_3 = ___name0;
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_4 = (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF*)il2cpp_codegen_object_new(BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BsonString__ctor_m9B6A87F650F0F55CCDDAD2408A4196EB5C83477D(L_4, L_3, (bool)0, NULL);
		NullCheck(L_2);
		BsonProperty_set_Name_m4E44D5817F32C0A44B53049CE0E9860A3529F4DF_inline(L_2, L_4, NULL);
		BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* L_5 = L_2;
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_6 = ___token1;
		NullCheck(L_5);
		BsonProperty_set_Value_m6262FA6F4DB2A07775283502E1C601C86BE22347_inline(L_5, L_6, NULL);
		NullCheck(L_0);
		List_1_Add_m35D4FAE86E88A7DFD8DCC32E6B9BDBA79141334A_inline(L_0, L_5, List_1_Add_m35D4FAE86E88A7DFD8DCC32E6B9BDBA79141334A_RuntimeMethod_var);
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_7 = ___token1;
		NullCheck(L_7);
		BsonToken_set_Parent_m040E360901B30DD918486B8B77556931A6CF2B78_inline(L_7, __this, NULL);
		return;
	}
}
// Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonObject::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonObject_get_Type_mBB94414B35840538EDF62E39D2EEFC3CB70DB958 (BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* __this, const RuntimeMethod* method) 
{
	int8_t V_0 = 0;
	{
		V_0 = 3;
		goto IL_0005;
	}

IL_0005:
	{
		int8_t L_0 = V_0;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Mapbox.Json.Bson.BsonProperty> Mapbox.Json.Bson.BsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_GetEnumerator_m51EB57A06242CFF4EF309CC464453FC3775C80C8 (BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t3F0EA0DDCA13A266C5D30DF4D35193EFBF1083D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEE052C4A26B9352C73A0229B08AA14054C4BC6AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48* L_0 = __this->____children_2;
		NullCheck(L_0);
		Enumerator_t3F0EA0DDCA13A266C5D30DF4D35193EFBF1083D2 L_1;
		L_1 = List_1_GetEnumerator_mEE052C4A26B9352C73A0229B08AA14054C4BC6AF(L_0, List_1_GetEnumerator_mEE052C4A26B9352C73A0229B08AA14054C4BC6AF_RuntimeMethod_var);
		Enumerator_t3F0EA0DDCA13A266C5D30DF4D35193EFBF1083D2 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_t3F0EA0DDCA13A266C5D30DF4D35193EFBF1083D2_il2cpp_TypeInfo_var, &L_2);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator Mapbox.Json.Bson.BsonObject::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonObject_System_Collections_IEnumerable_GetEnumerator_mF8CE1071511679837BDC55153FBF721E874E3E85 (BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = BsonObject_GetEnumerator_m51EB57A06242CFF4EF309CC464453FC3775C80C8(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.Json.Bson.BsonObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObject__ctor_m6EAD0EED9FBD7F7F245FD906568370BD8A5B287F (BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m33E80F76CCFF196C5E4AEE6E13F6DD76AA352844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48* L_0 = (List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48*)il2cpp_codegen_object_new(List_1_t438532B6A1EE98BFC1761759BB68185E5A478E48_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m33E80F76CCFF196C5E4AEE6E13F6DD76AA352844(L_0, List_1__ctor_m33E80F76CCFF196C5E4AEE6E13F6DD76AA352844_RuntimeMethod_var);
		__this->____children_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_2), (void*)L_0);
		BsonToken__ctor_m052A50AE983053F05E062FA78E90470B07DA30A4(__this, NULL);
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
// System.Void Mapbox.Json.Bson.BsonArray::Add(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray_Add_m77D71CE3EC7509A0423014251320BE19E81FA8B5 (BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA7020313AEBA9E4A7DAE503DBCAEFE672F00F84F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50* L_0 = __this->____children_2;
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_1 = ___token0;
		NullCheck(L_0);
		List_1_Add_mA7020313AEBA9E4A7DAE503DBCAEFE672F00F84F_inline(L_0, L_1, List_1_Add_mA7020313AEBA9E4A7DAE503DBCAEFE672F00F84F_RuntimeMethod_var);
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_2 = ___token0;
		NullCheck(L_2);
		BsonToken_set_Parent_m040E360901B30DD918486B8B77556931A6CF2B78_inline(L_2, __this, NULL);
		return;
	}
}
// Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonArray::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonArray_get_Type_m09583AE661DA91A931855F5E02D46FBA6FEBE7ED (BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* __this, const RuntimeMethod* method) 
{
	int8_t V_0 = 0;
	{
		V_0 = 4;
		goto IL_0005;
	}

IL_0005:
	{
		int8_t L_0 = V_0;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Mapbox.Json.Bson.BsonToken> Mapbox.Json.Bson.BsonArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_GetEnumerator_m1F55A56BFB40EE3D62AF021034B5508BA5C85085 (BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tF45EB5F17668BC1F66862376D62AAC21E48E7C50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0D3124CA3C28FBB1BFF01F565F63CE4F138FB3CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50* L_0 = __this->____children_2;
		NullCheck(L_0);
		Enumerator_tF45EB5F17668BC1F66862376D62AAC21E48E7C50 L_1;
		L_1 = List_1_GetEnumerator_m0D3124CA3C28FBB1BFF01F565F63CE4F138FB3CF(L_0, List_1_GetEnumerator_m0D3124CA3C28FBB1BFF01F565F63CE4F138FB3CF_RuntimeMethod_var);
		Enumerator_tF45EB5F17668BC1F66862376D62AAC21E48E7C50 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_tF45EB5F17668BC1F66862376D62AAC21E48E7C50_il2cpp_TypeInfo_var, &L_2);
		V_0 = (RuntimeObject*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator Mapbox.Json.Bson.BsonArray::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonArray_System_Collections_IEnumerable_GetEnumerator_m9E899E7AE0ADDB6C30280F58499B89421C485533 (BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = BsonArray_GetEnumerator_m1F55A56BFB40EE3D62AF021034B5508BA5C85085(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.Json.Bson.BsonArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonArray__ctor_m68B265DD70752AA8BA2CBBB31908C8A1B92B9BDE (BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7D18F4DC373A3FE92B8F971B6989D9BF873955DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50* L_0 = (List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50*)il2cpp_codegen_object_new(List_1_t6A68383F334F8871F4F5AC90F7A0EAC007A1DC50_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7D18F4DC373A3FE92B8F971B6989D9BF873955DC(L_0, List_1__ctor_m7D18F4DC373A3FE92B8F971B6989D9BF873955DC_RuntimeMethod_var);
		__this->____children_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_2), (void*)L_0);
		BsonToken__ctor_m052A50AE983053F05E062FA78E90470B07DA30A4(__this, NULL);
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
// System.Void Mapbox.Json.Bson.BsonEmpty::.ctor(Mapbox.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonEmpty__ctor_m7A84DA77F889B6BD28AA759A161A47F3ED5D940C (BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5* __this, int8_t ___type0, const RuntimeMethod* method) 
{
	{
		BsonToken__ctor_m052A50AE983053F05E062FA78E90470B07DA30A4(__this, NULL);
		int8_t L_0 = ___type0;
		__this->___U3CTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonEmpty::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonEmpty_get_Type_mB206DB6DBDBDB1D123FBD366901DF3B46DB7178B (BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5* __this, const RuntimeMethod* method) 
{
	{
		int8_t L_0 = __this->___U3CTypeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Mapbox.Json.Bson.BsonEmpty::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonEmpty__cctor_m854A024491EC93A633F1AA2294A144CED7DE7F0C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5* L_0 = (BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5*)il2cpp_codegen_object_new(BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonEmpty__ctor_m7A84DA77F889B6BD28AA759A161A47F3ED5D940C(L_0, ((int32_t)10), NULL);
		((BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var))->___Null_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var))->___Null_2), (void*)L_0);
		BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5* L_1 = (BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5*)il2cpp_codegen_object_new(BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonEmpty__ctor_m7A84DA77F889B6BD28AA759A161A47F3ED5D940C(L_1, 6, NULL);
		((BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var))->___Undefined_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var))->___Undefined_3), (void*)L_1);
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
// System.Void Mapbox.Json.Bson.BsonValue::.ctor(System.Object,Mapbox.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonValue__ctor_m2DF71672FC8A566BCC9CFDD95098CE638A80EB17 (BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* __this, RuntimeObject* ___value0, int8_t ___type1, const RuntimeMethod* method) 
{
	{
		BsonToken__ctor_m052A50AE983053F05E062FA78E90470B07DA30A4(__this, NULL);
		RuntimeObject* L_0 = ___value0;
		__this->____value_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_2), (void*)L_0);
		int8_t L_1 = ___type1;
		__this->____type_3 = L_1;
		return;
	}
}
// System.Object Mapbox.Json.Bson.BsonValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BsonValue_get_Value_m037C892413B30F0728204C41D13935FDA3FDFF55 (BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____value_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonValue::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonValue_get_Type_mBB4B021D249FDCCA68C5D35D0FCF7145ED4BF62F (BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* __this, const RuntimeMethod* method) 
{
	int8_t V_0 = 0;
	{
		int8_t L_0 = __this->____type_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int8_t L_1 = V_0;
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
// System.Void Mapbox.Json.Bson.BsonBoolean::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBoolean__ctor_m2F89DFF1EBC0DC102A6EB9564B24CC01FF5B2155 (BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		BsonValue__ctor_m2DF71672FC8A566BCC9CFDD95098CE638A80EB17(__this, L_2, 8, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonBoolean::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBoolean__cctor_mA7D19FBE5E6904CF28092D278E46D2DEEA706CFE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C* L_0 = (BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C*)il2cpp_codegen_object_new(BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonBoolean__ctor_m2F89DFF1EBC0DC102A6EB9564B24CC01FF5B2155(L_0, (bool)0, NULL);
		((BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var))->___False_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var))->___False_4), (void*)L_0);
		BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C* L_1 = (BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C*)il2cpp_codegen_object_new(BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonBoolean__ctor_m2F89DFF1EBC0DC102A6EB9564B24CC01FF5B2155(L_1, (bool)1, NULL);
		((BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var))->___True_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var))->___True_5), (void*)L_1);
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
// System.Int32 Mapbox.Json.Bson.BsonString::get_ByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonString_get_ByteCount_mEF2800D322BC09FAF0919B6558A5CC558612E052 (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CByteCountU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Mapbox.Json.Bson.BsonString::set_ByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString_set_ByteCount_mE7E976EB6563475F6249A35DF1CF4CE9E5AEF6D4 (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CByteCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean Mapbox.Json.Bson.BsonString::get_IncludeLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BsonString_get_IncludeLength_m5C733F8EB1568A0E38BA95FF7672F2F78EEE8A32 (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeLengthU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Mapbox.Json.Bson.BsonString::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonString__ctor_m9B6A87F650F0F55CCDDAD2408A4196EB5C83477D (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* __this, RuntimeObject* ___value0, bool ___includeLength1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		BsonValue__ctor_m2DF71672FC8A566BCC9CFDD95098CE638A80EB17(__this, L_0, 2, NULL);
		bool L_1 = ___includeLength1;
		__this->___U3CIncludeLengthU3Ek__BackingField_5 = L_1;
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
// Mapbox.Json.Bson.BsonBinaryType Mapbox.Json.Bson.BsonBinary::get_BinaryType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BsonBinary_get_BinaryType_m5FED0D314A30309D1595CBB52EDE39073F3CA9CA (BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CBinaryTypeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Mapbox.Json.Bson.BsonBinary::set_BinaryType(Mapbox.Json.Bson.BsonBinaryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinary_set_BinaryType_m23CE616B32B60E52F61256013D7F19BF3ED84408 (BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___U3CBinaryTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonBinary::.ctor(System.Byte[],Mapbox.Json.Bson.BsonBinaryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonBinary__ctor_m1D7304B7DC2E5EB27DDCF48069334EE415056017 (BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, uint8_t ___binaryType1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		BsonValue__ctor_m2DF71672FC8A566BCC9CFDD95098CE638A80EB17(__this, (RuntimeObject*)L_0, 5, NULL);
		uint8_t L_1 = ___binaryType1;
		BsonBinary_set_BinaryType_m23CE616B32B60E52F61256013D7F19BF3ED84408_inline(__this, L_1, NULL);
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
// Mapbox.Json.Bson.BsonString Mapbox.Json.Bson.BsonRegex::get_Pattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* BsonRegex_get_Pattern_m36879EB708797B79197B819554E1BD6A991A841E (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_0 = __this->___U3CPatternU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Mapbox.Json.Bson.BsonRegex::set_Pattern(Mapbox.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_mE0B87BC70E119C6E9128D09A9FB074125DF147D2 (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_0 = ___value0;
		__this->___U3CPatternU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Mapbox.Json.Bson.BsonString Mapbox.Json.Bson.BsonRegex::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* BsonRegex_get_Options_m8F99D03B24CD4C983ADFA8B75F0132754FED99FC (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_0 = __this->___U3COptionsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Mapbox.Json.Bson.BsonRegex::set_Options(Mapbox.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m9FCF2D68FE87670FC2B423CE7F721F5A070F9879 (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_0 = ___value0;
		__this->___U3COptionsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonRegex::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonRegex__ctor_m826B79D0D51E405BA482E0DCADA290E632C84AFF (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, String_t* ___pattern0, String_t* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BsonToken__ctor_m052A50AE983053F05E062FA78E90470B07DA30A4(__this, NULL);
		String_t* L_0 = ___pattern0;
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_1 = (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF*)il2cpp_codegen_object_new(BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BsonString__ctor_m9B6A87F650F0F55CCDDAD2408A4196EB5C83477D(L_1, L_0, (bool)0, NULL);
		BsonRegex_set_Pattern_mE0B87BC70E119C6E9128D09A9FB074125DF147D2_inline(__this, L_1, NULL);
		String_t* L_2 = ___options1;
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_3 = (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF*)il2cpp_codegen_object_new(BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonString__ctor_m9B6A87F650F0F55CCDDAD2408A4196EB5C83477D(L_3, L_2, (bool)0, NULL);
		BsonRegex_set_Options_m9FCF2D68FE87670FC2B423CE7F721F5A070F9879_inline(__this, L_3, NULL);
		return;
	}
}
// Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonRegex::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t BsonRegex_get_Type_mD433A1C2CD190467B30AE22EB246142EB33D9476 (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, const RuntimeMethod* method) 
{
	int8_t V_0 = 0;
	{
		V_0 = ((int32_t)11);
		goto IL_0006;
	}

IL_0006:
	{
		int8_t L_0 = V_0;
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
// Mapbox.Json.Bson.BsonString Mapbox.Json.Bson.BsonProperty::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* BsonProperty_get_Name_m65D854351FC3F54004885367CE6F069138EA2D60 (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mapbox.Json.Bson.BsonProperty::set_Name(Mapbox.Json.Bson.BsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty_set_Name_m4E44D5817F32C0A44B53049CE0E9860A3529F4DF (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Mapbox.Json.Bson.BsonToken Mapbox.Json.Bson.BsonProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* BsonProperty_get_Value_mBE4596AD58E9F63AA81C15D3F5C761CC85B58FB4 (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Mapbox.Json.Bson.BsonProperty::set_Value(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m6262FA6F4DB2A07775283502E1C601C86BE22347 (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___value0, const RuntimeMethod* method) 
{
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonProperty__ctor_m195E1E9968634BD126A898538B15CF4FD951B991 (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, const RuntimeMethod* method) 
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
// System.DateTimeKind Mapbox.Json.Bson.BsonWriter::get_DateTimeKindHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BsonWriter_get_DateTimeKindHandling_m605A7B4E0CD192AA208854DD9EC3E38D55EA763B (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* L_0 = __this->____writer_14;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BsonBinaryWriter_get_DateTimeKindHandling_m48A909892A9B9F7763DB0089B4AAC5267D3191A0_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::set_DateTimeKindHandling(System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_set_DateTimeKindHandling_m8E5E43609313EDBE73BC7CBF422355BAA0E7EE9E (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* L_0 = __this->____writer_14;
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		BsonBinaryWriter_set_DateTimeKindHandling_m9784B0D935227D6F5FEFA90A9A5A2922151F52D9_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter__ctor_m4BD831D8582F2F13B9D7544E2DD4F32ECF583678 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m7ED56DB8C6FB174E30D25083B51AC5F858B42380(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		ValidationUtils_ArgumentNotNull_m99B404ADE499F4D8BCC9A8637E084100E511C974(L_0, _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_2, L_1, NULL);
		BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* L_3 = (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066*)il2cpp_codegen_object_new(BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonBinaryWriter__ctor_m6CE085BC6C16558994487190540171174366D41A(L_3, L_2, NULL);
		__this->____writer_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer_14), (void*)L_3);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::.ctor(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter__ctor_m2A05FC1DFEEC5AD5C24E81C0A982B42351FA203C (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m7ED56DB8C6FB174E30D25083B51AC5F858B42380(__this, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___writer0;
		ValidationUtils_ArgumentNotNull_m99B404ADE499F4D8BCC9A8637E084100E511C974(L_0, _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0, NULL);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___writer0;
		BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* L_2 = (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066*)il2cpp_codegen_object_new(BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonBinaryWriter__ctor_m6CE085BC6C16558994487190540171174366D41A(L_2, L_1, NULL);
		__this->____writer_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writer_14), (void*)L_2);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_Flush_m36D2A60F07EB7498455D2D1C6464511146CF821E (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, const RuntimeMethod* method) 
{
	{
		BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* L_0 = __this->____writer_14;
		NullCheck(L_0);
		BsonBinaryWriter_Flush_m9F56DDD029DD4F398F9793EB94F9D464738FBA98(L_0, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteEnd(Mapbox.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteEnd_mD17C74B2E761360F383B1B59119603DFC3840FEB (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, int32_t ___token0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___token0;
		JsonWriter_WriteEnd_m168045378C9132FE9ACA70BE631D5351B3C8B1DE(__this, L_0, NULL);
		BsonWriter_RemoveParent_m8553CD2269A82D3826B797C20989684B11DD3EB0(__this, NULL);
		int32_t L_1;
		L_1 = JsonWriter_get_Top_mFF452D8D0D5DFE88183204E374CCDDA8138F883B(__this, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* L_3 = __this->____writer_14;
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_4 = __this->____root_15;
		NullCheck(L_3);
		BsonBinaryWriter_WriteToken_mF1E488619C95DE9AD32A619C2ECED1E6DA6EDF50(L_3, L_4, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteComment_m723894F8DC01A3199FFB66AC8715DEE1A72AB781 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		JsonWriterException_t64203323809F24258C2DD39887A1143A8B490FCB* L_0;
		L_0 = JsonWriterException_Create_mD009AB0881993AF9E5BF137CDEDC40632B67E5C5(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F72A13E7E8E1CB50038C54FE7CC02AB7582F7AA)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteComment_m723894F8DC01A3199FFB66AC8715DEE1A72AB781_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteStartConstructor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteStartConstructor_m9F7A78868AFC1C4BD1026F21451814495646708B (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		JsonWriterException_t64203323809F24258C2DD39887A1143A8B490FCB* L_0;
		L_0 = JsonWriterException_Create_mD009AB0881993AF9E5BF137CDEDC40632B67E5C5(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral040ACBC1C698075688E5B27E50C6370BEB2676A0)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteStartConstructor_m9F7A78868AFC1C4BD1026F21451814495646708B_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRaw_m6FF70E67B50BC589543981EFC9365CBA3ED30474 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	{
		JsonWriterException_t64203323809F24258C2DD39887A1143A8B490FCB* L_0;
		L_0 = JsonWriterException_Create_mD009AB0881993AF9E5BF137CDEDC40632B67E5C5(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C97C66F7D6312F0BCB5A4E3E9ED7F8F1CF50F6A)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteRaw_m6FF70E67B50BC589543981EFC9365CBA3ED30474_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteRawValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRawValue_m8B7794C370C6104A637B4341C2B7BD0E00B3E459 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	{
		JsonWriterException_t64203323809F24258C2DD39887A1143A8B490FCB* L_0;
		L_0 = JsonWriterException_Create_mD009AB0881993AF9E5BF137CDEDC40632B67E5C5(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C97C66F7D6312F0BCB5A4E3E9ED7F8F1CF50F6A)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteRawValue_m8B7794C370C6104A637B4341C2B7BD0E00B3E459_RuntimeMethod_var)));
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteStartArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteStartArray_mE8B504C150CC1213E235EBC3CEC77B6AD0EEC2C0 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteStartArray_m460470C000D464EFE4AE7F23D48530081E0A1DA8(__this, NULL);
		BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3* L_0 = (BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3*)il2cpp_codegen_object_new(BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonArray__ctor_m68B265DD70752AA8BA2CBBB31908C8A1B92B9BDE(L_0, NULL);
		BsonWriter_AddParent_mE4102DF064DA38D78B170103FF8779CE32B6ED47(__this, L_0, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteStartObject_mFDCEC6E659E48425CCE7A2134A23E73819D7E658 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteStartObject_m52674465141534624E0B0E7AAAE207C113651AAB(__this, NULL);
		BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* L_0 = (BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575*)il2cpp_codegen_object_new(BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BsonObject__ctor_m6EAD0EED9FBD7F7F245FD906568370BD8A5B287F(L_0, NULL);
		BsonWriter_AddParent_mE4102DF064DA38D78B170103FF8779CE32B6ED47(__this, L_0, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WritePropertyName_m90A839C504BB193550565E01A2C9E45796AA8965 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		JsonWriter_WritePropertyName_m95AAA36B54E9383F8311E02D0F2076DCCAD2DD86(__this, L_0, NULL);
		String_t* L_1 = ___name0;
		__this->____propertyName_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyName_17), (void*)L_1);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_Close_m60C2BA1BFFD0A3E6116C7C34A22208DB5E2AB55B (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* G_B3_0 = NULL;
	BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* G_B2_0 = NULL;
	{
		JsonWriter_Close_m82BDEB4F8C7087BE9B5840B986D66F6B470C9A1C(__this, NULL);
		bool L_0;
		L_0 = JsonWriter_get_CloseOutput_m3ACB637809C079F2607259E59A17B6638D481891_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* L_2 = __this->____writer_14;
		BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001f;
		}
	}
	{
		goto IL_0025;
	}

IL_001f:
	{
		NullCheck(G_B3_0);
		BsonBinaryWriter_Close_m09BEDDEBE87FB047DA4A52BBD20621BF509E3CA7(G_B3_0, NULL);
	}

IL_0025:
	{
	}

IL_0026:
	{
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::AddParent(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddParent_mE4102DF064DA38D78B170103FF8779CE32B6ED47 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___container0, const RuntimeMethod* method) 
{
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = ___container0;
		BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12(__this, L_0, NULL);
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_1 = ___container0;
		__this->____parent_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_16), (void*)L_1);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::RemoveParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_RemoveParent_m8553CD2269A82D3826B797C20989684B11DD3EB0 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = __this->____parent_16;
		NullCheck(L_0);
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_1;
		L_1 = BsonToken_get_Parent_mE73528DB8EB7A79693941A6C276F7B61F0B0AAFE_inline(L_0, NULL);
		__this->____parent_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_16), (void*)L_1);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::AddValue(System.Object,Mapbox.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, RuntimeObject* ___value0, int8_t ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		int8_t L_1 = ___type1;
		BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749* L_2 = (BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749*)il2cpp_codegen_object_new(BsonValue_t67C6C9B853473CC136C105F8A7E5DD5A86DD1749_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonValue__ctor_m2DF71672FC8A566BCC9CFDD95098CE638A80EB17(L_2, L_0, L_1, NULL);
		BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12(__this, L_2, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::AddToken(Mapbox.Json.Bson.BsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B8_0 = 0;
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = __this->____parent_16;
		V_0 = (bool)((!(((RuntimeObject*)(BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_2 = __this->____parent_16;
		V_1 = ((BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575*)IsInstClass((RuntimeObject*)L_2, BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575_il2cpp_TypeInfo_var));
		BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		BsonObject_t0BE8859B7DA5B738496CA59BF47F1D4A0040B575* L_5 = V_1;
		String_t* L_6 = __this->____propertyName_17;
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_7 = ___token0;
		NullCheck(L_5);
		BsonObject_Add_mC64442319636E991D2A72E8A8C88C9F2D37F83ED(L_5, L_6, L_7, NULL);
		__this->____propertyName_17 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____propertyName_17), (void*)(String_t*)NULL);
		goto IL_0050;
	}

IL_003c:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_8 = __this->____parent_16;
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_9 = ___token0;
		NullCheck(((BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3*)CastclassClass((RuntimeObject*)L_8, BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3_il2cpp_TypeInfo_var)));
		BsonArray_Add_m77D71CE3EC7509A0423014251320BE19E81FA8B5(((BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3*)CastclassClass((RuntimeObject*)L_8, BsonArray_tCA082774BDBA0922DD05063C0CD8A2CD01C5E2B3_il2cpp_TypeInfo_var)), L_9, NULL);
	}

IL_0050:
	{
		goto IL_00a2;
	}

IL_0053:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_10 = ___token0;
		NullCheck(L_10);
		int8_t L_11;
		L_11 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonToken::get_Type() */, L_10);
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_006b;
		}
	}
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_12 = ___token0;
		NullCheck(L_12);
		int8_t L_13;
		L_13 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonToken::get_Type() */, L_12);
		G_B8_0 = ((((int32_t)((((int32_t)L_13) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006c;
	}

IL_006b:
	{
		G_B8_0 = 0;
	}

IL_006c:
	{
		V_3 = (bool)G_B8_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0093;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_15;
		L_15 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_16 = ___token0;
		NullCheck(L_16);
		int8_t L_17;
		L_17 = VirtualFuncInvoker0< int8_t >::Invoke(4 /* Mapbox.Json.Bson.BsonType Mapbox.Json.Bson.BsonToken::get_Type() */, L_16);
		int8_t L_18 = L_17;
		RuntimeObject* L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonType_t9F7E06B1805EDD8C0A94188EA357B3D92A3E7A6D_il2cpp_TypeInfo_var)), &L_18);
		String_t* L_20;
		L_20 = StringUtils_FormatWith_mC9CE0D3DDDE9E57C4812561FCA179F29AE68BEA1(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4C48A326ACCC25E558DC329A6C92D8184942B973)), L_15, L_19, NULL);
		JsonWriterException_t64203323809F24258C2DD39887A1143A8B490FCB* L_21;
		L_21 = JsonWriterException_Create_mD009AB0881993AF9E5BF137CDEDC40632B67E5C5(__this, L_20, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12_RuntimeMethod_var)));
	}

IL_0093:
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_22 = ___token0;
		__this->____parent_16 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_16), (void*)L_22);
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_23 = ___token0;
		__this->____root_15 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root_15), (void*)L_23);
	}

IL_00a2:
	{
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mE1D18A17AD07DCBA2F9C78E23485E38E2609252D (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		JsonWriter_WriteValue_m57D0245FD258312645471B3BAAB9EFC879636B94(__this, L_0, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteNull_mF7BA988C9DA1448B0A8C3FBBFB35C289A8163E78 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteNull_m79158BFFC7088255E6EBECBBD461F52FDFD3C152(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var);
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = ((BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var))->___Null_2;
		BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12(__this, L_0, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteUndefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteUndefined_m51694079F9F780C6CB22794ACF49EA1508744FB6 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_WriteUndefined_mD4D7F40BA3AD0620A803CB91812D371CB7493031(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var);
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = ((BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var))->___Undefined_3;
		BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12(__this, L_0, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m0ECC067B6F7DA5747B12E313BF2E8AA801E0AC6A (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* G_B2_0 = NULL;
	BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* G_B1_0 = NULL;
	BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* G_B3_0 = NULL;
	BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* G_B3_1 = NULL;
	{
		String_t* L_0 = ___value0;
		JsonWriter_WriteValue_m327941C893EB04ED3743B135DCE2DA8076D81293(__this, L_0, NULL);
		String_t* L_1 = ___value0;
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ___value0;
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_3 = (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF*)il2cpp_codegen_object_new(BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonString__ctor_m9B6A87F650F0F55CCDDAD2408A4196EB5C83477D(L_3, L_2, (bool)1, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var);
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_4 = ((BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_StaticFields*)il2cpp_codegen_static_fields_for(BsonEmpty_t9F691D41D5CB7492596B8F8C22C74C3E65A988E5_il2cpp_TypeInfo_var))->___Null_2;
		G_B3_0 = ((BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF*)(L_4));
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		NullCheck(G_B3_1);
		BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12(G_B3_1, G_B3_0, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m19DF37A24E644D5F0E20D210B8BA44056D7FFA8D (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		JsonWriter_WriteValue_m8B24BE5094BFB45664DCDF33CCBB292B631975CB(__this, L_0, NULL);
		int32_t L_1 = ___value0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mEB77580C13C5F6D9D2AAB70D23EA56DB572E1FDF (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		uint32_t L_0 = ___value0;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)2147483647LL))))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		JsonWriterException_t64203323809F24258C2DD39887A1143A8B490FCB* L_2;
		L_2 = JsonWriterException_Create_mD009AB0881993AF9E5BF137CDEDC40632B67E5C5(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37FDA2B361182A202537DCA1203AB3BEC2779E2F)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteValue_mEB77580C13C5F6D9D2AAB70D23EA56DB572E1FDF_RuntimeMethod_var)));
	}

IL_001b:
	{
		uint32_t L_3 = ___value0;
		JsonWriter_WriteValue_mF8442D41D1EB788EF87D381DF8186EE825CB9BC4(__this, L_3, NULL);
		uint32_t L_4 = ___value0;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_5);
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, L_6, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m9E02B3DBD5833FD4074BBD716CE22A9367A74F17 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___value0;
		JsonWriter_WriteValue_mFBCCE6E0D7A024055D2E32835ADE24123C8DE558(__this, L_0, NULL);
		int64_t L_1 = ___value0;
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, L_3, ((int32_t)18), NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m52843087A675F962727C7725035AD2C8381F660F (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		uint64_t L_0 = ___value0;
		V_0 = (bool)((!(((uint64_t)L_0) <= ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)()))))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		JsonWriterException_t64203323809F24258C2DD39887A1143A8B490FCB* L_2;
		L_2 = JsonWriterException_Create_mD009AB0881993AF9E5BF137CDEDC40632B67E5C5(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral013D189FFF6214B6307FB356F81DB4FD46A89D0E)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteValue_m52843087A675F962727C7725035AD2C8381F660F_RuntimeMethod_var)));
	}

IL_001f:
	{
		uint64_t L_3 = ___value0;
		JsonWriter_WriteValue_m757D59315B2410B145DFB168BDF6C1AA435B1E1E(__this, L_3, NULL);
		uint64_t L_4 = ___value0;
		uint64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_5);
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, L_6, ((int32_t)18), NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mDF977680108CAFC19845E675D5B89E435E73D411 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		JsonWriter_WriteValue_mA43F0B47117AF435383945F89A607F7C3A89ABE8(__this, L_0, NULL);
		float L_1 = ___value0;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, L_3, 1, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m97A51927300E3C2D118C481DA1BA4FE5B7C81AF5 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		JsonWriter_WriteValue_m1D0605644D4FEC35B8DB362E1EC745931A6A1F57(__this, L_0, NULL);
		double L_1 = ___value0;
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, L_3, 1, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m59328C56984EF76F03ABCC8947F6D8C92C42BC2A (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* G_B2_0 = NULL;
	BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* G_B1_0 = NULL;
	BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C* G_B3_0 = NULL;
	BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		JsonWriter_WriteValue_m06A36155A2625050723D29B7094B61A54342CC23(__this, L_0, NULL);
		bool L_1 = ___value0;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var);
		BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C* L_2 = ((BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var))->___False_4;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var);
		BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C* L_3 = ((BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_StaticFields*)il2cpp_codegen_static_fields_for(BsonBoolean_tE883998FE08C71A42B3D31951B97746F9282602C_il2cpp_TypeInfo_var))->___True_5;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		NullCheck(G_B3_1);
		BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12(G_B3_1, G_B3_0, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mFF1F0A530B72E8C27F09AE4A48C489DE3006B76D (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int16_t L_0 = ___value0;
		JsonWriter_WriteValue_mC84022E01C5321B0F6CBCA8C3B3E00D2C3E18C29(__this, L_0, NULL);
		int16_t L_1 = ___value0;
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_mB99E8196F5AEFF6CC27007102DD2229FB0769337 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ___value0;
		JsonWriter_WriteValue_mE7EFE86FC8D53A20D8EA400EF981F96F30232CA5(__this, L_0, NULL);
		uint16_t L_1 = ___value0;
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m740EAD3B14C2577E5481F8BBDFA5B444B83D691A (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Il2CppChar L_0 = ___value0;
		JsonWriter_WriteValue_m234B67022A6DC905CE61FA2B843DEE44C67D5E7D(__this, L_0, NULL);
		V_0 = (String_t*)NULL;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_2;
		L_2 = Char_ToString_m34499826F048A38EB8216D5844A5DA49F54719C8((&___value0), L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_4 = (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF*)il2cpp_codegen_object_new(BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BsonString__ctor_m9B6A87F650F0F55CCDDAD2408A4196EB5C83477D(L_4, L_3, (bool)1, NULL);
		BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12(__this, L_4, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m81B5847956B9575D70EDB8B3D146B33C826A48F1 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___value0;
		JsonWriter_WriteValue_mACD2E6ADD9639D2376CDED38F8488C6C939BE386(__this, L_0, NULL);
		uint8_t L_1 = ___value0;
		uint8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m710BDE1D978814ECB66D8DA267C44F8887044F6C (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, int8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int8_t L_0 = ___value0;
		JsonWriter_WriteValue_mA7CBE33F2D802A843DFEAD545F669D1E66D6E055(__this, L_0, NULL);
		int8_t L_1 = ___value0;
		int8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, L_3, ((int32_t)16), NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m890A047DAB0DB5E0F02A70BCB03CCDA844DAA3E6 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		JsonWriter_WriteValue_m624570D7886863EE6FD6379BB7CB3B137D126A7B(__this, L_0, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ___value0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = L_1;
		RuntimeObject* L_3 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, L_3, 1, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m285906ADBD3A8297D5F161E6B495A26CDB7FB315 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeUtils_t8E988632A08EDACE43652EADEF6F28FE355DC0AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		JsonWriter_WriteValue_m7B36690404B526044BFB08006CFD0B9E4C4B3324(__this, L_0, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___value0;
		int32_t L_2;
		L_2 = JsonWriter_get_DateTimeZoneHandling_m1F2F7F73014392B7B0C81951D27F79937B2937DF(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeUtils_t8E988632A08EDACE43652EADEF6F28FE355DC0AC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTimeUtils_EnsureDateTime_mCF4EF2B9FEF732DF77DC9DF932A30F85D345D16D(L_1, L_2, NULL);
		___value0 = L_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = ___value0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = L_4;
		RuntimeObject* L_6 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_5);
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, L_6, ((int32_t)9), NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m4AE5B01E64CA49730B62E0B67E18534046699AFA (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_0 = ___value0;
		JsonWriter_WriteValue_m935DF5A62B016C7CCEEE269172BEC92DD72FB5CC(__this, L_0, NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_1 = ___value0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_2 = L_1;
		RuntimeObject* L_3 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_2);
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, L_3, ((int32_t)9), NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m37673A95A4DE54A1898C54F7D008D0E8FB5D4C0E (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		VirtualActionInvoker0::Invoke(22 /* System.Void Mapbox.Json.JsonWriter::WriteNull() */, __this);
		goto IL_0029;
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___value0;
		JsonWriter_WriteValue_mAD94EEA70AB5A9CF063DBE740B42439D937AF3CE(__this, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___value0;
		BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* L_4 = (BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743*)il2cpp_codegen_object_new(BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BsonBinary__ctor_m1D7304B7DC2E5EB27DDCF48069334EE415056017(L_4, L_3, 0, NULL);
		BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12(__this, L_4, NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m9CB92F5C8624AA727ACF4F8B5357166EC5D99690 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t L_0 = ___value0;
		JsonWriter_WriteValue_mCF5C669D03F88A045C1AB51B399CA5FBA11F6CEE(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9((&___value0), NULL);
		BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* L_2 = (BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743*)il2cpp_codegen_object_new(BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonBinary__ctor_m1D7304B7DC2E5EB27DDCF48069334EE415056017(L_2, L_1, 4, NULL);
		BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12(__this, L_2, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m29C35541D8E2BA2C786B6A905DC901761F9E08F2 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___value0;
		JsonWriter_WriteValue_m9F9A72D76B4BF3C804D75198E745A1D62840564F(__this, L_0, NULL);
		String_t* L_1;
		L_1 = TimeSpan_ToString_m44D5BF48E35E18BB8B99A86B6535DA5E847FFE92((&___value0), NULL);
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_2 = (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF*)il2cpp_codegen_object_new(BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BsonString__ctor_m9B6A87F650F0F55CCDDAD2408A4196EB5C83477D(L_2, L_1, (bool)1, NULL);
		BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12(__this, L_2, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteValue(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteValue_m241ED440DDA0C1C32F51433658F7B92A032A9B26 (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Uri_op_Equality_mD7D7AAB7023C0873B37D8B8C7195BEF34002A194(L_0, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		VirtualActionInvoker0::Invoke(22 /* System.Void Mapbox.Json.JsonWriter::WriteNull() */, __this);
		goto IL_0031;
	}

IL_0016:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = ___value0;
		JsonWriter_WriteValue_m220B3B8AF44D9E16462F7242FC9D99C7B5DD5F9C(__this, L_3, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = ___value0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_6 = (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF*)il2cpp_codegen_object_new(BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		BsonString__ctor_m9B6A87F650F0F55CCDDAD2408A4196EB5C83477D(L_6, L_5, (bool)1, NULL);
		BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12(__this, L_6, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteObjectId(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteObjectId_m8CCDD6623A6351F0FF838CC71EF6AC7D7B4DE04C (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		ValidationUtils_ArgumentNotNull_m99B404ADE499F4D8BCC9A8637E084100E511C974((RuntimeObject*)L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___value0;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		JsonWriterException_t64203323809F24258C2DD39887A1143A8B490FCB* L_3;
		L_3 = JsonWriterException_Create_mD009AB0881993AF9E5BF137CDEDC40632B67E5C5(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral161567E318CEB965509FE84CE4198A12E62440AF)), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonWriter_WriteObjectId_m8CCDD6623A6351F0FF838CC71EF6AC7D7B4DE04C_RuntimeMethod_var)));
	}

IL_0029:
	{
		JsonWriter_UpdateScopeWithFinishedValue_mAA5018ABDE05337A6AEC2DDBC36F2F7A1F2E3D2F(__this, NULL);
		JsonWriter_AutoComplete_mFA90823128389B616765C32C2A9BF2B9FA68C4D2(__this, ((int32_t)12), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___value0;
		BsonWriter_AddValue_m5B10D639F388F9AC5D8718E0773476DD83B05BD9(__this, (RuntimeObject*)L_4, 7, NULL);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonWriter::WriteRegex(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRegex_m8FE7F57D278409484B555D75B3114D53A0F1419A (BsonWriter_t57CA11354D81828E2E9D6C10BCEFAC55A6BFF589* __this, String_t* ___pattern0, String_t* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___pattern0;
		ValidationUtils_ArgumentNotNull_m99B404ADE499F4D8BCC9A8637E084100E511C974(L_0, _stringLiteralD8CD2F2DA1948373D6BFA8C44122166BC25E3FC0, NULL);
		JsonWriter_UpdateScopeWithFinishedValue_mAA5018ABDE05337A6AEC2DDBC36F2F7A1F2E3D2F(__this, NULL);
		JsonWriter_AutoComplete_mFA90823128389B616765C32C2A9BF2B9FA68C4D2(__this, ((int32_t)12), NULL);
		String_t* L_1 = ___pattern0;
		String_t* L_2 = ___options1;
		BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* L_3 = (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32*)il2cpp_codegen_object_new(BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BsonRegex__ctor_m826B79D0D51E405BA482E0DCADA290E632C84AFF(L_3, L_1, L_2, NULL);
		BsonWriter_AddToken_mD51C45F49735528C78EFB6D5EBD88E807DEEBF12(__this, L_3, NULL);
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
// System.Byte[] Mapbox.Json.Bson.BsonObjectId::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BsonObjectId_get_Value_mD70CBF48947568E8FECBECA36BB40A1E0A98DEBF (BsonObjectId_t768D77472D02C64230C469A2609D5F10920D915B* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Mapbox.Json.Bson.BsonObjectId::set_Value(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObjectId_set_Value_mB2CBEAD50CC497F3A233A8E7487F1CEAACC2F196 (BsonObjectId_t768D77472D02C64230C469A2609D5F10920D915B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Mapbox.Json.Bson.BsonObjectId::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonObjectId__ctor_m88B0E9AC984AFB481D3CEFF61A513FE9500F5C0F (BsonObjectId_t768D77472D02C64230C469A2609D5F10920D915B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		ValidationUtils_ArgumentNotNull_m99B404ADE499F4D8BCC9A8637E084100E511C974((RuntimeObject*)L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___value0;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)((int32_t)12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD76F2E16F30EA8C8C52D4ABD70B672BC7A3AEAB2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BsonObjectId__ctor_m88B0E9AC984AFB481D3CEFF61A513FE9500F5C0F_RuntimeMethod_var)));
	}

IL_0033:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___value0;
		BsonObjectId_set_Value_mB2CBEAD50CC497F3A233A8E7487F1CEAACC2F196_inline(__this, L_4, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m4A78090B79C7E3CD0AB07CDEADEA76150F90C044 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDeclaration_get_Version_m50261F1E46B645E69A99504F494FFD3BF915E633_inline (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___version_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDeclaration_get_Encoding_m09D89DCD8457C62A6E49B9506A65A271DDBD011F_inline (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___encoding_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDeclaration_get_Standalone_m46CC1833EE3C478318FF865E98A6899E440DDC6C_inline (XmlDeclaration_tA04662FA58C306A24C864BDE73D1B410858E7A79* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___standalone_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_SystemId_m17B225C509C0F5A4ECBB838AA81D15DED4016909_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___systemId_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_PublicId_m9E81FAF2D0AA9DC847D118813CBEB085F0CE1955_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___publicId_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlDocumentType_get_InternalSubset_mBD8D585ED0401EE1FC02F6FD5445E2109B083FEF_inline (XmlDocumentType_tFD7379E45412FC2EBD65280ED3DE7A1C941A8D9E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___internalSubset_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDeclarationWrapper_set_Declaration_m8BDFA5A476DBAC0D90BA8A04F0CFA00799C359CF_inline (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ___value0, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0 = ___value0;
		__this->___U3CDeclarationU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDeclarationU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* XDeclarationWrapper_get_Declaration_m0648B146E73B0281844EB091BDE77D15B198461A_inline (XDeclarationWrapper_tC10A13FB460E8207CE2DF0AF3CCF65A25F9CC45E* __this, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0 = __this->___U3CDeclarationU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Version_m675EDE875CAF23C6801015479393247D2B8A05E7_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____version_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Encoding_mA27D7E3A1673EE7D2A52F7D93A17FD9A33C4D5E0_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____encoding_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDeclaration_set_Encoding_m13C45B72D33CFE9CCBA3450D0D3DF6A56D46CCD9_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____encoding_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____encoding_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDeclaration_get_Standalone_mCC775D6A93C6ED7C87BFFA4E3565675B4139CE7D_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____standalone_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDeclaration_set_Standalone_mBFF62587A08487D5C7332D76AD4D3C55FB81BF33_inline (XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____standalone_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____standalone_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_Name_m297D10AE558AA29F11E05CCAEF2D74C43F980AE9_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____name_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_SystemId_m864BD298982BDA1D5B9C4DB6CB904B78FAFA04A7_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____systemId_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_PublicId_mAFD124B111C0B665C14A2078EE4E30C28F1854FC_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____publicId_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XDocumentType_get_InternalSubset_m6914F698B32A68A55C15AD4B971FEBFA85183DA1_inline (XDocumentType_t195D491B418C3696FBCAEE34E53D734E0B53A817* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____internalSubset_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* XDocument_get_Declaration_m54F6FE679582E4CC7FBC6FD3565260BC308D98CA_inline (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0 = __this->____declaration_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XDocument_set_Declaration_m3DAB9857DC323A55ABA6F973614AABE5FB59A672_inline (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ___value0, const RuntimeMethod* method) 
{
	{
		XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* L_0 = ___value0;
		__this->____declaration_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____declaration_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XText_get_Value_m5B2A033755DE27DEC73860B9E94AA41BB55E208C_inline (XText_t006159E7F735736D41BBC0738FFB066A14B31AE2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___text_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XComment_get_Value_mD2D3D9900752AD9FA019947C965FF6FAF2B3E7DA_inline (XComment_t2FD9205AC70AF739D97E5CE8B1CC29459191F43D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___value_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XProcessingInstruction_get_Target_mBB98BD38B91EBDC03558F4990591BE33FC1EB0DE_inline (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___target_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XProcessingInstruction_get_Data_mF06C89FCF9F580497E3B59331676AFC9AA3F416B_inline (XProcessingInstruction_t920C9022DAD590F61972E400D46FC1C443265795* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___data_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XAttribute_get_Value_mDCE15378AC161DF20094EF77EFF017A6F6766EB1_inline (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___value_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XAttribute_get_Name_m5EB28279BB8BB19266997CB15733BD72CFB1DCB1_inline (XAttribute_tA7C325029CA82AA067080AEA6BDDC52E08987FDF* __this, const RuntimeMethod* method) 
{
	{
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_0 = __this->___name_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XName_get_LocalName_m4CA50C151ADB8183972EA556868148AF0F5BED75_inline (XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____localName_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* XElement_get_Name_mAF691F0AFE4F732FE836AEAC566536C1231AA74D_inline (XElement_t545ABA4BFF2045168A2E472A68FE2FCAA5E1F909* __this, const RuntimeMethod* method) 
{
	{
		XName_tAF6D9533A7D11AC27118F656985AC325C2A50E5C* L_0 = __this->___name_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_OmitRootObject_m9DE79B549A43F09B4B1E32D4D2884814EEF438D0_inline (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3COmitRootObjectU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XmlNodeConverter_get_DeserializeRootElementName_m63868C331A460D89644180CDA035032E503B68EB_inline (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDeserializeRootElementNameU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XmlNodeConverter_get_WriteArrayAttribute_m20361156D5F9DCCF34428D0D8019CC5D9DA08AEB_inline (XmlNodeConverter_t8E6B2F210D400261BCC7797F24DCE54AFB02E8F9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CWriteArrayAttributeU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinaryWriter_set_DateTimeKindHandling_m9784B0D935227D6F5FEFA90A9A5A2922151F52D9_inline (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDateTimeKindHandlingU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonToken_get_CalculatedSize_m01453B84E1D67C1030D478C7C21D57171B1EB1B3_inline (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCalculatedSizeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* BsonProperty_get_Value_mBE4596AD58E9F63AA81C15D3F5C761CC85B58FB4_inline (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* BsonProperty_get_Name_m65D854351FC3F54004885367CE6F069138EA2D60_inline (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonString_get_ByteCount_mEF2800D322BC09FAF0919B6558A5CC558612E052_inline (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CByteCountU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BsonBinaryWriter_get_DateTimeKindHandling_m48A909892A9B9F7763DB0089B4AAC5267D3191A0_inline (BsonBinaryWriter_t373FED5C91B053559C1A19F08BF94C4576A6B066* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDateTimeKindHandlingU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BsonBinary_get_BinaryType_m5FED0D314A30309D1595CBB52EDE39073F3CA9CA_inline (BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___U3CBinaryTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* BsonRegex_get_Pattern_m36879EB708797B79197B819554E1BD6A991A841E_inline (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_0 = __this->___U3CPatternU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* BsonRegex_get_Options_m8F99D03B24CD4C983ADFA8B75F0132754FED99FC_inline (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, const RuntimeMethod* method) 
{
	{
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_0 = __this->___U3COptionsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_CalculatedSize_m08934C5720485BDB0A3FABFE97DA80DDC605DFD7_inline (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCalculatedSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonString_set_ByteCount_mE7E976EB6563475F6249A35DF1CF4CE9E5AEF6D4_inline (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CByteCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BsonString_get_IncludeLength_m5C733F8EB1568A0E38BA95FF7672F2F78EEE8A32_inline (BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeLengthU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_CloseInput_m51AE195DBA1B5EFF8B9DC87B3D0FF9571BEEC51F_inline (JsonReader_tCEF9F537128431F2581DD11CE66D17F9C2618416* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCloseInputU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Name_m4E44D5817F32C0A44B53049CE0E9860A3529F4DF_inline (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonProperty_set_Value_m6262FA6F4DB2A07775283502E1C601C86BE22347_inline (BsonProperty_t8645697A0A4C679375C26EA4E11969C3995EEEB7* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___value0, const RuntimeMethod* method) 
{
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonToken_set_Parent_m040E360901B30DD918486B8B77556931A6CF2B78_inline (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* ___value0, const RuntimeMethod* method) 
{
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = ___value0;
		__this->___U3CParentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonBinary_set_BinaryType_m23CE616B32B60E52F61256013D7F19BF3ED84408_inline (BsonBinary_t131E8AF5D5C95B403EA65A0B01554ACA7BF3B743* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___U3CBinaryTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Pattern_mE0B87BC70E119C6E9128D09A9FB074125DF147D2_inline (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_0 = ___value0;
		__this->___U3CPatternU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPatternU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonRegex_set_Options_m9FCF2D68FE87670FC2B423CE7F721F5A070F9879_inline (BsonRegex_tFF995054199214BE66F912EDC362D26F6671FE32* __this, BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* ___value0, const RuntimeMethod* method) 
{
	{
		BsonString_t60E4350470C82C7CAC35ECC5EDF3AA19206FB2FF* L_0 = ___value0;
		__this->___U3COptionsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriter_get_CloseOutput_m3ACB637809C079F2607259E59A17B6638D481891_inline (JsonWriter_t9234CB10B45B32FE36E8B357F5646AAB98473CEF* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCloseOutputU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* BsonToken_get_Parent_mE73528DB8EB7A79693941A6C276F7B61F0B0AAFE_inline (BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* __this, const RuntimeMethod* method) 
{
	{
		BsonToken_tE2E57B3FD96F9F58F1B8E76704CA8CF6EAC1173A* L_0 = __this->___U3CParentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BsonObjectId_set_Value_mB2CBEAD50CC497F3A233A8E7487F1CEAACC2F196_inline (BsonObjectId_t768D77472D02C64230C469A2609D5F10920D915B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_0), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
