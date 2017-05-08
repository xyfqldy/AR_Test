#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EdgeCheckAnimation
struct  EdgeCheckAnimation_t3405629665  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Shader EdgeCheckAnimation::shader
	Shader_t2430389951 * ___shader_2;
	// UnityEngine.Material EdgeCheckAnimation::m_Material
	Material_t193706927 * ___m_Material_3;
	// UnityEngine.Color EdgeCheckAnimation::lastEdgeColor
	Color_t2020392075  ___lastEdgeColor_4;
	// UnityEngine.Color EdgeCheckAnimation::edgeColor
	Color_t2020392075  ___edgeColor_5;
	// System.Single EdgeCheckAnimation::offset
	float ___offset_6;
	// System.Single EdgeCheckAnimation::delta
	float ___delta_7;
	// UnityEngine.Texture2D EdgeCheckAnimation::waveTexture
	Texture2D_t3542995729 * ___waveTexture_8;
	// System.Single EdgeCheckAnimation::valueWave
	float ___valueWave_9;
	// System.Single EdgeCheckAnimation::valueWave1
	float ___valueWave1_10;
	// System.Single EdgeCheckAnimation::speed
	float ___speed_11;
	// System.Boolean EdgeCheckAnimation::isRuning
	bool ___isRuning_12;
	// System.Single EdgeCheckAnimation::startTime
	float ___startTime_13;

public:
	inline static int32_t get_offset_of_shader_2() { return static_cast<int32_t>(offsetof(EdgeCheckAnimation_t3405629665, ___shader_2)); }
	inline Shader_t2430389951 * get_shader_2() const { return ___shader_2; }
	inline Shader_t2430389951 ** get_address_of_shader_2() { return &___shader_2; }
	inline void set_shader_2(Shader_t2430389951 * value)
	{
		___shader_2 = value;
		Il2CppCodeGenWriteBarrier(&___shader_2, value);
	}

	inline static int32_t get_offset_of_m_Material_3() { return static_cast<int32_t>(offsetof(EdgeCheckAnimation_t3405629665, ___m_Material_3)); }
	inline Material_t193706927 * get_m_Material_3() const { return ___m_Material_3; }
	inline Material_t193706927 ** get_address_of_m_Material_3() { return &___m_Material_3; }
	inline void set_m_Material_3(Material_t193706927 * value)
	{
		___m_Material_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_3, value);
	}

	inline static int32_t get_offset_of_lastEdgeColor_4() { return static_cast<int32_t>(offsetof(EdgeCheckAnimation_t3405629665, ___lastEdgeColor_4)); }
	inline Color_t2020392075  get_lastEdgeColor_4() const { return ___lastEdgeColor_4; }
	inline Color_t2020392075 * get_address_of_lastEdgeColor_4() { return &___lastEdgeColor_4; }
	inline void set_lastEdgeColor_4(Color_t2020392075  value)
	{
		___lastEdgeColor_4 = value;
	}

	inline static int32_t get_offset_of_edgeColor_5() { return static_cast<int32_t>(offsetof(EdgeCheckAnimation_t3405629665, ___edgeColor_5)); }
	inline Color_t2020392075  get_edgeColor_5() const { return ___edgeColor_5; }
	inline Color_t2020392075 * get_address_of_edgeColor_5() { return &___edgeColor_5; }
	inline void set_edgeColor_5(Color_t2020392075  value)
	{
		___edgeColor_5 = value;
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(EdgeCheckAnimation_t3405629665, ___offset_6)); }
	inline float get_offset_6() const { return ___offset_6; }
	inline float* get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(float value)
	{
		___offset_6 = value;
	}

	inline static int32_t get_offset_of_delta_7() { return static_cast<int32_t>(offsetof(EdgeCheckAnimation_t3405629665, ___delta_7)); }
	inline float get_delta_7() const { return ___delta_7; }
	inline float* get_address_of_delta_7() { return &___delta_7; }
	inline void set_delta_7(float value)
	{
		___delta_7 = value;
	}

	inline static int32_t get_offset_of_waveTexture_8() { return static_cast<int32_t>(offsetof(EdgeCheckAnimation_t3405629665, ___waveTexture_8)); }
	inline Texture2D_t3542995729 * get_waveTexture_8() const { return ___waveTexture_8; }
	inline Texture2D_t3542995729 ** get_address_of_waveTexture_8() { return &___waveTexture_8; }
	inline void set_waveTexture_8(Texture2D_t3542995729 * value)
	{
		___waveTexture_8 = value;
		Il2CppCodeGenWriteBarrier(&___waveTexture_8, value);
	}

	inline static int32_t get_offset_of_valueWave_9() { return static_cast<int32_t>(offsetof(EdgeCheckAnimation_t3405629665, ___valueWave_9)); }
	inline float get_valueWave_9() const { return ___valueWave_9; }
	inline float* get_address_of_valueWave_9() { return &___valueWave_9; }
	inline void set_valueWave_9(float value)
	{
		___valueWave_9 = value;
	}

	inline static int32_t get_offset_of_valueWave1_10() { return static_cast<int32_t>(offsetof(EdgeCheckAnimation_t3405629665, ___valueWave1_10)); }
	inline float get_valueWave1_10() const { return ___valueWave1_10; }
	inline float* get_address_of_valueWave1_10() { return &___valueWave1_10; }
	inline void set_valueWave1_10(float value)
	{
		___valueWave1_10 = value;
	}

	inline static int32_t get_offset_of_speed_11() { return static_cast<int32_t>(offsetof(EdgeCheckAnimation_t3405629665, ___speed_11)); }
	inline float get_speed_11() const { return ___speed_11; }
	inline float* get_address_of_speed_11() { return &___speed_11; }
	inline void set_speed_11(float value)
	{
		___speed_11 = value;
	}

	inline static int32_t get_offset_of_isRuning_12() { return static_cast<int32_t>(offsetof(EdgeCheckAnimation_t3405629665, ___isRuning_12)); }
	inline bool get_isRuning_12() const { return ___isRuning_12; }
	inline bool* get_address_of_isRuning_12() { return &___isRuning_12; }
	inline void set_isRuning_12(bool value)
	{
		___isRuning_12 = value;
	}

	inline static int32_t get_offset_of_startTime_13() { return static_cast<int32_t>(offsetof(EdgeCheckAnimation_t3405629665, ___startTime_13)); }
	inline float get_startTime_13() const { return ___startTime_13; }
	inline float* get_address_of_startTime_13() { return &___startTime_13; }
	inline void set_startTime_13(float value)
	{
		___startTime_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
