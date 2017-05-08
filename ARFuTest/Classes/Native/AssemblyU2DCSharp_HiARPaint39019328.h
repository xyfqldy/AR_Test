#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// HiAREngine
struct HiAREngine_t2339545142;
// hiscene.Target
struct Target_t1207115391;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HiARPaint
struct  HiARPaint_t39019328  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera HiARPaint::mainCamera
	Camera_t189460977 * ___mainCamera_2;
	// UnityEngine.GameObject[] HiARPaint::marks
	GameObjectU5BU5D_t3057952154* ___marks_3;
	// System.Boolean HiARPaint::isInited
	bool ___isInited_4;
	// System.Boolean HiARPaint::fitRender
	bool ___fitRender_5;
	// UnityEngine.Vector2 HiARPaint::ratioForCamera2Screen
	Vector2_t2243707579  ___ratioForCamera2Screen_6;
	// HiAREngine HiARPaint::engine
	HiAREngine_t2339545142 * ___engine_7;
	// hiscene.Target HiARPaint::hiarTarget
	Target_t1207115391 * ___hiarTarget_8;
	// UnityEngine.Material HiARPaint::currentMaterial
	Material_t193706927 * ___currentMaterial_9;
	// UnityEngine.Vector2 HiARPaint::targetHalfSize
	Vector2_t2243707579  ___targetHalfSize_10;

public:
	inline static int32_t get_offset_of_mainCamera_2() { return static_cast<int32_t>(offsetof(HiARPaint_t39019328, ___mainCamera_2)); }
	inline Camera_t189460977 * get_mainCamera_2() const { return ___mainCamera_2; }
	inline Camera_t189460977 ** get_address_of_mainCamera_2() { return &___mainCamera_2; }
	inline void set_mainCamera_2(Camera_t189460977 * value)
	{
		___mainCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_2, value);
	}

	inline static int32_t get_offset_of_marks_3() { return static_cast<int32_t>(offsetof(HiARPaint_t39019328, ___marks_3)); }
	inline GameObjectU5BU5D_t3057952154* get_marks_3() const { return ___marks_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_marks_3() { return &___marks_3; }
	inline void set_marks_3(GameObjectU5BU5D_t3057952154* value)
	{
		___marks_3 = value;
		Il2CppCodeGenWriteBarrier(&___marks_3, value);
	}

	inline static int32_t get_offset_of_isInited_4() { return static_cast<int32_t>(offsetof(HiARPaint_t39019328, ___isInited_4)); }
	inline bool get_isInited_4() const { return ___isInited_4; }
	inline bool* get_address_of_isInited_4() { return &___isInited_4; }
	inline void set_isInited_4(bool value)
	{
		___isInited_4 = value;
	}

	inline static int32_t get_offset_of_fitRender_5() { return static_cast<int32_t>(offsetof(HiARPaint_t39019328, ___fitRender_5)); }
	inline bool get_fitRender_5() const { return ___fitRender_5; }
	inline bool* get_address_of_fitRender_5() { return &___fitRender_5; }
	inline void set_fitRender_5(bool value)
	{
		___fitRender_5 = value;
	}

	inline static int32_t get_offset_of_ratioForCamera2Screen_6() { return static_cast<int32_t>(offsetof(HiARPaint_t39019328, ___ratioForCamera2Screen_6)); }
	inline Vector2_t2243707579  get_ratioForCamera2Screen_6() const { return ___ratioForCamera2Screen_6; }
	inline Vector2_t2243707579 * get_address_of_ratioForCamera2Screen_6() { return &___ratioForCamera2Screen_6; }
	inline void set_ratioForCamera2Screen_6(Vector2_t2243707579  value)
	{
		___ratioForCamera2Screen_6 = value;
	}

	inline static int32_t get_offset_of_engine_7() { return static_cast<int32_t>(offsetof(HiARPaint_t39019328, ___engine_7)); }
	inline HiAREngine_t2339545142 * get_engine_7() const { return ___engine_7; }
	inline HiAREngine_t2339545142 ** get_address_of_engine_7() { return &___engine_7; }
	inline void set_engine_7(HiAREngine_t2339545142 * value)
	{
		___engine_7 = value;
		Il2CppCodeGenWriteBarrier(&___engine_7, value);
	}

	inline static int32_t get_offset_of_hiarTarget_8() { return static_cast<int32_t>(offsetof(HiARPaint_t39019328, ___hiarTarget_8)); }
	inline Target_t1207115391 * get_hiarTarget_8() const { return ___hiarTarget_8; }
	inline Target_t1207115391 ** get_address_of_hiarTarget_8() { return &___hiarTarget_8; }
	inline void set_hiarTarget_8(Target_t1207115391 * value)
	{
		___hiarTarget_8 = value;
		Il2CppCodeGenWriteBarrier(&___hiarTarget_8, value);
	}

	inline static int32_t get_offset_of_currentMaterial_9() { return static_cast<int32_t>(offsetof(HiARPaint_t39019328, ___currentMaterial_9)); }
	inline Material_t193706927 * get_currentMaterial_9() const { return ___currentMaterial_9; }
	inline Material_t193706927 ** get_address_of_currentMaterial_9() { return &___currentMaterial_9; }
	inline void set_currentMaterial_9(Material_t193706927 * value)
	{
		___currentMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentMaterial_9, value);
	}

	inline static int32_t get_offset_of_targetHalfSize_10() { return static_cast<int32_t>(offsetof(HiARPaint_t39019328, ___targetHalfSize_10)); }
	inline Vector2_t2243707579  get_targetHalfSize_10() const { return ___targetHalfSize_10; }
	inline Vector2_t2243707579 * get_address_of_targetHalfSize_10() { return &___targetHalfSize_10; }
	inline void set_targetHalfSize_10(Vector2_t2243707579  value)
	{
		___targetHalfSize_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
