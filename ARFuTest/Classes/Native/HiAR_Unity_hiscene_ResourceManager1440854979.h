#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// hiscene.ResourceManager
struct ResourceManager_t1440854979;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hiscene.ResourceManager
struct  ResourceManager_t1440854979  : public Il2CppObject
{
public:
	// System.String hiscene.ResourceManager::resourceFolder
	String_t* ___resourceFolder_0;
	// System.String hiscene.ResourceManager::tempkeyPath
	String_t* ___tempkeyPath_1;
	// System.String hiscene.ResourceManager::keyPath
	String_t* ___keyPath_2;
	// System.String hiscene.ResourceManager::defaultKeyPath
	String_t* ___defaultKeyPath_3;
	// System.String hiscene.ResourceManager::defaultAndroidKeyPath
	String_t* ___defaultAndroidKeyPath_4;
	// System.String hiscene.ResourceManager::assetBundlePath
	String_t* ___assetBundlePath_5;
	// System.String hiscene.ResourceManager::dataPath
	String_t* ___dataPath_6;

public:
	inline static int32_t get_offset_of_resourceFolder_0() { return static_cast<int32_t>(offsetof(ResourceManager_t1440854979, ___resourceFolder_0)); }
	inline String_t* get_resourceFolder_0() const { return ___resourceFolder_0; }
	inline String_t** get_address_of_resourceFolder_0() { return &___resourceFolder_0; }
	inline void set_resourceFolder_0(String_t* value)
	{
		___resourceFolder_0 = value;
		Il2CppCodeGenWriteBarrier(&___resourceFolder_0, value);
	}

	inline static int32_t get_offset_of_tempkeyPath_1() { return static_cast<int32_t>(offsetof(ResourceManager_t1440854979, ___tempkeyPath_1)); }
	inline String_t* get_tempkeyPath_1() const { return ___tempkeyPath_1; }
	inline String_t** get_address_of_tempkeyPath_1() { return &___tempkeyPath_1; }
	inline void set_tempkeyPath_1(String_t* value)
	{
		___tempkeyPath_1 = value;
		Il2CppCodeGenWriteBarrier(&___tempkeyPath_1, value);
	}

	inline static int32_t get_offset_of_keyPath_2() { return static_cast<int32_t>(offsetof(ResourceManager_t1440854979, ___keyPath_2)); }
	inline String_t* get_keyPath_2() const { return ___keyPath_2; }
	inline String_t** get_address_of_keyPath_2() { return &___keyPath_2; }
	inline void set_keyPath_2(String_t* value)
	{
		___keyPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___keyPath_2, value);
	}

	inline static int32_t get_offset_of_defaultKeyPath_3() { return static_cast<int32_t>(offsetof(ResourceManager_t1440854979, ___defaultKeyPath_3)); }
	inline String_t* get_defaultKeyPath_3() const { return ___defaultKeyPath_3; }
	inline String_t** get_address_of_defaultKeyPath_3() { return &___defaultKeyPath_3; }
	inline void set_defaultKeyPath_3(String_t* value)
	{
		___defaultKeyPath_3 = value;
		Il2CppCodeGenWriteBarrier(&___defaultKeyPath_3, value);
	}

	inline static int32_t get_offset_of_defaultAndroidKeyPath_4() { return static_cast<int32_t>(offsetof(ResourceManager_t1440854979, ___defaultAndroidKeyPath_4)); }
	inline String_t* get_defaultAndroidKeyPath_4() const { return ___defaultAndroidKeyPath_4; }
	inline String_t** get_address_of_defaultAndroidKeyPath_4() { return &___defaultAndroidKeyPath_4; }
	inline void set_defaultAndroidKeyPath_4(String_t* value)
	{
		___defaultAndroidKeyPath_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultAndroidKeyPath_4, value);
	}

	inline static int32_t get_offset_of_assetBundlePath_5() { return static_cast<int32_t>(offsetof(ResourceManager_t1440854979, ___assetBundlePath_5)); }
	inline String_t* get_assetBundlePath_5() const { return ___assetBundlePath_5; }
	inline String_t** get_address_of_assetBundlePath_5() { return &___assetBundlePath_5; }
	inline void set_assetBundlePath_5(String_t* value)
	{
		___assetBundlePath_5 = value;
		Il2CppCodeGenWriteBarrier(&___assetBundlePath_5, value);
	}

	inline static int32_t get_offset_of_dataPath_6() { return static_cast<int32_t>(offsetof(ResourceManager_t1440854979, ___dataPath_6)); }
	inline String_t* get_dataPath_6() const { return ___dataPath_6; }
	inline String_t** get_address_of_dataPath_6() { return &___dataPath_6; }
	inline void set_dataPath_6(String_t* value)
	{
		___dataPath_6 = value;
		Il2CppCodeGenWriteBarrier(&___dataPath_6, value);
	}
};

struct ResourceManager_t1440854979_StaticFields
{
public:
	// hiscene.ResourceManager hiscene.ResourceManager::resourceInstance
	ResourceManager_t1440854979 * ___resourceInstance_7;

public:
	inline static int32_t get_offset_of_resourceInstance_7() { return static_cast<int32_t>(offsetof(ResourceManager_t1440854979_StaticFields, ___resourceInstance_7)); }
	inline ResourceManager_t1440854979 * get_resourceInstance_7() const { return ___resourceInstance_7; }
	inline ResourceManager_t1440854979 ** get_address_of_resourceInstance_7() { return &___resourceInstance_7; }
	inline void set_resourceInstance_7(ResourceManager_t1440854979 * value)
	{
		___resourceInstance_7 = value;
		Il2CppCodeGenWriteBarrier(&___resourceInstance_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
