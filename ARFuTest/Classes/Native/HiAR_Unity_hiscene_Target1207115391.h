#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.String
struct String_t;
// hiscene.IKEY
struct IKEY_t124877908;
// hiscene.IHsGameObject
struct IHsGameObject_t4288794651;
// hiscene.ITrackableEventHandler
struct ITrackableEventHandler_t3054795102;
// HiAREngine
struct HiAREngine_t2339545142;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.Target
struct  Target_t1207115391  : public MonoBehaviour_t1158329972
{
public:
	// hiscene.IKEY hiscene.Target::m_key
	Il2CppObject * ___m_key_3;
	// System.String hiscene.Target::keyID_Editor
	String_t* ___keyID_Editor_4;
	// System.String hiscene.Target::keyGroup_Editor
	String_t* ___keyGroup_Editor_5;
	// UnityEngine.Matrix4x4 hiscene.Target::transformationMatrix
	Matrix4x4_t2933234003  ___transformationMatrix_6;
	// System.Single hiscene.Target::PixelWidth
	float ___PixelWidth_7;
	// System.Single hiscene.Target::PixelHeight
	float ___PixelHeight_8;
	// System.Single hiscene.Target::unityPixelRatio
	float ___unityPixelRatio_9;
	// System.Single hiscene.Target::Width_Unity
	float ___Width_Unity_10;
	// System.Single hiscene.Target::Height_Unity
	float ___Height_Unity_11;
	// hiscene.IHsGameObject hiscene.Target::hsGameobject
	Il2CppObject * ___hsGameobject_12;
	// hiscene.ITrackableEventHandler hiscene.Target::mITrackableEventHandler
	Il2CppObject * ___mITrackableEventHandler_13;
	// System.Boolean hiscene.Target::_isCenter
	bool ____isCenter_14;
	// System.Boolean hiscene.Target::_canTargetMove
	bool ____canTargetMove_15;
	// HiAREngine hiscene.Target::engine
	HiAREngine_t2339545142 * ___engine_17;
	// UnityEngine.GameObject hiscene.Target::<TargetGameObject>k__BackingField
	GameObject_t1756533147 * ___U3CTargetGameObjectU3Ek__BackingField_18;
	// System.Boolean hiscene.Target::<PlayFullScreen>k__BackingField
	bool ___U3CPlayFullScreenU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_m_key_3() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___m_key_3)); }
	inline Il2CppObject * get_m_key_3() const { return ___m_key_3; }
	inline Il2CppObject ** get_address_of_m_key_3() { return &___m_key_3; }
	inline void set_m_key_3(Il2CppObject * value)
	{
		___m_key_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_key_3, value);
	}

	inline static int32_t get_offset_of_keyID_Editor_4() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___keyID_Editor_4)); }
	inline String_t* get_keyID_Editor_4() const { return ___keyID_Editor_4; }
	inline String_t** get_address_of_keyID_Editor_4() { return &___keyID_Editor_4; }
	inline void set_keyID_Editor_4(String_t* value)
	{
		___keyID_Editor_4 = value;
		Il2CppCodeGenWriteBarrier(&___keyID_Editor_4, value);
	}

	inline static int32_t get_offset_of_keyGroup_Editor_5() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___keyGroup_Editor_5)); }
	inline String_t* get_keyGroup_Editor_5() const { return ___keyGroup_Editor_5; }
	inline String_t** get_address_of_keyGroup_Editor_5() { return &___keyGroup_Editor_5; }
	inline void set_keyGroup_Editor_5(String_t* value)
	{
		___keyGroup_Editor_5 = value;
		Il2CppCodeGenWriteBarrier(&___keyGroup_Editor_5, value);
	}

	inline static int32_t get_offset_of_transformationMatrix_6() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___transformationMatrix_6)); }
	inline Matrix4x4_t2933234003  get_transformationMatrix_6() const { return ___transformationMatrix_6; }
	inline Matrix4x4_t2933234003 * get_address_of_transformationMatrix_6() { return &___transformationMatrix_6; }
	inline void set_transformationMatrix_6(Matrix4x4_t2933234003  value)
	{
		___transformationMatrix_6 = value;
	}

	inline static int32_t get_offset_of_PixelWidth_7() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___PixelWidth_7)); }
	inline float get_PixelWidth_7() const { return ___PixelWidth_7; }
	inline float* get_address_of_PixelWidth_7() { return &___PixelWidth_7; }
	inline void set_PixelWidth_7(float value)
	{
		___PixelWidth_7 = value;
	}

	inline static int32_t get_offset_of_PixelHeight_8() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___PixelHeight_8)); }
	inline float get_PixelHeight_8() const { return ___PixelHeight_8; }
	inline float* get_address_of_PixelHeight_8() { return &___PixelHeight_8; }
	inline void set_PixelHeight_8(float value)
	{
		___PixelHeight_8 = value;
	}

	inline static int32_t get_offset_of_unityPixelRatio_9() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___unityPixelRatio_9)); }
	inline float get_unityPixelRatio_9() const { return ___unityPixelRatio_9; }
	inline float* get_address_of_unityPixelRatio_9() { return &___unityPixelRatio_9; }
	inline void set_unityPixelRatio_9(float value)
	{
		___unityPixelRatio_9 = value;
	}

	inline static int32_t get_offset_of_Width_Unity_10() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___Width_Unity_10)); }
	inline float get_Width_Unity_10() const { return ___Width_Unity_10; }
	inline float* get_address_of_Width_Unity_10() { return &___Width_Unity_10; }
	inline void set_Width_Unity_10(float value)
	{
		___Width_Unity_10 = value;
	}

	inline static int32_t get_offset_of_Height_Unity_11() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___Height_Unity_11)); }
	inline float get_Height_Unity_11() const { return ___Height_Unity_11; }
	inline float* get_address_of_Height_Unity_11() { return &___Height_Unity_11; }
	inline void set_Height_Unity_11(float value)
	{
		___Height_Unity_11 = value;
	}

	inline static int32_t get_offset_of_hsGameobject_12() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___hsGameobject_12)); }
	inline Il2CppObject * get_hsGameobject_12() const { return ___hsGameobject_12; }
	inline Il2CppObject ** get_address_of_hsGameobject_12() { return &___hsGameobject_12; }
	inline void set_hsGameobject_12(Il2CppObject * value)
	{
		___hsGameobject_12 = value;
		Il2CppCodeGenWriteBarrier(&___hsGameobject_12, value);
	}

	inline static int32_t get_offset_of_mITrackableEventHandler_13() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___mITrackableEventHandler_13)); }
	inline Il2CppObject * get_mITrackableEventHandler_13() const { return ___mITrackableEventHandler_13; }
	inline Il2CppObject ** get_address_of_mITrackableEventHandler_13() { return &___mITrackableEventHandler_13; }
	inline void set_mITrackableEventHandler_13(Il2CppObject * value)
	{
		___mITrackableEventHandler_13 = value;
		Il2CppCodeGenWriteBarrier(&___mITrackableEventHandler_13, value);
	}

	inline static int32_t get_offset_of__isCenter_14() { return static_cast<int32_t>(offsetof(Target_t1207115391, ____isCenter_14)); }
	inline bool get__isCenter_14() const { return ____isCenter_14; }
	inline bool* get_address_of__isCenter_14() { return &____isCenter_14; }
	inline void set__isCenter_14(bool value)
	{
		____isCenter_14 = value;
	}

	inline static int32_t get_offset_of__canTargetMove_15() { return static_cast<int32_t>(offsetof(Target_t1207115391, ____canTargetMove_15)); }
	inline bool get__canTargetMove_15() const { return ____canTargetMove_15; }
	inline bool* get_address_of__canTargetMove_15() { return &____canTargetMove_15; }
	inline void set__canTargetMove_15(bool value)
	{
		____canTargetMove_15 = value;
	}

	inline static int32_t get_offset_of_engine_17() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___engine_17)); }
	inline HiAREngine_t2339545142 * get_engine_17() const { return ___engine_17; }
	inline HiAREngine_t2339545142 ** get_address_of_engine_17() { return &___engine_17; }
	inline void set_engine_17(HiAREngine_t2339545142 * value)
	{
		___engine_17 = value;
		Il2CppCodeGenWriteBarrier(&___engine_17, value);
	}

	inline static int32_t get_offset_of_U3CTargetGameObjectU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___U3CTargetGameObjectU3Ek__BackingField_18)); }
	inline GameObject_t1756533147 * get_U3CTargetGameObjectU3Ek__BackingField_18() const { return ___U3CTargetGameObjectU3Ek__BackingField_18; }
	inline GameObject_t1756533147 ** get_address_of_U3CTargetGameObjectU3Ek__BackingField_18() { return &___U3CTargetGameObjectU3Ek__BackingField_18; }
	inline void set_U3CTargetGameObjectU3Ek__BackingField_18(GameObject_t1756533147 * value)
	{
		___U3CTargetGameObjectU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTargetGameObjectU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3CPlayFullScreenU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Target_t1207115391, ___U3CPlayFullScreenU3Ek__BackingField_19)); }
	inline bool get_U3CPlayFullScreenU3Ek__BackingField_19() const { return ___U3CPlayFullScreenU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CPlayFullScreenU3Ek__BackingField_19() { return &___U3CPlayFullScreenU3Ek__BackingField_19; }
	inline void set_U3CPlayFullScreenU3Ek__BackingField_19(bool value)
	{
		___U3CPlayFullScreenU3Ek__BackingField_19 = value;
	}
};

struct Target_t1207115391_StaticFields
{
public:
	// UnityEngine.Matrix4x4 hiscene.Target::_centerTrans
	Matrix4x4_t2933234003  ____centerTrans_16;

public:
	inline static int32_t get_offset_of__centerTrans_16() { return static_cast<int32_t>(offsetof(Target_t1207115391_StaticFields, ____centerTrans_16)); }
	inline Matrix4x4_t2933234003  get__centerTrans_16() const { return ____centerTrans_16; }
	inline Matrix4x4_t2933234003 * get_address_of__centerTrans_16() { return &____centerTrans_16; }
	inline void set__centerTrans_16(Matrix4x4_t2933234003  value)
	{
		____centerTrans_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
