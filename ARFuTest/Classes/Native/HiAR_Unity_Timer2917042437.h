#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "HiAR_Unity_Ripple_Operation_Single_1_gen1925302773.h"

// System.Collections.Generic.List`1<Timer/TimerObject>
struct List_1_t1691915016;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t2917042437  : public Single_1_t1925302773
{
public:
	// System.Collections.Generic.List`1<Timer/TimerObject> Timer::callbacks
	List_1_t1691915016 * ___callbacks_1;

public:
	inline static int32_t get_offset_of_callbacks_1() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___callbacks_1)); }
	inline List_1_t1691915016 * get_callbacks_1() const { return ___callbacks_1; }
	inline List_1_t1691915016 ** get_address_of_callbacks_1() { return &___callbacks_1; }
	inline void set_callbacks_1(List_1_t1691915016 * value)
	{
		___callbacks_1 = value;
		Il2CppCodeGenWriteBarrier(&___callbacks_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
