#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "HiAR_Unity_hiscene_IHsLoadStatus1772773902.h"

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Action`1<hiscene.HsGameObject>
struct Action_1_t2627274360;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.HsGameObject
struct  HsGameObject_t2825474978  : public Il2CppObject
{
public:
	// hiscene.IHsLoadStatus hiscene.HsGameObject::status
	int32_t ___status_0;
	// System.String hiscene.HsGameObject::url
	String_t* ___url_1;
	// UnityEngine.GameObject hiscene.HsGameObject::hsGameObjectInstance
	GameObject_t1756533147 * ___hsGameObjectInstance_2;
	// System.Action`1<hiscene.HsGameObject> hiscene.HsGameObject::onStatusChange
	Action_1_t2627274360 * ___onStatusChange_3;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(HsGameObject_t2825474978, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(HsGameObject_t2825474978, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier(&___url_1, value);
	}

	inline static int32_t get_offset_of_hsGameObjectInstance_2() { return static_cast<int32_t>(offsetof(HsGameObject_t2825474978, ___hsGameObjectInstance_2)); }
	inline GameObject_t1756533147 * get_hsGameObjectInstance_2() const { return ___hsGameObjectInstance_2; }
	inline GameObject_t1756533147 ** get_address_of_hsGameObjectInstance_2() { return &___hsGameObjectInstance_2; }
	inline void set_hsGameObjectInstance_2(GameObject_t1756533147 * value)
	{
		___hsGameObjectInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___hsGameObjectInstance_2, value);
	}

	inline static int32_t get_offset_of_onStatusChange_3() { return static_cast<int32_t>(offsetof(HsGameObject_t2825474978, ___onStatusChange_3)); }
	inline Action_1_t2627274360 * get_onStatusChange_3() const { return ___onStatusChange_3; }
	inline Action_1_t2627274360 ** get_address_of_onStatusChange_3() { return &___onStatusChange_3; }
	inline void set_onStatusChange_3(Action_1_t2627274360 * value)
	{
		___onStatusChange_3 = value;
		Il2CppCodeGenWriteBarrier(&___onStatusChange_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
