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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoPlayerMonoBehaviour
struct  VideoPlayerMonoBehaviour_t820905868  : public MonoBehaviour_t1158329972
{
public:
	// System.String VideoPlayerMonoBehaviour::m_localPath
	String_t* ___m_localPath_2;
	// System.String VideoPlayerMonoBehaviour::m_webUrl
	String_t* ___m_webUrl_3;

public:
	inline static int32_t get_offset_of_m_localPath_2() { return static_cast<int32_t>(offsetof(VideoPlayerMonoBehaviour_t820905868, ___m_localPath_2)); }
	inline String_t* get_m_localPath_2() const { return ___m_localPath_2; }
	inline String_t** get_address_of_m_localPath_2() { return &___m_localPath_2; }
	inline void set_m_localPath_2(String_t* value)
	{
		___m_localPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_localPath_2, value);
	}

	inline static int32_t get_offset_of_m_webUrl_3() { return static_cast<int32_t>(offsetof(VideoPlayerMonoBehaviour_t820905868, ___m_webUrl_3)); }
	inline String_t* get_m_webUrl_3() const { return ___m_webUrl_3; }
	inline String_t** get_address_of_m_webUrl_3() { return &___m_webUrl_3; }
	inline void set_m_webUrl_3(String_t* value)
	{
		___m_webUrl_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_webUrl_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
