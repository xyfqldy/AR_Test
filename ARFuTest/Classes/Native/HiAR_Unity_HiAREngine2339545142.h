#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "HiAR_Unity_HiAREngine_DeviceDirection488246806.h"
#include "HiAR_Unity_HiAREngine_DeviceMode4004730794.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// HiAREngine
struct HiAREngine_t2339545142;
// TargetManager
struct TargetManager_t1639230772;
// hiscene.ImageTarget
struct ImageTarget_t658174000;
// hiscene.Target
struct Target_t1207115391;
// System.Single[]
struct SingleU5BU5D_t577127397;
// HiAREngine/iOSCameraAction
struct iOSCameraAction_t2623546611;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HiAREngine
struct  HiAREngine_t2339545142  : public MonoBehaviour_t1158329972
{
public:
	// System.Single HiAREngine::FarPlane
	float ___FarPlane_4;
	// System.Single HiAREngine::NearPlane
	float ___NearPlane_5;
	// System.String HiAREngine::AppKey
	String_t* ___AppKey_6;
	// System.String HiAREngine::Secret
	String_t* ___Secret_7;
	// HiAREngine/DeviceDirection HiAREngine::CameraDirection
	int32_t ___CameraDirection_8;
	// HiAREngine/DeviceMode HiAREngine::CameraMode
	int32_t ___CameraMode_9;
	// System.Boolean HiAREngine::MirrorBackground
	bool ___MirrorBackground_10;
	// System.Boolean HiAREngine::m_useEdgeAnimator
	bool ___m_useEdgeAnimator_11;
	// UnityEngine.Color HiAREngine::m_edgeColor
	Color_t2020392075  ___m_edgeColor_12;
	// System.Boolean HiAREngine::FarRecognationMode
	bool ___FarRecognationMode_13;
	// System.Boolean HiAREngine::TiltRecognationMode
	bool ___TiltRecognationMode_14;
	// System.Boolean HiAREngine::TargetHorizontal
	bool ___TargetHorizontal_15;
	// System.Boolean HiAREngine::SensorFusionMode
	bool ___SensorFusionMode_16;
	// System.Boolean HiAREngine::_mulitmode
	bool ____mulitmode_17;
	// System.Int32 HiAREngine::_maxImageNum
	int32_t ____maxImageNum_18;
	// System.Int32 HiAREngine::maxFrameNum
	int32_t ___maxFrameNum_19;
	// System.String HiAREngine::_version
	String_t* ____version_20;
	// System.Boolean HiAREngine::_running
	bool ____running_21;
	// System.Boolean HiAREngine::_runOnUnpause
	bool ____runOnUnpause_22;
	// System.Boolean HiAREngine::_sceneConfigForCamera
	bool ____sceneConfigForCamera_23;
	// System.Boolean HiAREngine::_sceneConfigForCameraWaitingMessageLogged
	bool ____sceneConfigForCameraWaitingMessageLogged_24;
	// System.Int32 HiAREngine::_cameraWidth
	int32_t ____cameraWidth_25;
	// System.Int32 HiAREngine::_cameraHeight
	int32_t ____cameraHeight_26;
	// System.Boolean HiAREngine::recognition
	bool ___recognition_27;
	// System.Boolean HiAREngine::useSpliteScreen
	bool ___useSpliteScreen_28;
	// System.Boolean HiAREngine::spliteFullScreen
	bool ___spliteFullScreen_29;
	// UnityEngine.Camera HiAREngine::m_rightCameraBackGround
	Camera_t189460977 * ___m_rightCameraBackGround_30;
	// UnityEngine.GameObject HiAREngine::m_rightCameraBgObj
	GameObject_t1756533147 * ___m_rightCameraBgObj_31;
	// TargetManager HiAREngine::_hiarTargetManager
	TargetManager_t1639230772 * ____hiarTargetManager_36;
	// UnityEngine.Camera HiAREngine::_cameraBackground
	Camera_t189460977 * ____cameraBackground_37;
	// UnityEngine.GameObject HiAREngine::_cameraBg
	GameObject_t1756533147 * ____cameraBg_38;
	// System.String HiAREngine::version
	String_t* ___version_39;
	// System.Boolean HiAREngine::versionError
	bool ___versionError_40;
	// hiscene.ImageTarget HiAREngine::PovCenterObject
	ImageTarget_t658174000 * ___PovCenterObject_41;
	// System.Boolean HiAREngine::TargetCenterp
	bool ___TargetCenterp_42;
	// hiscene.Target HiAREngine::CenterObject
	Target_t1207115391 * ___CenterObject_43;
	// System.Single[] HiAREngine::data
	SingleU5BU5D_t577127397* ___data_44;
	// System.Int32 HiAREngine::authNum
	int32_t ___authNum_46;
	// System.Int32 HiAREngine::AUTH_COUNT
	int32_t ___AUTH_COUNT_47;
	// System.Boolean HiAREngine::_directionConfigCamera
	bool ____directionConfigCamera_48;
	// System.Int32 HiAREngine::frameCounter
	int32_t ___frameCounter_49;
	// System.Single HiAREngine::timeCounter
	float ___timeCounter_50;
	// System.Single HiAREngine::refreshTime
	float ___refreshTime_51;
	// System.Boolean HiAREngine::showGUIErrorDialog
	bool ___showGUIErrorDialog_52;
	// System.String HiAREngine::showGUIErrorDialogContent
	String_t* ___showGUIErrorDialogContent_53;
	// UnityEngine.Rect HiAREngine::showGUIErrorDialogWinRect
	Rect_t3681755626  ___showGUIErrorDialogWinRect_54;

public:
	inline static int32_t get_offset_of_FarPlane_4() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___FarPlane_4)); }
	inline float get_FarPlane_4() const { return ___FarPlane_4; }
	inline float* get_address_of_FarPlane_4() { return &___FarPlane_4; }
	inline void set_FarPlane_4(float value)
	{
		___FarPlane_4 = value;
	}

	inline static int32_t get_offset_of_NearPlane_5() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___NearPlane_5)); }
	inline float get_NearPlane_5() const { return ___NearPlane_5; }
	inline float* get_address_of_NearPlane_5() { return &___NearPlane_5; }
	inline void set_NearPlane_5(float value)
	{
		___NearPlane_5 = value;
	}

	inline static int32_t get_offset_of_AppKey_6() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___AppKey_6)); }
	inline String_t* get_AppKey_6() const { return ___AppKey_6; }
	inline String_t** get_address_of_AppKey_6() { return &___AppKey_6; }
	inline void set_AppKey_6(String_t* value)
	{
		___AppKey_6 = value;
		Il2CppCodeGenWriteBarrier(&___AppKey_6, value);
	}

	inline static int32_t get_offset_of_Secret_7() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___Secret_7)); }
	inline String_t* get_Secret_7() const { return ___Secret_7; }
	inline String_t** get_address_of_Secret_7() { return &___Secret_7; }
	inline void set_Secret_7(String_t* value)
	{
		___Secret_7 = value;
		Il2CppCodeGenWriteBarrier(&___Secret_7, value);
	}

	inline static int32_t get_offset_of_CameraDirection_8() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___CameraDirection_8)); }
	inline int32_t get_CameraDirection_8() const { return ___CameraDirection_8; }
	inline int32_t* get_address_of_CameraDirection_8() { return &___CameraDirection_8; }
	inline void set_CameraDirection_8(int32_t value)
	{
		___CameraDirection_8 = value;
	}

	inline static int32_t get_offset_of_CameraMode_9() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___CameraMode_9)); }
	inline int32_t get_CameraMode_9() const { return ___CameraMode_9; }
	inline int32_t* get_address_of_CameraMode_9() { return &___CameraMode_9; }
	inline void set_CameraMode_9(int32_t value)
	{
		___CameraMode_9 = value;
	}

	inline static int32_t get_offset_of_MirrorBackground_10() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___MirrorBackground_10)); }
	inline bool get_MirrorBackground_10() const { return ___MirrorBackground_10; }
	inline bool* get_address_of_MirrorBackground_10() { return &___MirrorBackground_10; }
	inline void set_MirrorBackground_10(bool value)
	{
		___MirrorBackground_10 = value;
	}

	inline static int32_t get_offset_of_m_useEdgeAnimator_11() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___m_useEdgeAnimator_11)); }
	inline bool get_m_useEdgeAnimator_11() const { return ___m_useEdgeAnimator_11; }
	inline bool* get_address_of_m_useEdgeAnimator_11() { return &___m_useEdgeAnimator_11; }
	inline void set_m_useEdgeAnimator_11(bool value)
	{
		___m_useEdgeAnimator_11 = value;
	}

	inline static int32_t get_offset_of_m_edgeColor_12() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___m_edgeColor_12)); }
	inline Color_t2020392075  get_m_edgeColor_12() const { return ___m_edgeColor_12; }
	inline Color_t2020392075 * get_address_of_m_edgeColor_12() { return &___m_edgeColor_12; }
	inline void set_m_edgeColor_12(Color_t2020392075  value)
	{
		___m_edgeColor_12 = value;
	}

	inline static int32_t get_offset_of_FarRecognationMode_13() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___FarRecognationMode_13)); }
	inline bool get_FarRecognationMode_13() const { return ___FarRecognationMode_13; }
	inline bool* get_address_of_FarRecognationMode_13() { return &___FarRecognationMode_13; }
	inline void set_FarRecognationMode_13(bool value)
	{
		___FarRecognationMode_13 = value;
	}

	inline static int32_t get_offset_of_TiltRecognationMode_14() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___TiltRecognationMode_14)); }
	inline bool get_TiltRecognationMode_14() const { return ___TiltRecognationMode_14; }
	inline bool* get_address_of_TiltRecognationMode_14() { return &___TiltRecognationMode_14; }
	inline void set_TiltRecognationMode_14(bool value)
	{
		___TiltRecognationMode_14 = value;
	}

	inline static int32_t get_offset_of_TargetHorizontal_15() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___TargetHorizontal_15)); }
	inline bool get_TargetHorizontal_15() const { return ___TargetHorizontal_15; }
	inline bool* get_address_of_TargetHorizontal_15() { return &___TargetHorizontal_15; }
	inline void set_TargetHorizontal_15(bool value)
	{
		___TargetHorizontal_15 = value;
	}

	inline static int32_t get_offset_of_SensorFusionMode_16() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___SensorFusionMode_16)); }
	inline bool get_SensorFusionMode_16() const { return ___SensorFusionMode_16; }
	inline bool* get_address_of_SensorFusionMode_16() { return &___SensorFusionMode_16; }
	inline void set_SensorFusionMode_16(bool value)
	{
		___SensorFusionMode_16 = value;
	}

	inline static int32_t get_offset_of__mulitmode_17() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ____mulitmode_17)); }
	inline bool get__mulitmode_17() const { return ____mulitmode_17; }
	inline bool* get_address_of__mulitmode_17() { return &____mulitmode_17; }
	inline void set__mulitmode_17(bool value)
	{
		____mulitmode_17 = value;
	}

	inline static int32_t get_offset_of__maxImageNum_18() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ____maxImageNum_18)); }
	inline int32_t get__maxImageNum_18() const { return ____maxImageNum_18; }
	inline int32_t* get_address_of__maxImageNum_18() { return &____maxImageNum_18; }
	inline void set__maxImageNum_18(int32_t value)
	{
		____maxImageNum_18 = value;
	}

	inline static int32_t get_offset_of_maxFrameNum_19() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___maxFrameNum_19)); }
	inline int32_t get_maxFrameNum_19() const { return ___maxFrameNum_19; }
	inline int32_t* get_address_of_maxFrameNum_19() { return &___maxFrameNum_19; }
	inline void set_maxFrameNum_19(int32_t value)
	{
		___maxFrameNum_19 = value;
	}

	inline static int32_t get_offset_of__version_20() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ____version_20)); }
	inline String_t* get__version_20() const { return ____version_20; }
	inline String_t** get_address_of__version_20() { return &____version_20; }
	inline void set__version_20(String_t* value)
	{
		____version_20 = value;
		Il2CppCodeGenWriteBarrier(&____version_20, value);
	}

	inline static int32_t get_offset_of__running_21() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ____running_21)); }
	inline bool get__running_21() const { return ____running_21; }
	inline bool* get_address_of__running_21() { return &____running_21; }
	inline void set__running_21(bool value)
	{
		____running_21 = value;
	}

	inline static int32_t get_offset_of__runOnUnpause_22() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ____runOnUnpause_22)); }
	inline bool get__runOnUnpause_22() const { return ____runOnUnpause_22; }
	inline bool* get_address_of__runOnUnpause_22() { return &____runOnUnpause_22; }
	inline void set__runOnUnpause_22(bool value)
	{
		____runOnUnpause_22 = value;
	}

	inline static int32_t get_offset_of__sceneConfigForCamera_23() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ____sceneConfigForCamera_23)); }
	inline bool get__sceneConfigForCamera_23() const { return ____sceneConfigForCamera_23; }
	inline bool* get_address_of__sceneConfigForCamera_23() { return &____sceneConfigForCamera_23; }
	inline void set__sceneConfigForCamera_23(bool value)
	{
		____sceneConfigForCamera_23 = value;
	}

	inline static int32_t get_offset_of__sceneConfigForCameraWaitingMessageLogged_24() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ____sceneConfigForCameraWaitingMessageLogged_24)); }
	inline bool get__sceneConfigForCameraWaitingMessageLogged_24() const { return ____sceneConfigForCameraWaitingMessageLogged_24; }
	inline bool* get_address_of__sceneConfigForCameraWaitingMessageLogged_24() { return &____sceneConfigForCameraWaitingMessageLogged_24; }
	inline void set__sceneConfigForCameraWaitingMessageLogged_24(bool value)
	{
		____sceneConfigForCameraWaitingMessageLogged_24 = value;
	}

	inline static int32_t get_offset_of__cameraWidth_25() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ____cameraWidth_25)); }
	inline int32_t get__cameraWidth_25() const { return ____cameraWidth_25; }
	inline int32_t* get_address_of__cameraWidth_25() { return &____cameraWidth_25; }
	inline void set__cameraWidth_25(int32_t value)
	{
		____cameraWidth_25 = value;
	}

	inline static int32_t get_offset_of__cameraHeight_26() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ____cameraHeight_26)); }
	inline int32_t get__cameraHeight_26() const { return ____cameraHeight_26; }
	inline int32_t* get_address_of__cameraHeight_26() { return &____cameraHeight_26; }
	inline void set__cameraHeight_26(int32_t value)
	{
		____cameraHeight_26 = value;
	}

	inline static int32_t get_offset_of_recognition_27() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___recognition_27)); }
	inline bool get_recognition_27() const { return ___recognition_27; }
	inline bool* get_address_of_recognition_27() { return &___recognition_27; }
	inline void set_recognition_27(bool value)
	{
		___recognition_27 = value;
	}

	inline static int32_t get_offset_of_useSpliteScreen_28() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___useSpliteScreen_28)); }
	inline bool get_useSpliteScreen_28() const { return ___useSpliteScreen_28; }
	inline bool* get_address_of_useSpliteScreen_28() { return &___useSpliteScreen_28; }
	inline void set_useSpliteScreen_28(bool value)
	{
		___useSpliteScreen_28 = value;
	}

	inline static int32_t get_offset_of_spliteFullScreen_29() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___spliteFullScreen_29)); }
	inline bool get_spliteFullScreen_29() const { return ___spliteFullScreen_29; }
	inline bool* get_address_of_spliteFullScreen_29() { return &___spliteFullScreen_29; }
	inline void set_spliteFullScreen_29(bool value)
	{
		___spliteFullScreen_29 = value;
	}

	inline static int32_t get_offset_of_m_rightCameraBackGround_30() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___m_rightCameraBackGround_30)); }
	inline Camera_t189460977 * get_m_rightCameraBackGround_30() const { return ___m_rightCameraBackGround_30; }
	inline Camera_t189460977 ** get_address_of_m_rightCameraBackGround_30() { return &___m_rightCameraBackGround_30; }
	inline void set_m_rightCameraBackGround_30(Camera_t189460977 * value)
	{
		___m_rightCameraBackGround_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_rightCameraBackGround_30, value);
	}

	inline static int32_t get_offset_of_m_rightCameraBgObj_31() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___m_rightCameraBgObj_31)); }
	inline GameObject_t1756533147 * get_m_rightCameraBgObj_31() const { return ___m_rightCameraBgObj_31; }
	inline GameObject_t1756533147 ** get_address_of_m_rightCameraBgObj_31() { return &___m_rightCameraBgObj_31; }
	inline void set_m_rightCameraBgObj_31(GameObject_t1756533147 * value)
	{
		___m_rightCameraBgObj_31 = value;
		Il2CppCodeGenWriteBarrier(&___m_rightCameraBgObj_31, value);
	}

	inline static int32_t get_offset_of__hiarTargetManager_36() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ____hiarTargetManager_36)); }
	inline TargetManager_t1639230772 * get__hiarTargetManager_36() const { return ____hiarTargetManager_36; }
	inline TargetManager_t1639230772 ** get_address_of__hiarTargetManager_36() { return &____hiarTargetManager_36; }
	inline void set__hiarTargetManager_36(TargetManager_t1639230772 * value)
	{
		____hiarTargetManager_36 = value;
		Il2CppCodeGenWriteBarrier(&____hiarTargetManager_36, value);
	}

	inline static int32_t get_offset_of__cameraBackground_37() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ____cameraBackground_37)); }
	inline Camera_t189460977 * get__cameraBackground_37() const { return ____cameraBackground_37; }
	inline Camera_t189460977 ** get_address_of__cameraBackground_37() { return &____cameraBackground_37; }
	inline void set__cameraBackground_37(Camera_t189460977 * value)
	{
		____cameraBackground_37 = value;
		Il2CppCodeGenWriteBarrier(&____cameraBackground_37, value);
	}

	inline static int32_t get_offset_of__cameraBg_38() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ____cameraBg_38)); }
	inline GameObject_t1756533147 * get__cameraBg_38() const { return ____cameraBg_38; }
	inline GameObject_t1756533147 ** get_address_of__cameraBg_38() { return &____cameraBg_38; }
	inline void set__cameraBg_38(GameObject_t1756533147 * value)
	{
		____cameraBg_38 = value;
		Il2CppCodeGenWriteBarrier(&____cameraBg_38, value);
	}

	inline static int32_t get_offset_of_version_39() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___version_39)); }
	inline String_t* get_version_39() const { return ___version_39; }
	inline String_t** get_address_of_version_39() { return &___version_39; }
	inline void set_version_39(String_t* value)
	{
		___version_39 = value;
		Il2CppCodeGenWriteBarrier(&___version_39, value);
	}

	inline static int32_t get_offset_of_versionError_40() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___versionError_40)); }
	inline bool get_versionError_40() const { return ___versionError_40; }
	inline bool* get_address_of_versionError_40() { return &___versionError_40; }
	inline void set_versionError_40(bool value)
	{
		___versionError_40 = value;
	}

	inline static int32_t get_offset_of_PovCenterObject_41() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___PovCenterObject_41)); }
	inline ImageTarget_t658174000 * get_PovCenterObject_41() const { return ___PovCenterObject_41; }
	inline ImageTarget_t658174000 ** get_address_of_PovCenterObject_41() { return &___PovCenterObject_41; }
	inline void set_PovCenterObject_41(ImageTarget_t658174000 * value)
	{
		___PovCenterObject_41 = value;
		Il2CppCodeGenWriteBarrier(&___PovCenterObject_41, value);
	}

	inline static int32_t get_offset_of_TargetCenterp_42() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___TargetCenterp_42)); }
	inline bool get_TargetCenterp_42() const { return ___TargetCenterp_42; }
	inline bool* get_address_of_TargetCenterp_42() { return &___TargetCenterp_42; }
	inline void set_TargetCenterp_42(bool value)
	{
		___TargetCenterp_42 = value;
	}

	inline static int32_t get_offset_of_CenterObject_43() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___CenterObject_43)); }
	inline Target_t1207115391 * get_CenterObject_43() const { return ___CenterObject_43; }
	inline Target_t1207115391 ** get_address_of_CenterObject_43() { return &___CenterObject_43; }
	inline void set_CenterObject_43(Target_t1207115391 * value)
	{
		___CenterObject_43 = value;
		Il2CppCodeGenWriteBarrier(&___CenterObject_43, value);
	}

	inline static int32_t get_offset_of_data_44() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___data_44)); }
	inline SingleU5BU5D_t577127397* get_data_44() const { return ___data_44; }
	inline SingleU5BU5D_t577127397** get_address_of_data_44() { return &___data_44; }
	inline void set_data_44(SingleU5BU5D_t577127397* value)
	{
		___data_44 = value;
		Il2CppCodeGenWriteBarrier(&___data_44, value);
	}

	inline static int32_t get_offset_of_authNum_46() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___authNum_46)); }
	inline int32_t get_authNum_46() const { return ___authNum_46; }
	inline int32_t* get_address_of_authNum_46() { return &___authNum_46; }
	inline void set_authNum_46(int32_t value)
	{
		___authNum_46 = value;
	}

	inline static int32_t get_offset_of_AUTH_COUNT_47() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___AUTH_COUNT_47)); }
	inline int32_t get_AUTH_COUNT_47() const { return ___AUTH_COUNT_47; }
	inline int32_t* get_address_of_AUTH_COUNT_47() { return &___AUTH_COUNT_47; }
	inline void set_AUTH_COUNT_47(int32_t value)
	{
		___AUTH_COUNT_47 = value;
	}

	inline static int32_t get_offset_of__directionConfigCamera_48() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ____directionConfigCamera_48)); }
	inline bool get__directionConfigCamera_48() const { return ____directionConfigCamera_48; }
	inline bool* get_address_of__directionConfigCamera_48() { return &____directionConfigCamera_48; }
	inline void set__directionConfigCamera_48(bool value)
	{
		____directionConfigCamera_48 = value;
	}

	inline static int32_t get_offset_of_frameCounter_49() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___frameCounter_49)); }
	inline int32_t get_frameCounter_49() const { return ___frameCounter_49; }
	inline int32_t* get_address_of_frameCounter_49() { return &___frameCounter_49; }
	inline void set_frameCounter_49(int32_t value)
	{
		___frameCounter_49 = value;
	}

	inline static int32_t get_offset_of_timeCounter_50() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___timeCounter_50)); }
	inline float get_timeCounter_50() const { return ___timeCounter_50; }
	inline float* get_address_of_timeCounter_50() { return &___timeCounter_50; }
	inline void set_timeCounter_50(float value)
	{
		___timeCounter_50 = value;
	}

	inline static int32_t get_offset_of_refreshTime_51() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___refreshTime_51)); }
	inline float get_refreshTime_51() const { return ___refreshTime_51; }
	inline float* get_address_of_refreshTime_51() { return &___refreshTime_51; }
	inline void set_refreshTime_51(float value)
	{
		___refreshTime_51 = value;
	}

	inline static int32_t get_offset_of_showGUIErrorDialog_52() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___showGUIErrorDialog_52)); }
	inline bool get_showGUIErrorDialog_52() const { return ___showGUIErrorDialog_52; }
	inline bool* get_address_of_showGUIErrorDialog_52() { return &___showGUIErrorDialog_52; }
	inline void set_showGUIErrorDialog_52(bool value)
	{
		___showGUIErrorDialog_52 = value;
	}

	inline static int32_t get_offset_of_showGUIErrorDialogContent_53() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___showGUIErrorDialogContent_53)); }
	inline String_t* get_showGUIErrorDialogContent_53() const { return ___showGUIErrorDialogContent_53; }
	inline String_t** get_address_of_showGUIErrorDialogContent_53() { return &___showGUIErrorDialogContent_53; }
	inline void set_showGUIErrorDialogContent_53(String_t* value)
	{
		___showGUIErrorDialogContent_53 = value;
		Il2CppCodeGenWriteBarrier(&___showGUIErrorDialogContent_53, value);
	}

	inline static int32_t get_offset_of_showGUIErrorDialogWinRect_54() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142, ___showGUIErrorDialogWinRect_54)); }
	inline Rect_t3681755626  get_showGUIErrorDialogWinRect_54() const { return ___showGUIErrorDialogWinRect_54; }
	inline Rect_t3681755626 * get_address_of_showGUIErrorDialogWinRect_54() { return &___showGUIErrorDialogWinRect_54; }
	inline void set_showGUIErrorDialogWinRect_54(Rect_t3681755626  value)
	{
		___showGUIErrorDialogWinRect_54 = value;
	}
};

struct HiAREngine_t2339545142_StaticFields
{
public:
	// System.Boolean HiAREngine::ISDEBUG
	bool ___ISDEBUG_3;
	// System.Boolean HiAREngine::ContentRotate90
	bool ___ContentRotate90_32;
	// System.Boolean HiAREngine::ContentFlipV
	bool ___ContentFlipV_33;
	// System.Boolean HiAREngine::ContentFlipH
	bool ___ContentFlipH_34;
	// HiAREngine HiAREngine::instance
	HiAREngine_t2339545142 * ___instance_35;
	// HiAREngine/iOSCameraAction HiAREngine::cameraDelegate
	iOSCameraAction_t2623546611 * ___cameraDelegate_45;

public:
	inline static int32_t get_offset_of_ISDEBUG_3() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142_StaticFields, ___ISDEBUG_3)); }
	inline bool get_ISDEBUG_3() const { return ___ISDEBUG_3; }
	inline bool* get_address_of_ISDEBUG_3() { return &___ISDEBUG_3; }
	inline void set_ISDEBUG_3(bool value)
	{
		___ISDEBUG_3 = value;
	}

	inline static int32_t get_offset_of_ContentRotate90_32() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142_StaticFields, ___ContentRotate90_32)); }
	inline bool get_ContentRotate90_32() const { return ___ContentRotate90_32; }
	inline bool* get_address_of_ContentRotate90_32() { return &___ContentRotate90_32; }
	inline void set_ContentRotate90_32(bool value)
	{
		___ContentRotate90_32 = value;
	}

	inline static int32_t get_offset_of_ContentFlipV_33() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142_StaticFields, ___ContentFlipV_33)); }
	inline bool get_ContentFlipV_33() const { return ___ContentFlipV_33; }
	inline bool* get_address_of_ContentFlipV_33() { return &___ContentFlipV_33; }
	inline void set_ContentFlipV_33(bool value)
	{
		___ContentFlipV_33 = value;
	}

	inline static int32_t get_offset_of_ContentFlipH_34() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142_StaticFields, ___ContentFlipH_34)); }
	inline bool get_ContentFlipH_34() const { return ___ContentFlipH_34; }
	inline bool* get_address_of_ContentFlipH_34() { return &___ContentFlipH_34; }
	inline void set_ContentFlipH_34(bool value)
	{
		___ContentFlipH_34 = value;
	}

	inline static int32_t get_offset_of_instance_35() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142_StaticFields, ___instance_35)); }
	inline HiAREngine_t2339545142 * get_instance_35() const { return ___instance_35; }
	inline HiAREngine_t2339545142 ** get_address_of_instance_35() { return &___instance_35; }
	inline void set_instance_35(HiAREngine_t2339545142 * value)
	{
		___instance_35 = value;
		Il2CppCodeGenWriteBarrier(&___instance_35, value);
	}

	inline static int32_t get_offset_of_cameraDelegate_45() { return static_cast<int32_t>(offsetof(HiAREngine_t2339545142_StaticFields, ___cameraDelegate_45)); }
	inline iOSCameraAction_t2623546611 * get_cameraDelegate_45() const { return ___cameraDelegate_45; }
	inline iOSCameraAction_t2623546611 ** get_address_of_cameraDelegate_45() { return &___cameraDelegate_45; }
	inline void set_cameraDelegate_45(iOSCameraAction_t2623546611 * value)
	{
		___cameraDelegate_45 = value;
		Il2CppCodeGenWriteBarrier(&___cameraDelegate_45, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
