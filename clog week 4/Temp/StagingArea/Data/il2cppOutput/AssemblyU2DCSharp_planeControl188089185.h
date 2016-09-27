#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// planeControl
struct  planeControl_t188089185  : public MonoBehaviour_t667441552
{
public:
	// System.Single planeControl::speed
	float ___speed_2;
	// System.Single planeControl::turnSpeed
	float ___turnSpeed_3;
	// System.Single planeControl::yawAmount
	float ___yawAmount_4;
	// UnityEngine.Rigidbody planeControl::rb
	Rigidbody_t3346577219 * ___rb_5;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(planeControl_t188089185, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_turnSpeed_3() { return static_cast<int32_t>(offsetof(planeControl_t188089185, ___turnSpeed_3)); }
	inline float get_turnSpeed_3() const { return ___turnSpeed_3; }
	inline float* get_address_of_turnSpeed_3() { return &___turnSpeed_3; }
	inline void set_turnSpeed_3(float value)
	{
		___turnSpeed_3 = value;
	}

	inline static int32_t get_offset_of_yawAmount_4() { return static_cast<int32_t>(offsetof(planeControl_t188089185, ___yawAmount_4)); }
	inline float get_yawAmount_4() const { return ___yawAmount_4; }
	inline float* get_address_of_yawAmount_4() { return &___yawAmount_4; }
	inline void set_yawAmount_4(float value)
	{
		___yawAmount_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(planeControl_t188089185, ___rb_5)); }
	inline Rigidbody_t3346577219 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_t3346577219 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
