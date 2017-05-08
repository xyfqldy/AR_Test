#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "HiAR_Unity_hiscene_CloudRecoStatus2345400672.h"

// hiscene.CloudReco
struct CloudReco_t1441349392;
// System.Object
struct Il2CppObject;
// hiscene.RecognizeManager
struct RecognizeManager_t275622869;
// ICloudRecoEventHandler
struct ICloudRecoEventHandler_t460412253;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.RecognizeManager
struct  RecognizeManager_t275622869  : public Il2CppObject
{
public:
	// hiscene.CloudReco hiscene.RecognizeManager::m_cloudReco
	CloudReco_t1441349392 * ___m_cloudReco_3;
	// System.Boolean hiscene.RecognizeManager::m_running
	bool ___m_running_4;
	// System.Int32 hiscene.RecognizeManager::m_current_recoNum
	int32_t ___m_current_recoNum_5;
	// System.Int32 hiscene.RecognizeManager::step_threahold
	int32_t ___step_threahold_6;
	// System.Object hiscene.RecognizeManager::status_lock
	Il2CppObject * ___status_lock_7;
	// hiscene.CloudRecoStatus hiscene.RecognizeManager::status
	int32_t ___status_8;
	// System.Int32 hiscene.RecognizeManager::interval
	int32_t ___interval_10;
	// System.Int32 hiscene.RecognizeManager::step
	int32_t ___step_11;
	// ICloudRecoEventHandler hiscene.RecognizeManager::cloudRecoEvent
	Il2CppObject * ___cloudRecoEvent_12;

public:
	inline static int32_t get_offset_of_m_cloudReco_3() { return static_cast<int32_t>(offsetof(RecognizeManager_t275622869, ___m_cloudReco_3)); }
	inline CloudReco_t1441349392 * get_m_cloudReco_3() const { return ___m_cloudReco_3; }
	inline CloudReco_t1441349392 ** get_address_of_m_cloudReco_3() { return &___m_cloudReco_3; }
	inline void set_m_cloudReco_3(CloudReco_t1441349392 * value)
	{
		___m_cloudReco_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_cloudReco_3, value);
	}

	inline static int32_t get_offset_of_m_running_4() { return static_cast<int32_t>(offsetof(RecognizeManager_t275622869, ___m_running_4)); }
	inline bool get_m_running_4() const { return ___m_running_4; }
	inline bool* get_address_of_m_running_4() { return &___m_running_4; }
	inline void set_m_running_4(bool value)
	{
		___m_running_4 = value;
	}

	inline static int32_t get_offset_of_m_current_recoNum_5() { return static_cast<int32_t>(offsetof(RecognizeManager_t275622869, ___m_current_recoNum_5)); }
	inline int32_t get_m_current_recoNum_5() const { return ___m_current_recoNum_5; }
	inline int32_t* get_address_of_m_current_recoNum_5() { return &___m_current_recoNum_5; }
	inline void set_m_current_recoNum_5(int32_t value)
	{
		___m_current_recoNum_5 = value;
	}

	inline static int32_t get_offset_of_step_threahold_6() { return static_cast<int32_t>(offsetof(RecognizeManager_t275622869, ___step_threahold_6)); }
	inline int32_t get_step_threahold_6() const { return ___step_threahold_6; }
	inline int32_t* get_address_of_step_threahold_6() { return &___step_threahold_6; }
	inline void set_step_threahold_6(int32_t value)
	{
		___step_threahold_6 = value;
	}

	inline static int32_t get_offset_of_status_lock_7() { return static_cast<int32_t>(offsetof(RecognizeManager_t275622869, ___status_lock_7)); }
	inline Il2CppObject * get_status_lock_7() const { return ___status_lock_7; }
	inline Il2CppObject ** get_address_of_status_lock_7() { return &___status_lock_7; }
	inline void set_status_lock_7(Il2CppObject * value)
	{
		___status_lock_7 = value;
		Il2CppCodeGenWriteBarrier(&___status_lock_7, value);
	}

	inline static int32_t get_offset_of_status_8() { return static_cast<int32_t>(offsetof(RecognizeManager_t275622869, ___status_8)); }
	inline int32_t get_status_8() const { return ___status_8; }
	inline int32_t* get_address_of_status_8() { return &___status_8; }
	inline void set_status_8(int32_t value)
	{
		___status_8 = value;
	}

	inline static int32_t get_offset_of_interval_10() { return static_cast<int32_t>(offsetof(RecognizeManager_t275622869, ___interval_10)); }
	inline int32_t get_interval_10() const { return ___interval_10; }
	inline int32_t* get_address_of_interval_10() { return &___interval_10; }
	inline void set_interval_10(int32_t value)
	{
		___interval_10 = value;
	}

	inline static int32_t get_offset_of_step_11() { return static_cast<int32_t>(offsetof(RecognizeManager_t275622869, ___step_11)); }
	inline int32_t get_step_11() const { return ___step_11; }
	inline int32_t* get_address_of_step_11() { return &___step_11; }
	inline void set_step_11(int32_t value)
	{
		___step_11 = value;
	}

	inline static int32_t get_offset_of_cloudRecoEvent_12() { return static_cast<int32_t>(offsetof(RecognizeManager_t275622869, ___cloudRecoEvent_12)); }
	inline Il2CppObject * get_cloudRecoEvent_12() const { return ___cloudRecoEvent_12; }
	inline Il2CppObject ** get_address_of_cloudRecoEvent_12() { return &___cloudRecoEvent_12; }
	inline void set_cloudRecoEvent_12(Il2CppObject * value)
	{
		___cloudRecoEvent_12 = value;
		Il2CppCodeGenWriteBarrier(&___cloudRecoEvent_12, value);
	}
};

struct RecognizeManager_t275622869_StaticFields
{
public:
	// System.Int32 hiscene.RecognizeManager::cloud_reco_threshold_num
	int32_t ___cloud_reco_threshold_num_0;
	// System.Int32 hiscene.RecognizeManager::featureNum_step
	int32_t ___featureNum_step_1;
	// System.Int32 hiscene.RecognizeManager::featureNum_min
	int32_t ___featureNum_min_2;
	// hiscene.RecognizeManager hiscene.RecognizeManager::InstanceManager
	RecognizeManager_t275622869 * ___InstanceManager_9;

public:
	inline static int32_t get_offset_of_cloud_reco_threshold_num_0() { return static_cast<int32_t>(offsetof(RecognizeManager_t275622869_StaticFields, ___cloud_reco_threshold_num_0)); }
	inline int32_t get_cloud_reco_threshold_num_0() const { return ___cloud_reco_threshold_num_0; }
	inline int32_t* get_address_of_cloud_reco_threshold_num_0() { return &___cloud_reco_threshold_num_0; }
	inline void set_cloud_reco_threshold_num_0(int32_t value)
	{
		___cloud_reco_threshold_num_0 = value;
	}

	inline static int32_t get_offset_of_featureNum_step_1() { return static_cast<int32_t>(offsetof(RecognizeManager_t275622869_StaticFields, ___featureNum_step_1)); }
	inline int32_t get_featureNum_step_1() const { return ___featureNum_step_1; }
	inline int32_t* get_address_of_featureNum_step_1() { return &___featureNum_step_1; }
	inline void set_featureNum_step_1(int32_t value)
	{
		___featureNum_step_1 = value;
	}

	inline static int32_t get_offset_of_featureNum_min_2() { return static_cast<int32_t>(offsetof(RecognizeManager_t275622869_StaticFields, ___featureNum_min_2)); }
	inline int32_t get_featureNum_min_2() const { return ___featureNum_min_2; }
	inline int32_t* get_address_of_featureNum_min_2() { return &___featureNum_min_2; }
	inline void set_featureNum_min_2(int32_t value)
	{
		___featureNum_min_2 = value;
	}

	inline static int32_t get_offset_of_InstanceManager_9() { return static_cast<int32_t>(offsetof(RecognizeManager_t275622869_StaticFields, ___InstanceManager_9)); }
	inline RecognizeManager_t275622869 * get_InstanceManager_9() const { return ___InstanceManager_9; }
	inline RecognizeManager_t275622869 ** get_address_of_InstanceManager_9() { return &___InstanceManager_9; }
	inline void set_InstanceManager_9(RecognizeManager_t275622869 * value)
	{
		___InstanceManager_9 = value;
		Il2CppCodeGenWriteBarrier(&___InstanceManager_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
