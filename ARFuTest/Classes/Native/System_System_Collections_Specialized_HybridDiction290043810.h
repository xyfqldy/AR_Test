#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t3458713452;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t290043810  : public Il2CppObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_1;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t909839986 * ___hashtable_2;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t3458713452 * ___list_3;

public:
	inline static int32_t get_offset_of_caseInsensitive_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t290043810, ___caseInsensitive_1)); }
	inline bool get_caseInsensitive_1() const { return ___caseInsensitive_1; }
	inline bool* get_address_of_caseInsensitive_1() { return &___caseInsensitive_1; }
	inline void set_caseInsensitive_1(bool value)
	{
		___caseInsensitive_1 = value;
	}

	inline static int32_t get_offset_of_hashtable_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t290043810, ___hashtable_2)); }
	inline Hashtable_t909839986 * get_hashtable_2() const { return ___hashtable_2; }
	inline Hashtable_t909839986 ** get_address_of_hashtable_2() { return &___hashtable_2; }
	inline void set_hashtable_2(Hashtable_t909839986 * value)
	{
		___hashtable_2 = value;
		Il2CppCodeGenWriteBarrier(&___hashtable_2, value);
	}

	inline static int32_t get_offset_of_list_3() { return static_cast<int32_t>(offsetof(HybridDictionary_t290043810, ___list_3)); }
	inline ListDictionary_t3458713452 * get_list_3() const { return ___list_3; }
	inline ListDictionary_t3458713452 ** get_address_of_list_3() { return &___list_3; }
	inline void set_list_3(ListDictionary_t3458713452 * value)
	{
		___list_3 = value;
		Il2CppCodeGenWriteBarrier(&___list_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
