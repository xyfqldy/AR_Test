#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "HiAR_Unity_hiscene_KeyStatus3014686097.h"
#include "HiAR_Unity_hiscene_KeyType1722323943.h"

// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t577127397;
// RecoResult
struct RecoResult_t484352378;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.Key
struct  Key_t2619727759  : public Il2CppObject
{
public:
	// System.String hiscene.Key::keyID
	String_t* ___keyID_0;
	// System.String hiscene.Key::imgName
	String_t* ___imgName_1;
	// System.String hiscene.Key::keyGroup
	String_t* ___keyGroup_2;
	// System.String hiscene.Key::sourceID
	String_t* ___sourceID_3;
	// System.String hiscene.Key::content
	String_t* ___content_4;
	// System.Int32 hiscene.Key::width
	int32_t ___width_5;
	// System.Int32 hiscene.Key::height
	int32_t ___height_6;
	// System.String hiscene.Key::reference
	String_t* ___reference_7;
	// hiscene.KeyStatus hiscene.Key::status
	int32_t ___status_8;
	// hiscene.KeyType hiscene.Key::type
	int32_t ___type_9;
	// System.Single[] hiscene.Key::matrixRawArray
	SingleU5BU5D_t577127397* ___matrixRawArray_10;
	// System.Int32 hiscene.Key::previous_visibleValue
	int32_t ___previous_visibleValue_11;
	// System.Int32 hiscene.Key::visibleValue
	int32_t ___visibleValue_12;
	// System.Boolean hiscene.Key::hasTarget
	bool ___hasTarget_13;
	// System.Boolean hiscene.Key::persistent
	bool ___persistent_14;
	// System.Int32 hiscene.Key::targetID
	int32_t ___targetID_15;
	// RecoResult hiscene.Key::recoResult
	RecoResult_t484352378 * ___recoResult_16;
	// System.Boolean hiscene.Key::isDynamicLoad
	bool ___isDynamicLoad_17;
	// System.Boolean hiscene.Key::isCloudReco
	bool ___isCloudReco_18;

public:
	inline static int32_t get_offset_of_keyID_0() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___keyID_0)); }
	inline String_t* get_keyID_0() const { return ___keyID_0; }
	inline String_t** get_address_of_keyID_0() { return &___keyID_0; }
	inline void set_keyID_0(String_t* value)
	{
		___keyID_0 = value;
		Il2CppCodeGenWriteBarrier(&___keyID_0, value);
	}

	inline static int32_t get_offset_of_imgName_1() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___imgName_1)); }
	inline String_t* get_imgName_1() const { return ___imgName_1; }
	inline String_t** get_address_of_imgName_1() { return &___imgName_1; }
	inline void set_imgName_1(String_t* value)
	{
		___imgName_1 = value;
		Il2CppCodeGenWriteBarrier(&___imgName_1, value);
	}

	inline static int32_t get_offset_of_keyGroup_2() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___keyGroup_2)); }
	inline String_t* get_keyGroup_2() const { return ___keyGroup_2; }
	inline String_t** get_address_of_keyGroup_2() { return &___keyGroup_2; }
	inline void set_keyGroup_2(String_t* value)
	{
		___keyGroup_2 = value;
		Il2CppCodeGenWriteBarrier(&___keyGroup_2, value);
	}

	inline static int32_t get_offset_of_sourceID_3() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___sourceID_3)); }
	inline String_t* get_sourceID_3() const { return ___sourceID_3; }
	inline String_t** get_address_of_sourceID_3() { return &___sourceID_3; }
	inline void set_sourceID_3(String_t* value)
	{
		___sourceID_3 = value;
		Il2CppCodeGenWriteBarrier(&___sourceID_3, value);
	}

	inline static int32_t get_offset_of_content_4() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___content_4)); }
	inline String_t* get_content_4() const { return ___content_4; }
	inline String_t** get_address_of_content_4() { return &___content_4; }
	inline void set_content_4(String_t* value)
	{
		___content_4 = value;
		Il2CppCodeGenWriteBarrier(&___content_4, value);
	}

	inline static int32_t get_offset_of_width_5() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___width_5)); }
	inline int32_t get_width_5() const { return ___width_5; }
	inline int32_t* get_address_of_width_5() { return &___width_5; }
	inline void set_width_5(int32_t value)
	{
		___width_5 = value;
	}

	inline static int32_t get_offset_of_height_6() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___height_6)); }
	inline int32_t get_height_6() const { return ___height_6; }
	inline int32_t* get_address_of_height_6() { return &___height_6; }
	inline void set_height_6(int32_t value)
	{
		___height_6 = value;
	}

	inline static int32_t get_offset_of_reference_7() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___reference_7)); }
	inline String_t* get_reference_7() const { return ___reference_7; }
	inline String_t** get_address_of_reference_7() { return &___reference_7; }
	inline void set_reference_7(String_t* value)
	{
		___reference_7 = value;
		Il2CppCodeGenWriteBarrier(&___reference_7, value);
	}

	inline static int32_t get_offset_of_status_8() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___status_8)); }
	inline int32_t get_status_8() const { return ___status_8; }
	inline int32_t* get_address_of_status_8() { return &___status_8; }
	inline void set_status_8(int32_t value)
	{
		___status_8 = value;
	}

	inline static int32_t get_offset_of_type_9() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___type_9)); }
	inline int32_t get_type_9() const { return ___type_9; }
	inline int32_t* get_address_of_type_9() { return &___type_9; }
	inline void set_type_9(int32_t value)
	{
		___type_9 = value;
	}

	inline static int32_t get_offset_of_matrixRawArray_10() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___matrixRawArray_10)); }
	inline SingleU5BU5D_t577127397* get_matrixRawArray_10() const { return ___matrixRawArray_10; }
	inline SingleU5BU5D_t577127397** get_address_of_matrixRawArray_10() { return &___matrixRawArray_10; }
	inline void set_matrixRawArray_10(SingleU5BU5D_t577127397* value)
	{
		___matrixRawArray_10 = value;
		Il2CppCodeGenWriteBarrier(&___matrixRawArray_10, value);
	}

	inline static int32_t get_offset_of_previous_visibleValue_11() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___previous_visibleValue_11)); }
	inline int32_t get_previous_visibleValue_11() const { return ___previous_visibleValue_11; }
	inline int32_t* get_address_of_previous_visibleValue_11() { return &___previous_visibleValue_11; }
	inline void set_previous_visibleValue_11(int32_t value)
	{
		___previous_visibleValue_11 = value;
	}

	inline static int32_t get_offset_of_visibleValue_12() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___visibleValue_12)); }
	inline int32_t get_visibleValue_12() const { return ___visibleValue_12; }
	inline int32_t* get_address_of_visibleValue_12() { return &___visibleValue_12; }
	inline void set_visibleValue_12(int32_t value)
	{
		___visibleValue_12 = value;
	}

	inline static int32_t get_offset_of_hasTarget_13() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___hasTarget_13)); }
	inline bool get_hasTarget_13() const { return ___hasTarget_13; }
	inline bool* get_address_of_hasTarget_13() { return &___hasTarget_13; }
	inline void set_hasTarget_13(bool value)
	{
		___hasTarget_13 = value;
	}

	inline static int32_t get_offset_of_persistent_14() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___persistent_14)); }
	inline bool get_persistent_14() const { return ___persistent_14; }
	inline bool* get_address_of_persistent_14() { return &___persistent_14; }
	inline void set_persistent_14(bool value)
	{
		___persistent_14 = value;
	}

	inline static int32_t get_offset_of_targetID_15() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___targetID_15)); }
	inline int32_t get_targetID_15() const { return ___targetID_15; }
	inline int32_t* get_address_of_targetID_15() { return &___targetID_15; }
	inline void set_targetID_15(int32_t value)
	{
		___targetID_15 = value;
	}

	inline static int32_t get_offset_of_recoResult_16() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___recoResult_16)); }
	inline RecoResult_t484352378 * get_recoResult_16() const { return ___recoResult_16; }
	inline RecoResult_t484352378 ** get_address_of_recoResult_16() { return &___recoResult_16; }
	inline void set_recoResult_16(RecoResult_t484352378 * value)
	{
		___recoResult_16 = value;
		Il2CppCodeGenWriteBarrier(&___recoResult_16, value);
	}

	inline static int32_t get_offset_of_isDynamicLoad_17() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___isDynamicLoad_17)); }
	inline bool get_isDynamicLoad_17() const { return ___isDynamicLoad_17; }
	inline bool* get_address_of_isDynamicLoad_17() { return &___isDynamicLoad_17; }
	inline void set_isDynamicLoad_17(bool value)
	{
		___isDynamicLoad_17 = value;
	}

	inline static int32_t get_offset_of_isCloudReco_18() { return static_cast<int32_t>(offsetof(Key_t2619727759, ___isCloudReco_18)); }
	inline bool get_isCloudReco_18() const { return ___isCloudReco_18; }
	inline bool* get_address_of_isCloudReco_18() { return &___isCloudReco_18; }
	inline void set_isCloudReco_18(bool value)
	{
		___isCloudReco_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
