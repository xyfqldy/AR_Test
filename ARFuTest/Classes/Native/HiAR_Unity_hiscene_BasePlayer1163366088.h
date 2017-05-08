#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// hiscene.VideoPlayer
struct VideoPlayer_t532291752;
// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.BasePlayer
struct  BasePlayer_t1163366088  : public Il2CppObject
{
public:
	// UnityEngine.Texture2D hiscene.BasePlayer::m_movieTexture
	Texture2D_t3542995729 * ___m_movieTexture_0;
	// System.Boolean hiscene.BasePlayer::m_loop
	bool ___m_loop_1;
	// hiscene.VideoPlayer hiscene.BasePlayer::m_gameObject
	VideoPlayer_t532291752 * ___m_gameObject_2;
	// System.Int32 hiscene.BasePlayer::currentPosition
	int32_t ___currentPosition_3;
	// System.Action hiscene.BasePlayer::onOpened
	Action_t3226471752 * ___onOpened_4;
	// System.Action hiscene.BasePlayer::onPrepared
	Action_t3226471752 * ___onPrepared_5;

public:
	inline static int32_t get_offset_of_m_movieTexture_0() { return static_cast<int32_t>(offsetof(BasePlayer_t1163366088, ___m_movieTexture_0)); }
	inline Texture2D_t3542995729 * get_m_movieTexture_0() const { return ___m_movieTexture_0; }
	inline Texture2D_t3542995729 ** get_address_of_m_movieTexture_0() { return &___m_movieTexture_0; }
	inline void set_m_movieTexture_0(Texture2D_t3542995729 * value)
	{
		___m_movieTexture_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_movieTexture_0, value);
	}

	inline static int32_t get_offset_of_m_loop_1() { return static_cast<int32_t>(offsetof(BasePlayer_t1163366088, ___m_loop_1)); }
	inline bool get_m_loop_1() const { return ___m_loop_1; }
	inline bool* get_address_of_m_loop_1() { return &___m_loop_1; }
	inline void set_m_loop_1(bool value)
	{
		___m_loop_1 = value;
	}

	inline static int32_t get_offset_of_m_gameObject_2() { return static_cast<int32_t>(offsetof(BasePlayer_t1163366088, ___m_gameObject_2)); }
	inline VideoPlayer_t532291752 * get_m_gameObject_2() const { return ___m_gameObject_2; }
	inline VideoPlayer_t532291752 ** get_address_of_m_gameObject_2() { return &___m_gameObject_2; }
	inline void set_m_gameObject_2(VideoPlayer_t532291752 * value)
	{
		___m_gameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_gameObject_2, value);
	}

	inline static int32_t get_offset_of_currentPosition_3() { return static_cast<int32_t>(offsetof(BasePlayer_t1163366088, ___currentPosition_3)); }
	inline int32_t get_currentPosition_3() const { return ___currentPosition_3; }
	inline int32_t* get_address_of_currentPosition_3() { return &___currentPosition_3; }
	inline void set_currentPosition_3(int32_t value)
	{
		___currentPosition_3 = value;
	}

	inline static int32_t get_offset_of_onOpened_4() { return static_cast<int32_t>(offsetof(BasePlayer_t1163366088, ___onOpened_4)); }
	inline Action_t3226471752 * get_onOpened_4() const { return ___onOpened_4; }
	inline Action_t3226471752 ** get_address_of_onOpened_4() { return &___onOpened_4; }
	inline void set_onOpened_4(Action_t3226471752 * value)
	{
		___onOpened_4 = value;
		Il2CppCodeGenWriteBarrier(&___onOpened_4, value);
	}

	inline static int32_t get_offset_of_onPrepared_5() { return static_cast<int32_t>(offsetof(BasePlayer_t1163366088, ___onPrepared_5)); }
	inline Action_t3226471752 * get_onPrepared_5() const { return ___onPrepared_5; }
	inline Action_t3226471752 ** get_address_of_onPrepared_5() { return &___onPrepared_5; }
	inline void set_onPrepared_5(Action_t3226471752 * value)
	{
		___onPrepared_5 = value;
		Il2CppCodeGenWriteBarrier(&___onPrepared_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
