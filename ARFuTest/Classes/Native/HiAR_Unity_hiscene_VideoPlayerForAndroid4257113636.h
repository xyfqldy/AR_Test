#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "HiAR_Unity_hiscene_BasePlayer1163366088.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t3344795111;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.VideoPlayerForAndroid
struct  VideoPlayerForAndroid_t4257113636  : public BasePlayer_t1163366088
{
public:
	// System.Action`1<UnityEngine.Texture2D> hiscene.VideoPlayerForAndroid::prepared
	Action_1_t3344795111 * ___prepared_8;
	// System.Int32 hiscene.VideoPlayerForAndroid::isDoOpen
	int32_t ___isDoOpen_9;

public:
	inline static int32_t get_offset_of_prepared_8() { return static_cast<int32_t>(offsetof(VideoPlayerForAndroid_t4257113636, ___prepared_8)); }
	inline Action_1_t3344795111 * get_prepared_8() const { return ___prepared_8; }
	inline Action_1_t3344795111 ** get_address_of_prepared_8() { return &___prepared_8; }
	inline void set_prepared_8(Action_1_t3344795111 * value)
	{
		___prepared_8 = value;
		Il2CppCodeGenWriteBarrier(&___prepared_8, value);
	}

	inline static int32_t get_offset_of_isDoOpen_9() { return static_cast<int32_t>(offsetof(VideoPlayerForAndroid_t4257113636, ___isDoOpen_9)); }
	inline int32_t get_isDoOpen_9() const { return ___isDoOpen_9; }
	inline int32_t* get_address_of_isDoOpen_9() { return &___isDoOpen_9; }
	inline void set_isDoOpen_9(int32_t value)
	{
		___isDoOpen_9 = value;
	}
};

struct VideoPlayerForAndroid_t4257113636_StaticFields
{
public:
	// System.Int32 hiscene.VideoPlayerForAndroid::playerCount
	int32_t ___playerCount_6;
	// System.Collections.Hashtable hiscene.VideoPlayerForAndroid::players
	Hashtable_t909839986 * ___players_7;

public:
	inline static int32_t get_offset_of_playerCount_6() { return static_cast<int32_t>(offsetof(VideoPlayerForAndroid_t4257113636_StaticFields, ___playerCount_6)); }
	inline int32_t get_playerCount_6() const { return ___playerCount_6; }
	inline int32_t* get_address_of_playerCount_6() { return &___playerCount_6; }
	inline void set_playerCount_6(int32_t value)
	{
		___playerCount_6 = value;
	}

	inline static int32_t get_offset_of_players_7() { return static_cast<int32_t>(offsetof(VideoPlayerForAndroid_t4257113636_StaticFields, ___players_7)); }
	inline Hashtable_t909839986 * get_players_7() const { return ___players_7; }
	inline Hashtable_t909839986 ** get_address_of_players_7() { return &___players_7; }
	inline void set_players_7(Hashtable_t909839986 * value)
	{
		___players_7 = value;
		Il2CppCodeGenWriteBarrier(&___players_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
