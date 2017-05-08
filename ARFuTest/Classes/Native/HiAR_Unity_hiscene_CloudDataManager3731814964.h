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
// System.Collections.Generic.List`1<hiscene.CloudTargetData>
struct List_1_t759657562;
// System.Timers.Timer
struct Timer_t4294691011;
// hiscene.CloudDataManager
struct CloudDataManager_t3731814964;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.CloudDataManager
struct  CloudDataManager_t3731814964  : public Il2CppObject
{
public:
	// System.String hiscene.CloudDataManager::m_path
	String_t* ___m_path_0;
	// System.String hiscene.CloudDataManager::absolute_file
	String_t* ___absolute_file_1;
	// System.Collections.Generic.List`1<hiscene.CloudTargetData> hiscene.CloudDataManager::m_dataSets
	List_1_t759657562 * ___m_dataSets_2;
	// System.Boolean hiscene.CloudDataManager::dirty
	bool ___dirty_3;
	// System.Timers.Timer hiscene.CloudDataManager::timer
	Timer_t4294691011 * ___timer_5;

public:
	inline static int32_t get_offset_of_m_path_0() { return static_cast<int32_t>(offsetof(CloudDataManager_t3731814964, ___m_path_0)); }
	inline String_t* get_m_path_0() const { return ___m_path_0; }
	inline String_t** get_address_of_m_path_0() { return &___m_path_0; }
	inline void set_m_path_0(String_t* value)
	{
		___m_path_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_path_0, value);
	}

	inline static int32_t get_offset_of_absolute_file_1() { return static_cast<int32_t>(offsetof(CloudDataManager_t3731814964, ___absolute_file_1)); }
	inline String_t* get_absolute_file_1() const { return ___absolute_file_1; }
	inline String_t** get_address_of_absolute_file_1() { return &___absolute_file_1; }
	inline void set_absolute_file_1(String_t* value)
	{
		___absolute_file_1 = value;
		Il2CppCodeGenWriteBarrier(&___absolute_file_1, value);
	}

	inline static int32_t get_offset_of_m_dataSets_2() { return static_cast<int32_t>(offsetof(CloudDataManager_t3731814964, ___m_dataSets_2)); }
	inline List_1_t759657562 * get_m_dataSets_2() const { return ___m_dataSets_2; }
	inline List_1_t759657562 ** get_address_of_m_dataSets_2() { return &___m_dataSets_2; }
	inline void set_m_dataSets_2(List_1_t759657562 * value)
	{
		___m_dataSets_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_dataSets_2, value);
	}

	inline static int32_t get_offset_of_dirty_3() { return static_cast<int32_t>(offsetof(CloudDataManager_t3731814964, ___dirty_3)); }
	inline bool get_dirty_3() const { return ___dirty_3; }
	inline bool* get_address_of_dirty_3() { return &___dirty_3; }
	inline void set_dirty_3(bool value)
	{
		___dirty_3 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(CloudDataManager_t3731814964, ___timer_5)); }
	inline Timer_t4294691011 * get_timer_5() const { return ___timer_5; }
	inline Timer_t4294691011 ** get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(Timer_t4294691011 * value)
	{
		___timer_5 = value;
		Il2CppCodeGenWriteBarrier(&___timer_5, value);
	}
};

struct CloudDataManager_t3731814964_StaticFields
{
public:
	// System.Int32 hiscene.CloudDataManager::MAXCOUNT
	int32_t ___MAXCOUNT_4;
	// hiscene.CloudDataManager hiscene.CloudDataManager::DataManagerInstance
	CloudDataManager_t3731814964 * ___DataManagerInstance_6;

public:
	inline static int32_t get_offset_of_MAXCOUNT_4() { return static_cast<int32_t>(offsetof(CloudDataManager_t3731814964_StaticFields, ___MAXCOUNT_4)); }
	inline int32_t get_MAXCOUNT_4() const { return ___MAXCOUNT_4; }
	inline int32_t* get_address_of_MAXCOUNT_4() { return &___MAXCOUNT_4; }
	inline void set_MAXCOUNT_4(int32_t value)
	{
		___MAXCOUNT_4 = value;
	}

	inline static int32_t get_offset_of_DataManagerInstance_6() { return static_cast<int32_t>(offsetof(CloudDataManager_t3731814964_StaticFields, ___DataManagerInstance_6)); }
	inline CloudDataManager_t3731814964 * get_DataManagerInstance_6() const { return ___DataManagerInstance_6; }
	inline CloudDataManager_t3731814964 ** get_address_of_DataManagerInstance_6() { return &___DataManagerInstance_6; }
	inline void set_DataManagerInstance_6(CloudDataManager_t3731814964 * value)
	{
		___DataManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier(&___DataManagerInstance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
