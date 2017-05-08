#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "HiAR_Unity_Ripple_Operation_Single_1_gen3856943613.h"

// System.Collections.Generic.List`1<Ripple.Operation.Entry>
struct List_1_t257383506;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t2595592884;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ripple.Operation.Queue
struct  Queue_t553715981  : public Single_1_t3856943613
{
public:
	// System.Boolean Ripple.Operation.Queue::action
	bool ___action_1;
	// System.Collections.Generic.List`1<Ripple.Operation.Entry> Ripple.Operation.Queue::entries
	List_1_t257383506 * ___entries_2;
	// System.Collections.Generic.List`1<Ripple.Operation.Entry> Ripple.Operation.Queue::entryAdded
	List_1_t257383506 * ___entryAdded_4;

public:
	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Queue_t553715981, ___action_1)); }
	inline bool get_action_1() const { return ___action_1; }
	inline bool* get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(bool value)
	{
		___action_1 = value;
	}

	inline static int32_t get_offset_of_entries_2() { return static_cast<int32_t>(offsetof(Queue_t553715981, ___entries_2)); }
	inline List_1_t257383506 * get_entries_2() const { return ___entries_2; }
	inline List_1_t257383506 ** get_address_of_entries_2() { return &___entries_2; }
	inline void set_entries_2(List_1_t257383506 * value)
	{
		___entries_2 = value;
		Il2CppCodeGenWriteBarrier(&___entries_2, value);
	}

	inline static int32_t get_offset_of_entryAdded_4() { return static_cast<int32_t>(offsetof(Queue_t553715981, ___entryAdded_4)); }
	inline List_1_t257383506 * get_entryAdded_4() const { return ___entryAdded_4; }
	inline List_1_t257383506 ** get_address_of_entryAdded_4() { return &___entryAdded_4; }
	inline void set_entryAdded_4(List_1_t257383506 * value)
	{
		___entryAdded_4 = value;
		Il2CppCodeGenWriteBarrier(&___entryAdded_4, value);
	}
};

struct Queue_t553715981_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Action> Ripple.Operation.Queue::methodsQueue
	List_1_t2595592884 * ___methodsQueue_3;

public:
	inline static int32_t get_offset_of_methodsQueue_3() { return static_cast<int32_t>(offsetof(Queue_t553715981_StaticFields, ___methodsQueue_3)); }
	inline List_1_t2595592884 * get_methodsQueue_3() const { return ___methodsQueue_3; }
	inline List_1_t2595592884 ** get_address_of_methodsQueue_3() { return &___methodsQueue_3; }
	inline void set_methodsQueue_3(List_1_t2595592884 * value)
	{
		___methodsQueue_3 = value;
		Il2CppCodeGenWriteBarrier(&___methodsQueue_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
