#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<hiscene.Target>
struct List_1_t576236523;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TargetManager
struct  TargetManager_t1639230772  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<hiscene.Target> TargetManager::targetListForBaseTaget
	List_1_t576236523 * ___targetListForBaseTaget_2;

public:
	inline static int32_t get_offset_of_targetListForBaseTaget_2() { return static_cast<int32_t>(offsetof(TargetManager_t1639230772, ___targetListForBaseTaget_2)); }
	inline List_1_t576236523 * get_targetListForBaseTaget_2() const { return ___targetListForBaseTaget_2; }
	inline List_1_t576236523 ** get_address_of_targetListForBaseTaget_2() { return &___targetListForBaseTaget_2; }
	inline void set_targetListForBaseTaget_2(List_1_t576236523 * value)
	{
		___targetListForBaseTaget_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetListForBaseTaget_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
