#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// selectScript
struct  selectScript_t3515083421  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject selectScript::coin
	GameObject_t1756533147 * ___coin_2;

public:
	inline static int32_t get_offset_of_coin_2() { return static_cast<int32_t>(offsetof(selectScript_t3515083421, ___coin_2)); }
	inline GameObject_t1756533147 * get_coin_2() const { return ___coin_2; }
	inline GameObject_t1756533147 ** get_address_of_coin_2() { return &___coin_2; }
	inline void set_coin_2(GameObject_t1756533147 * value)
	{
		___coin_2 = value;
		Il2CppCodeGenWriteBarrier(&___coin_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
