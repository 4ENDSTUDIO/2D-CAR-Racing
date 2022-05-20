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
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// CameraFollow
struct CameraFollow_t427BFD1DE36FAC87DF2D53C9E956FE0F39DEB142;
// CameraRotation
struct CameraRotation_t5F473EB9DEE8BC8F4E1B1D845452BBDABEE1427D;
// CarMovement
struct CarMovement_t63D6717CC8717662B487804185DED309988FC40D;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider2D
struct Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
IL2CPP_EXTERN_C String_t* _stringLiteralEA490AAA629A0704301CF91E7A4910B910278662;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CameraFollow_FixedUpdate_mBF9AC25722C9FF8A0251A308BEC67DC528150756_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraRotation_FixedUpdate_m553A12EC22A117C5A610D6874F49AB993EC28411_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraRotation_OnTriggerEnter2D_mDE54A806955614F047E41E0DA5CBDCE832C2C2C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CarMovement_Start_mE813835642F16DC572EB59AFFC3000EAE49DE7E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CarMovement_Update_m1793AAEEFD17150D32B9B80C508607CD21F26367_MetadataUsageId;

struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// CameraFollow
struct CameraFollow_t427BFD1DE36FAC87DF2D53C9E956FE0F39DEB142  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform CameraFollow::Target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___Target_4;
	// UnityEngine.Vector3 CameraFollow::Offset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Offset_5;
	// System.Single CameraFollow::smoothness
	float ___smoothness_6;

public:
	inline static int32_t get_offset_of_Target_4() { return static_cast<int32_t>(offsetof(CameraFollow_t427BFD1DE36FAC87DF2D53C9E956FE0F39DEB142, ___Target_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_Target_4() const { return ___Target_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_Target_4() { return &___Target_4; }
	inline void set_Target_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___Target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_4), (void*)value);
	}

	inline static int32_t get_offset_of_Offset_5() { return static_cast<int32_t>(offsetof(CameraFollow_t427BFD1DE36FAC87DF2D53C9E956FE0F39DEB142, ___Offset_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Offset_5() const { return ___Offset_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Offset_5() { return &___Offset_5; }
	inline void set_Offset_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Offset_5 = value;
	}

	inline static int32_t get_offset_of_smoothness_6() { return static_cast<int32_t>(offsetof(CameraFollow_t427BFD1DE36FAC87DF2D53C9E956FE0F39DEB142, ___smoothness_6)); }
	inline float get_smoothness_6() const { return ___smoothness_6; }
	inline float* get_address_of_smoothness_6() { return &___smoothness_6; }
	inline void set_smoothness_6(float value)
	{
		___smoothness_6 = value;
	}
};


// CameraRotation
struct CameraRotation_t5F473EB9DEE8BC8F4E1B1D845452BBDABEE1427D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single[] CameraRotation::RotZ
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___RotZ_4;
	// System.Int32 CameraRotation::triggerCount
	int32_t ___triggerCount_5;
	// UnityEngine.Camera CameraRotation::Cam
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___Cam_6;
	// System.Boolean CameraRotation::CanRotate
	bool ___CanRotate_7;
	// System.Single CameraRotation::rotSpeed
	float ___rotSpeed_8;

public:
	inline static int32_t get_offset_of_RotZ_4() { return static_cast<int32_t>(offsetof(CameraRotation_t5F473EB9DEE8BC8F4E1B1D845452BBDABEE1427D, ___RotZ_4)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_RotZ_4() const { return ___RotZ_4; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_RotZ_4() { return &___RotZ_4; }
	inline void set_RotZ_4(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___RotZ_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RotZ_4), (void*)value);
	}

	inline static int32_t get_offset_of_triggerCount_5() { return static_cast<int32_t>(offsetof(CameraRotation_t5F473EB9DEE8BC8F4E1B1D845452BBDABEE1427D, ___triggerCount_5)); }
	inline int32_t get_triggerCount_5() const { return ___triggerCount_5; }
	inline int32_t* get_address_of_triggerCount_5() { return &___triggerCount_5; }
	inline void set_triggerCount_5(int32_t value)
	{
		___triggerCount_5 = value;
	}

	inline static int32_t get_offset_of_Cam_6() { return static_cast<int32_t>(offsetof(CameraRotation_t5F473EB9DEE8BC8F4E1B1D845452BBDABEE1427D, ___Cam_6)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_Cam_6() const { return ___Cam_6; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_Cam_6() { return &___Cam_6; }
	inline void set_Cam_6(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___Cam_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cam_6), (void*)value);
	}

	inline static int32_t get_offset_of_CanRotate_7() { return static_cast<int32_t>(offsetof(CameraRotation_t5F473EB9DEE8BC8F4E1B1D845452BBDABEE1427D, ___CanRotate_7)); }
	inline bool get_CanRotate_7() const { return ___CanRotate_7; }
	inline bool* get_address_of_CanRotate_7() { return &___CanRotate_7; }
	inline void set_CanRotate_7(bool value)
	{
		___CanRotate_7 = value;
	}

	inline static int32_t get_offset_of_rotSpeed_8() { return static_cast<int32_t>(offsetof(CameraRotation_t5F473EB9DEE8BC8F4E1B1D845452BBDABEE1427D, ___rotSpeed_8)); }
	inline float get_rotSpeed_8() const { return ___rotSpeed_8; }
	inline float* get_address_of_rotSpeed_8() { return &___rotSpeed_8; }
	inline void set_rotSpeed_8(float value)
	{
		___rotSpeed_8 = value;
	}
};


// CarMovement
struct CarMovement_t63D6717CC8717662B487804185DED309988FC40D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single CarMovement::MaxSpeed
	float ___MaxSpeed_4;
	// System.Single CarMovement::acc
	float ___acc_5;
	// System.Single CarMovement::steering
	float ___steering_6;
	// UnityEngine.Rigidbody2D CarMovement::rb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb_7;
	// System.Single CarMovement::X
	float ___X_8;
	// System.Single CarMovement::Y
	float ___Y_9;

public:
	inline static int32_t get_offset_of_MaxSpeed_4() { return static_cast<int32_t>(offsetof(CarMovement_t63D6717CC8717662B487804185DED309988FC40D, ___MaxSpeed_4)); }
	inline float get_MaxSpeed_4() const { return ___MaxSpeed_4; }
	inline float* get_address_of_MaxSpeed_4() { return &___MaxSpeed_4; }
	inline void set_MaxSpeed_4(float value)
	{
		___MaxSpeed_4 = value;
	}

	inline static int32_t get_offset_of_acc_5() { return static_cast<int32_t>(offsetof(CarMovement_t63D6717CC8717662B487804185DED309988FC40D, ___acc_5)); }
	inline float get_acc_5() const { return ___acc_5; }
	inline float* get_address_of_acc_5() { return &___acc_5; }
	inline void set_acc_5(float value)
	{
		___acc_5 = value;
	}

	inline static int32_t get_offset_of_steering_6() { return static_cast<int32_t>(offsetof(CarMovement_t63D6717CC8717662B487804185DED309988FC40D, ___steering_6)); }
	inline float get_steering_6() const { return ___steering_6; }
	inline float* get_address_of_steering_6() { return &___steering_6; }
	inline void set_steering_6(float value)
	{
		___steering_6 = value;
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(CarMovement_t63D6717CC8717662B487804185DED309988FC40D, ___rb_7)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb_7() const { return ___rb_7; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_7), (void*)value);
	}

	inline static int32_t get_offset_of_X_8() { return static_cast<int32_t>(offsetof(CarMovement_t63D6717CC8717662B487804185DED309988FC40D, ___X_8)); }
	inline float get_X_8() const { return ___X_8; }
	inline float* get_address_of_X_8() { return &___X_8; }
	inline void set_X_8(float value)
	{
		___X_8 = value;
	}

	inline static int32_t get_offset_of_Y_9() { return static_cast<int32_t>(offsetof(CarMovement_t63D6717CC8717662B487804185DED309988FC40D, ___Y_9)); }
	inline float get_Y_9() const { return ___Y_9; }
	inline float* get_address_of_Y_9() { return &___Y_9; }
	inline void set_Y_9(float value)
	{
		___Y_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mFE4658C0AE6643026A7CE7452857CA37DB687436 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___force0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::GetRelativeVector(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rigidbody2D_GetRelativeVector_mEDEDD9050CBE2AF70BEA471295C5504A528D3AAD (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___relativeVector0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody2D::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody2D_get_rotation_mAF8F2E151EF82D8CF48DEDC17FE6882C2A67AF5C (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_rotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_rotation_m0945A4D66B39C6698EFBF73F2A95969C976A858B (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_left_mDD2A2AFDC4B0C1C876093F3E9C405579287FF4F8 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_normalized_m058E75C38C6FC66E178D7C8EF1B6298DE8F0E14B (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rigidbody2D_get_position_m68CB3236D19D7472ABDE1F5A5A9BD924595361B8 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::GetRelativePoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rigidbody2D_GetRelativePoint_m16049EBAC1C66012335EA8825826CB6DE07FE574 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___relativePoint0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___end1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Start_mA9B0BF6D65FDE2EC07572180BF67C67F711C1C8C (CameraFollow_t427BFD1DE36FAC87DF2D53C9E956FE0F39DEB142 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CameraFollow::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_FixedUpdate_mBF9AC25722C9FF8A0251A308BEC67DC528150756 (CameraFollow_t427BFD1DE36FAC87DF2D53C9E956FE0F39DEB142 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFollow_FixedUpdate_mBF9AC25722C9FF8A0251A308BEC67DC528150756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 delayedPos = Vector3.Lerp(transform.position, Target.position, smoothness);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_Target_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_smoothness_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_1, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// transform.position = delayedPos + Offset;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_Offset_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_8, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_6, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m27AF37B0C19243374F9376EBB2C40A2F605DB16E (CameraFollow_t427BFD1DE36FAC87DF2D53C9E956FE0F39DEB142 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraRotation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRotation_Start_m5BBB6001D8208D5C63748D1650897CEEE3C4BAE0 (CameraRotation_t5F473EB9DEE8BC8F4E1B1D845452BBDABEE1427D * __this, const RuntimeMethod* method)
{
	{
		// Cam = Camera.main;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		__this->set_Cam_6(L_0);
		// }
		return;
	}
}
// System.Void CameraRotation::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRotation_FixedUpdate_m553A12EC22A117C5A610D6874F49AB993EC28411 (CameraRotation_t5F473EB9DEE8BC8F4E1B1D845452BBDABEE1427D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraRotation_FixedUpdate_m553A12EC22A117C5A610D6874F49AB993EC28411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (CanRotate)
		bool L_0 = __this->get_CanRotate_7();
		if (!L_0)
		{
			goto IL_0070;
		}
	}
	{
		// Quaternion camRot = Cam.transform.rotation;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = __this->get_Cam_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// Quaternion desRot = Quaternion.Euler(0, 0, RotZ[triggerCount - 1]);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_4 = __this->get_RotZ_4();
		int32_t L_5 = __this->get_triggerCount_5();
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		float L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (0.0f), L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// Cam.transform.rotation = Quaternion.Lerp(camRot, desRot, Time.deltaTime * rotSpeed);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_9 = __this->get_Cam_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_9, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_1;
		float L_13 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_14 = __this->get_rotSpeed_8();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27(L_11, L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_10, L_15, /*hidden argument*/NULL);
		// if (camRot.z == desRot.z)
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = V_0;
		float L_17 = L_16.get_z_2();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = V_1;
		float L_19 = L_18.get_z_2();
		if ((!(((float)L_17) == ((float)L_19))))
		{
			goto IL_0070;
		}
	}
	{
		// CanRotate = false;
		__this->set_CanRotate_7((bool)0);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void CameraRotation::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRotation_OnTriggerEnter2D_mDE54A806955614F047E41E0DA5CBDCE832C2C2C5 (CameraRotation_t5F473EB9DEE8BC8F4E1B1D845452BBDABEE1427D * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraRotation_OnTriggerEnter2D_mDE54A806955614F047E41E0DA5CBDCE832C2C2C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Hit");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralEA490AAA629A0704301CF91E7A4910B910278662, /*hidden argument*/NULL);
		// if (triggerCount == 4)
		int32_t L_0 = __this->get_triggerCount_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_001a;
		}
	}
	{
		// triggerCount = 0;
		__this->set_triggerCount_5(0);
	}

IL_001a:
	{
		// triggerCount += 1;
		int32_t L_1 = __this->get_triggerCount_5();
		__this->set_triggerCount_5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		// CanRotate = true;
		__this->set_CanRotate_7((bool)1);
		// }
		return;
	}
}
// System.Void CameraRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRotation__ctor_m0C620104DA92BE3C1184095606FD3E2628638759 (CameraRotation_t5F473EB9DEE8BC8F4E1B1D845452BBDABEE1427D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CarMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarMovement_Start_mE813835642F16DC572EB59AFFC3000EAE49DE7E1 (CarMovement_t63D6717CC8717662B487804185DED309988FC40D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CarMovement_Start_mE813835642F16DC572EB59AFFC3000EAE49DE7E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb_7(L_0);
		// }
		return;
	}
}
// System.Void CarMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarMovement_Update_m1793AAEEFD17150D32B9B80C508607CD21F26367 (CarMovement_t63D6717CC8717662B487804185DED309988FC40D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CarMovement_Update_m1793AAEEFD17150D32B9B80C508607CD21F26367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// X = Input.GetAxis("Horizontal");
		float L_0 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		__this->set_X_8(L_0);
		// Vector2 speed = transform.up * (Y * acc);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_Y_9();
		float L_4 = __this->get_acc_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_2, ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// rb.AddForce(speed);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_7 = __this->get_rb_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		Rigidbody2D_AddForce_mFE4658C0AE6643026A7CE7452857CA37DB687436(L_7, L_8, /*hidden argument*/NULL);
		// float direction = Vector2.Dot(rb.velocity, rb.GetRelativeVector(Vector2.up));
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_9 = __this->get_rb_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_9, /*hidden argument*/NULL);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_11 = __this->get_rb_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Rigidbody2D_GetRelativeVector_mEDEDD9050CBE2AF70BEA471295C5504A528D3AAD(L_11, L_12, /*hidden argument*/NULL);
		float L_14 = Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA(L_10, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// if (acc > 0)
		float L_15 = __this->get_acc_5();
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_00f0;
		}
	}
	{
		// if (direction > 0)
		float L_16 = V_1;
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_00b5;
		}
	}
	{
		// rb.rotation -= X * steering * (rb.velocity.magnitude / MaxSpeed);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_17 = __this->get_rb_7();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_18 = L_17;
		float L_19 = Rigidbody2D_get_rotation_mAF8F2E151EF82D8CF48DEDC17FE6882C2A67AF5C(L_18, /*hidden argument*/NULL);
		float L_20 = __this->get_X_8();
		float L_21 = __this->get_steering_6();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_22 = __this->get_rb_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		float L_24 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_4), /*hidden argument*/NULL);
		float L_25 = __this->get_MaxSpeed_4();
		Rigidbody2D_set_rotation_m0945A4D66B39C6698EFBF73F2A95969C976A858B(L_18, ((float)il2cpp_codegen_subtract((float)L_19, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)), (float)((float)((float)L_24/(float)L_25)))))), /*hidden argument*/NULL);
		// }
		goto IL_00f0;
	}

IL_00b5:
	{
		// rb.rotation += X * steering * (rb.velocity.magnitude / MaxSpeed);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_26 = __this->get_rb_7();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_27 = L_26;
		float L_28 = Rigidbody2D_get_rotation_mAF8F2E151EF82D8CF48DEDC17FE6882C2A67AF5C(L_27, /*hidden argument*/NULL);
		float L_29 = __this->get_X_8();
		float L_30 = __this->get_steering_6();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_31 = __this->get_rb_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		float L_33 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_4), /*hidden argument*/NULL);
		float L_34 = __this->get_MaxSpeed_4();
		Rigidbody2D_set_rotation_m0945A4D66B39C6698EFBF73F2A95969C976A858B(L_27, ((float)il2cpp_codegen_add((float)L_28, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_29, (float)L_30)), (float)((float)((float)L_33/(float)L_34)))))), /*hidden argument*/NULL);
	}

IL_00f0:
	{
		// float driftForce = Vector2.Dot(rb.velocity, rb.GetRelativeVector(Vector2.left)) * 2.0f;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_35 = __this->get_rb_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_35, /*hidden argument*/NULL);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_37 = __this->get_rb_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_38 = Vector2_get_left_mDD2A2AFDC4B0C1C876093F3E9C405579287FF4F8(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_39 = Rigidbody2D_GetRelativeVector_mEDEDD9050CBE2AF70BEA471295C5504A528D3AAD(L_37, L_38, /*hidden argument*/NULL);
		float L_40 = Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA(L_36, L_39, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)L_40, (float)(2.0f)));
		// Vector2 relativeForce = Vector2.right * driftForce;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_41 = Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E(/*hidden argument*/NULL);
		float L_42 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_43 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_41, L_42, /*hidden argument*/NULL);
		V_3 = L_43;
		// rb.AddForce(rb.GetRelativeVector(relativeForce));
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_44 = __this->get_rb_7();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_45 = __this->get_rb_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_46 = V_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_47 = Rigidbody2D_GetRelativeVector_mEDEDD9050CBE2AF70BEA471295C5504A528D3AAD(L_45, L_46, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mFE4658C0AE6643026A7CE7452857CA37DB687436(L_44, L_47, /*hidden argument*/NULL);
		// if (rb.velocity.magnitude > MaxSpeed)
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_48 = __this->get_rb_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_49 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_48, /*hidden argument*/NULL);
		V_4 = L_49;
		float L_50 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_4), /*hidden argument*/NULL);
		float L_51 = __this->get_MaxSpeed_4();
		if ((!(((float)L_50) > ((float)L_51))))
		{
			goto IL_0180;
		}
	}
	{
		// rb.velocity = rb.velocity.normalized * MaxSpeed;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_52 = __this->get_rb_7();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_53 = __this->get_rb_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_54 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_53, /*hidden argument*/NULL);
		V_4 = L_54;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_55 = Vector2_get_normalized_m058E75C38C6FC66E178D7C8EF1B6298DE8F0E14B((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_4), /*hidden argument*/NULL);
		float L_56 = __this->get_MaxSpeed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_57 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_55, L_56, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_52, L_57, /*hidden argument*/NULL);
	}

IL_0180:
	{
		// Debug.DrawLine(rb.position, rb.GetRelativePoint(relativeForce), Color.green);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_58 = __this->get_rb_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_59 = Rigidbody2D_get_position_m68CB3236D19D7472ABDE1F5A5A9BD924595361B8(L_58, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_59, /*hidden argument*/NULL);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_61 = __this->get_rb_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_62 = V_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_63 = Rigidbody2D_GetRelativePoint_m16049EBAC1C66012335EA8825826CB6DE07FE574(L_61, L_62, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_63, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_65 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_60, L_64, L_65, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CarMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarMovement__ctor_m393F86F14EC4361098C0FA45142571BC6C5D747B (CarMovement_t63D6717CC8717662B487804185DED309988FC40D * __this, const RuntimeMethod* method)
{
	{
		// float Y = 1;
		__this->set_Y_9((1.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
