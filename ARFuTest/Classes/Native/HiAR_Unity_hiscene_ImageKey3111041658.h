#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "HiAR_Unity_hiscene_Key2619727759.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.ImageKey
struct  ImageKey_t3111041658  : public Key_t2619727759
{
public:
	// System.String[] hiscene.ImageKey::NFTDataExts
	StringU5BU5D_t1642385972* ___NFTDataExts_19;
	// System.String hiscene.ImageKey::userKeyPath
	String_t* ___userKeyPath_20;

public:
	inline static int32_t get_offset_of_NFTDataExts_19() { return static_cast<int32_t>(offsetof(ImageKey_t3111041658, ___NFTDataExts_19)); }
	inline StringU5BU5D_t1642385972* get_NFTDataExts_19() const { return ___NFTDataExts_19; }
	inline StringU5BU5D_t1642385972** get_address_of_NFTDataExts_19() { return &___NFTDataExts_19; }
	inline void set_NFTDataExts_19(StringU5BU5D_t1642385972* value)
	{
		___NFTDataExts_19 = value;
		Il2CppCodeGenWriteBarrier(&___NFTDataExts_19, value);
	}

	inline static int32_t get_offset_of_userKeyPath_20() { return static_cast<int32_t>(offsetof(ImageKey_t3111041658, ___userKeyPath_20)); }
	inline String_t* get_userKeyPath_20() const { return ___userKeyPath_20; }
	inline String_t** get_address_of_userKeyPath_20() { return &___userKeyPath_20; }
	inline void set_userKeyPath_20(String_t* value)
	{
		___userKeyPath_20 = value;
		Il2CppCodeGenWriteBarrier(&___userKeyPath_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
