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
// System.Random
struct Random_t1044426839;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Action`1<System.String>
struct Action_1_t1831019615;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Auth
struct  Auth_t3341145330  : public Il2CppObject
{
public:

public:
};

struct Auth_t3341145330_StaticFields
{
public:
	// System.String Auth::appKey
	String_t* ___appKey_0;
	// System.String Auth::secret
	String_t* ___secret_1;
	// System.Double Auth::latitude
	double ___latitude_2;
	// System.Double Auth::longtitude
	double ___longtitude_3;
	// System.String Auth::versionName
	String_t* ___versionName_4;
	// System.String Auth::oauthUrl
	String_t* ___oauthUrl_5;
	// System.Random Auth::randGen
	Random_t1044426839 * ___randGen_6;
	// System.Char[] Auth::numbersAndLetters
	CharU5BU5D_t1328083999* ___numbersAndLetters_7;
	// System.String[] Auth::paramsName
	StringU5BU5D_t1642385972* ___paramsName_8;
	// System.Boolean Auth::isinAuth
	bool ___isinAuth_9;
	// System.Action`1<System.String> Auth::authFailed
	Action_1_t1831019615 * ___authFailed_10;

public:
	inline static int32_t get_offset_of_appKey_0() { return static_cast<int32_t>(offsetof(Auth_t3341145330_StaticFields, ___appKey_0)); }
	inline String_t* get_appKey_0() const { return ___appKey_0; }
	inline String_t** get_address_of_appKey_0() { return &___appKey_0; }
	inline void set_appKey_0(String_t* value)
	{
		___appKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___appKey_0, value);
	}

	inline static int32_t get_offset_of_secret_1() { return static_cast<int32_t>(offsetof(Auth_t3341145330_StaticFields, ___secret_1)); }
	inline String_t* get_secret_1() const { return ___secret_1; }
	inline String_t** get_address_of_secret_1() { return &___secret_1; }
	inline void set_secret_1(String_t* value)
	{
		___secret_1 = value;
		Il2CppCodeGenWriteBarrier(&___secret_1, value);
	}

	inline static int32_t get_offset_of_latitude_2() { return static_cast<int32_t>(offsetof(Auth_t3341145330_StaticFields, ___latitude_2)); }
	inline double get_latitude_2() const { return ___latitude_2; }
	inline double* get_address_of_latitude_2() { return &___latitude_2; }
	inline void set_latitude_2(double value)
	{
		___latitude_2 = value;
	}

	inline static int32_t get_offset_of_longtitude_3() { return static_cast<int32_t>(offsetof(Auth_t3341145330_StaticFields, ___longtitude_3)); }
	inline double get_longtitude_3() const { return ___longtitude_3; }
	inline double* get_address_of_longtitude_3() { return &___longtitude_3; }
	inline void set_longtitude_3(double value)
	{
		___longtitude_3 = value;
	}

	inline static int32_t get_offset_of_versionName_4() { return static_cast<int32_t>(offsetof(Auth_t3341145330_StaticFields, ___versionName_4)); }
	inline String_t* get_versionName_4() const { return ___versionName_4; }
	inline String_t** get_address_of_versionName_4() { return &___versionName_4; }
	inline void set_versionName_4(String_t* value)
	{
		___versionName_4 = value;
		Il2CppCodeGenWriteBarrier(&___versionName_4, value);
	}

	inline static int32_t get_offset_of_oauthUrl_5() { return static_cast<int32_t>(offsetof(Auth_t3341145330_StaticFields, ___oauthUrl_5)); }
	inline String_t* get_oauthUrl_5() const { return ___oauthUrl_5; }
	inline String_t** get_address_of_oauthUrl_5() { return &___oauthUrl_5; }
	inline void set_oauthUrl_5(String_t* value)
	{
		___oauthUrl_5 = value;
		Il2CppCodeGenWriteBarrier(&___oauthUrl_5, value);
	}

	inline static int32_t get_offset_of_randGen_6() { return static_cast<int32_t>(offsetof(Auth_t3341145330_StaticFields, ___randGen_6)); }
	inline Random_t1044426839 * get_randGen_6() const { return ___randGen_6; }
	inline Random_t1044426839 ** get_address_of_randGen_6() { return &___randGen_6; }
	inline void set_randGen_6(Random_t1044426839 * value)
	{
		___randGen_6 = value;
		Il2CppCodeGenWriteBarrier(&___randGen_6, value);
	}

	inline static int32_t get_offset_of_numbersAndLetters_7() { return static_cast<int32_t>(offsetof(Auth_t3341145330_StaticFields, ___numbersAndLetters_7)); }
	inline CharU5BU5D_t1328083999* get_numbersAndLetters_7() const { return ___numbersAndLetters_7; }
	inline CharU5BU5D_t1328083999** get_address_of_numbersAndLetters_7() { return &___numbersAndLetters_7; }
	inline void set_numbersAndLetters_7(CharU5BU5D_t1328083999* value)
	{
		___numbersAndLetters_7 = value;
		Il2CppCodeGenWriteBarrier(&___numbersAndLetters_7, value);
	}

	inline static int32_t get_offset_of_paramsName_8() { return static_cast<int32_t>(offsetof(Auth_t3341145330_StaticFields, ___paramsName_8)); }
	inline StringU5BU5D_t1642385972* get_paramsName_8() const { return ___paramsName_8; }
	inline StringU5BU5D_t1642385972** get_address_of_paramsName_8() { return &___paramsName_8; }
	inline void set_paramsName_8(StringU5BU5D_t1642385972* value)
	{
		___paramsName_8 = value;
		Il2CppCodeGenWriteBarrier(&___paramsName_8, value);
	}

	inline static int32_t get_offset_of_isinAuth_9() { return static_cast<int32_t>(offsetof(Auth_t3341145330_StaticFields, ___isinAuth_9)); }
	inline bool get_isinAuth_9() const { return ___isinAuth_9; }
	inline bool* get_address_of_isinAuth_9() { return &___isinAuth_9; }
	inline void set_isinAuth_9(bool value)
	{
		___isinAuth_9 = value;
	}

	inline static int32_t get_offset_of_authFailed_10() { return static_cast<int32_t>(offsetof(Auth_t3341145330_StaticFields, ___authFailed_10)); }
	inline Action_1_t1831019615 * get_authFailed_10() const { return ___authFailed_10; }
	inline Action_1_t1831019615 ** get_address_of_authFailed_10() { return &___authFailed_10; }
	inline void set_authFailed_10(Action_1_t1831019615 * value)
	{
		___authFailed_10 = value;
		Il2CppCodeGenWriteBarrier(&___authFailed_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
