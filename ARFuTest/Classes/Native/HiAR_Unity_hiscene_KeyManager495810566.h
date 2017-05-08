#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<hiscene.IKEY>
struct List_1_t3788966336;
// hiscene.CloudDataManager
struct CloudDataManager_t3731814964;
// System.Timers.Timer
struct Timer_t4294691011;
// System.Action`1<RecoResult>
struct Action_1_t286151760;
// hiscene.KeyManager
struct KeyManager_t495810566;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.KeyManager
struct  KeyManager_t495810566  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<hiscene.IKEY> hiscene.KeyManager::m_cloudkeyList
	List_1_t3788966336 * ___m_cloudkeyList_0;
	// System.Collections.Generic.List`1<hiscene.IKEY> hiscene.KeyManager::m_localkeyList
	List_1_t3788966336 * ___m_localkeyList_1;
	// hiscene.CloudDataManager hiscene.KeyManager::cloudDataManager
	CloudDataManager_t3731814964 * ___cloudDataManager_2;
	// System.Timers.Timer hiscene.KeyManager::timer
	Timer_t4294691011 * ___timer_3;
	// System.Action`1<RecoResult> hiscene.KeyManager::actionCloud
	Action_1_t286151760 * ___actionCloud_4;
	// System.Action`1<RecoResult> hiscene.KeyManager::actionDynamic
	Action_1_t286151760 * ___actionDynamic_5;
	// System.Boolean hiscene.KeyManager::hasLocalReco
	bool ___hasLocalReco_7;

public:
	inline static int32_t get_offset_of_m_cloudkeyList_0() { return static_cast<int32_t>(offsetof(KeyManager_t495810566, ___m_cloudkeyList_0)); }
	inline List_1_t3788966336 * get_m_cloudkeyList_0() const { return ___m_cloudkeyList_0; }
	inline List_1_t3788966336 ** get_address_of_m_cloudkeyList_0() { return &___m_cloudkeyList_0; }
	inline void set_m_cloudkeyList_0(List_1_t3788966336 * value)
	{
		___m_cloudkeyList_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_cloudkeyList_0, value);
	}

	inline static int32_t get_offset_of_m_localkeyList_1() { return static_cast<int32_t>(offsetof(KeyManager_t495810566, ___m_localkeyList_1)); }
	inline List_1_t3788966336 * get_m_localkeyList_1() const { return ___m_localkeyList_1; }
	inline List_1_t3788966336 ** get_address_of_m_localkeyList_1() { return &___m_localkeyList_1; }
	inline void set_m_localkeyList_1(List_1_t3788966336 * value)
	{
		___m_localkeyList_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_localkeyList_1, value);
	}

	inline static int32_t get_offset_of_cloudDataManager_2() { return static_cast<int32_t>(offsetof(KeyManager_t495810566, ___cloudDataManager_2)); }
	inline CloudDataManager_t3731814964 * get_cloudDataManager_2() const { return ___cloudDataManager_2; }
	inline CloudDataManager_t3731814964 ** get_address_of_cloudDataManager_2() { return &___cloudDataManager_2; }
	inline void set_cloudDataManager_2(CloudDataManager_t3731814964 * value)
	{
		___cloudDataManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___cloudDataManager_2, value);
	}

	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(KeyManager_t495810566, ___timer_3)); }
	inline Timer_t4294691011 * get_timer_3() const { return ___timer_3; }
	inline Timer_t4294691011 ** get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(Timer_t4294691011 * value)
	{
		___timer_3 = value;
		Il2CppCodeGenWriteBarrier(&___timer_3, value);
	}

	inline static int32_t get_offset_of_actionCloud_4() { return static_cast<int32_t>(offsetof(KeyManager_t495810566, ___actionCloud_4)); }
	inline Action_1_t286151760 * get_actionCloud_4() const { return ___actionCloud_4; }
	inline Action_1_t286151760 ** get_address_of_actionCloud_4() { return &___actionCloud_4; }
	inline void set_actionCloud_4(Action_1_t286151760 * value)
	{
		___actionCloud_4 = value;
		Il2CppCodeGenWriteBarrier(&___actionCloud_4, value);
	}

	inline static int32_t get_offset_of_actionDynamic_5() { return static_cast<int32_t>(offsetof(KeyManager_t495810566, ___actionDynamic_5)); }
	inline Action_1_t286151760 * get_actionDynamic_5() const { return ___actionDynamic_5; }
	inline Action_1_t286151760 ** get_address_of_actionDynamic_5() { return &___actionDynamic_5; }
	inline void set_actionDynamic_5(Action_1_t286151760 * value)
	{
		___actionDynamic_5 = value;
		Il2CppCodeGenWriteBarrier(&___actionDynamic_5, value);
	}

	inline static int32_t get_offset_of_hasLocalReco_7() { return static_cast<int32_t>(offsetof(KeyManager_t495810566, ___hasLocalReco_7)); }
	inline bool get_hasLocalReco_7() const { return ___hasLocalReco_7; }
	inline bool* get_address_of_hasLocalReco_7() { return &___hasLocalReco_7; }
	inline void set_hasLocalReco_7(bool value)
	{
		___hasLocalReco_7 = value;
	}
};

struct KeyManager_t495810566_StaticFields
{
public:
	// hiscene.KeyManager hiscene.KeyManager::keyInstance
	KeyManager_t495810566 * ___keyInstance_6;

public:
	inline static int32_t get_offset_of_keyInstance_6() { return static_cast<int32_t>(offsetof(KeyManager_t495810566_StaticFields, ___keyInstance_6)); }
	inline KeyManager_t495810566 * get_keyInstance_6() const { return ___keyInstance_6; }
	inline KeyManager_t495810566 ** get_address_of_keyInstance_6() { return &___keyInstance_6; }
	inline void set_keyInstance_6(KeyManager_t495810566 * value)
	{
		___keyInstance_6 = value;
		Il2CppCodeGenWriteBarrier(&___keyInstance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
