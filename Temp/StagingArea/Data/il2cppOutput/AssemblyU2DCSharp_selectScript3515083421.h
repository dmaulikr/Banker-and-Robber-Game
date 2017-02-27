#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// selectScript
struct  selectScript_t3515083421  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean selectScript::selected
	bool ___selected_2;
	// UnityEngine.Vector3 selectScript::target
	Vector3_t2243707580  ___target_3;

public:
	inline static int32_t get_offset_of_selected_2() { return static_cast<int32_t>(offsetof(selectScript_t3515083421, ___selected_2)); }
	inline bool get_selected_2() const { return ___selected_2; }
	inline bool* get_address_of_selected_2() { return &___selected_2; }
	inline void set_selected_2(bool value)
	{
		___selected_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(selectScript_t3515083421, ___target_3)); }
	inline Vector3_t2243707580  get_target_3() const { return ___target_3; }
	inline Vector3_t2243707580 * get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Vector3_t2243707580  value)
	{
		___target_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
