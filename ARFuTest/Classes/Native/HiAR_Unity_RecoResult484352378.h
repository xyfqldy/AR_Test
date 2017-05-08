#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "HiAR_Unity_hiscene_KeyType1722323943.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RecoResult
struct  RecoResult_t484352378  : public Il2CppObject
{
public:
	// System.String RecoResult::keyId
	String_t* ___keyId_0;
	// System.String RecoResult::imgName
	String_t* ___imgName_1;
	// System.String RecoResult::keyGroup
	String_t* ___keyGroup_2;
	// System.Boolean RecoResult::isCloudReco
	bool ___isCloudReco_3;
	// System.Boolean RecoResult::isDynamicLoad
	bool ___isDynamicLoad_4;
	// hiscene.KeyType RecoResult::type
	int32_t ___type_5;
	// System.Int32 RecoResult::width
	int32_t ___width_6;
	// System.Int32 RecoResult::height
	int32_t ___height_7;
	// System.String RecoResult::assetBundleUrl
	String_t* ___assetBundleUrl_8;

public:
	inline static int32_t get_offset_of_keyId_0() { return static_cast<int32_t>(offsetof(RecoResult_t484352378, ___keyId_0)); }
	inline String_t* get_keyId_0() const { return ___keyId_0; }
	inline String_t** get_address_of_keyId_0() { return &___keyId_0; }
	inline void set_keyId_0(String_t* value)
	{
		___keyId_0 = value;
		Il2CppCodeGenWriteBarrier(&___keyId_0, value);
	}

	inline static int32_t get_offset_of_imgName_1() { return static_cast<int32_t>(offsetof(RecoResult_t484352378, ___imgName_1)); }
	inline String_t* get_imgName_1() const { return ___imgName_1; }
	inline String_t** get_address_of_imgName_1() { return &___imgName_1; }
	inline void set_imgName_1(String_t* value)
	{
		___imgName_1 = value;
		Il2CppCodeGenWriteBarrier(&___imgName_1, value);
	}

	inline static int32_t get_offset_of_keyGroup_2() { return static_cast<int32_t>(offsetof(RecoResult_t484352378, ___keyGroup_2)); }
	inline String_t* get_keyGroup_2() const { return ___keyGroup_2; }
	inline String_t** get_address_of_keyGroup_2() { return &___keyGroup_2; }
	inline void set_keyGroup_2(String_t* value)
	{
		___keyGroup_2 = value;
		Il2CppCodeGenWriteBarrier(&___keyGroup_2, value);
	}

	inline static int32_t get_offset_of_isCloudReco_3() { return static_cast<int32_t>(offsetof(RecoResult_t484352378, ___isCloudReco_3)); }
	inline bool get_isCloudReco_3() const { return ___isCloudReco_3; }
	inline bool* get_address_of_isCloudReco_3() { return &___isCloudReco_3; }
	inline void set_isCloudReco_3(bool value)
	{
		___isCloudReco_3 = value;
	}

	inline static int32_t get_offset_of_isDynamicLoad_4() { return static_cast<int32_t>(offsetof(RecoResult_t484352378, ___isDynamicLoad_4)); }
	inline bool get_isDynamicLoad_4() const { return ___isDynamicLoad_4; }
	inline bool* get_address_of_isDynamicLoad_4() { return &___isDynamicLoad_4; }
	inline void set_isDynamicLoad_4(bool value)
	{
		___isDynamicLoad_4 = value;
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(RecoResult_t484352378, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_width_6() { return static_cast<int32_t>(offsetof(RecoResult_t484352378, ___width_6)); }
	inline int32_t get_width_6() const { return ___width_6; }
	inline int32_t* get_address_of_width_6() { return &___width_6; }
	inline void set_width_6(int32_t value)
	{
		___width_6 = value;
	}

	inline static int32_t get_offset_of_height_7() { return static_cast<int32_t>(offsetof(RecoResult_t484352378, ___height_7)); }
	inline int32_t get_height_7() const { return ___height_7; }
	inline int32_t* get_address_of_height_7() { return &___height_7; }
	inline void set_height_7(int32_t value)
	{
		___height_7 = value;
	}

	inline static int32_t get_offset_of_assetBundleUrl_8() { return static_cast<int32_t>(offsetof(RecoResult_t484352378, ___assetBundleUrl_8)); }
	inline String_t* get_assetBundleUrl_8() const { return ___assetBundleUrl_8; }
	inline String_t** get_address_of_assetBundleUrl_8() { return &___assetBundleUrl_8; }
	inline void set_assetBundleUrl_8(String_t* value)
	{
		___assetBundleUrl_8 = value;
		Il2CppCodeGenWriteBarrier(&___assetBundleUrl_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
