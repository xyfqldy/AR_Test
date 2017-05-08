#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "HiAR_Unity_hiscene_BasePlayer1163366088.h"

// HIAR.SDK.Util.DSVideoPlayer
struct DSVideoPlayer_t2787076687;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.VideoPlayerForWindows
struct  VideoPlayerForWindows_t598865628  : public BasePlayer_t1163366088
{
public:
	// HIAR.SDK.Util.DSVideoPlayer hiscene.VideoPlayerForWindows::player
	DSVideoPlayer_t2787076687 * ___player_6;
	// UnityEngine.Color32[] hiscene.VideoPlayerForWindows::m_frameData
	Color32U5BU5D_t30278651* ___m_frameData_7;
	// System.Int32 hiscene.VideoPlayerForWindows::m_videoWidth
	int32_t ___m_videoWidth_8;
	// System.Int32 hiscene.VideoPlayerForWindows::m_videoHeight
	int32_t ___m_videoHeight_9;
	// System.Int32 hiscene.VideoPlayerForWindows::m_videoPlayerId
	int32_t ___m_videoPlayerId_10;

public:
	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(VideoPlayerForWindows_t598865628, ___player_6)); }
	inline DSVideoPlayer_t2787076687 * get_player_6() const { return ___player_6; }
	inline DSVideoPlayer_t2787076687 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(DSVideoPlayer_t2787076687 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier(&___player_6, value);
	}

	inline static int32_t get_offset_of_m_frameData_7() { return static_cast<int32_t>(offsetof(VideoPlayerForWindows_t598865628, ___m_frameData_7)); }
	inline Color32U5BU5D_t30278651* get_m_frameData_7() const { return ___m_frameData_7; }
	inline Color32U5BU5D_t30278651** get_address_of_m_frameData_7() { return &___m_frameData_7; }
	inline void set_m_frameData_7(Color32U5BU5D_t30278651* value)
	{
		___m_frameData_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_frameData_7, value);
	}

	inline static int32_t get_offset_of_m_videoWidth_8() { return static_cast<int32_t>(offsetof(VideoPlayerForWindows_t598865628, ___m_videoWidth_8)); }
	inline int32_t get_m_videoWidth_8() const { return ___m_videoWidth_8; }
	inline int32_t* get_address_of_m_videoWidth_8() { return &___m_videoWidth_8; }
	inline void set_m_videoWidth_8(int32_t value)
	{
		___m_videoWidth_8 = value;
	}

	inline static int32_t get_offset_of_m_videoHeight_9() { return static_cast<int32_t>(offsetof(VideoPlayerForWindows_t598865628, ___m_videoHeight_9)); }
	inline int32_t get_m_videoHeight_9() const { return ___m_videoHeight_9; }
	inline int32_t* get_address_of_m_videoHeight_9() { return &___m_videoHeight_9; }
	inline void set_m_videoHeight_9(int32_t value)
	{
		___m_videoHeight_9 = value;
	}

	inline static int32_t get_offset_of_m_videoPlayerId_10() { return static_cast<int32_t>(offsetof(VideoPlayerForWindows_t598865628, ___m_videoPlayerId_10)); }
	inline int32_t get_m_videoPlayerId_10() const { return ___m_videoPlayerId_10; }
	inline int32_t* get_address_of_m_videoPlayerId_10() { return &___m_videoPlayerId_10; }
	inline void set_m_videoPlayerId_10(int32_t value)
	{
		___m_videoPlayerId_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
