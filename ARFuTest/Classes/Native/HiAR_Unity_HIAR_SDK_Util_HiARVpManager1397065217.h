#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// HIAR.SDK.Util.HiARVpManager
struct HiARVpManager_t1397065217;
// System.Object
struct Il2CppObject;
// HIAR.SDK.Util.DSVideoPlayer
struct DSVideoPlayer_t2787076687;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HIAR.SDK.Util.HiARVpManager
struct  HiARVpManager_t1397065217  : public Il2CppObject
{
public:
	// System.Boolean HIAR.SDK.Util.HiARVpManager::inited
	bool ___inited_2;
	// HIAR.SDK.Util.DSVideoPlayer HIAR.SDK.Util.HiARVpManager::videoInstance
	DSVideoPlayer_t2787076687 * ___videoInstance_3;
	// System.Collections.Generic.List`1<System.Int32> HIAR.SDK.Util.HiARVpManager::dsVideoPlayerList
	List_1_t1440998580 * ___dsVideoPlayerList_4;

public:
	inline static int32_t get_offset_of_inited_2() { return static_cast<int32_t>(offsetof(HiARVpManager_t1397065217, ___inited_2)); }
	inline bool get_inited_2() const { return ___inited_2; }
	inline bool* get_address_of_inited_2() { return &___inited_2; }
	inline void set_inited_2(bool value)
	{
		___inited_2 = value;
	}

	inline static int32_t get_offset_of_videoInstance_3() { return static_cast<int32_t>(offsetof(HiARVpManager_t1397065217, ___videoInstance_3)); }
	inline DSVideoPlayer_t2787076687 * get_videoInstance_3() const { return ___videoInstance_3; }
	inline DSVideoPlayer_t2787076687 ** get_address_of_videoInstance_3() { return &___videoInstance_3; }
	inline void set_videoInstance_3(DSVideoPlayer_t2787076687 * value)
	{
		___videoInstance_3 = value;
		Il2CppCodeGenWriteBarrier(&___videoInstance_3, value);
	}

	inline static int32_t get_offset_of_dsVideoPlayerList_4() { return static_cast<int32_t>(offsetof(HiARVpManager_t1397065217, ___dsVideoPlayerList_4)); }
	inline List_1_t1440998580 * get_dsVideoPlayerList_4() const { return ___dsVideoPlayerList_4; }
	inline List_1_t1440998580 ** get_address_of_dsVideoPlayerList_4() { return &___dsVideoPlayerList_4; }
	inline void set_dsVideoPlayerList_4(List_1_t1440998580 * value)
	{
		___dsVideoPlayerList_4 = value;
		Il2CppCodeGenWriteBarrier(&___dsVideoPlayerList_4, value);
	}
};

struct HiARVpManager_t1397065217_StaticFields
{
public:
	// HIAR.SDK.Util.HiARVpManager HIAR.SDK.Util.HiARVpManager::instance
	HiARVpManager_t1397065217 * ___instance_0;
	// System.Object HIAR.SDK.Util.HiARVpManager::syncRoot
	Il2CppObject * ___syncRoot_1;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(HiARVpManager_t1397065217_StaticFields, ___instance_0)); }
	inline HiARVpManager_t1397065217 * get_instance_0() const { return ___instance_0; }
	inline HiARVpManager_t1397065217 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(HiARVpManager_t1397065217 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}

	inline static int32_t get_offset_of_syncRoot_1() { return static_cast<int32_t>(offsetof(HiARVpManager_t1397065217_StaticFields, ___syncRoot_1)); }
	inline Il2CppObject * get_syncRoot_1() const { return ___syncRoot_1; }
	inline Il2CppObject ** get_address_of_syncRoot_1() { return &___syncRoot_1; }
	inline void set_syncRoot_1(Il2CppObject * value)
	{
		___syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier(&___syncRoot_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
