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

// 0x4 (0x4 - 0x0)
// Function Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C.OnIncreased
struct UAttribute_MaxHealth_Bonus_C_OnIncreased_Params
{
public:
	float                                        AmountIncreased;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C.OnDecreased
struct UAttribute_MaxHealth_Bonus_C_OnDecreased_Params
{
public:
	float                                        AmountDecreased;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C.ExecuteUbergraph_Attribute_MaxHealth_Bonus
struct UAttribute_MaxHealth_Bonus_C_ExecuteUbergraph_Attribute_MaxHealth_Bonus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurrentValue_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurrentValue_ReturnValue_1;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_amountDecreased;                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_amountIncreased;                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C.OnMaxHPBonusModified__DelegateSignature
struct UAttribute_MaxHealth_Bonus_C_OnMaxHPBonusModified__DelegateSignature_Params
{
public:
	float                                        NewMaxHPBonus;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Difference;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C.ONMaxHPBonusDecreased__DelegateSignature
struct UAttribute_MaxHealth_Bonus_C_ONMaxHPBonusDecreased__DelegateSignature_Params
{
public:
	float                                        NewMaxHPBonus;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AmountDecreased;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Attribute_MaxHealth_Bonus.Attribute_MaxHealth_Bonus_C.OnMaxHPBonusIncreased__DelegateSignature
struct UAttribute_MaxHealth_Bonus_C_OnMaxHPBonusIncreased__DelegateSignature_Params
{
public:
	float                                        NewMaxHPBonus;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IncreasedAmount;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


