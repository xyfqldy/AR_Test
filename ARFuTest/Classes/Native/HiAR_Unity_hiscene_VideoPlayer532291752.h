#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "HiAR_Unity_hiscene_BaseVideoPlayer1545827813.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "HiAR_Unity_hiscene_VideoPlayer_EnableState655259642.h"
#include "HiAR_Unity_hiscene_VideoPlayer_PlayState209643725.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "HiAR_Unity_hiscene_VideoPlayer_TransParentOptions97842682.h"

// System.String
struct String_t;
// hiscene.BasePlayer
struct BasePlayer_t1163366088;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// ILoadVideoEventHandler
struct ILoadVideoEventHandler_t2249256978;
// Ripple.Operation.Request
struct Request_t950906651;
// hiscene.Target
struct Target_t1207115391;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.VideoPlayer
struct  VideoPlayer_t532291752  : public BaseVideoPlayer_t1545827813
{
public:
	// System.Boolean hiscene.VideoPlayer::m_isTransparent
	bool ___m_isTransparent_2;
	// System.String hiscene.VideoPlayer::m_localPath
	String_t* ___m_localPath_3;
	// System.String hiscene.VideoPlayer::m_webUrl
	String_t* ___m_webUrl_4;
	// System.Boolean hiscene.VideoPlayer::m_streamVideo
	bool ___m_streamVideo_5;
	// System.String hiscene.VideoPlayer::urlMd5
	String_t* ___urlMd5_6;
	// System.Boolean hiscene.VideoPlayer::m_isLocal
	bool ___m_isLocal_7;
	// System.Boolean hiscene.VideoPlayer::m_isLoop
	bool ___m_isLoop_8;
	// System.Boolean hiscene.VideoPlayer::m_isFirstCreate
	bool ___m_isFirstCreate_9;
	// System.Boolean hiscene.VideoPlayer::m_autoPlay
	bool ___m_autoPlay_10;
	// System.String hiscene.VideoPlayer::absolutePath
	String_t* ___absolutePath_11;
	// UnityEngine.Color hiscene.VideoPlayer::m_maskColor
	Color_t2020392075  ___m_maskColor_12;
	// System.Single hiscene.VideoPlayer::m_DeltaColor
	float ___m_DeltaColor_13;
	// hiscene.BasePlayer hiscene.VideoPlayer::bvp
	BasePlayer_t1163366088 * ___bvp_14;
	// UnityEngine.Material hiscene.VideoPlayer::m_mPlay
	Material_t193706927 * ___m_mPlay_15;
	// UnityEngine.Texture2D hiscene.VideoPlayer::m_movieTexture
	Texture2D_t3542995729 * ___m_movieTexture_16;
	// System.Boolean hiscene.VideoPlayer::needUpdateVideoTexture
	bool ___needUpdateVideoTexture_17;
	// System.String hiscene.VideoPlayer::m_videoPath
	String_t* ___m_videoPath_18;
	// System.Boolean hiscene.VideoPlayer::m_isFirstOnEnable
	bool ___m_isFirstOnEnable_19;
	// hiscene.VideoPlayer/EnableState hiscene.VideoPlayer::m_enableState
	int32_t ___m_enableState_20;
	// hiscene.VideoPlayer/PlayState hiscene.VideoPlayer::pState
	int32_t ___pState_21;
	// UnityEngine.Vector3 hiscene.VideoPlayer::originScale
	Vector3_t2243707580  ___originScale_22;
	// hiscene.VideoPlayer/TransParentOptions hiscene.VideoPlayer::m_transParentOption
	int32_t ___m_transParentOption_23;
	// ILoadVideoEventHandler hiscene.VideoPlayer::loadVideoEventHandler
	Il2CppObject * ___loadVideoEventHandler_24;
	// System.Boolean hiscene.VideoPlayer::isNewPlayer
	bool ___isNewPlayer_25;
	// System.Boolean hiscene.VideoPlayer::needOpenVideo
	bool ___needOpenVideo_26;
	// System.Boolean hiscene.VideoPlayer::hasOpend
	bool ___hasOpend_27;
	// Ripple.Operation.Request hiscene.VideoPlayer::request
	Request_t950906651 * ___request_28;
	// System.Boolean hiscene.VideoPlayer::isinDownloadVideo
	bool ___isinDownloadVideo_29;
	// System.Boolean hiscene.VideoPlayer::needDownloadVide
	bool ___needDownloadVide_30;
	// hiscene.Target hiscene.VideoPlayer::target
	Target_t1207115391 * ___target_31;

public:
	inline static int32_t get_offset_of_m_isTransparent_2() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_isTransparent_2)); }
	inline bool get_m_isTransparent_2() const { return ___m_isTransparent_2; }
	inline bool* get_address_of_m_isTransparent_2() { return &___m_isTransparent_2; }
	inline void set_m_isTransparent_2(bool value)
	{
		___m_isTransparent_2 = value;
	}

	inline static int32_t get_offset_of_m_localPath_3() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_localPath_3)); }
	inline String_t* get_m_localPath_3() const { return ___m_localPath_3; }
	inline String_t** get_address_of_m_localPath_3() { return &___m_localPath_3; }
	inline void set_m_localPath_3(String_t* value)
	{
		___m_localPath_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_localPath_3, value);
	}

	inline static int32_t get_offset_of_m_webUrl_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_webUrl_4)); }
	inline String_t* get_m_webUrl_4() const { return ___m_webUrl_4; }
	inline String_t** get_address_of_m_webUrl_4() { return &___m_webUrl_4; }
	inline void set_m_webUrl_4(String_t* value)
	{
		___m_webUrl_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_webUrl_4, value);
	}

	inline static int32_t get_offset_of_m_streamVideo_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_streamVideo_5)); }
	inline bool get_m_streamVideo_5() const { return ___m_streamVideo_5; }
	inline bool* get_address_of_m_streamVideo_5() { return &___m_streamVideo_5; }
	inline void set_m_streamVideo_5(bool value)
	{
		___m_streamVideo_5 = value;
	}

	inline static int32_t get_offset_of_urlMd5_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___urlMd5_6)); }
	inline String_t* get_urlMd5_6() const { return ___urlMd5_6; }
	inline String_t** get_address_of_urlMd5_6() { return &___urlMd5_6; }
	inline void set_urlMd5_6(String_t* value)
	{
		___urlMd5_6 = value;
		Il2CppCodeGenWriteBarrier(&___urlMd5_6, value);
	}

	inline static int32_t get_offset_of_m_isLocal_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_isLocal_7)); }
	inline bool get_m_isLocal_7() const { return ___m_isLocal_7; }
	inline bool* get_address_of_m_isLocal_7() { return &___m_isLocal_7; }
	inline void set_m_isLocal_7(bool value)
	{
		___m_isLocal_7 = value;
	}

	inline static int32_t get_offset_of_m_isLoop_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_isLoop_8)); }
	inline bool get_m_isLoop_8() const { return ___m_isLoop_8; }
	inline bool* get_address_of_m_isLoop_8() { return &___m_isLoop_8; }
	inline void set_m_isLoop_8(bool value)
	{
		___m_isLoop_8 = value;
	}

	inline static int32_t get_offset_of_m_isFirstCreate_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_isFirstCreate_9)); }
	inline bool get_m_isFirstCreate_9() const { return ___m_isFirstCreate_9; }
	inline bool* get_address_of_m_isFirstCreate_9() { return &___m_isFirstCreate_9; }
	inline void set_m_isFirstCreate_9(bool value)
	{
		___m_isFirstCreate_9 = value;
	}

	inline static int32_t get_offset_of_m_autoPlay_10() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_autoPlay_10)); }
	inline bool get_m_autoPlay_10() const { return ___m_autoPlay_10; }
	inline bool* get_address_of_m_autoPlay_10() { return &___m_autoPlay_10; }
	inline void set_m_autoPlay_10(bool value)
	{
		___m_autoPlay_10 = value;
	}

	inline static int32_t get_offset_of_absolutePath_11() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___absolutePath_11)); }
	inline String_t* get_absolutePath_11() const { return ___absolutePath_11; }
	inline String_t** get_address_of_absolutePath_11() { return &___absolutePath_11; }
	inline void set_absolutePath_11(String_t* value)
	{
		___absolutePath_11 = value;
		Il2CppCodeGenWriteBarrier(&___absolutePath_11, value);
	}

	inline static int32_t get_offset_of_m_maskColor_12() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_maskColor_12)); }
	inline Color_t2020392075  get_m_maskColor_12() const { return ___m_maskColor_12; }
	inline Color_t2020392075 * get_address_of_m_maskColor_12() { return &___m_maskColor_12; }
	inline void set_m_maskColor_12(Color_t2020392075  value)
	{
		___m_maskColor_12 = value;
	}

	inline static int32_t get_offset_of_m_DeltaColor_13() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_DeltaColor_13)); }
	inline float get_m_DeltaColor_13() const { return ___m_DeltaColor_13; }
	inline float* get_address_of_m_DeltaColor_13() { return &___m_DeltaColor_13; }
	inline void set_m_DeltaColor_13(float value)
	{
		___m_DeltaColor_13 = value;
	}

	inline static int32_t get_offset_of_bvp_14() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___bvp_14)); }
	inline BasePlayer_t1163366088 * get_bvp_14() const { return ___bvp_14; }
	inline BasePlayer_t1163366088 ** get_address_of_bvp_14() { return &___bvp_14; }
	inline void set_bvp_14(BasePlayer_t1163366088 * value)
	{
		___bvp_14 = value;
		Il2CppCodeGenWriteBarrier(&___bvp_14, value);
	}

	inline static int32_t get_offset_of_m_mPlay_15() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_mPlay_15)); }
	inline Material_t193706927 * get_m_mPlay_15() const { return ___m_mPlay_15; }
	inline Material_t193706927 ** get_address_of_m_mPlay_15() { return &___m_mPlay_15; }
	inline void set_m_mPlay_15(Material_t193706927 * value)
	{
		___m_mPlay_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_mPlay_15, value);
	}

	inline static int32_t get_offset_of_m_movieTexture_16() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_movieTexture_16)); }
	inline Texture2D_t3542995729 * get_m_movieTexture_16() const { return ___m_movieTexture_16; }
	inline Texture2D_t3542995729 ** get_address_of_m_movieTexture_16() { return &___m_movieTexture_16; }
	inline void set_m_movieTexture_16(Texture2D_t3542995729 * value)
	{
		___m_movieTexture_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_movieTexture_16, value);
	}

	inline static int32_t get_offset_of_needUpdateVideoTexture_17() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___needUpdateVideoTexture_17)); }
	inline bool get_needUpdateVideoTexture_17() const { return ___needUpdateVideoTexture_17; }
	inline bool* get_address_of_needUpdateVideoTexture_17() { return &___needUpdateVideoTexture_17; }
	inline void set_needUpdateVideoTexture_17(bool value)
	{
		___needUpdateVideoTexture_17 = value;
	}

	inline static int32_t get_offset_of_m_videoPath_18() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_videoPath_18)); }
	inline String_t* get_m_videoPath_18() const { return ___m_videoPath_18; }
	inline String_t** get_address_of_m_videoPath_18() { return &___m_videoPath_18; }
	inline void set_m_videoPath_18(String_t* value)
	{
		___m_videoPath_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_videoPath_18, value);
	}

	inline static int32_t get_offset_of_m_isFirstOnEnable_19() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_isFirstOnEnable_19)); }
	inline bool get_m_isFirstOnEnable_19() const { return ___m_isFirstOnEnable_19; }
	inline bool* get_address_of_m_isFirstOnEnable_19() { return &___m_isFirstOnEnable_19; }
	inline void set_m_isFirstOnEnable_19(bool value)
	{
		___m_isFirstOnEnable_19 = value;
	}

	inline static int32_t get_offset_of_m_enableState_20() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_enableState_20)); }
	inline int32_t get_m_enableState_20() const { return ___m_enableState_20; }
	inline int32_t* get_address_of_m_enableState_20() { return &___m_enableState_20; }
	inline void set_m_enableState_20(int32_t value)
	{
		___m_enableState_20 = value;
	}

	inline static int32_t get_offset_of_pState_21() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___pState_21)); }
	inline int32_t get_pState_21() const { return ___pState_21; }
	inline int32_t* get_address_of_pState_21() { return &___pState_21; }
	inline void set_pState_21(int32_t value)
	{
		___pState_21 = value;
	}

	inline static int32_t get_offset_of_originScale_22() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___originScale_22)); }
	inline Vector3_t2243707580  get_originScale_22() const { return ___originScale_22; }
	inline Vector3_t2243707580 * get_address_of_originScale_22() { return &___originScale_22; }
	inline void set_originScale_22(Vector3_t2243707580  value)
	{
		___originScale_22 = value;
	}

	inline static int32_t get_offset_of_m_transParentOption_23() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___m_transParentOption_23)); }
	inline int32_t get_m_transParentOption_23() const { return ___m_transParentOption_23; }
	inline int32_t* get_address_of_m_transParentOption_23() { return &___m_transParentOption_23; }
	inline void set_m_transParentOption_23(int32_t value)
	{
		___m_transParentOption_23 = value;
	}

	inline static int32_t get_offset_of_loadVideoEventHandler_24() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___loadVideoEventHandler_24)); }
	inline Il2CppObject * get_loadVideoEventHandler_24() const { return ___loadVideoEventHandler_24; }
	inline Il2CppObject ** get_address_of_loadVideoEventHandler_24() { return &___loadVideoEventHandler_24; }
	inline void set_loadVideoEventHandler_24(Il2CppObject * value)
	{
		___loadVideoEventHandler_24 = value;
		Il2CppCodeGenWriteBarrier(&___loadVideoEventHandler_24, value);
	}

	inline static int32_t get_offset_of_isNewPlayer_25() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___isNewPlayer_25)); }
	inline bool get_isNewPlayer_25() const { return ___isNewPlayer_25; }
	inline bool* get_address_of_isNewPlayer_25() { return &___isNewPlayer_25; }
	inline void set_isNewPlayer_25(bool value)
	{
		___isNewPlayer_25 = value;
	}

	inline static int32_t get_offset_of_needOpenVideo_26() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___needOpenVideo_26)); }
	inline bool get_needOpenVideo_26() const { return ___needOpenVideo_26; }
	inline bool* get_address_of_needOpenVideo_26() { return &___needOpenVideo_26; }
	inline void set_needOpenVideo_26(bool value)
	{
		___needOpenVideo_26 = value;
	}

	inline static int32_t get_offset_of_hasOpend_27() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___hasOpend_27)); }
	inline bool get_hasOpend_27() const { return ___hasOpend_27; }
	inline bool* get_address_of_hasOpend_27() { return &___hasOpend_27; }
	inline void set_hasOpend_27(bool value)
	{
		___hasOpend_27 = value;
	}

	inline static int32_t get_offset_of_request_28() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___request_28)); }
	inline Request_t950906651 * get_request_28() const { return ___request_28; }
	inline Request_t950906651 ** get_address_of_request_28() { return &___request_28; }
	inline void set_request_28(Request_t950906651 * value)
	{
		___request_28 = value;
		Il2CppCodeGenWriteBarrier(&___request_28, value);
	}

	inline static int32_t get_offset_of_isinDownloadVideo_29() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___isinDownloadVideo_29)); }
	inline bool get_isinDownloadVideo_29() const { return ___isinDownloadVideo_29; }
	inline bool* get_address_of_isinDownloadVideo_29() { return &___isinDownloadVideo_29; }
	inline void set_isinDownloadVideo_29(bool value)
	{
		___isinDownloadVideo_29 = value;
	}

	inline static int32_t get_offset_of_needDownloadVide_30() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___needDownloadVide_30)); }
	inline bool get_needDownloadVide_30() const { return ___needDownloadVide_30; }
	inline bool* get_address_of_needDownloadVide_30() { return &___needDownloadVide_30; }
	inline void set_needDownloadVide_30(bool value)
	{
		___needDownloadVide_30 = value;
	}

	inline static int32_t get_offset_of_target_31() { return static_cast<int32_t>(offsetof(VideoPlayer_t532291752, ___target_31)); }
	inline Target_t1207115391 * get_target_31() const { return ___target_31; }
	inline Target_t1207115391 ** get_address_of_target_31() { return &___target_31; }
	inline void set_target_31(Target_t1207115391 * value)
	{
		___target_31 = value;
		Il2CppCodeGenWriteBarrier(&___target_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
