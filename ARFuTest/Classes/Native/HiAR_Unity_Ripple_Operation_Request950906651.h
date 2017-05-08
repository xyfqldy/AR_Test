#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "HiAR_Unity_Ripple_Operation_Entry888262374.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t1951404513;
// System.Net.HttpWebResponse
struct HttpWebResponse_t2828383075;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t3255436806;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// LitJson.JSONNode
struct JSONNode_t1888574622;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ripple.Operation.Request
struct  Request_t950906651  : public Entry_t888262374
{
public:
	// System.Net.HttpWebRequest Ripple.Operation.Request::request
	HttpWebRequest_t1951404513 * ___request_6;
	// System.Net.HttpWebResponse Ripple.Operation.Request::response
	HttpWebResponse_t2828383075 * ___response_7;
	// System.String Ripple.Operation.Request::responseFile
	String_t* ___responseFile_8;
	// System.Exception Ripple.Operation.Request::error
	Exception_t1927440687 * ___error_9;
	// System.Boolean Ripple.Operation.Request::CheckExpire
	bool ___CheckExpire_10;
	// System.Boolean Ripple.Operation.Request::is304
	bool ___is304_11;
	// System.Boolean Ripple.Operation.Request::errorCase
	bool ___errorCase_12;
	// System.Boolean Ripple.Operation.Request::ReadCache
	bool ___ReadCache_15;
	// System.Boolean Ripple.Operation.Request::ReadCacheWhenError
	bool ___ReadCacheWhenError_16;
	// System.String Ripple.Operation.Request::filename
	String_t* ___filename_17;
	// System.Boolean Ripple.Operation.Request::Breakpoints
	bool ___Breakpoints_18;
	// System.Int64 Ripple.Operation.Request::totleLength
	int64_t ___totleLength_19;
	// System.Int64 Ripple.Operation.Request::downloadedLength
	int64_t ___downloadedLength_20;
	// System.Boolean Ripple.Operation.Request::isCancel
	bool ___isCancel_21;
	// System.Byte[] Ripple.Operation.Request::contentBuffer
	ByteU5BU5D_t3397334013* ___contentBuffer_22;
	// System.TimeSpan Ripple.Operation.Request::Timeout
	TimeSpan_t3430258949  ___Timeout_23;
	// System.Object Ripple.Operation.Request::lockThis
	Il2CppObject * ___lockThis_24;
	// System.Boolean Ripple.Operation.Request::isTimeout
	bool ___isTimeout_26;
	// System.IO.Stream Ripple.Operation.Request::currentstream
	Stream_t3255436806 * ___currentstream_27;
	// System.IO.Stream Ripple.Operation.Request::netstream
	Stream_t3255436806 * ___netstream_28;

public:
	inline static int32_t get_offset_of_request_6() { return static_cast<int32_t>(offsetof(Request_t950906651, ___request_6)); }
	inline HttpWebRequest_t1951404513 * get_request_6() const { return ___request_6; }
	inline HttpWebRequest_t1951404513 ** get_address_of_request_6() { return &___request_6; }
	inline void set_request_6(HttpWebRequest_t1951404513 * value)
	{
		___request_6 = value;
		Il2CppCodeGenWriteBarrier(&___request_6, value);
	}

	inline static int32_t get_offset_of_response_7() { return static_cast<int32_t>(offsetof(Request_t950906651, ___response_7)); }
	inline HttpWebResponse_t2828383075 * get_response_7() const { return ___response_7; }
	inline HttpWebResponse_t2828383075 ** get_address_of_response_7() { return &___response_7; }
	inline void set_response_7(HttpWebResponse_t2828383075 * value)
	{
		___response_7 = value;
		Il2CppCodeGenWriteBarrier(&___response_7, value);
	}

	inline static int32_t get_offset_of_responseFile_8() { return static_cast<int32_t>(offsetof(Request_t950906651, ___responseFile_8)); }
	inline String_t* get_responseFile_8() const { return ___responseFile_8; }
	inline String_t** get_address_of_responseFile_8() { return &___responseFile_8; }
	inline void set_responseFile_8(String_t* value)
	{
		___responseFile_8 = value;
		Il2CppCodeGenWriteBarrier(&___responseFile_8, value);
	}

	inline static int32_t get_offset_of_error_9() { return static_cast<int32_t>(offsetof(Request_t950906651, ___error_9)); }
	inline Exception_t1927440687 * get_error_9() const { return ___error_9; }
	inline Exception_t1927440687 ** get_address_of_error_9() { return &___error_9; }
	inline void set_error_9(Exception_t1927440687 * value)
	{
		___error_9 = value;
		Il2CppCodeGenWriteBarrier(&___error_9, value);
	}

	inline static int32_t get_offset_of_CheckExpire_10() { return static_cast<int32_t>(offsetof(Request_t950906651, ___CheckExpire_10)); }
	inline bool get_CheckExpire_10() const { return ___CheckExpire_10; }
	inline bool* get_address_of_CheckExpire_10() { return &___CheckExpire_10; }
	inline void set_CheckExpire_10(bool value)
	{
		___CheckExpire_10 = value;
	}

	inline static int32_t get_offset_of_is304_11() { return static_cast<int32_t>(offsetof(Request_t950906651, ___is304_11)); }
	inline bool get_is304_11() const { return ___is304_11; }
	inline bool* get_address_of_is304_11() { return &___is304_11; }
	inline void set_is304_11(bool value)
	{
		___is304_11 = value;
	}

	inline static int32_t get_offset_of_errorCase_12() { return static_cast<int32_t>(offsetof(Request_t950906651, ___errorCase_12)); }
	inline bool get_errorCase_12() const { return ___errorCase_12; }
	inline bool* get_address_of_errorCase_12() { return &___errorCase_12; }
	inline void set_errorCase_12(bool value)
	{
		___errorCase_12 = value;
	}

	inline static int32_t get_offset_of_ReadCache_15() { return static_cast<int32_t>(offsetof(Request_t950906651, ___ReadCache_15)); }
	inline bool get_ReadCache_15() const { return ___ReadCache_15; }
	inline bool* get_address_of_ReadCache_15() { return &___ReadCache_15; }
	inline void set_ReadCache_15(bool value)
	{
		___ReadCache_15 = value;
	}

	inline static int32_t get_offset_of_ReadCacheWhenError_16() { return static_cast<int32_t>(offsetof(Request_t950906651, ___ReadCacheWhenError_16)); }
	inline bool get_ReadCacheWhenError_16() const { return ___ReadCacheWhenError_16; }
	inline bool* get_address_of_ReadCacheWhenError_16() { return &___ReadCacheWhenError_16; }
	inline void set_ReadCacheWhenError_16(bool value)
	{
		___ReadCacheWhenError_16 = value;
	}

	inline static int32_t get_offset_of_filename_17() { return static_cast<int32_t>(offsetof(Request_t950906651, ___filename_17)); }
	inline String_t* get_filename_17() const { return ___filename_17; }
	inline String_t** get_address_of_filename_17() { return &___filename_17; }
	inline void set_filename_17(String_t* value)
	{
		___filename_17 = value;
		Il2CppCodeGenWriteBarrier(&___filename_17, value);
	}

	inline static int32_t get_offset_of_Breakpoints_18() { return static_cast<int32_t>(offsetof(Request_t950906651, ___Breakpoints_18)); }
	inline bool get_Breakpoints_18() const { return ___Breakpoints_18; }
	inline bool* get_address_of_Breakpoints_18() { return &___Breakpoints_18; }
	inline void set_Breakpoints_18(bool value)
	{
		___Breakpoints_18 = value;
	}

	inline static int32_t get_offset_of_totleLength_19() { return static_cast<int32_t>(offsetof(Request_t950906651, ___totleLength_19)); }
	inline int64_t get_totleLength_19() const { return ___totleLength_19; }
	inline int64_t* get_address_of_totleLength_19() { return &___totleLength_19; }
	inline void set_totleLength_19(int64_t value)
	{
		___totleLength_19 = value;
	}

	inline static int32_t get_offset_of_downloadedLength_20() { return static_cast<int32_t>(offsetof(Request_t950906651, ___downloadedLength_20)); }
	inline int64_t get_downloadedLength_20() const { return ___downloadedLength_20; }
	inline int64_t* get_address_of_downloadedLength_20() { return &___downloadedLength_20; }
	inline void set_downloadedLength_20(int64_t value)
	{
		___downloadedLength_20 = value;
	}

	inline static int32_t get_offset_of_isCancel_21() { return static_cast<int32_t>(offsetof(Request_t950906651, ___isCancel_21)); }
	inline bool get_isCancel_21() const { return ___isCancel_21; }
	inline bool* get_address_of_isCancel_21() { return &___isCancel_21; }
	inline void set_isCancel_21(bool value)
	{
		___isCancel_21 = value;
	}

	inline static int32_t get_offset_of_contentBuffer_22() { return static_cast<int32_t>(offsetof(Request_t950906651, ___contentBuffer_22)); }
	inline ByteU5BU5D_t3397334013* get_contentBuffer_22() const { return ___contentBuffer_22; }
	inline ByteU5BU5D_t3397334013** get_address_of_contentBuffer_22() { return &___contentBuffer_22; }
	inline void set_contentBuffer_22(ByteU5BU5D_t3397334013* value)
	{
		___contentBuffer_22 = value;
		Il2CppCodeGenWriteBarrier(&___contentBuffer_22, value);
	}

	inline static int32_t get_offset_of_Timeout_23() { return static_cast<int32_t>(offsetof(Request_t950906651, ___Timeout_23)); }
	inline TimeSpan_t3430258949  get_Timeout_23() const { return ___Timeout_23; }
	inline TimeSpan_t3430258949 * get_address_of_Timeout_23() { return &___Timeout_23; }
	inline void set_Timeout_23(TimeSpan_t3430258949  value)
	{
		___Timeout_23 = value;
	}

	inline static int32_t get_offset_of_lockThis_24() { return static_cast<int32_t>(offsetof(Request_t950906651, ___lockThis_24)); }
	inline Il2CppObject * get_lockThis_24() const { return ___lockThis_24; }
	inline Il2CppObject ** get_address_of_lockThis_24() { return &___lockThis_24; }
	inline void set_lockThis_24(Il2CppObject * value)
	{
		___lockThis_24 = value;
		Il2CppCodeGenWriteBarrier(&___lockThis_24, value);
	}

	inline static int32_t get_offset_of_isTimeout_26() { return static_cast<int32_t>(offsetof(Request_t950906651, ___isTimeout_26)); }
	inline bool get_isTimeout_26() const { return ___isTimeout_26; }
	inline bool* get_address_of_isTimeout_26() { return &___isTimeout_26; }
	inline void set_isTimeout_26(bool value)
	{
		___isTimeout_26 = value;
	}

	inline static int32_t get_offset_of_currentstream_27() { return static_cast<int32_t>(offsetof(Request_t950906651, ___currentstream_27)); }
	inline Stream_t3255436806 * get_currentstream_27() const { return ___currentstream_27; }
	inline Stream_t3255436806 ** get_address_of_currentstream_27() { return &___currentstream_27; }
	inline void set_currentstream_27(Stream_t3255436806 * value)
	{
		___currentstream_27 = value;
		Il2CppCodeGenWriteBarrier(&___currentstream_27, value);
	}

	inline static int32_t get_offset_of_netstream_28() { return static_cast<int32_t>(offsetof(Request_t950906651, ___netstream_28)); }
	inline Stream_t3255436806 * get_netstream_28() const { return ___netstream_28; }
	inline Stream_t3255436806 ** get_address_of_netstream_28() { return &___netstream_28; }
	inline void set_netstream_28(Stream_t3255436806 * value)
	{
		___netstream_28 = value;
		Il2CppCodeGenWriteBarrier(&___netstream_28, value);
	}
};

struct Request_t950906651_StaticFields
{
public:
	// System.Boolean Ripple.Operation.Request::StaticReadCache
	bool ___StaticReadCache_13;
	// System.Boolean Ripple.Operation.Request::StaticReadCacheWhenError
	bool ___StaticReadCacheWhenError_14;
	// System.String Ripple.Operation.Request::cacheDir
	String_t* ___cacheDir_25;
	// System.Text.RegularExpressions.Regex Ripple.Operation.Request::exReg
	Regex_t1803876613 * ___exReg_29;
	// System.String Ripple.Operation.Request::indexPath
	String_t* ___indexPath_30;
	// LitJson.JSONNode Ripple.Operation.Request::indexes
	JSONNode_t1888574622 * ___indexes_31;

public:
	inline static int32_t get_offset_of_StaticReadCache_13() { return static_cast<int32_t>(offsetof(Request_t950906651_StaticFields, ___StaticReadCache_13)); }
	inline bool get_StaticReadCache_13() const { return ___StaticReadCache_13; }
	inline bool* get_address_of_StaticReadCache_13() { return &___StaticReadCache_13; }
	inline void set_StaticReadCache_13(bool value)
	{
		___StaticReadCache_13 = value;
	}

	inline static int32_t get_offset_of_StaticReadCacheWhenError_14() { return static_cast<int32_t>(offsetof(Request_t950906651_StaticFields, ___StaticReadCacheWhenError_14)); }
	inline bool get_StaticReadCacheWhenError_14() const { return ___StaticReadCacheWhenError_14; }
	inline bool* get_address_of_StaticReadCacheWhenError_14() { return &___StaticReadCacheWhenError_14; }
	inline void set_StaticReadCacheWhenError_14(bool value)
	{
		___StaticReadCacheWhenError_14 = value;
	}

	inline static int32_t get_offset_of_cacheDir_25() { return static_cast<int32_t>(offsetof(Request_t950906651_StaticFields, ___cacheDir_25)); }
	inline String_t* get_cacheDir_25() const { return ___cacheDir_25; }
	inline String_t** get_address_of_cacheDir_25() { return &___cacheDir_25; }
	inline void set_cacheDir_25(String_t* value)
	{
		___cacheDir_25 = value;
		Il2CppCodeGenWriteBarrier(&___cacheDir_25, value);
	}

	inline static int32_t get_offset_of_exReg_29() { return static_cast<int32_t>(offsetof(Request_t950906651_StaticFields, ___exReg_29)); }
	inline Regex_t1803876613 * get_exReg_29() const { return ___exReg_29; }
	inline Regex_t1803876613 ** get_address_of_exReg_29() { return &___exReg_29; }
	inline void set_exReg_29(Regex_t1803876613 * value)
	{
		___exReg_29 = value;
		Il2CppCodeGenWriteBarrier(&___exReg_29, value);
	}

	inline static int32_t get_offset_of_indexPath_30() { return static_cast<int32_t>(offsetof(Request_t950906651_StaticFields, ___indexPath_30)); }
	inline String_t* get_indexPath_30() const { return ___indexPath_30; }
	inline String_t** get_address_of_indexPath_30() { return &___indexPath_30; }
	inline void set_indexPath_30(String_t* value)
	{
		___indexPath_30 = value;
		Il2CppCodeGenWriteBarrier(&___indexPath_30, value);
	}

	inline static int32_t get_offset_of_indexes_31() { return static_cast<int32_t>(offsetof(Request_t950906651_StaticFields, ___indexes_31)); }
	inline JSONNode_t1888574622 * get_indexes_31() const { return ___indexes_31; }
	inline JSONNode_t1888574622 ** get_address_of_indexes_31() { return &___indexes_31; }
	inline void set_indexes_31(JSONNode_t1888574622 * value)
	{
		___indexes_31 = value;
		Il2CppCodeGenWriteBarrier(&___indexes_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
