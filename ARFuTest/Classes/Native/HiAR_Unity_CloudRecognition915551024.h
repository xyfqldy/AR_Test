#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// HiAREngine
struct HiAREngine_t2339545142;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CloudRecognition
struct  CloudRecognition_t915551024  : public MonoBehaviour_t1158329972
{
public:
	// HiAREngine CloudRecognition::engine
	HiAREngine_t2339545142 * ___engine_2;
	// System.Boolean CloudRecognition::autoReco
	bool ___autoReco_3;

public:
	inline static int32_t get_offset_of_engine_2() { return static_cast<int32_t>(offsetof(CloudRecognition_t915551024, ___engine_2)); }
	inline HiAREngine_t2339545142 * get_engine_2() const { return ___engine_2; }
	inline HiAREngine_t2339545142 ** get_address_of_engine_2() { return &___engine_2; }
	inline void set_engine_2(HiAREngine_t2339545142 * value)
	{
		___engine_2 = value;
		Il2CppCodeGenWriteBarrier(&___engine_2, value);
	}

	inline static int32_t get_offset_of_autoReco_3() { return static_cast<int32_t>(offsetof(CloudRecognition_t915551024, ___autoReco_3)); }
	inline bool get_autoReco_3() const { return ___autoReco_3; }
	inline bool* get_address_of_autoReco_3() { return &___autoReco_3; }
	inline void set_autoReco_3(bool value)
	{
		___autoReco_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
