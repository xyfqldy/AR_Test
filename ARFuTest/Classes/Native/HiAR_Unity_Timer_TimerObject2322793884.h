#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer/TimerObject
struct  TimerObject_t2322793884  : public Il2CppObject
{
public:
	// System.Action Timer/TimerObject::action
	Action_t3226471752 * ___action_0;
	// System.Single Timer/TimerObject::lifeTime
	float ___lifeTime_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(TimerObject_t2322793884, ___action_0)); }
	inline Action_t3226471752 * get_action_0() const { return ___action_0; }
	inline Action_t3226471752 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_t3226471752 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}

	inline static int32_t get_offset_of_lifeTime_1() { return static_cast<int32_t>(offsetof(TimerObject_t2322793884, ___lifeTime_1)); }
	inline float get_lifeTime_1() const { return ___lifeTime_1; }
	inline float* get_address_of_lifeTime_1() { return &___lifeTime_1; }
	inline void set_lifeTime_1(float value)
	{
		___lifeTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
