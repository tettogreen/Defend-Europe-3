#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.UInt32[]
struct UInt32U5BU5D_t155030608;
// System.IntPtr[]
struct IntPtrU5BU5D_t4047608718;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t2872950316;
// System.Char[]
struct CharU5BU5D_t3855443485;
// System.Byte[]
struct ByteU5BU5D_t3520677791;
// Ionic.Zlib.DeflateManager
struct DeflateManager_t1109655566;
// Ionic.Zlib.InflateManager
struct InflateManager_t2253732480;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef CRC32_T1917040655_H
#define CRC32_T1917040655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Crc.CRC32
struct  CRC32_t1917040655  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.UInt32 Ionic.Crc.CRC32::dwPolynomial
	uint32_t ___dwPolynomial_0;
	// System.Int64 Ionic.Crc.CRC32::_TotalBytesRead
	int64_t ____TotalBytesRead_1;
	// System.Boolean Ionic.Crc.CRC32::reverseBits
	bool ___reverseBits_2;
	// System.UInt32[] Ionic.Crc.CRC32::crc32Table
	UInt32U5BU5D_t155030608* ___crc32Table_3;
	// System.UInt32 Ionic.Crc.CRC32::_register
	uint32_t ____register_5;

public:
	inline static int32_t get_offset_of_dwPolynomial_0() { return static_cast<int32_t>(offsetof(CRC32_t1917040655, ___dwPolynomial_0)); }
	inline uint32_t get_dwPolynomial_0() const { return ___dwPolynomial_0; }
	inline uint32_t* get_address_of_dwPolynomial_0() { return &___dwPolynomial_0; }
	inline void set_dwPolynomial_0(uint32_t value)
	{
		___dwPolynomial_0 = value;
	}

	inline static int32_t get_offset_of__TotalBytesRead_1() { return static_cast<int32_t>(offsetof(CRC32_t1917040655, ____TotalBytesRead_1)); }
	inline int64_t get__TotalBytesRead_1() const { return ____TotalBytesRead_1; }
	inline int64_t* get_address_of__TotalBytesRead_1() { return &____TotalBytesRead_1; }
	inline void set__TotalBytesRead_1(int64_t value)
	{
		____TotalBytesRead_1 = value;
	}

	inline static int32_t get_offset_of_reverseBits_2() { return static_cast<int32_t>(offsetof(CRC32_t1917040655, ___reverseBits_2)); }
	inline bool get_reverseBits_2() const { return ___reverseBits_2; }
	inline bool* get_address_of_reverseBits_2() { return &___reverseBits_2; }
	inline void set_reverseBits_2(bool value)
	{
		___reverseBits_2 = value;
	}

	inline static int32_t get_offset_of_crc32Table_3() { return static_cast<int32_t>(offsetof(CRC32_t1917040655, ___crc32Table_3)); }
	inline UInt32U5BU5D_t155030608* get_crc32Table_3() const { return ___crc32Table_3; }
	inline UInt32U5BU5D_t155030608** get_address_of_crc32Table_3() { return &___crc32Table_3; }
	inline void set_crc32Table_3(UInt32U5BU5D_t155030608* value)
	{
		___crc32Table_3 = value;
		Il2CppCodeGenWriteBarrier((&___crc32Table_3), value);
	}

	inline static int32_t get_offset_of__register_5() { return static_cast<int32_t>(offsetof(CRC32_t1917040655, ____register_5)); }
	inline uint32_t get__register_5() const { return ____register_5; }
	inline uint32_t* get_address_of__register_5() { return &____register_5; }
	inline void set__register_5(uint32_t value)
	{
		____register_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRC32_T1917040655_H
#ifndef EXCEPTION_T2399930497_H
#define EXCEPTION_T2399930497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2399930497  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4047608718* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2399930497 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2399930497, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4047608718* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4047608718** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4047608718* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2399930497, ___inner_exception_1)); }
	inline Exception_t2399930497 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2399930497 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2399930497 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2399930497, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2399930497, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2399930497, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2399930497, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2399930497, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2399930497, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2399930497, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2399930497, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2399930497, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T2399930497_H
#ifndef VALUETYPE_T4023604559_H
#define VALUETYPE_T4023604559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4023604559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4023604559_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4023604559_marshaled_com
{
};
#endif // VALUETYPE_T4023604559_H
#ifndef ZLIBEXCEPTION_T1048940463_H
#define ZLIBEXCEPTION_T1048940463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zlib.ZlibException
struct  ZlibException_t1048940463  : public Exception_t2399930497
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBEXCEPTION_T1048940463_H
#ifndef ENUM_T1400231720_H
#define ENUM_T1400231720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1400231720  : public ValueType_t4023604559
{
public:

public:
};

struct Enum_t1400231720_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3855443485* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1400231720_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3855443485* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3855443485** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3855443485* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1400231720_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1400231720_marshaled_com
{
};
#endif // ENUM_T1400231720_H
#ifndef COMPRESSIONLEVEL_T1528055477_H
#define COMPRESSIONLEVEL_T1528055477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zlib.CompressionLevel
struct  CompressionLevel_t1528055477 
{
public:
	// System.Int32 Ionic.Zlib.CompressionLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionLevel_t1528055477, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONLEVEL_T1528055477_H
#ifndef COMPRESSIONSTRATEGY_T1194678829_H
#define COMPRESSIONSTRATEGY_T1194678829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zlib.CompressionStrategy
struct  CompressionStrategy_t1194678829 
{
public:
	// System.Int32 Ionic.Zlib.CompressionStrategy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionStrategy_t1194678829, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONSTRATEGY_T1194678829_H
#ifndef ZLIBCODEC_T1242739123_H
#define ZLIBCODEC_T1242739123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zlib.ZlibCodec
struct  ZlibCodec_t1242739123  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Byte[] Ionic.Zlib.ZlibCodec::InputBuffer
	ByteU5BU5D_t3520677791* ___InputBuffer_0;
	// System.Int32 Ionic.Zlib.ZlibCodec::NextIn
	int32_t ___NextIn_1;
	// System.Int32 Ionic.Zlib.ZlibCodec::AvailableBytesIn
	int32_t ___AvailableBytesIn_2;
	// System.Int64 Ionic.Zlib.ZlibCodec::TotalBytesIn
	int64_t ___TotalBytesIn_3;
	// System.Byte[] Ionic.Zlib.ZlibCodec::OutputBuffer
	ByteU5BU5D_t3520677791* ___OutputBuffer_4;
	// System.Int32 Ionic.Zlib.ZlibCodec::NextOut
	int32_t ___NextOut_5;
	// System.Int32 Ionic.Zlib.ZlibCodec::AvailableBytesOut
	int32_t ___AvailableBytesOut_6;
	// System.Int64 Ionic.Zlib.ZlibCodec::TotalBytesOut
	int64_t ___TotalBytesOut_7;
	// System.String Ionic.Zlib.ZlibCodec::Message
	String_t* ___Message_8;
	// Ionic.Zlib.DeflateManager Ionic.Zlib.ZlibCodec::dstate
	DeflateManager_t1109655566 * ___dstate_9;
	// Ionic.Zlib.InflateManager Ionic.Zlib.ZlibCodec::istate
	InflateManager_t2253732480 * ___istate_10;
	// System.UInt32 Ionic.Zlib.ZlibCodec::_Adler32
	uint32_t ____Adler32_11;
	// Ionic.Zlib.CompressionLevel Ionic.Zlib.ZlibCodec::CompressLevel
	int32_t ___CompressLevel_12;
	// System.Int32 Ionic.Zlib.ZlibCodec::WindowBits
	int32_t ___WindowBits_13;
	// Ionic.Zlib.CompressionStrategy Ionic.Zlib.ZlibCodec::Strategy
	int32_t ___Strategy_14;

public:
	inline static int32_t get_offset_of_InputBuffer_0() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___InputBuffer_0)); }
	inline ByteU5BU5D_t3520677791* get_InputBuffer_0() const { return ___InputBuffer_0; }
	inline ByteU5BU5D_t3520677791** get_address_of_InputBuffer_0() { return &___InputBuffer_0; }
	inline void set_InputBuffer_0(ByteU5BU5D_t3520677791* value)
	{
		___InputBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___InputBuffer_0), value);
	}

	inline static int32_t get_offset_of_NextIn_1() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___NextIn_1)); }
	inline int32_t get_NextIn_1() const { return ___NextIn_1; }
	inline int32_t* get_address_of_NextIn_1() { return &___NextIn_1; }
	inline void set_NextIn_1(int32_t value)
	{
		___NextIn_1 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesIn_2() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___AvailableBytesIn_2)); }
	inline int32_t get_AvailableBytesIn_2() const { return ___AvailableBytesIn_2; }
	inline int32_t* get_address_of_AvailableBytesIn_2() { return &___AvailableBytesIn_2; }
	inline void set_AvailableBytesIn_2(int32_t value)
	{
		___AvailableBytesIn_2 = value;
	}

	inline static int32_t get_offset_of_TotalBytesIn_3() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___TotalBytesIn_3)); }
	inline int64_t get_TotalBytesIn_3() const { return ___TotalBytesIn_3; }
	inline int64_t* get_address_of_TotalBytesIn_3() { return &___TotalBytesIn_3; }
	inline void set_TotalBytesIn_3(int64_t value)
	{
		___TotalBytesIn_3 = value;
	}

	inline static int32_t get_offset_of_OutputBuffer_4() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___OutputBuffer_4)); }
	inline ByteU5BU5D_t3520677791* get_OutputBuffer_4() const { return ___OutputBuffer_4; }
	inline ByteU5BU5D_t3520677791** get_address_of_OutputBuffer_4() { return &___OutputBuffer_4; }
	inline void set_OutputBuffer_4(ByteU5BU5D_t3520677791* value)
	{
		___OutputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___OutputBuffer_4), value);
	}

	inline static int32_t get_offset_of_NextOut_5() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___NextOut_5)); }
	inline int32_t get_NextOut_5() const { return ___NextOut_5; }
	inline int32_t* get_address_of_NextOut_5() { return &___NextOut_5; }
	inline void set_NextOut_5(int32_t value)
	{
		___NextOut_5 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesOut_6() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___AvailableBytesOut_6)); }
	inline int32_t get_AvailableBytesOut_6() const { return ___AvailableBytesOut_6; }
	inline int32_t* get_address_of_AvailableBytesOut_6() { return &___AvailableBytesOut_6; }
	inline void set_AvailableBytesOut_6(int32_t value)
	{
		___AvailableBytesOut_6 = value;
	}

	inline static int32_t get_offset_of_TotalBytesOut_7() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___TotalBytesOut_7)); }
	inline int64_t get_TotalBytesOut_7() const { return ___TotalBytesOut_7; }
	inline int64_t* get_address_of_TotalBytesOut_7() { return &___TotalBytesOut_7; }
	inline void set_TotalBytesOut_7(int64_t value)
	{
		___TotalBytesOut_7 = value;
	}

	inline static int32_t get_offset_of_Message_8() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___Message_8)); }
	inline String_t* get_Message_8() const { return ___Message_8; }
	inline String_t** get_address_of_Message_8() { return &___Message_8; }
	inline void set_Message_8(String_t* value)
	{
		___Message_8 = value;
		Il2CppCodeGenWriteBarrier((&___Message_8), value);
	}

	inline static int32_t get_offset_of_dstate_9() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___dstate_9)); }
	inline DeflateManager_t1109655566 * get_dstate_9() const { return ___dstate_9; }
	inline DeflateManager_t1109655566 ** get_address_of_dstate_9() { return &___dstate_9; }
	inline void set_dstate_9(DeflateManager_t1109655566 * value)
	{
		___dstate_9 = value;
		Il2CppCodeGenWriteBarrier((&___dstate_9), value);
	}

	inline static int32_t get_offset_of_istate_10() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___istate_10)); }
	inline InflateManager_t2253732480 * get_istate_10() const { return ___istate_10; }
	inline InflateManager_t2253732480 ** get_address_of_istate_10() { return &___istate_10; }
	inline void set_istate_10(InflateManager_t2253732480 * value)
	{
		___istate_10 = value;
		Il2CppCodeGenWriteBarrier((&___istate_10), value);
	}

	inline static int32_t get_offset_of__Adler32_11() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ____Adler32_11)); }
	inline uint32_t get__Adler32_11() const { return ____Adler32_11; }
	inline uint32_t* get_address_of__Adler32_11() { return &____Adler32_11; }
	inline void set__Adler32_11(uint32_t value)
	{
		____Adler32_11 = value;
	}

	inline static int32_t get_offset_of_CompressLevel_12() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___CompressLevel_12)); }
	inline int32_t get_CompressLevel_12() const { return ___CompressLevel_12; }
	inline int32_t* get_address_of_CompressLevel_12() { return &___CompressLevel_12; }
	inline void set_CompressLevel_12(int32_t value)
	{
		___CompressLevel_12 = value;
	}

	inline static int32_t get_offset_of_WindowBits_13() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___WindowBits_13)); }
	inline int32_t get_WindowBits_13() const { return ___WindowBits_13; }
	inline int32_t* get_address_of_WindowBits_13() { return &___WindowBits_13; }
	inline void set_WindowBits_13(int32_t value)
	{
		___WindowBits_13 = value;
	}

	inline static int32_t get_offset_of_Strategy_14() { return static_cast<int32_t>(offsetof(ZlibCodec_t1242739123, ___Strategy_14)); }
	inline int32_t get_Strategy_14() const { return ___Strategy_14; }
	inline int32_t* get_address_of_Strategy_14() { return &___Strategy_14; }
	inline void set_Strategy_14(int32_t value)
	{
		___Strategy_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZLIBCODEC_T1242739123_H



extern "C" void Context_t166864908_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Context_t166864908_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Context_t166864908_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Context_t166864908_0_0_0;
extern "C" void Escape_t3576775346_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Escape_t3576775346_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Escape_t3576775346_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Escape_t3576775346_0_0_0;
extern "C" void PreviousInfo_t1238721783_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PreviousInfo_t1238721783_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PreviousInfo_t1238721783_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PreviousInfo_t1238721783_0_0_0;
extern "C" void DelegatePInvokeWrapper_AppDomainInitializer_t2632965284();
extern const RuntimeType AppDomainInitializer_t2632965284_0_0_0;
extern "C" void DelegatePInvokeWrapper_Swapper_t3270531754();
extern const RuntimeType Swapper_t3270531754_0_0_0;
extern "C" void DictionaryEntry_t1303379016_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DictionaryEntry_t1303379016_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DictionaryEntry_t1303379016_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DictionaryEntry_t1303379016_0_0_0;
extern "C" void Slot_t3464408892_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Slot_t3464408892_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Slot_t3464408892_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Slot_t3464408892_0_0_0;
extern "C" void Slot_t3302539452_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Slot_t3302539452_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Slot_t3302539452_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Slot_t3302539452_0_0_0;
extern "C" void Enum_t1400231720_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Enum_t1400231720_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Enum_t1400231720_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Enum_t1400231720_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadDelegate_t3465774997();
extern const RuntimeType ReadDelegate_t3465774997_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteDelegate_t2205060900();
extern const RuntimeType WriteDelegate_t2205060900_0_0_0;
extern "C" void MonoIOStat_t362263380_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoIOStat_t362263380_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoIOStat_t362263380_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoIOStat_t362263380_0_0_0;
extern "C" void MonoEnumInfo_t1453046702_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoEnumInfo_t1453046702_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoEnumInfo_t1453046702_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoEnumInfo_t1453046702_0_0_0;
extern "C" void CustomAttributeNamedArgument_t569963932_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeNamedArgument_t569963932_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeNamedArgument_t569963932_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeNamedArgument_t569963932_0_0_0;
extern "C" void CustomAttributeTypedArgument_t144412556_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CustomAttributeTypedArgument_t144412556_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CustomAttributeTypedArgument_t144412556_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CustomAttributeTypedArgument_t144412556_0_0_0;
extern "C" void ILTokenInfo_t1398390389_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ILTokenInfo_t1398390389_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ILTokenInfo_t1398390389_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ILTokenInfo_t1398390389_0_0_0;
extern "C" void MonoEventInfo_t1657183547_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoEventInfo_t1657183547_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoEventInfo_t1657183547_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoEventInfo_t1657183547_0_0_0;
extern "C" void MonoMethodInfo_t2194443894_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoMethodInfo_t2194443894_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoMethodInfo_t2194443894_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoMethodInfo_t2194443894_0_0_0;
extern "C" void MonoPropertyInfo_t3437369751_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MonoPropertyInfo_t3437369751_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MonoPropertyInfo_t3437369751_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MonoPropertyInfo_t3437369751_0_0_0;
extern "C" void ParameterModifier_t613848083_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ParameterModifier_t613848083_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ParameterModifier_t613848083_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ParameterModifier_t613848083_0_0_0;
extern "C" void ResourceCacheItem_t79724623_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceCacheItem_t79724623_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceCacheItem_t79724623_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceCacheItem_t79724623_0_0_0;
extern "C" void ResourceInfo_t3569774406_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceInfo_t3569774406_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceInfo_t3569774406_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceInfo_t3569774406_0_0_0;
extern "C" void DelegatePInvokeWrapper_CrossContextDelegate_t2582950129();
extern const RuntimeType CrossContextDelegate_t2582950129_0_0_0;
extern "C" void DelegatePInvokeWrapper_CallbackHandler_t3242930979();
extern const RuntimeType CallbackHandler_t3242930979_0_0_0;
extern "C" void SerializationEntry_t754407873_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SerializationEntry_t754407873_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SerializationEntry_t754407873_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SerializationEntry_t754407873_0_0_0;
extern "C" void StreamingContext_t3795731521_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void StreamingContext_t3795731521_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void StreamingContext_t3795731521_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType StreamingContext_t3795731521_0_0_0;
extern "C" void DSAParameters_t1723723180_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DSAParameters_t1723723180_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DSAParameters_t1723723180_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DSAParameters_t1723723180_0_0_0;
extern "C" void RSAParameters_t1441126344_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RSAParameters_t1441126344_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RSAParameters_t1441126344_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RSAParameters_t1441126344_0_0_0;
extern "C" void SecurityFrame_t1804333161_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SecurityFrame_t1804333161_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SecurityFrame_t1804333161_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SecurityFrame_t1804333161_0_0_0;
extern "C" void DelegatePInvokeWrapper_ThreadStart_t3826805759();
extern const RuntimeType ThreadStart_t3826805759_0_0_0;
extern "C" void ValueType_t4023604559_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ValueType_t4023604559_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ValueType_t4023604559_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ValueType_t4023604559_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadMethod_t2306999011();
extern const RuntimeType ReadMethod_t2306999011_0_0_0;
extern "C" void DelegatePInvokeWrapper_UnmanagedReadOrWrite_t1236791671();
extern const RuntimeType UnmanagedReadOrWrite_t1236791671_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteMethod_t2412793751();
extern const RuntimeType WriteMethod_t2412793751_0_0_0;
extern "C" void DelegatePInvokeWrapper_ReadDelegate_t3069121600();
extern const RuntimeType ReadDelegate_t3069121600_0_0_0;
extern "C" void DelegatePInvokeWrapper_WriteDelegate_t1769534517();
extern const RuntimeType WriteDelegate_t1769534517_0_0_0;
extern "C" void DelegatePInvokeWrapper_SocketAsyncCall_t750759351();
extern const RuntimeType SocketAsyncCall_t750759351_0_0_0;
extern "C" void SocketAsyncResult_t2233500431_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SocketAsyncResult_t2233500431_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SocketAsyncResult_t2233500431_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SocketAsyncResult_t2233500431_0_0_0;
extern "C" void X509ChainStatus_t1034754694_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void X509ChainStatus_t1034754694_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void X509ChainStatus_t1034754694_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType X509ChainStatus_t1034754694_0_0_0;
extern "C" void IntStack_t3756491973_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void IntStack_t3756491973_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void IntStack_t3756491973_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType IntStack_t3756491973_0_0_0;
extern "C" void Interval_t4260430887_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Interval_t4260430887_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Interval_t4260430887_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Interval_t4260430887_0_0_0;
extern "C" void DelegatePInvokeWrapper_CostDelegate_t641283812();
extern const RuntimeType CostDelegate_t641283812_0_0_0;
extern "C" void UriScheme_t3399228718_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UriScheme_t3399228718_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UriScheme_t3399228718_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UriScheme_t3399228718_0_0_0;
extern "C" void DelegatePInvokeWrapper_Action_t1781176450();
extern const RuntimeType Action_t1781176450_0_0_0;
extern "C" void AnimationCurve_t3459038319_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationCurve_t3459038319_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationCurve_t3459038319_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationCurve_t3459038319_0_0_0;
extern "C" void AnimationEvent_t3281663458_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimationEvent_t3281663458_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimationEvent_t3281663458_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimationEvent_t3281663458_0_0_0;
extern "C" void AnimatorTransitionInfo_t2311541783_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AnimatorTransitionInfo_t2311541783_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AnimatorTransitionInfo_t2311541783_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AnimatorTransitionInfo_t2311541783_0_0_0;
extern "C" void DelegatePInvokeWrapper_LogCallback_t2256446685();
extern const RuntimeType LogCallback_t2256446685_0_0_0;
extern "C" void DelegatePInvokeWrapper_LowMemoryCallback_t1784003074();
extern const RuntimeType LowMemoryCallback_t1784003074_0_0_0;
extern "C" void AssetBundleRequest_t2084675985_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AssetBundleRequest_t2084675985_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AssetBundleRequest_t2084675985_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AssetBundleRequest_t2084675985_0_0_0;
extern "C" void AsyncOperation_t3914682584_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void AsyncOperation_t3914682584_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void AsyncOperation_t3914682584_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType AsyncOperation_t3914682584_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMReaderCallback_t2920415530();
extern const RuntimeType PCMReaderCallback_t2920415530_0_0_0;
extern "C" void DelegatePInvokeWrapper_PCMSetPositionCallback_t175393103();
extern const RuntimeType PCMSetPositionCallback_t175393103_0_0_0;
extern "C" void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t2356311664();
extern const RuntimeType AudioConfigurationChangeHandler_t2356311664_0_0_0;
extern "C" void DelegatePInvokeWrapper_WillRenderCanvases_t1741133473();
extern const RuntimeType WillRenderCanvases_t1741133473_0_0_0;
extern "C" void Collision_t4186460865_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collision_t4186460865_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collision_t4186460865_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collision_t4186460865_0_0_0;
extern "C" void Collision2D_t3513380249_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Collision2D_t3513380249_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Collision2D_t3513380249_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Collision2D_t3513380249_0_0_0;
extern "C" void ContactFilter2D_t3242045495_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ContactFilter2D_t3242045495_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ContactFilter2D_t3242045495_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ContactFilter2D_t3242045495_0_0_0;
extern "C" void ControllerColliderHit_t4254585276_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ControllerColliderHit_t4254585276_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ControllerColliderHit_t4254585276_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ControllerColliderHit_t4254585276_0_0_0;
extern "C" void Coroutine_t2103060093_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Coroutine_t2103060093_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Coroutine_t2103060093_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Coroutine_t2103060093_0_0_0;
extern "C" void DelegatePInvokeWrapper_CSSMeasureFunc_t1171881296();
extern const RuntimeType CSSMeasureFunc_t1171881296_0_0_0;
extern "C" void CullingGroup_t681809220_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CullingGroup_t681809220_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CullingGroup_t681809220_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CullingGroup_t681809220_0_0_0;
extern "C" void DelegatePInvokeWrapper_StateChanged_t233645367();
extern const RuntimeType StateChanged_t233645367_0_0_0;
extern "C" void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t3082320762();
extern const RuntimeType DisplaysUpdatedDelegate_t3082320762_0_0_0;
extern "C" void Event_t2692834013_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Event_t2692834013_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Event_t2692834013_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Event_t2692834013_0_0_0;
extern "C" void DelegatePInvokeWrapper_UnityAction_t3093438788();
extern const RuntimeType UnityAction_t3093438788_0_0_0;
extern "C" void FailedToLoadScriptObject_t3066000367_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FailedToLoadScriptObject_t3066000367_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FailedToLoadScriptObject_t3066000367_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FailedToLoadScriptObject_t3066000367_0_0_0;
extern "C" void DelegatePInvokeWrapper_FontTextureRebuildCallback_t3943017072();
extern const RuntimeType FontTextureRebuildCallback_t3943017072_0_0_0;
extern "C" void Gradient_t3033400951_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Gradient_t3033400951_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Gradient_t3033400951_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Gradient_t3033400951_0_0_0;
extern "C" void DelegatePInvokeWrapper_WindowFunction_t2712693335();
extern const RuntimeType WindowFunction_t2712693335_0_0_0;
extern "C" void GUIContent_t2777301450_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIContent_t2777301450_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIContent_t2777301450_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIContent_t2777301450_0_0_0;
extern "C" void DelegatePInvokeWrapper_SkinChangedDelegate_t2514397947();
extern const RuntimeType SkinChangedDelegate_t2514397947_0_0_0;
extern "C" void GUIStyle_t3782573_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyle_t3782573_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyle_t3782573_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyle_t3782573_0_0_0;
extern "C" void GUIStyleState_t2886236712_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void GUIStyleState_t2886236712_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void GUIStyleState_t2886236712_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType GUIStyleState_t2886236712_0_0_0;
extern "C" void HumanBone_t564323935_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HumanBone_t564323935_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HumanBone_t564323935_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HumanBone_t564323935_0_0_0;
extern "C" void Internal_DrawTextureArguments_t151974814_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Internal_DrawTextureArguments_t151974814_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Internal_DrawTextureArguments_t151974814_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Internal_DrawTextureArguments_t151974814_0_0_0;
extern "C" void DownloadHandler_t1108294350_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DownloadHandler_t1108294350_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DownloadHandler_t1108294350_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DownloadHandler_t1108294350_0_0_0;
extern "C" void DownloadHandlerBuffer_t2861438107_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void DownloadHandlerBuffer_t2861438107_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void DownloadHandlerBuffer_t2861438107_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType DownloadHandlerBuffer_t2861438107_0_0_0;
extern "C" void UnityWebRequest_t1038050829_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UnityWebRequest_t1038050829_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UnityWebRequest_t1038050829_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UnityWebRequest_t1038050829_0_0_0;
extern "C" void UploadHandler_t577296489_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UploadHandler_t577296489_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UploadHandler_t577296489_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UploadHandler_t577296489_0_0_0;
extern "C" void UploadHandlerRaw_t568872952_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void UploadHandlerRaw_t568872952_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void UploadHandlerRaw_t568872952_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType UploadHandlerRaw_t568872952_0_0_0;
extern "C" void Object_t2678413981_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Object_t2678413981_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Object_t2678413981_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Object_t2678413981_0_0_0;
extern "C" void EmissionModule_t1373321620_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void EmissionModule_t1373321620_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void EmissionModule_t1373321620_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType EmissionModule_t1373321620_0_0_0;
extern "C" void MainModule_t3034750355_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MainModule_t3034750355_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MainModule_t3034750355_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MainModule_t3034750355_0_0_0;
extern "C" void MinMaxCurve_t1678892867_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void MinMaxCurve_t1678892867_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void MinMaxCurve_t1678892867_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType MinMaxCurve_t1678892867_0_0_0;
extern "C" void PlayableBinding_t2178197861_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void PlayableBinding_t2178197861_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void PlayableBinding_t2178197861_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType PlayableBinding_t2178197861_0_0_0;
extern "C" void RaycastHit_t3352190941_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RaycastHit_t3352190941_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RaycastHit_t3352190941_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RaycastHit_t3352190941_0_0_0;
extern "C" void RaycastHit2D_t1300835833_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RaycastHit2D_t1300835833_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RaycastHit2D_t1300835833_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RaycastHit2D_t1300835833_0_0_0;
extern "C" void RectOffset_t2767613721_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RectOffset_t2767613721_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RectOffset_t2767613721_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RectOffset_t2767613721_0_0_0;
extern "C" void DelegatePInvokeWrapper_UpdatedEventHandler_t2432756824();
extern const RuntimeType UpdatedEventHandler_t2432756824_0_0_0;
extern "C" void ResourceRequest_t2662984932_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ResourceRequest_t2662984932_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ResourceRequest_t2662984932_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ResourceRequest_t2662984932_0_0_0;
extern "C" void ScriptableObject_t3572752970_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ScriptableObject_t3572752970_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ScriptableObject_t3572752970_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ScriptableObject_t3572752970_0_0_0;
extern "C" void HitInfo_t97101982_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void HitInfo_t97101982_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void HitInfo_t97101982_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType HitInfo_t97101982_0_0_0;
extern "C" void SkeletonBone_t1631443025_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SkeletonBone_t1631443025_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SkeletonBone_t1631443025_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SkeletonBone_t1631443025_0_0_0;
extern "C" void TextGenerationSettings_t3964821194_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TextGenerationSettings_t3964821194_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TextGenerationSettings_t3964821194_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TextGenerationSettings_t3964821194_0_0_0;
extern "C" void TextGenerator_t350507332_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TextGenerator_t350507332_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TextGenerator_t350507332_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TextGenerator_t350507332_0_0_0;
extern "C" void TrackedReference_t3612250924_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void TrackedReference_t3612250924_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void TrackedReference_t3612250924_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType TrackedReference_t3612250924_0_0_0;
extern "C" void DelegatePInvokeWrapper_RequestAtlasCallback_t3796640026();
extern const RuntimeType RequestAtlasCallback_t3796640026_0_0_0;
extern "C" void WorkRequest_t2658306812_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WorkRequest_t2658306812_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WorkRequest_t2658306812_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WorkRequest_t2658306812_0_0_0;
extern "C" void WaitForSeconds_t3455734511_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WaitForSeconds_t3455734511_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WaitForSeconds_t3455734511_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WaitForSeconds_t3455734511_0_0_0;
extern "C" void WheelHit_t2849613523_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void WheelHit_t2849613523_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void WheelHit_t2849613523_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType WheelHit_t2849613523_0_0_0;
extern "C" void YieldInstruction_t78365184_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void YieldInstruction_t78365184_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void YieldInstruction_t78365184_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType YieldInstruction_t78365184_0_0_0;
extern "C" void RaycastResult_t201057496_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void RaycastResult_t201057496_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void RaycastResult_t201057496_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType RaycastResult_t201057496_0_0_0;
extern "C" void ColorTween_t15328533_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ColorTween_t15328533_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ColorTween_t15328533_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ColorTween_t15328533_0_0_0;
extern "C" void FloatTween_t3391932162_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void FloatTween_t3391932162_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void FloatTween_t3391932162_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType FloatTween_t3391932162_0_0_0;
extern "C" void Resources_t3458687757_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Resources_t3458687757_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Resources_t3458687757_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Resources_t3458687757_0_0_0;
extern "C" void DelegatePInvokeWrapper_OnValidateInput_t1005761790();
extern const RuntimeType OnValidateInput_t1005761790_0_0_0;
extern "C" void Navigation_t3266031939_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Navigation_t3266031939_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Navigation_t3266031939_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Navigation_t3266031939_0_0_0;
extern "C" void SpriteState_t983540292_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void SpriteState_t983540292_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void SpriteState_t983540292_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType SpriteState_t983540292_0_0_0;
extern const RuntimeType CRC32_t1917040655_0_0_0;
extern "C" void DelegatePInvokeWrapper_CompressFunc_t2893674032();
extern const RuntimeType CompressFunc_t2893674032_0_0_0;
extern const RuntimeType ZlibCodec_t1242739123_0_0_0;
extern const RuntimeType ZlibException_t1048940463_0_0_0;
extern "C" void DelegatePInvokeWrapper_SpawnAction_t1274488877();
extern const RuntimeType SpawnAction_t1274488877_0_0_0;
extern "C" void Settings_t3232482888_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Settings_t3232482888_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Settings_t3232482888_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Settings_t3232482888_0_0_0;
extern "C" void BloomSettings_t390616924_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void BloomSettings_t390616924_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void BloomSettings_t390616924_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType BloomSettings_t390616924_0_0_0;
extern "C" void LensDirtSettings_t4014836744_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void LensDirtSettings_t4014836744_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void LensDirtSettings_t4014836744_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType LensDirtSettings_t4014836744_0_0_0;
extern "C" void Settings_t811044873_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Settings_t811044873_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Settings_t811044873_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Settings_t811044873_0_0_0;
extern "C" void Settings_t1310207576_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Settings_t1310207576_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Settings_t1310207576_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Settings_t1310207576_0_0_0;
extern "C" void CurvesSettings_t3938874345_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void CurvesSettings_t3938874345_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void CurvesSettings_t3938874345_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType CurvesSettings_t3938874345_0_0_0;
extern "C" void Settings_t1847667170_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Settings_t1847667170_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Settings_t1847667170_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Settings_t1847667170_0_0_0;
extern "C" void Settings_t2371698414_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Settings_t2371698414_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Settings_t2371698414_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Settings_t2371698414_0_0_0;
extern "C" void Settings_t1699529798_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Settings_t1699529798_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Settings_t1699529798_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Settings_t1699529798_0_0_0;
extern "C" void Settings_t2602911635_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Settings_t2602911635_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Settings_t2602911635_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Settings_t2602911635_0_0_0;
extern "C" void Settings_t2000867362_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Settings_t2000867362_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Settings_t2000867362_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Settings_t2000867362_0_0_0;
extern "C" void Frame_t209750528_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Frame_t209750528_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Frame_t209750528_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Frame_t209750528_0_0_0;
extern "C" void ReflectionSettings_t786834427_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void ReflectionSettings_t786834427_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void ReflectionSettings_t786834427_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType ReflectionSettings_t786834427_0_0_0;
extern "C" void Settings_t4238070798_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Settings_t4238070798_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Settings_t4238070798_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Settings_t4238070798_0_0_0;
extern "C" void Settings_t3969925360_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Settings_t3969925360_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Settings_t3969925360_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Settings_t3969925360_0_0_0;
extern "C" void Settings_t2745418096_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
extern "C" void Settings_t2745418096_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
extern "C" void Settings_t2745418096_marshal_pinvoke_cleanup(void* marshaledStructure);
extern const RuntimeType Settings_t2745418096_0_0_0;
extern Il2CppInteropData g_Il2CppInteropData[131] = 
{
	{ NULL, Context_t166864908_marshal_pinvoke, Context_t166864908_marshal_pinvoke_back, Context_t166864908_marshal_pinvoke_cleanup, NULL, NULL, &Context_t166864908_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Context */,
	{ NULL, Escape_t3576775346_marshal_pinvoke, Escape_t3576775346_marshal_pinvoke_back, Escape_t3576775346_marshal_pinvoke_cleanup, NULL, NULL, &Escape_t3576775346_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, PreviousInfo_t1238721783_marshal_pinvoke, PreviousInfo_t1238721783_marshal_pinvoke_back, PreviousInfo_t1238721783_marshal_pinvoke_cleanup, NULL, NULL, &PreviousInfo_t1238721783_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/PreviousInfo */,
	{ DelegatePInvokeWrapper_AppDomainInitializer_t2632965284, NULL, NULL, NULL, NULL, NULL, &AppDomainInitializer_t2632965284_0_0_0 } /* System.AppDomainInitializer */,
	{ DelegatePInvokeWrapper_Swapper_t3270531754, NULL, NULL, NULL, NULL, NULL, &Swapper_t3270531754_0_0_0 } /* System.Array/Swapper */,
	{ NULL, DictionaryEntry_t1303379016_marshal_pinvoke, DictionaryEntry_t1303379016_marshal_pinvoke_back, DictionaryEntry_t1303379016_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_t1303379016_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, Slot_t3464408892_marshal_pinvoke, Slot_t3464408892_marshal_pinvoke_back, Slot_t3464408892_marshal_pinvoke_cleanup, NULL, NULL, &Slot_t3464408892_0_0_0 } /* System.Collections.Hashtable/Slot */,
	{ NULL, Slot_t3302539452_marshal_pinvoke, Slot_t3302539452_marshal_pinvoke_back, Slot_t3302539452_marshal_pinvoke_cleanup, NULL, NULL, &Slot_t3302539452_0_0_0 } /* System.Collections.SortedList/Slot */,
	{ NULL, Enum_t1400231720_marshal_pinvoke, Enum_t1400231720_marshal_pinvoke_back, Enum_t1400231720_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t1400231720_0_0_0 } /* System.Enum */,
	{ DelegatePInvokeWrapper_ReadDelegate_t3465774997, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_t3465774997_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_t2205060900, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t2205060900_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ NULL, MonoIOStat_t362263380_marshal_pinvoke, MonoIOStat_t362263380_marshal_pinvoke_back, MonoIOStat_t362263380_marshal_pinvoke_cleanup, NULL, NULL, &MonoIOStat_t362263380_0_0_0 } /* System.IO.MonoIOStat */,
	{ NULL, MonoEnumInfo_t1453046702_marshal_pinvoke, MonoEnumInfo_t1453046702_marshal_pinvoke_back, MonoEnumInfo_t1453046702_marshal_pinvoke_cleanup, NULL, NULL, &MonoEnumInfo_t1453046702_0_0_0 } /* System.MonoEnumInfo */,
	{ NULL, CustomAttributeNamedArgument_t569963932_marshal_pinvoke, CustomAttributeNamedArgument_t569963932_marshal_pinvoke_back, CustomAttributeNamedArgument_t569963932_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t569963932_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_t144412556_marshal_pinvoke, CustomAttributeTypedArgument_t144412556_marshal_pinvoke_back, CustomAttributeTypedArgument_t144412556_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_t144412556_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ NULL, ILTokenInfo_t1398390389_marshal_pinvoke, ILTokenInfo_t1398390389_marshal_pinvoke_back, ILTokenInfo_t1398390389_marshal_pinvoke_cleanup, NULL, NULL, &ILTokenInfo_t1398390389_0_0_0 } /* System.Reflection.Emit.ILTokenInfo */,
	{ NULL, MonoEventInfo_t1657183547_marshal_pinvoke, MonoEventInfo_t1657183547_marshal_pinvoke_back, MonoEventInfo_t1657183547_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_t1657183547_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_t2194443894_marshal_pinvoke, MonoMethodInfo_t2194443894_marshal_pinvoke_back, MonoMethodInfo_t2194443894_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_t2194443894_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoPropertyInfo_t3437369751_marshal_pinvoke, MonoPropertyInfo_t3437369751_marshal_pinvoke_back, MonoPropertyInfo_t3437369751_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_t3437369751_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, ParameterModifier_t613848083_marshal_pinvoke, ParameterModifier_t613848083_marshal_pinvoke_back, ParameterModifier_t613848083_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_t613848083_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ResourceCacheItem_t79724623_marshal_pinvoke, ResourceCacheItem_t79724623_marshal_pinvoke_back, ResourceCacheItem_t79724623_marshal_pinvoke_cleanup, NULL, NULL, &ResourceCacheItem_t79724623_0_0_0 } /* System.Resources.ResourceReader/ResourceCacheItem */,
	{ NULL, ResourceInfo_t3569774406_marshal_pinvoke, ResourceInfo_t3569774406_marshal_pinvoke_back, ResourceInfo_t3569774406_marshal_pinvoke_cleanup, NULL, NULL, &ResourceInfo_t3569774406_0_0_0 } /* System.Resources.ResourceReader/ResourceInfo */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_t2582950129, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_t2582950129_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ DelegatePInvokeWrapper_CallbackHandler_t3242930979, NULL, NULL, NULL, NULL, NULL, &CallbackHandler_t3242930979_0_0_0 } /* System.Runtime.Serialization.SerializationCallbacks/CallbackHandler */,
	{ NULL, SerializationEntry_t754407873_marshal_pinvoke, SerializationEntry_t754407873_marshal_pinvoke_back, SerializationEntry_t754407873_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_t754407873_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ NULL, StreamingContext_t3795731521_marshal_pinvoke, StreamingContext_t3795731521_marshal_pinvoke_back, StreamingContext_t3795731521_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t3795731521_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, DSAParameters_t1723723180_marshal_pinvoke, DSAParameters_t1723723180_marshal_pinvoke_back, DSAParameters_t1723723180_marshal_pinvoke_cleanup, NULL, NULL, &DSAParameters_t1723723180_0_0_0 } /* System.Security.Cryptography.DSAParameters */,
	{ NULL, RSAParameters_t1441126344_marshal_pinvoke, RSAParameters_t1441126344_marshal_pinvoke_back, RSAParameters_t1441126344_marshal_pinvoke_cleanup, NULL, NULL, &RSAParameters_t1441126344_0_0_0 } /* System.Security.Cryptography.RSAParameters */,
	{ NULL, SecurityFrame_t1804333161_marshal_pinvoke, SecurityFrame_t1804333161_marshal_pinvoke_back, SecurityFrame_t1804333161_marshal_pinvoke_cleanup, NULL, NULL, &SecurityFrame_t1804333161_0_0_0 } /* System.Security.SecurityFrame */,
	{ DelegatePInvokeWrapper_ThreadStart_t3826805759, NULL, NULL, NULL, NULL, NULL, &ThreadStart_t3826805759_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, ValueType_t4023604559_marshal_pinvoke, ValueType_t4023604559_marshal_pinvoke_back, ValueType_t4023604559_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_t4023604559_0_0_0 } /* System.ValueType */,
	{ DelegatePInvokeWrapper_ReadMethod_t2306999011, NULL, NULL, NULL, NULL, NULL, &ReadMethod_t2306999011_0_0_0 } /* System.IO.Compression.DeflateStream/ReadMethod */,
	{ DelegatePInvokeWrapper_UnmanagedReadOrWrite_t1236791671, NULL, NULL, NULL, NULL, NULL, &UnmanagedReadOrWrite_t1236791671_0_0_0 } /* System.IO.Compression.DeflateStream/UnmanagedReadOrWrite */,
	{ DelegatePInvokeWrapper_WriteMethod_t2412793751, NULL, NULL, NULL, NULL, NULL, &WriteMethod_t2412793751_0_0_0 } /* System.IO.Compression.DeflateStream/WriteMethod */,
	{ DelegatePInvokeWrapper_ReadDelegate_t3069121600, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_t3069121600_0_0_0 } /* System.Net.FtpDataStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_t1769534517, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t1769534517_0_0_0 } /* System.Net.FtpDataStream/WriteDelegate */,
	{ DelegatePInvokeWrapper_SocketAsyncCall_t750759351, NULL, NULL, NULL, NULL, NULL, &SocketAsyncCall_t750759351_0_0_0 } /* System.Net.Sockets.Socket/SocketAsyncCall */,
	{ NULL, SocketAsyncResult_t2233500431_marshal_pinvoke, SocketAsyncResult_t2233500431_marshal_pinvoke_back, SocketAsyncResult_t2233500431_marshal_pinvoke_cleanup, NULL, NULL, &SocketAsyncResult_t2233500431_0_0_0 } /* System.Net.Sockets.Socket/SocketAsyncResult */,
	{ NULL, X509ChainStatus_t1034754694_marshal_pinvoke, X509ChainStatus_t1034754694_marshal_pinvoke_back, X509ChainStatus_t1034754694_marshal_pinvoke_cleanup, NULL, NULL, &X509ChainStatus_t1034754694_0_0_0 } /* System.Security.Cryptography.X509Certificates.X509ChainStatus */,
	{ NULL, IntStack_t3756491973_marshal_pinvoke, IntStack_t3756491973_marshal_pinvoke_back, IntStack_t3756491973_marshal_pinvoke_cleanup, NULL, NULL, &IntStack_t3756491973_0_0_0 } /* System.Text.RegularExpressions.Interpreter/IntStack */,
	{ NULL, Interval_t4260430887_marshal_pinvoke, Interval_t4260430887_marshal_pinvoke_back, Interval_t4260430887_marshal_pinvoke_cleanup, NULL, NULL, &Interval_t4260430887_0_0_0 } /* System.Text.RegularExpressions.Interval */,
	{ DelegatePInvokeWrapper_CostDelegate_t641283812, NULL, NULL, NULL, NULL, NULL, &CostDelegate_t641283812_0_0_0 } /* System.Text.RegularExpressions.IntervalCollection/CostDelegate */,
	{ NULL, UriScheme_t3399228718_marshal_pinvoke, UriScheme_t3399228718_marshal_pinvoke_back, UriScheme_t3399228718_marshal_pinvoke_cleanup, NULL, NULL, &UriScheme_t3399228718_0_0_0 } /* System.Uri/UriScheme */,
	{ DelegatePInvokeWrapper_Action_t1781176450, NULL, NULL, NULL, NULL, NULL, &Action_t1781176450_0_0_0 } /* System.Action */,
	{ NULL, AnimationCurve_t3459038319_marshal_pinvoke, AnimationCurve_t3459038319_marshal_pinvoke_back, AnimationCurve_t3459038319_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_t3459038319_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ NULL, AnimationEvent_t3281663458_marshal_pinvoke, AnimationEvent_t3281663458_marshal_pinvoke_back, AnimationEvent_t3281663458_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_t3281663458_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ NULL, AnimatorTransitionInfo_t2311541783_marshal_pinvoke, AnimatorTransitionInfo_t2311541783_marshal_pinvoke_back, AnimatorTransitionInfo_t2311541783_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t2311541783_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ DelegatePInvokeWrapper_LogCallback_t2256446685, NULL, NULL, NULL, NULL, NULL, &LogCallback_t2256446685_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_t1784003074, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_t1784003074_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, AssetBundleRequest_t2084675985_marshal_pinvoke, AssetBundleRequest_t2084675985_marshal_pinvoke_back, AssetBundleRequest_t2084675985_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRequest_t2084675985_0_0_0 } /* UnityEngine.AssetBundleRequest */,
	{ NULL, AsyncOperation_t3914682584_marshal_pinvoke, AsyncOperation_t3914682584_marshal_pinvoke_back, AsyncOperation_t3914682584_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_t3914682584_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t2920415530, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t2920415530_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_t175393103, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_t175393103_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t2356311664, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_t2356311664_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_t1741133473, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_t1741133473_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ NULL, Collision_t4186460865_marshal_pinvoke, Collision_t4186460865_marshal_pinvoke_back, Collision_t4186460865_marshal_pinvoke_cleanup, NULL, NULL, &Collision_t4186460865_0_0_0 } /* UnityEngine.Collision */,
	{ NULL, Collision2D_t3513380249_marshal_pinvoke, Collision2D_t3513380249_marshal_pinvoke_back, Collision2D_t3513380249_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t3513380249_0_0_0 } /* UnityEngine.Collision2D */,
	{ NULL, ContactFilter2D_t3242045495_marshal_pinvoke, ContactFilter2D_t3242045495_marshal_pinvoke_back, ContactFilter2D_t3242045495_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t3242045495_0_0_0 } /* UnityEngine.ContactFilter2D */,
	{ NULL, ControllerColliderHit_t4254585276_marshal_pinvoke, ControllerColliderHit_t4254585276_marshal_pinvoke_back, ControllerColliderHit_t4254585276_marshal_pinvoke_cleanup, NULL, NULL, &ControllerColliderHit_t4254585276_0_0_0 } /* UnityEngine.ControllerColliderHit */,
	{ NULL, Coroutine_t2103060093_marshal_pinvoke, Coroutine_t2103060093_marshal_pinvoke_back, Coroutine_t2103060093_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_t2103060093_0_0_0 } /* UnityEngine.Coroutine */,
	{ DelegatePInvokeWrapper_CSSMeasureFunc_t1171881296, NULL, NULL, NULL, NULL, NULL, &CSSMeasureFunc_t1171881296_0_0_0 } /* UnityEngine.CSSLayout.CSSMeasureFunc */,
	{ NULL, CullingGroup_t681809220_marshal_pinvoke, CullingGroup_t681809220_marshal_pinvoke_back, CullingGroup_t681809220_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t681809220_0_0_0 } /* UnityEngine.CullingGroup */,
	{ DelegatePInvokeWrapper_StateChanged_t233645367, NULL, NULL, NULL, NULL, NULL, &StateChanged_t233645367_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t3082320762, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_t3082320762_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ NULL, Event_t2692834013_marshal_pinvoke, Event_t2692834013_marshal_pinvoke_back, Event_t2692834013_marshal_pinvoke_cleanup, NULL, NULL, &Event_t2692834013_0_0_0 } /* UnityEngine.Event */,
	{ DelegatePInvokeWrapper_UnityAction_t3093438788, NULL, NULL, NULL, NULL, NULL, &UnityAction_t3093438788_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, FailedToLoadScriptObject_t3066000367_marshal_pinvoke, FailedToLoadScriptObject_t3066000367_marshal_pinvoke_back, FailedToLoadScriptObject_t3066000367_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_t3066000367_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_t3943017072, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_t3943017072_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ NULL, Gradient_t3033400951_marshal_pinvoke, Gradient_t3033400951_marshal_pinvoke_back, Gradient_t3033400951_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_t3033400951_0_0_0 } /* UnityEngine.Gradient */,
	{ DelegatePInvokeWrapper_WindowFunction_t2712693335, NULL, NULL, NULL, NULL, NULL, &WindowFunction_t2712693335_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ NULL, GUIContent_t2777301450_marshal_pinvoke, GUIContent_t2777301450_marshal_pinvoke_back, GUIContent_t2777301450_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t2777301450_0_0_0 } /* UnityEngine.GUIContent */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_t2514397947, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_t2514397947_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, GUIStyle_t3782573_marshal_pinvoke, GUIStyle_t3782573_marshal_pinvoke_back, GUIStyle_t3782573_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t3782573_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_t2886236712_marshal_pinvoke, GUIStyleState_t2886236712_marshal_pinvoke_back, GUIStyleState_t2886236712_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_t2886236712_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ NULL, HumanBone_t564323935_marshal_pinvoke, HumanBone_t564323935_marshal_pinvoke_back, HumanBone_t564323935_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_t564323935_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, Internal_DrawTextureArguments_t151974814_marshal_pinvoke, Internal_DrawTextureArguments_t151974814_marshal_pinvoke_back, Internal_DrawTextureArguments_t151974814_marshal_pinvoke_cleanup, NULL, NULL, &Internal_DrawTextureArguments_t151974814_0_0_0 } /* UnityEngine.Internal_DrawTextureArguments */,
	{ NULL, DownloadHandler_t1108294350_marshal_pinvoke, DownloadHandler_t1108294350_marshal_pinvoke_back, DownloadHandler_t1108294350_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandler_t1108294350_0_0_0 } /* UnityEngine.Networking.DownloadHandler */,
	{ NULL, DownloadHandlerBuffer_t2861438107_marshal_pinvoke, DownloadHandlerBuffer_t2861438107_marshal_pinvoke_back, DownloadHandlerBuffer_t2861438107_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerBuffer_t2861438107_0_0_0 } /* UnityEngine.Networking.DownloadHandlerBuffer */,
	{ NULL, UnityWebRequest_t1038050829_marshal_pinvoke, UnityWebRequest_t1038050829_marshal_pinvoke_back, UnityWebRequest_t1038050829_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequest_t1038050829_0_0_0 } /* UnityEngine.Networking.UnityWebRequest */,
	{ NULL, UploadHandler_t577296489_marshal_pinvoke, UploadHandler_t577296489_marshal_pinvoke_back, UploadHandler_t577296489_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandler_t577296489_0_0_0 } /* UnityEngine.Networking.UploadHandler */,
	{ NULL, UploadHandlerRaw_t568872952_marshal_pinvoke, UploadHandlerRaw_t568872952_marshal_pinvoke_back, UploadHandlerRaw_t568872952_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandlerRaw_t568872952_0_0_0 } /* UnityEngine.Networking.UploadHandlerRaw */,
	{ NULL, Object_t2678413981_marshal_pinvoke, Object_t2678413981_marshal_pinvoke_back, Object_t2678413981_marshal_pinvoke_cleanup, NULL, NULL, &Object_t2678413981_0_0_0 } /* UnityEngine.Object */,
	{ NULL, EmissionModule_t1373321620_marshal_pinvoke, EmissionModule_t1373321620_marshal_pinvoke_back, EmissionModule_t1373321620_marshal_pinvoke_cleanup, NULL, NULL, &EmissionModule_t1373321620_0_0_0 } /* UnityEngine.ParticleSystem/EmissionModule */,
	{ NULL, MainModule_t3034750355_marshal_pinvoke, MainModule_t3034750355_marshal_pinvoke_back, MainModule_t3034750355_marshal_pinvoke_cleanup, NULL, NULL, &MainModule_t3034750355_0_0_0 } /* UnityEngine.ParticleSystem/MainModule */,
	{ NULL, MinMaxCurve_t1678892867_marshal_pinvoke, MinMaxCurve_t1678892867_marshal_pinvoke_back, MinMaxCurve_t1678892867_marshal_pinvoke_cleanup, NULL, NULL, &MinMaxCurve_t1678892867_0_0_0 } /* UnityEngine.ParticleSystem/MinMaxCurve */,
	{ NULL, PlayableBinding_t2178197861_marshal_pinvoke, PlayableBinding_t2178197861_marshal_pinvoke_back, PlayableBinding_t2178197861_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_t2178197861_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ NULL, RaycastHit_t3352190941_marshal_pinvoke, RaycastHit_t3352190941_marshal_pinvoke_back, RaycastHit_t3352190941_marshal_pinvoke_cleanup, NULL, NULL, &RaycastHit_t3352190941_0_0_0 } /* UnityEngine.RaycastHit */,
	{ NULL, RaycastHit2D_t1300835833_marshal_pinvoke, RaycastHit2D_t1300835833_marshal_pinvoke_back, RaycastHit2D_t1300835833_marshal_pinvoke_cleanup, NULL, NULL, &RaycastHit2D_t1300835833_0_0_0 } /* UnityEngine.RaycastHit2D */,
	{ NULL, RectOffset_t2767613721_marshal_pinvoke, RectOffset_t2767613721_marshal_pinvoke_back, RectOffset_t2767613721_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_t2767613721_0_0_0 } /* UnityEngine.RectOffset */,
	{ DelegatePInvokeWrapper_UpdatedEventHandler_t2432756824, NULL, NULL, NULL, NULL, NULL, &UpdatedEventHandler_t2432756824_0_0_0 } /* UnityEngine.RemoteSettings/UpdatedEventHandler */,
	{ NULL, ResourceRequest_t2662984932_marshal_pinvoke, ResourceRequest_t2662984932_marshal_pinvoke_back, ResourceRequest_t2662984932_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_t2662984932_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, ScriptableObject_t3572752970_marshal_pinvoke, ScriptableObject_t3572752970_marshal_pinvoke_back, ScriptableObject_t3572752970_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_t3572752970_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, HitInfo_t97101982_marshal_pinvoke, HitInfo_t97101982_marshal_pinvoke_back, HitInfo_t97101982_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t97101982_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, SkeletonBone_t1631443025_marshal_pinvoke, SkeletonBone_t1631443025_marshal_pinvoke_back, SkeletonBone_t1631443025_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_t1631443025_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ NULL, TextGenerationSettings_t3964821194_marshal_pinvoke, TextGenerationSettings_t3964821194_marshal_pinvoke_back, TextGenerationSettings_t3964821194_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_t3964821194_0_0_0 } /* UnityEngine.TextGenerationSettings */,
	{ NULL, TextGenerator_t350507332_marshal_pinvoke, TextGenerator_t350507332_marshal_pinvoke_back, TextGenerator_t350507332_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_t350507332_0_0_0 } /* UnityEngine.TextGenerator */,
	{ NULL, TrackedReference_t3612250924_marshal_pinvoke, TrackedReference_t3612250924_marshal_pinvoke_back, TrackedReference_t3612250924_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_t3612250924_0_0_0 } /* UnityEngine.TrackedReference */,
	{ DelegatePInvokeWrapper_RequestAtlasCallback_t3796640026, NULL, NULL, NULL, NULL, NULL, &RequestAtlasCallback_t3796640026_0_0_0 } /* UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback */,
	{ NULL, WorkRequest_t2658306812_marshal_pinvoke, WorkRequest_t2658306812_marshal_pinvoke_back, WorkRequest_t2658306812_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_t2658306812_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, WaitForSeconds_t3455734511_marshal_pinvoke, WaitForSeconds_t3455734511_marshal_pinvoke_back, WaitForSeconds_t3455734511_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_t3455734511_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, WheelHit_t2849613523_marshal_pinvoke, WheelHit_t2849613523_marshal_pinvoke_back, WheelHit_t2849613523_marshal_pinvoke_cleanup, NULL, NULL, &WheelHit_t2849613523_0_0_0 } /* UnityEngine.WheelHit */,
	{ NULL, YieldInstruction_t78365184_marshal_pinvoke, YieldInstruction_t78365184_marshal_pinvoke_back, YieldInstruction_t78365184_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_t78365184_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ NULL, RaycastResult_t201057496_marshal_pinvoke, RaycastResult_t201057496_marshal_pinvoke_back, RaycastResult_t201057496_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_t201057496_0_0_0 } /* UnityEngine.EventSystems.RaycastResult */,
	{ NULL, ColorTween_t15328533_marshal_pinvoke, ColorTween_t15328533_marshal_pinvoke_back, ColorTween_t15328533_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t15328533_0_0_0 } /* UnityEngine.UI.CoroutineTween.ColorTween */,
	{ NULL, FloatTween_t3391932162_marshal_pinvoke, FloatTween_t3391932162_marshal_pinvoke_back, FloatTween_t3391932162_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t3391932162_0_0_0 } /* UnityEngine.UI.CoroutineTween.FloatTween */,
	{ NULL, Resources_t3458687757_marshal_pinvoke, Resources_t3458687757_marshal_pinvoke_back, Resources_t3458687757_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t3458687757_0_0_0 } /* UnityEngine.UI.DefaultControls/Resources */,
	{ DelegatePInvokeWrapper_OnValidateInput_t1005761790, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t1005761790_0_0_0 } /* UnityEngine.UI.InputField/OnValidateInput */,
	{ NULL, Navigation_t3266031939_marshal_pinvoke, Navigation_t3266031939_marshal_pinvoke_back, Navigation_t3266031939_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t3266031939_0_0_0 } /* UnityEngine.UI.Navigation */,
	{ NULL, SpriteState_t983540292_marshal_pinvoke, SpriteState_t983540292_marshal_pinvoke_back, SpriteState_t983540292_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_t983540292_0_0_0 } /* UnityEngine.UI.SpriteState */,
	{ NULL, NULL, NULL, NULL, NULL, &CRC32_t1917040655::CLSID, &CRC32_t1917040655_0_0_0 } /* Ionic.Crc.CRC32 */,
	{ DelegatePInvokeWrapper_CompressFunc_t2893674032, NULL, NULL, NULL, NULL, NULL, &CompressFunc_t2893674032_0_0_0 } /* Ionic.Zlib.DeflateManager/CompressFunc */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibCodec_t1242739123::CLSID, &ZlibCodec_t1242739123_0_0_0 } /* Ionic.Zlib.ZlibCodec */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibException_t1048940463::CLSID, &ZlibException_t1048940463_0_0_0 } /* Ionic.Zlib.ZlibException */,
	{ DelegatePInvokeWrapper_SpawnAction_t1274488877, NULL, NULL, NULL, NULL, NULL, &SpawnAction_t1274488877_0_0_0 } /* SmartSpawn.SmartSpawnScript/SpawnAction */,
	{ NULL, Settings_t3232482888_marshal_pinvoke, Settings_t3232482888_marshal_pinvoke_back, Settings_t3232482888_marshal_pinvoke_cleanup, NULL, NULL, &Settings_t3232482888_0_0_0 } /* UnityEngine.PostProcessing.AmbientOcclusionModel/Settings */,
	{ NULL, BloomSettings_t390616924_marshal_pinvoke, BloomSettings_t390616924_marshal_pinvoke_back, BloomSettings_t390616924_marshal_pinvoke_cleanup, NULL, NULL, &BloomSettings_t390616924_0_0_0 } /* UnityEngine.PostProcessing.BloomModel/BloomSettings */,
	{ NULL, LensDirtSettings_t4014836744_marshal_pinvoke, LensDirtSettings_t4014836744_marshal_pinvoke_back, LensDirtSettings_t4014836744_marshal_pinvoke_cleanup, NULL, NULL, &LensDirtSettings_t4014836744_0_0_0 } /* UnityEngine.PostProcessing.BloomModel/LensDirtSettings */,
	{ NULL, Settings_t811044873_marshal_pinvoke, Settings_t811044873_marshal_pinvoke_back, Settings_t811044873_marshal_pinvoke_cleanup, NULL, NULL, &Settings_t811044873_0_0_0 } /* UnityEngine.PostProcessing.BloomModel/Settings */,
	{ NULL, Settings_t1310207576_marshal_pinvoke, Settings_t1310207576_marshal_pinvoke_back, Settings_t1310207576_marshal_pinvoke_cleanup, NULL, NULL, &Settings_t1310207576_0_0_0 } /* UnityEngine.PostProcessing.ChromaticAberrationModel/Settings */,
	{ NULL, CurvesSettings_t3938874345_marshal_pinvoke, CurvesSettings_t3938874345_marshal_pinvoke_back, CurvesSettings_t3938874345_marshal_pinvoke_cleanup, NULL, NULL, &CurvesSettings_t3938874345_0_0_0 } /* UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings */,
	{ NULL, Settings_t1847667170_marshal_pinvoke, Settings_t1847667170_marshal_pinvoke_back, Settings_t1847667170_marshal_pinvoke_cleanup, NULL, NULL, &Settings_t1847667170_0_0_0 } /* UnityEngine.PostProcessing.ColorGradingModel/Settings */,
	{ NULL, Settings_t2371698414_marshal_pinvoke, Settings_t2371698414_marshal_pinvoke_back, Settings_t2371698414_marshal_pinvoke_cleanup, NULL, NULL, &Settings_t2371698414_0_0_0 } /* UnityEngine.PostProcessing.DepthOfFieldModel/Settings */,
	{ NULL, Settings_t1699529798_marshal_pinvoke, Settings_t1699529798_marshal_pinvoke_back, Settings_t1699529798_marshal_pinvoke_cleanup, NULL, NULL, &Settings_t1699529798_0_0_0 } /* UnityEngine.PostProcessing.EyeAdaptationModel/Settings */,
	{ NULL, Settings_t2602911635_marshal_pinvoke, Settings_t2602911635_marshal_pinvoke_back, Settings_t2602911635_marshal_pinvoke_cleanup, NULL, NULL, &Settings_t2602911635_0_0_0 } /* UnityEngine.PostProcessing.FogModel/Settings */,
	{ NULL, Settings_t2000867362_marshal_pinvoke, Settings_t2000867362_marshal_pinvoke_back, Settings_t2000867362_marshal_pinvoke_cleanup, NULL, NULL, &Settings_t2000867362_0_0_0 } /* UnityEngine.PostProcessing.GrainModel/Settings */,
	{ NULL, Frame_t209750528_marshal_pinvoke, Frame_t209750528_marshal_pinvoke_back, Frame_t209750528_marshal_pinvoke_cleanup, NULL, NULL, &Frame_t209750528_0_0_0 } /* UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame */,
	{ NULL, ReflectionSettings_t786834427_marshal_pinvoke, ReflectionSettings_t786834427_marshal_pinvoke_back, ReflectionSettings_t786834427_marshal_pinvoke_cleanup, NULL, NULL, &ReflectionSettings_t786834427_0_0_0 } /* UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings */,
	{ NULL, Settings_t4238070798_marshal_pinvoke, Settings_t4238070798_marshal_pinvoke_back, Settings_t4238070798_marshal_pinvoke_cleanup, NULL, NULL, &Settings_t4238070798_0_0_0 } /* UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings */,
	{ NULL, Settings_t3969925360_marshal_pinvoke, Settings_t3969925360_marshal_pinvoke_back, Settings_t3969925360_marshal_pinvoke_cleanup, NULL, NULL, &Settings_t3969925360_0_0_0 } /* UnityEngine.PostProcessing.UserLutModel/Settings */,
	{ NULL, Settings_t2745418096_marshal_pinvoke, Settings_t2745418096_marshal_pinvoke_back, Settings_t2745418096_marshal_pinvoke_cleanup, NULL, NULL, &Settings_t2745418096_0_0_0 } /* UnityEngine.PostProcessing.VignetteModel/Settings */,
	NULL,
};
