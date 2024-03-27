#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x90 - 0x83)
// BlueprintGeneratedClass SwordShield_EmpoweringBlocks.SwordShield_EmpoweringBlocks_C
class USwordShield_EmpoweringBlocks_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_5286[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USwordShield_EmpoweringBlocks_C* GetDefaultObj();

	void CalculateDamageValues(class UQtnUpgradeSlot* OwningSlot, class UQtnVerb* SourceVerb, class AActor* TargetActor, float InBaseDamage, TSubclassOf<class UQtnDamageType> DamageType, float* OutDamageScalar, float* OutBonusDamage, class UMeleeVerbSwordShieldAirAttack_C* K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Air_Attack, bool K2Node_DynamicCast_bSuccess, class UMeleeVerbSwordShieldCombo3_C* K2Node_DynamicCast_AsMelee_Verb_Sword_Shield_Combo_3, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetValueOfUpgrade_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue);
	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_SwordShield_EmpoweringBlocks(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, float CallFunc_GetValueOfUpgrade_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetVerb_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetVerb_ReturnValue_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_2, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_2, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetVerb_ReturnValue_2);
};

}


