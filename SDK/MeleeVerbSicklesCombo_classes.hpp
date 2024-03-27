#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xACC - 0xAC0)
// BlueprintGeneratedClass MeleeVerbSicklesCombo.MeleeVerbSicklesCombo_C
class UMeleeVerbSicklesCombo_C : public UMeleeVerbDaggerCombo_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        HealingRate;                                       // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMeleeVerbSicklesCombo_C* GetDefaultObj();

	void ApplyMeleeDamage(class AActor* MeleeVictim, const struct FQtnDamageInfo& DamageInfo);
	void ExecuteUbergraph_MeleeVerbSicklesCombo(int32 EntryPoint, const struct FQtnVerbTuningDataRow& CallFunc_GetVerbTuningData_ReturnValue, class AActor* K2Node_Event_meleeVictim, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, float CallFunc_Multiply_FloatFloat_ReturnValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UStatusEffect_DeathProof_C* CallFunc_GetStatusEffect_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlly_ReturnValue);
};

}


