#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// BackgroundCamera
struct BackgroundCamera_t81074229;
// System.String
struct String_t;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundCamera
struct  BackgroundCamera_t81074229  : public Il2CppObject
{
public:
	// System.Single BackgroundCamera::FarPlane
	float ___FarPlane_1;
	// System.Single BackgroundCamera::NearPlane
	float ___NearPlane_2;
	// System.String BackgroundCamera::cameraParam
	String_t* ___cameraParam_3;
	// UnityEngine.Color32[] BackgroundCamera::_cameraColor32Array
	Color32U5BU5D_t30278651* ____cameraColor32Array_4;
	// UnityEngine.Material BackgroundCamera::_cameraMaterial
	Material_t193706927 * ____cameraMaterial_5;
	// UnityEngine.Texture2D BackgroundCamera::_cameraTexture
	Texture2D_t3542995729 * ____cameraTexture_6;
	// UnityEngine.Texture2D BackgroundCamera::_smallCameraTexture
	Texture2D_t3542995729 * ____smallCameraTexture_7;
	// UnityEngine.GameObject BackgroundCamera::_cameraBgMesh
	GameObject_t1756533147 * ____cameraBgMesh_8;
	// System.Int32 BackgroundCamera::backgroundLayer
	int32_t ___backgroundLayer_9;
	// UnityEngine.Matrix4x4 BackgroundCamera::_cameraProjectionMatrix
	Matrix4x4_t2933234003  ____cameraProjectionMatrix_10;
	// System.Boolean BackgroundCamera::_ContentRotate90
	bool ____ContentRotate90_11;
	// System.Boolean BackgroundCamera::useSpliteScreen
	bool ___useSpliteScreen_14;
	// System.Boolean BackgroundCamera::spliteFullScreen
	bool ___spliteFullScreen_15;
	// System.String BackgroundCamera::cameraConfigMacOSX
	String_t* ___cameraConfigMacOSX_16;
	// System.String BackgroundCamera::cameraConfigiOS
	String_t* ___cameraConfigiOS_17;
	// System.String BackgroundCamera::cameraConfigWindows
	String_t* ___cameraConfigWindows_18;
	// System.String BackgroundCamera::cameraConfigAndroid
	String_t* ___cameraConfigAndroid_19;
	// System.Boolean BackgroundCamera::isAndroidCameraOpen
	bool ___isAndroidCameraOpen_20;

public:
	inline static int32_t get_offset_of_FarPlane_1() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ___FarPlane_1)); }
	inline float get_FarPlane_1() const { return ___FarPlane_1; }
	inline float* get_address_of_FarPlane_1() { return &___FarPlane_1; }
	inline void set_FarPlane_1(float value)
	{
		___FarPlane_1 = value;
	}

	inline static int32_t get_offset_of_NearPlane_2() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ___NearPlane_2)); }
	inline float get_NearPlane_2() const { return ___NearPlane_2; }
	inline float* get_address_of_NearPlane_2() { return &___NearPlane_2; }
	inline void set_NearPlane_2(float value)
	{
		___NearPlane_2 = value;
	}

	inline static int32_t get_offset_of_cameraParam_3() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ___cameraParam_3)); }
	inline String_t* get_cameraParam_3() const { return ___cameraParam_3; }
	inline String_t** get_address_of_cameraParam_3() { return &___cameraParam_3; }
	inline void set_cameraParam_3(String_t* value)
	{
		___cameraParam_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraParam_3, value);
	}

	inline static int32_t get_offset_of__cameraColor32Array_4() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ____cameraColor32Array_4)); }
	inline Color32U5BU5D_t30278651* get__cameraColor32Array_4() const { return ____cameraColor32Array_4; }
	inline Color32U5BU5D_t30278651** get_address_of__cameraColor32Array_4() { return &____cameraColor32Array_4; }
	inline void set__cameraColor32Array_4(Color32U5BU5D_t30278651* value)
	{
		____cameraColor32Array_4 = value;
		Il2CppCodeGenWriteBarrier(&____cameraColor32Array_4, value);
	}

	inline static int32_t get_offset_of__cameraMaterial_5() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ____cameraMaterial_5)); }
	inline Material_t193706927 * get__cameraMaterial_5() const { return ____cameraMaterial_5; }
	inline Material_t193706927 ** get_address_of__cameraMaterial_5() { return &____cameraMaterial_5; }
	inline void set__cameraMaterial_5(Material_t193706927 * value)
	{
		____cameraMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&____cameraMaterial_5, value);
	}

	inline static int32_t get_offset_of__cameraTexture_6() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ____cameraTexture_6)); }
	inline Texture2D_t3542995729 * get__cameraTexture_6() const { return ____cameraTexture_6; }
	inline Texture2D_t3542995729 ** get_address_of__cameraTexture_6() { return &____cameraTexture_6; }
	inline void set__cameraTexture_6(Texture2D_t3542995729 * value)
	{
		____cameraTexture_6 = value;
		Il2CppCodeGenWriteBarrier(&____cameraTexture_6, value);
	}

	inline static int32_t get_offset_of__smallCameraTexture_7() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ____smallCameraTexture_7)); }
	inline Texture2D_t3542995729 * get__smallCameraTexture_7() const { return ____smallCameraTexture_7; }
	inline Texture2D_t3542995729 ** get_address_of__smallCameraTexture_7() { return &____smallCameraTexture_7; }
	inline void set__smallCameraTexture_7(Texture2D_t3542995729 * value)
	{
		____smallCameraTexture_7 = value;
		Il2CppCodeGenWriteBarrier(&____smallCameraTexture_7, value);
	}

	inline static int32_t get_offset_of__cameraBgMesh_8() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ____cameraBgMesh_8)); }
	inline GameObject_t1756533147 * get__cameraBgMesh_8() const { return ____cameraBgMesh_8; }
	inline GameObject_t1756533147 ** get_address_of__cameraBgMesh_8() { return &____cameraBgMesh_8; }
	inline void set__cameraBgMesh_8(GameObject_t1756533147 * value)
	{
		____cameraBgMesh_8 = value;
		Il2CppCodeGenWriteBarrier(&____cameraBgMesh_8, value);
	}

	inline static int32_t get_offset_of_backgroundLayer_9() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ___backgroundLayer_9)); }
	inline int32_t get_backgroundLayer_9() const { return ___backgroundLayer_9; }
	inline int32_t* get_address_of_backgroundLayer_9() { return &___backgroundLayer_9; }
	inline void set_backgroundLayer_9(int32_t value)
	{
		___backgroundLayer_9 = value;
	}

	inline static int32_t get_offset_of__cameraProjectionMatrix_10() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ____cameraProjectionMatrix_10)); }
	inline Matrix4x4_t2933234003  get__cameraProjectionMatrix_10() const { return ____cameraProjectionMatrix_10; }
	inline Matrix4x4_t2933234003 * get_address_of__cameraProjectionMatrix_10() { return &____cameraProjectionMatrix_10; }
	inline void set__cameraProjectionMatrix_10(Matrix4x4_t2933234003  value)
	{
		____cameraProjectionMatrix_10 = value;
	}

	inline static int32_t get_offset_of__ContentRotate90_11() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ____ContentRotate90_11)); }
	inline bool get__ContentRotate90_11() const { return ____ContentRotate90_11; }
	inline bool* get_address_of__ContentRotate90_11() { return &____ContentRotate90_11; }
	inline void set__ContentRotate90_11(bool value)
	{
		____ContentRotate90_11 = value;
	}

	inline static int32_t get_offset_of_useSpliteScreen_14() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ___useSpliteScreen_14)); }
	inline bool get_useSpliteScreen_14() const { return ___useSpliteScreen_14; }
	inline bool* get_address_of_useSpliteScreen_14() { return &___useSpliteScreen_14; }
	inline void set_useSpliteScreen_14(bool value)
	{
		___useSpliteScreen_14 = value;
	}

	inline static int32_t get_offset_of_spliteFullScreen_15() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ___spliteFullScreen_15)); }
	inline bool get_spliteFullScreen_15() const { return ___spliteFullScreen_15; }
	inline bool* get_address_of_spliteFullScreen_15() { return &___spliteFullScreen_15; }
	inline void set_spliteFullScreen_15(bool value)
	{
		___spliteFullScreen_15 = value;
	}

	inline static int32_t get_offset_of_cameraConfigMacOSX_16() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ___cameraConfigMacOSX_16)); }
	inline String_t* get_cameraConfigMacOSX_16() const { return ___cameraConfigMacOSX_16; }
	inline String_t** get_address_of_cameraConfigMacOSX_16() { return &___cameraConfigMacOSX_16; }
	inline void set_cameraConfigMacOSX_16(String_t* value)
	{
		___cameraConfigMacOSX_16 = value;
		Il2CppCodeGenWriteBarrier(&___cameraConfigMacOSX_16, value);
	}

	inline static int32_t get_offset_of_cameraConfigiOS_17() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ___cameraConfigiOS_17)); }
	inline String_t* get_cameraConfigiOS_17() const { return ___cameraConfigiOS_17; }
	inline String_t** get_address_of_cameraConfigiOS_17() { return &___cameraConfigiOS_17; }
	inline void set_cameraConfigiOS_17(String_t* value)
	{
		___cameraConfigiOS_17 = value;
		Il2CppCodeGenWriteBarrier(&___cameraConfigiOS_17, value);
	}

	inline static int32_t get_offset_of_cameraConfigWindows_18() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ___cameraConfigWindows_18)); }
	inline String_t* get_cameraConfigWindows_18() const { return ___cameraConfigWindows_18; }
	inline String_t** get_address_of_cameraConfigWindows_18() { return &___cameraConfigWindows_18; }
	inline void set_cameraConfigWindows_18(String_t* value)
	{
		___cameraConfigWindows_18 = value;
		Il2CppCodeGenWriteBarrier(&___cameraConfigWindows_18, value);
	}

	inline static int32_t get_offset_of_cameraConfigAndroid_19() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ___cameraConfigAndroid_19)); }
	inline String_t* get_cameraConfigAndroid_19() const { return ___cameraConfigAndroid_19; }
	inline String_t** get_address_of_cameraConfigAndroid_19() { return &___cameraConfigAndroid_19; }
	inline void set_cameraConfigAndroid_19(String_t* value)
	{
		___cameraConfigAndroid_19 = value;
		Il2CppCodeGenWriteBarrier(&___cameraConfigAndroid_19, value);
	}

	inline static int32_t get_offset_of_isAndroidCameraOpen_20() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229, ___isAndroidCameraOpen_20)); }
	inline bool get_isAndroidCameraOpen_20() const { return ___isAndroidCameraOpen_20; }
	inline bool* get_address_of_isAndroidCameraOpen_20() { return &___isAndroidCameraOpen_20; }
	inline void set_isAndroidCameraOpen_20(bool value)
	{
		___isAndroidCameraOpen_20 = value;
	}
};

struct BackgroundCamera_t81074229_StaticFields
{
public:
	// BackgroundCamera BackgroundCamera::_instance
	BackgroundCamera_t81074229 * ____instance_0;
	// System.Single[] BackgroundCamera::originProjectMatrix
	SingleU5BU5D_t577127397* ___originProjectMatrix_12;
	// UnityEngine.Matrix4x4 BackgroundCamera::projectMatrix
	Matrix4x4_t2933234003  ___projectMatrix_13;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229_StaticFields, ____instance_0)); }
	inline BackgroundCamera_t81074229 * get__instance_0() const { return ____instance_0; }
	inline BackgroundCamera_t81074229 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(BackgroundCamera_t81074229 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier(&____instance_0, value);
	}

	inline static int32_t get_offset_of_originProjectMatrix_12() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229_StaticFields, ___originProjectMatrix_12)); }
	inline SingleU5BU5D_t577127397* get_originProjectMatrix_12() const { return ___originProjectMatrix_12; }
	inline SingleU5BU5D_t577127397** get_address_of_originProjectMatrix_12() { return &___originProjectMatrix_12; }
	inline void set_originProjectMatrix_12(SingleU5BU5D_t577127397* value)
	{
		___originProjectMatrix_12 = value;
		Il2CppCodeGenWriteBarrier(&___originProjectMatrix_12, value);
	}

	inline static int32_t get_offset_of_projectMatrix_13() { return static_cast<int32_t>(offsetof(BackgroundCamera_t81074229_StaticFields, ___projectMatrix_13)); }
	inline Matrix4x4_t2933234003  get_projectMatrix_13() const { return ___projectMatrix_13; }
	inline Matrix4x4_t2933234003 * get_address_of_projectMatrix_13() { return &___projectMatrix_13; }
	inline void set_projectMatrix_13(Matrix4x4_t2933234003  value)
	{
		___projectMatrix_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
