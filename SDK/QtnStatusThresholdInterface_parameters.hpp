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
// Function QtnStatusThresholdInterface.QtnStatusThresholdInterface_C.GetAssociatedStatusEffect
struct IQtnStatusThresholdInterface_C_GetAssociatedStatusEffect_Params
{
public:
	class UClass*                                StatusEffect;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function QtnStatusThresholdInterface.QtnStatusThresholdInterface_C.GetBGColor
struct IQtnStatusThresholdInterface_C_GetBGColor_Params
{
public:
	struct FLinearColor                          BGColor;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function QtnStatusThresholdInterface.QtnStatusThresholdInterface_C.GetColor
struct IQtnStatusThresholdInterface_C_GetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function QtnStatusThresholdInterface.QtnStatusThresholdInterface_C.GetIcon
struct IQtnStatusThresholdInterface_C_GetIcon_Params
{
public:
	class UTexture2D*                            Tex;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function QtnStatusThresholdInterface.QtnStatusThresholdInterface_C.GetCalculatedThresholdValue
struct IQtnStatusThresholdInterface_C_GetCalculatedThresholdValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


