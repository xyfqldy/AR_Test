#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<hiscene.IHsGameObject>
struct List_1_t3657915783;
// System.Collections.Generic.Dictionary`2<System.String,hiscene.IHsGameObject>
struct Dictionary_2_t1908606617;
// hiscene.GameObjectManager
struct GameObjectManager_t3484666214;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.GameObjectManager
struct  GameObjectManager_t3484666214  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<hiscene.IHsGameObject> hiscene.GameObjectManager::m_gameobjectList
	List_1_t3657915783 * ___m_gameobjectList_4;
	// System.Collections.Generic.Dictionary`2<System.String,hiscene.IHsGameObject> hiscene.GameObjectManager::m_gameobjects
	Dictionary_2_t1908606617 * ___m_gameobjects_5;
	// System.Collections.Generic.List`1<hiscene.IHsGameObject> hiscene.GameObjectManager::m_unusedGameobjectIndex
	List_1_t3657915783 * ___m_unusedGameobjectIndex_6;
	// System.Collections.Generic.Dictionary`2<System.String,hiscene.IHsGameObject> hiscene.GameObjectManager::m_unusedGameobjects
	Dictionary_2_t1908606617 * ___m_unusedGameobjects_7;

public:
	inline static int32_t get_offset_of_m_gameobjectList_4() { return static_cast<int32_t>(offsetof(GameObjectManager_t3484666214, ___m_gameobjectList_4)); }
	inline List_1_t3657915783 * get_m_gameobjectList_4() const { return ___m_gameobjectList_4; }
	inline List_1_t3657915783 ** get_address_of_m_gameobjectList_4() { return &___m_gameobjectList_4; }
	inline void set_m_gameobjectList_4(List_1_t3657915783 * value)
	{
		___m_gameobjectList_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_gameobjectList_4, value);
	}

	inline static int32_t get_offset_of_m_gameobjects_5() { return static_cast<int32_t>(offsetof(GameObjectManager_t3484666214, ___m_gameobjects_5)); }
	inline Dictionary_2_t1908606617 * get_m_gameobjects_5() const { return ___m_gameobjects_5; }
	inline Dictionary_2_t1908606617 ** get_address_of_m_gameobjects_5() { return &___m_gameobjects_5; }
	inline void set_m_gameobjects_5(Dictionary_2_t1908606617 * value)
	{
		___m_gameobjects_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_gameobjects_5, value);
	}

	inline static int32_t get_offset_of_m_unusedGameobjectIndex_6() { return static_cast<int32_t>(offsetof(GameObjectManager_t3484666214, ___m_unusedGameobjectIndex_6)); }
	inline List_1_t3657915783 * get_m_unusedGameobjectIndex_6() const { return ___m_unusedGameobjectIndex_6; }
	inline List_1_t3657915783 ** get_address_of_m_unusedGameobjectIndex_6() { return &___m_unusedGameobjectIndex_6; }
	inline void set_m_unusedGameobjectIndex_6(List_1_t3657915783 * value)
	{
		___m_unusedGameobjectIndex_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_unusedGameobjectIndex_6, value);
	}

	inline static int32_t get_offset_of_m_unusedGameobjects_7() { return static_cast<int32_t>(offsetof(GameObjectManager_t3484666214, ___m_unusedGameobjects_7)); }
	inline Dictionary_2_t1908606617 * get_m_unusedGameobjects_7() const { return ___m_unusedGameobjects_7; }
	inline Dictionary_2_t1908606617 ** get_address_of_m_unusedGameobjects_7() { return &___m_unusedGameobjects_7; }
	inline void set_m_unusedGameobjects_7(Dictionary_2_t1908606617 * value)
	{
		___m_unusedGameobjects_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_unusedGameobjects_7, value);
	}
};

struct GameObjectManager_t3484666214_StaticFields
{
public:
	// hiscene.GameObjectManager hiscene.GameObjectManager::InstanceManager
	GameObjectManager_t3484666214 * ___InstanceManager_8;

public:
	inline static int32_t get_offset_of_InstanceManager_8() { return static_cast<int32_t>(offsetof(GameObjectManager_t3484666214_StaticFields, ___InstanceManager_8)); }
	inline GameObjectManager_t3484666214 * get_InstanceManager_8() const { return ___InstanceManager_8; }
	inline GameObjectManager_t3484666214 ** get_address_of_InstanceManager_8() { return &___InstanceManager_8; }
	inline void set_InstanceManager_8(GameObjectManager_t3484666214 * value)
	{
		___InstanceManager_8 = value;
		Il2CppCodeGenWriteBarrier(&___InstanceManager_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
