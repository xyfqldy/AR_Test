#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "HiAR_Unity_hiscene_BasePlayer1163366088.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String
struct String_t;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t3344795111;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.VideoPlayerForiOS
struct  VideoPlayerForiOS_t117667902  : public BasePlayer_t1163366088
{
public:
	// System.Int32 hiscene.VideoPlayerForiOS::videoWidth
	int32_t ___videoWidth_6;
	// System.Int32 hiscene.VideoPlayerForiOS::videoHeight
	int32_t ___videoHeight_7;
	// System.Byte[] hiscene.VideoPlayerForiOS::buffer
	ByteU5BU5D_t3397334013* ___buffer_8;
	// UnityEngine.Texture2D hiscene.VideoPlayerForiOS::texture
	Texture2D_t3542995729 * ___texture_11;
	// System.IntPtr hiscene.VideoPlayerForiOS::nativePtr
	IntPtr_t ___nativePtr_12;
	// System.String hiscene.VideoPlayerForiOS::path
	String_t* ___path_13;
	// System.Action`1<UnityEngine.Texture2D> hiscene.VideoPlayerForiOS::callback
	Action_1_t3344795111 * ___callback_14;
	// System.Boolean hiscene.VideoPlayerForiOS::progressing
	bool ___progressing_15;

public:
	inline static int32_t get_offset_of_videoWidth_6() { return static_cast<int32_t>(offsetof(VideoPlayerForiOS_t117667902, ___videoWidth_6)); }
	inline int32_t get_videoWidth_6() const { return ___videoWidth_6; }
	inline int32_t* get_address_of_videoWidth_6() { return &___videoWidth_6; }
	inline void set_videoWidth_6(int32_t value)
	{
		___videoWidth_6 = value;
	}

	inline static int32_t get_offset_of_videoHeight_7() { return static_cast<int32_t>(offsetof(VideoPlayerForiOS_t117667902, ___videoHeight_7)); }
	inline int32_t get_videoHeight_7() const { return ___videoHeight_7; }
	inline int32_t* get_address_of_videoHeight_7() { return &___videoHeight_7; }
	inline void set_videoHeight_7(int32_t value)
	{
		___videoHeight_7 = value;
	}

	inline static int32_t get_offset_of_buffer_8() { return static_cast<int32_t>(offsetof(VideoPlayerForiOS_t117667902, ___buffer_8)); }
	inline ByteU5BU5D_t3397334013* get_buffer_8() const { return ___buffer_8; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_8() { return &___buffer_8; }
	inline void set_buffer_8(ByteU5BU5D_t3397334013* value)
	{
		___buffer_8 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_8, value);
	}

	inline static int32_t get_offset_of_texture_11() { return static_cast<int32_t>(offsetof(VideoPlayerForiOS_t117667902, ___texture_11)); }
	inline Texture2D_t3542995729 * get_texture_11() const { return ___texture_11; }
	inline Texture2D_t3542995729 ** get_address_of_texture_11() { return &___texture_11; }
	inline void set_texture_11(Texture2D_t3542995729 * value)
	{
		___texture_11 = value;
		Il2CppCodeGenWriteBarrier(&___texture_11, value);
	}

	inline static int32_t get_offset_of_nativePtr_12() { return static_cast<int32_t>(offsetof(VideoPlayerForiOS_t117667902, ___nativePtr_12)); }
	inline IntPtr_t get_nativePtr_12() const { return ___nativePtr_12; }
	inline IntPtr_t* get_address_of_nativePtr_12() { return &___nativePtr_12; }
	inline void set_nativePtr_12(IntPtr_t value)
	{
		___nativePtr_12 = value;
	}

	inline static int32_t get_offset_of_path_13() { return static_cast<int32_t>(offsetof(VideoPlayerForiOS_t117667902, ___path_13)); }
	inline String_t* get_path_13() const { return ___path_13; }
	inline String_t** get_address_of_path_13() { return &___path_13; }
	inline void set_path_13(String_t* value)
	{
		___path_13 = value;
		Il2CppCodeGenWriteBarrier(&___path_13, value);
	}

	inline static int32_t get_offset_of_callback_14() { return static_cast<int32_t>(offsetof(VideoPlayerForiOS_t117667902, ___callback_14)); }
	inline Action_1_t3344795111 * get_callback_14() const { return ___callback_14; }
	inline Action_1_t3344795111 ** get_address_of_callback_14() { return &___callback_14; }
	inline void set_callback_14(Action_1_t3344795111 * value)
	{
		___callback_14 = value;
		Il2CppCodeGenWriteBarrier(&___callback_14, value);
	}

	inline static int32_t get_offset_of_progressing_15() { return static_cast<int32_t>(offsetof(VideoPlayerForiOS_t117667902, ___progressing_15)); }
	inline bool get_progressing_15() const { return ___progressing_15; }
	inline bool* get_address_of_progressing_15() { return &___progressing_15; }
	inline void set_progressing_15(bool value)
	{
		___progressing_15 = value;
	}
};

struct VideoPlayerForiOS_t117667902_StaticFields
{
public:
	// System.Int32 hiscene.VideoPlayerForiOS::playerCount
	int32_t ___playerCount_9;
	// System.Collections.Hashtable hiscene.VideoPlayerForiOS::players
	Hashtable_t909839986 * ___players_10;

public:
	inline static int32_t get_offset_of_playerCount_9() { return static_cast<int32_t>(offsetof(VideoPlayerForiOS_t117667902_StaticFields, ___playerCount_9)); }
	inline int32_t get_playerCount_9() const { return ___playerCount_9; }
	inline int32_t* get_address_of_playerCount_9() { return &___playerCount_9; }
	inline void set_playerCount_9(int32_t value)
	{
		___playerCount_9 = value;
	}

	inline static int32_t get_offset_of_players_10() { return static_cast<int32_t>(offsetof(VideoPlayerForiOS_t117667902_StaticFields, ___players_10)); }
	inline Hashtable_t909839986 * get_players_10() const { return ___players_10; }
	inline Hashtable_t909839986 ** get_address_of_players_10() { return &___players_10; }
	inline void set_players_10(Hashtable_t909839986 * value)
	{
		___players_10 = value;
		Il2CppCodeGenWriteBarrier(&___players_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
