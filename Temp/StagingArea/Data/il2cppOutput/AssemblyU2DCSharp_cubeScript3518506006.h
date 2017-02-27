#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cubeScript
struct  cubeScript_t3518506006  : public MonoBehaviour_t1158329972
{
public:
	// System.String cubeScript::mode
	String_t* ___mode_2;
	// System.String cubeScript::targetLayer
	String_t* ___targetLayer_3;
	// UnityEngine.GameObject cubeScript::game
	GameObject_t1756533147 * ___game_4;
	// UnityEngine.GameObject cubeScript::square
	GameObject_t1756533147 * ___square_5;

public:
	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(cubeScript_t3518506006, ___mode_2)); }
	inline String_t* get_mode_2() const { return ___mode_2; }
	inline String_t** get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(String_t* value)
	{
		___mode_2 = value;
		Il2CppCodeGenWriteBarrier(&___mode_2, value);
	}

	inline static int32_t get_offset_of_targetLayer_3() { return static_cast<int32_t>(offsetof(cubeScript_t3518506006, ___targetLayer_3)); }
	inline String_t* get_targetLayer_3() const { return ___targetLayer_3; }
	inline String_t** get_address_of_targetLayer_3() { return &___targetLayer_3; }
	inline void set_targetLayer_3(String_t* value)
	{
		___targetLayer_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetLayer_3, value);
	}

	inline static int32_t get_offset_of_game_4() { return static_cast<int32_t>(offsetof(cubeScript_t3518506006, ___game_4)); }
	inline GameObject_t1756533147 * get_game_4() const { return ___game_4; }
	inline GameObject_t1756533147 ** get_address_of_game_4() { return &___game_4; }
	inline void set_game_4(GameObject_t1756533147 * value)
	{
		___game_4 = value;
		Il2CppCodeGenWriteBarrier(&___game_4, value);
	}

	inline static int32_t get_offset_of_square_5() { return static_cast<int32_t>(offsetof(cubeScript_t3518506006, ___square_5)); }
	inline GameObject_t1756533147 * get_square_5() const { return ___square_5; }
	inline GameObject_t1756533147 ** get_address_of_square_5() { return &___square_5; }
	inline void set_square_5(GameObject_t1756533147 * value)
	{
		___square_5 = value;
		Il2CppCodeGenWriteBarrier(&___square_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
