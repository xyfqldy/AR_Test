#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ripple.Operation.Request/Data
struct  Data_t3384939675  : public Il2CppObject
{
public:
	// System.Byte[] Ripple.Operation.Request/Data::buffer
	ByteU5BU5D_t3397334013* ___buffer_0;
	// System.String Ripple.Operation.Request/Data::name
	String_t* ___name_1;
	// System.String Ripple.Operation.Request/Data::mimetype
	String_t* ___mimetype_2;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(Data_t3384939675, ___buffer_0)); }
	inline ByteU5BU5D_t3397334013* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t3397334013* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Data_t3384939675, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_mimetype_2() { return static_cast<int32_t>(offsetof(Data_t3384939675, ___mimetype_2)); }
	inline String_t* get_mimetype_2() const { return ___mimetype_2; }
	inline String_t** get_address_of_mimetype_2() { return &___mimetype_2; }
	inline void set_mimetype_2(String_t* value)
	{
		___mimetype_2 = value;
		Il2CppCodeGenWriteBarrier(&___mimetype_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
