#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// planeControl
struct planeControl_t188089185;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_planeControl188089185.h"
#include "AssemblyU2DCSharp_planeControl188089185MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, method) ((  Rigidbody_t3346577219 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void planeControl::.ctor()
extern "C"  void planeControl__ctor_m628698202 (planeControl_t188089185 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_2((10.0f));
		__this->set_turnSpeed_3((10.0f));
		__this->set_yawAmount_4((25.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void planeControl::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern const uint32_t planeControl_Start_m3870803290_MetadataUsageId;
extern "C"  void planeControl_Start_m3870803290 (planeControl_t188089185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (planeControl_Start_m3870803290_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t3346577219 * L_0 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		__this->set_rb_5(L_0);
		return;
	}
}
// System.Void planeControl::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern const uint32_t planeControl_Update_m4036637171_MetadataUsageId;
extern "C"  void planeControl_Update_m4036637171 (planeControl_t188089185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (planeControl_Update_m4036637171_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Quaternion_t1553702882  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t4282066566  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Quaternion_t1553702882  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t4282066566  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		float L_1 = __this->get_turnSpeed_3();
		V_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		float L_3 = __this->get_yawAmount_4();
		V_1 = ((float)((float)L_2*(float)((-L_3))));
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_5 = Transform_get_rotation_m11483428(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		Vector3_t4282066566  L_6 = Quaternion_get_eulerAngles_m997303795((&V_3), /*hidden argument*/NULL);
		V_4 = L_6;
		float L_7 = (&V_4)->get_x_1();
		Transform_t1659122786 * L_8 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_9 = Transform_get_rotation_m11483428(L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		Vector3_t4282066566  L_10 = Quaternion_get_eulerAngles_m997303795((&V_5), /*hidden argument*/NULL);
		V_6 = L_10;
		float L_11 = (&V_6)->get_y_2();
		float L_12 = V_0;
		float L_13 = V_1;
		Vector3__ctor_m2926210380((&V_2), L_7, ((float)((float)L_11+(float)L_12)), L_13, /*hidden argument*/NULL);
		Transform_t1659122786 * L_14 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_15 = V_2;
		Quaternion_t1553702882  L_16 = Quaternion_Euler_m1940911101(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		Transform_set_rotation_m1525803229(L_14, L_16, /*hidden argument*/NULL);
		Rigidbody_t3346577219 * L_17 = __this->get_rb_5();
		Transform_t1659122786 * L_18 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_19 = Transform_get_right_m2070836824(L_18, /*hidden argument*/NULL);
		Vector3_t4282066566  L_20 = Vector3_op_UnaryNegation_m3293197314(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		float L_21 = __this->get_speed_2();
		Vector3_t4282066566  L_22 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		Rigidbody_set_velocity_m799562119(L_17, L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
