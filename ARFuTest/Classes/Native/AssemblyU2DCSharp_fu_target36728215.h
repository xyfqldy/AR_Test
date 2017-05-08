#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "HiAR_Unity_hiscene_ImageTarget658174000.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fu_target
struct  fu_target_t36728215  : public ImageTarget_t658174000
{
public:
	// UnityEngine.GameObject fu_target::fuUi
	GameObject_t1756533147 * ___fuUi_32;

public:
	inline static int32_t get_offset_of_fuUi_32() { return static_cast<int32_t>(offsetof(fu_target_t36728215, ___fuUi_32)); }
	inline GameObject_t1756533147 * get_fuUi_32() const { return ___fuUi_32; }
	inline GameObject_t1756533147 ** get_address_of_fuUi_32() { return &___fuUi_32; }
	inline void set_fuUi_32(GameObject_t1756533147 * value)
	{
		___fuUi_32 = value;
		Il2CppCodeGenWriteBarrier(&___fuUi_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
