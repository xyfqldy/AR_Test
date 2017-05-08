#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<hiscene.CloudReco/CloudRecoResult>
struct Action_1_t3128021755;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.CloudReco
struct  CloudReco_t1441349392  : public Il2CppObject
{
public:
	// System.Action`1<hiscene.CloudReco/CloudRecoResult> hiscene.CloudReco::requestComplete
	Action_1_t3128021755 * ___requestComplete_0;

public:
	inline static int32_t get_offset_of_requestComplete_0() { return static_cast<int32_t>(offsetof(CloudReco_t1441349392, ___requestComplete_0)); }
	inline Action_1_t3128021755 * get_requestComplete_0() const { return ___requestComplete_0; }
	inline Action_1_t3128021755 ** get_address_of_requestComplete_0() { return &___requestComplete_0; }
	inline void set_requestComplete_0(Action_1_t3128021755 * value)
	{
		___requestComplete_0 = value;
		Il2CppCodeGenWriteBarrier(&___requestComplete_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
