#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function Attribute_StatusEffectThreshold_Base.Attribute_StatusEffectThreshold_Base_C.GetAssociatedStatusEffect
struct UAttribute_StatusEffectThreshold_Base_C_GetAssociatedStatusEffect_Params
{
public:
	class UClass*                                StatusEffect;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Attribute_StatusEffectThreshold_Base.Attribute_StatusEffectThreshold_Base_C.GetCalculatedThresholdValue
struct UAttribute_StatusEffectThreshold_Base_C_GetCalculatedThresholdValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurrentValue_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Attribute_StatusEffectThreshold_Base.Attribute_StatusEffectThreshold_Base_C.GetIcon
struct UAttribute_StatusEffectThreshold_Base_C_GetIcon_Params
{
public:
	class UTexture2D*                            Tex;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Attribute_StatusEffectThreshold_Base.Attribute_StatusEffectThreshold_Base_C.GetColor
struct UAttribute_StatusEffectThreshold_Base_C_GetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Attribute_StatusEffectThreshold_Base.Attribute_StatusEffectThreshold_Base_C.GetBGColor
struct UAttribute_StatusEffectThreshold_Base_C_GetBGColor_Params
{
public:
	struct FLinearColor                          BGColor;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


