#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "HiAR_Unity_hiscene_VideoPlayer532291752.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoPlayerBehaviour
struct  VideoPlayerBehaviour_t1150595677  : public VideoPlayer_t532291752
{
public:
	// UnityEngine.Material VideoPlayerBehaviour::m_mError
	Material_t193706927 * ___m_mError_32;
	// UnityEngine.Texture2D VideoPlayerBehaviour::m_tError
	Texture2D_t3542995729 * ___m_tError_33;
	// UnityEngine.Texture2D VideoPlayerBehaviour::m_tLoad
	Texture2D_t3542995729 * ___m_tLoad_34;
	// UnityEngine.Material VideoPlayerBehaviour::m_Loading
	Material_t193706927 * ___m_Loading_35;
	// System.Boolean VideoPlayerBehaviour::isInLoading
	bool ___isInLoading_36;

public:
	inline static int32_t get_offset_of_m_mError_32() { return static_cast<int32_t>(offsetof(VideoPlayerBehaviour_t1150595677, ___m_mError_32)); }
	inline Material_t193706927 * get_m_mError_32() const { return ___m_mError_32; }
	inline Material_t193706927 ** get_address_of_m_mError_32() { return &___m_mError_32; }
	inline void set_m_mError_32(Material_t193706927 * value)
	{
		___m_mError_32 = value;
		Il2CppCodeGenWriteBarrier(&___m_mError_32, value);
	}

	inline static int32_t get_offset_of_m_tError_33() { return static_cast<int32_t>(offsetof(VideoPlayerBehaviour_t1150595677, ___m_tError_33)); }
	inline Texture2D_t3542995729 * get_m_tError_33() const { return ___m_tError_33; }
	inline Texture2D_t3542995729 ** get_address_of_m_tError_33() { return &___m_tError_33; }
	inline void set_m_tError_33(Texture2D_t3542995729 * value)
	{
		___m_tError_33 = value;
		Il2CppCodeGenWriteBarrier(&___m_tError_33, value);
	}

	inline static int32_t get_offset_of_m_tLoad_34() { return static_cast<int32_t>(offsetof(VideoPlayerBehaviour_t1150595677, ___m_tLoad_34)); }
	inline Texture2D_t3542995729 * get_m_tLoad_34() const { return ___m_tLoad_34; }
	inline Texture2D_t3542995729 ** get_address_of_m_tLoad_34() { return &___m_tLoad_34; }
	inline void set_m_tLoad_34(Texture2D_t3542995729 * value)
	{
		___m_tLoad_34 = value;
		Il2CppCodeGenWriteBarrier(&___m_tLoad_34, value);
	}

	inline static int32_t get_offset_of_m_Loading_35() { return static_cast<int32_t>(offsetof(VideoPlayerBehaviour_t1150595677, ___m_Loading_35)); }
	inline Material_t193706927 * get_m_Loading_35() const { return ___m_Loading_35; }
	inline Material_t193706927 ** get_address_of_m_Loading_35() { return &___m_Loading_35; }
	inline void set_m_Loading_35(Material_t193706927 * value)
	{
		___m_Loading_35 = value;
		Il2CppCodeGenWriteBarrier(&___m_Loading_35, value);
	}

	inline static int32_t get_offset_of_isInLoading_36() { return static_cast<int32_t>(offsetof(VideoPlayerBehaviour_t1150595677, ___isInLoading_36)); }
	inline bool get_isInLoading_36() const { return ___isInLoading_36; }
	inline bool* get_address_of_isInLoading_36() { return &___isInLoading_36; }
	inline void set_isInLoading_36(bool value)
	{
		___isInLoading_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
