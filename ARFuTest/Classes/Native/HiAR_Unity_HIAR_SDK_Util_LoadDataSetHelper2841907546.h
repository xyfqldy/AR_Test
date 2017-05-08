#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HIAR.SDK.Util.LoadDataSetHelper
struct  LoadDataSetHelper_t2841907546  : public Il2CppObject
{
public:

public:
};

struct LoadDataSetHelper_t2841907546_StaticFields
{
public:
	// System.String HIAR.SDK.Util.LoadDataSetHelper::DefaultInfo
	String_t* ___DefaultInfo_0;
	// System.Single HIAR.SDK.Util.LoadDataSetHelper::DefaultDisplayRatio
	float ___DefaultDisplayRatio_1;
	// System.Single HIAR.SDK.Util.LoadDataSetHelper::DefaultLength
	float ___DefaultLength_2;

public:
	inline static int32_t get_offset_of_DefaultInfo_0() { return static_cast<int32_t>(offsetof(LoadDataSetHelper_t2841907546_StaticFields, ___DefaultInfo_0)); }
	inline String_t* get_DefaultInfo_0() const { return ___DefaultInfo_0; }
	inline String_t** get_address_of_DefaultInfo_0() { return &___DefaultInfo_0; }
	inline void set_DefaultInfo_0(String_t* value)
	{
		___DefaultInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultInfo_0, value);
	}

	inline static int32_t get_offset_of_DefaultDisplayRatio_1() { return static_cast<int32_t>(offsetof(LoadDataSetHelper_t2841907546_StaticFields, ___DefaultDisplayRatio_1)); }
	inline float get_DefaultDisplayRatio_1() const { return ___DefaultDisplayRatio_1; }
	inline float* get_address_of_DefaultDisplayRatio_1() { return &___DefaultDisplayRatio_1; }
	inline void set_DefaultDisplayRatio_1(float value)
	{
		___DefaultDisplayRatio_1 = value;
	}

	inline static int32_t get_offset_of_DefaultLength_2() { return static_cast<int32_t>(offsetof(LoadDataSetHelper_t2841907546_StaticFields, ___DefaultLength_2)); }
	inline float get_DefaultLength_2() const { return ___DefaultLength_2; }
	inline float* get_address_of_DefaultLength_2() { return &___DefaultLength_2; }
	inline void set_DefaultLength_2(float value)
	{
		___DefaultLength_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
