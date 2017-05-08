#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HiARCamera
struct  HiARCamera_t1721779425  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera HiARCamera::c
	Camera_t189460977 * ___c_3;

public:
	inline static int32_t get_offset_of_c_3() { return static_cast<int32_t>(offsetof(HiARCamera_t1721779425, ___c_3)); }
	inline Camera_t189460977 * get_c_3() const { return ___c_3; }
	inline Camera_t189460977 ** get_address_of_c_3() { return &___c_3; }
	inline void set_c_3(Camera_t189460977 * value)
	{
		___c_3 = value;
		Il2CppCodeGenWriteBarrier(&___c_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
