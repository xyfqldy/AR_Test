#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<System.Action`1<Ripple.Operation.Entry>>
struct List_1_t59182888;
// System.Collections.Generic.List`1<System.Action`2<Ripple.Operation.Entry,System.Single>>
struct List_1_t4229813955;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t2595592884;
// Ripple.Operation.Queue
struct Queue_t553715981;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ripple.Operation.Entry
struct  Entry_t888262374  : public Il2CppObject
{
public:
	// System.Boolean Ripple.Operation.Entry::live
	bool ___live_0;
	// System.Collections.Generic.List`1<System.Action`1<Ripple.Operation.Entry>> Ripple.Operation.Entry::onComplete
	List_1_t59182888 * ___onComplete_1;
	// System.Collections.Generic.List`1<System.Action`2<Ripple.Operation.Entry,System.Single>> Ripple.Operation.Entry::onProgress
	List_1_t4229813955 * ___onProgress_2;
	// System.Collections.Generic.List`1<System.Action`2<Ripple.Operation.Entry,System.Single>> Ripple.Operation.Entry::onTreadProgress
	List_1_t4229813955 * ___onTreadProgress_3;
	// System.Collections.Generic.List`1<System.Action> Ripple.Operation.Entry::onTreadComplete
	List_1_t2595592884 * ___onTreadComplete_4;
	// Ripple.Operation.Queue Ripple.Operation.Entry::Queue
	Queue_t553715981 * ___Queue_5;

public:
	inline static int32_t get_offset_of_live_0() { return static_cast<int32_t>(offsetof(Entry_t888262374, ___live_0)); }
	inline bool get_live_0() const { return ___live_0; }
	inline bool* get_address_of_live_0() { return &___live_0; }
	inline void set_live_0(bool value)
	{
		___live_0 = value;
	}

	inline static int32_t get_offset_of_onComplete_1() { return static_cast<int32_t>(offsetof(Entry_t888262374, ___onComplete_1)); }
	inline List_1_t59182888 * get_onComplete_1() const { return ___onComplete_1; }
	inline List_1_t59182888 ** get_address_of_onComplete_1() { return &___onComplete_1; }
	inline void set_onComplete_1(List_1_t59182888 * value)
	{
		___onComplete_1 = value;
		Il2CppCodeGenWriteBarrier(&___onComplete_1, value);
	}

	inline static int32_t get_offset_of_onProgress_2() { return static_cast<int32_t>(offsetof(Entry_t888262374, ___onProgress_2)); }
	inline List_1_t4229813955 * get_onProgress_2() const { return ___onProgress_2; }
	inline List_1_t4229813955 ** get_address_of_onProgress_2() { return &___onProgress_2; }
	inline void set_onProgress_2(List_1_t4229813955 * value)
	{
		___onProgress_2 = value;
		Il2CppCodeGenWriteBarrier(&___onProgress_2, value);
	}

	inline static int32_t get_offset_of_onTreadProgress_3() { return static_cast<int32_t>(offsetof(Entry_t888262374, ___onTreadProgress_3)); }
	inline List_1_t4229813955 * get_onTreadProgress_3() const { return ___onTreadProgress_3; }
	inline List_1_t4229813955 ** get_address_of_onTreadProgress_3() { return &___onTreadProgress_3; }
	inline void set_onTreadProgress_3(List_1_t4229813955 * value)
	{
		___onTreadProgress_3 = value;
		Il2CppCodeGenWriteBarrier(&___onTreadProgress_3, value);
	}

	inline static int32_t get_offset_of_onTreadComplete_4() { return static_cast<int32_t>(offsetof(Entry_t888262374, ___onTreadComplete_4)); }
	inline List_1_t2595592884 * get_onTreadComplete_4() const { return ___onTreadComplete_4; }
	inline List_1_t2595592884 ** get_address_of_onTreadComplete_4() { return &___onTreadComplete_4; }
	inline void set_onTreadComplete_4(List_1_t2595592884 * value)
	{
		___onTreadComplete_4 = value;
		Il2CppCodeGenWriteBarrier(&___onTreadComplete_4, value);
	}

	inline static int32_t get_offset_of_Queue_5() { return static_cast<int32_t>(offsetof(Entry_t888262374, ___Queue_5)); }
	inline Queue_t553715981 * get_Queue_5() const { return ___Queue_5; }
	inline Queue_t553715981 ** get_address_of_Queue_5() { return &___Queue_5; }
	inline void set_Queue_5(Queue_t553715981 * value)
	{
		___Queue_5 = value;
		Il2CppCodeGenWriteBarrier(&___Queue_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
