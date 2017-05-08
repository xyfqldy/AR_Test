#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "HiAR_Unity_hiscene_Target1207115391.h"

// System.String
struct String_t;
// ILoadBundleEventHandler
struct ILoadBundleEventHandler_t2828342313;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.ImageTarget
struct  ImageTarget_t658174000  : public Target_t1207115391
{
public:
	// System.Single hiscene.ImageTarget::currentNFTScale
	float ___currentNFTScale_20;
	// System.Int32 hiscene.ImageTarget::option
	int32_t ___option_21;
	// System.Int32 hiscene.ImageTarget::patternID
	int32_t ___patternID_22;
	// System.Int32 hiscene.ImageTarget::nftDataGroupIndex
	int32_t ___nftDataGroupIndex_23;
	// System.String hiscene.ImageTarget::imageName
	String_t* ___imageName_25;
	// System.Single hiscene.ImageTarget::imgWidth
	float ___imgWidth_26;
	// System.Single hiscene.ImageTarget::imgHeight
	float ___imgHeight_27;
	// System.Int32 hiscene.ImageTarget::nftDataIndex
	int32_t ___nftDataIndex_28;
	// System.String hiscene.ImageTarget::assetBundlePath
	String_t* ___assetBundlePath_29;
	// System.Boolean hiscene.ImageTarget::bundle_download
	bool ___bundle_download_30;
	// ILoadBundleEventHandler hiscene.ImageTarget::mILoadBundleEventHandler
	Il2CppObject * ___mILoadBundleEventHandler_31;

public:
	inline static int32_t get_offset_of_currentNFTScale_20() { return static_cast<int32_t>(offsetof(ImageTarget_t658174000, ___currentNFTScale_20)); }
	inline float get_currentNFTScale_20() const { return ___currentNFTScale_20; }
	inline float* get_address_of_currentNFTScale_20() { return &___currentNFTScale_20; }
	inline void set_currentNFTScale_20(float value)
	{
		___currentNFTScale_20 = value;
	}

	inline static int32_t get_offset_of_option_21() { return static_cast<int32_t>(offsetof(ImageTarget_t658174000, ___option_21)); }
	inline int32_t get_option_21() const { return ___option_21; }
	inline int32_t* get_address_of_option_21() { return &___option_21; }
	inline void set_option_21(int32_t value)
	{
		___option_21 = value;
	}

	inline static int32_t get_offset_of_patternID_22() { return static_cast<int32_t>(offsetof(ImageTarget_t658174000, ___patternID_22)); }
	inline int32_t get_patternID_22() const { return ___patternID_22; }
	inline int32_t* get_address_of_patternID_22() { return &___patternID_22; }
	inline void set_patternID_22(int32_t value)
	{
		___patternID_22 = value;
	}

	inline static int32_t get_offset_of_nftDataGroupIndex_23() { return static_cast<int32_t>(offsetof(ImageTarget_t658174000, ___nftDataGroupIndex_23)); }
	inline int32_t get_nftDataGroupIndex_23() const { return ___nftDataGroupIndex_23; }
	inline int32_t* get_address_of_nftDataGroupIndex_23() { return &___nftDataGroupIndex_23; }
	inline void set_nftDataGroupIndex_23(int32_t value)
	{
		___nftDataGroupIndex_23 = value;
	}

	inline static int32_t get_offset_of_imageName_25() { return static_cast<int32_t>(offsetof(ImageTarget_t658174000, ___imageName_25)); }
	inline String_t* get_imageName_25() const { return ___imageName_25; }
	inline String_t** get_address_of_imageName_25() { return &___imageName_25; }
	inline void set_imageName_25(String_t* value)
	{
		___imageName_25 = value;
		Il2CppCodeGenWriteBarrier(&___imageName_25, value);
	}

	inline static int32_t get_offset_of_imgWidth_26() { return static_cast<int32_t>(offsetof(ImageTarget_t658174000, ___imgWidth_26)); }
	inline float get_imgWidth_26() const { return ___imgWidth_26; }
	inline float* get_address_of_imgWidth_26() { return &___imgWidth_26; }
	inline void set_imgWidth_26(float value)
	{
		___imgWidth_26 = value;
	}

	inline static int32_t get_offset_of_imgHeight_27() { return static_cast<int32_t>(offsetof(ImageTarget_t658174000, ___imgHeight_27)); }
	inline float get_imgHeight_27() const { return ___imgHeight_27; }
	inline float* get_address_of_imgHeight_27() { return &___imgHeight_27; }
	inline void set_imgHeight_27(float value)
	{
		___imgHeight_27 = value;
	}

	inline static int32_t get_offset_of_nftDataIndex_28() { return static_cast<int32_t>(offsetof(ImageTarget_t658174000, ___nftDataIndex_28)); }
	inline int32_t get_nftDataIndex_28() const { return ___nftDataIndex_28; }
	inline int32_t* get_address_of_nftDataIndex_28() { return &___nftDataIndex_28; }
	inline void set_nftDataIndex_28(int32_t value)
	{
		___nftDataIndex_28 = value;
	}

	inline static int32_t get_offset_of_assetBundlePath_29() { return static_cast<int32_t>(offsetof(ImageTarget_t658174000, ___assetBundlePath_29)); }
	inline String_t* get_assetBundlePath_29() const { return ___assetBundlePath_29; }
	inline String_t** get_address_of_assetBundlePath_29() { return &___assetBundlePath_29; }
	inline void set_assetBundlePath_29(String_t* value)
	{
		___assetBundlePath_29 = value;
		Il2CppCodeGenWriteBarrier(&___assetBundlePath_29, value);
	}

	inline static int32_t get_offset_of_bundle_download_30() { return static_cast<int32_t>(offsetof(ImageTarget_t658174000, ___bundle_download_30)); }
	inline bool get_bundle_download_30() const { return ___bundle_download_30; }
	inline bool* get_address_of_bundle_download_30() { return &___bundle_download_30; }
	inline void set_bundle_download_30(bool value)
	{
		___bundle_download_30 = value;
	}

	inline static int32_t get_offset_of_mILoadBundleEventHandler_31() { return static_cast<int32_t>(offsetof(ImageTarget_t658174000, ___mILoadBundleEventHandler_31)); }
	inline Il2CppObject * get_mILoadBundleEventHandler_31() const { return ___mILoadBundleEventHandler_31; }
	inline Il2CppObject ** get_address_of_mILoadBundleEventHandler_31() { return &___mILoadBundleEventHandler_31; }
	inline void set_mILoadBundleEventHandler_31(Il2CppObject * value)
	{
		___mILoadBundleEventHandler_31 = value;
		Il2CppCodeGenWriteBarrier(&___mILoadBundleEventHandler_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
