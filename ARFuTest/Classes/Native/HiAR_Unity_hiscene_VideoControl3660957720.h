#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<hiscene.VideoPlayer>
struct List_1_t4196380180;
// hiscene.VideoControl
struct VideoControl_t3660957720;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.VideoControl
struct  VideoControl_t3660957720  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<hiscene.VideoPlayer> hiscene.VideoControl::videoplayerList
	List_1_t4196380180 * ___videoplayerList_0;

public:
	inline static int32_t get_offset_of_videoplayerList_0() { return static_cast<int32_t>(offsetof(VideoControl_t3660957720, ___videoplayerList_0)); }
	inline List_1_t4196380180 * get_videoplayerList_0() const { return ___videoplayerList_0; }
	inline List_1_t4196380180 ** get_address_of_videoplayerList_0() { return &___videoplayerList_0; }
	inline void set_videoplayerList_0(List_1_t4196380180 * value)
	{
		___videoplayerList_0 = value;
		Il2CppCodeGenWriteBarrier(&___videoplayerList_0, value);
	}
};

struct VideoControl_t3660957720_StaticFields
{
public:
	// hiscene.VideoControl hiscene.VideoControl::instance
	VideoControl_t3660957720 * ___instance_1;

public:
	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(VideoControl_t3660957720_StaticFields, ___instance_1)); }
	inline VideoControl_t3660957720 * get_instance_1() const { return ___instance_1; }
	inline VideoControl_t3660957720 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(VideoControl_t3660957720 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier(&___instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
