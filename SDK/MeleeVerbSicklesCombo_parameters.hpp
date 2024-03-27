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

// 0x90 (0x90 - 0x0)
// Function MeleeVerbSicklesCombo.MeleeVerbSicklesCombo_C.ApplyMeleeDamage
struct UMeleeVerbSicklesCombo_C_ApplyMeleeDamage_Params
{
public:
	class AActor*                                MeleeVictim;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDamageInfo                        DamageInfo;                                        // 0x8(0x88)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x103 (0x103 - 0x0)
// Function MeleeVerbSicklesCombo.MeleeVerbSicklesCombo_C.ExecuteUbergraph_MeleeVerbSicklesCombo
struct UMeleeVerbSicklesCombo_C_ExecuteUbergraph_MeleeVerbSicklesCombo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnVerbTuningDataRow                 CallFunc_GetVerbTuningData_ReturnValue;            // 0x8(0x38)(None)
	class AActor*                                K2Node_Event_meleeVictim;                          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDamageInfo                        K2Node_Event_DamageInfo;                           // 0x48(0x88)(ContainsInstancedReference)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABodyPawnAI_C*                         K2Node_DynamicCast_AsBody_Pawn_AI;                 // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_77F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CallFunc_GetOwningBodyPawn_ReturnValue;            // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatusEffect_DeathProof_C*            CallFunc_GetStatusEffect_ReturnValue;              // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABodyPawnBase_C*                       K2Node_DynamicCast_AsBody_Pawn_Base;               // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAlly_ReturnValue;                       // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


