#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0xA80 - 0xA77)
// BlueprintGeneratedClass MeleeVerbSicklesAirDive.MeleeVerbSicklesAirDive_C
class UMeleeVerbSicklesAirDive_C : public UMeleeVerbDoubleDaggerAirDive_C
{
public:
	uint8                                        Pad_72C4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA78(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMeleeVerbSicklesAirDive_C* GetDefaultObj();

	void ApplyMeleeDamage(class AActor* MeleeVictim, const struct FQtnDamageInfo& DamageInfo);
	void ExecuteUbergraph_MeleeVerbSicklesAirDive(int32 EntryPoint, const struct FQtnVerbTuningDataRow& CallFunc_GetVerbTuningData_ReturnValue, class AActor* K2Node_Event_meleeVictim, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, float CallFunc_Multiply_FloatFloat_ReturnValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UStatusEffect_DeathProof_C* CallFunc_GetStatusEffect_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlly_ReturnValue);
};

}


