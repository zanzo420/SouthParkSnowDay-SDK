#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x90 - 0x83)
// BlueprintGeneratedClass Bow_ElvenEyes.Bow_ElvenEyes_C
class UBow_ElvenEyes_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_3AD9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBow_ElvenEyes_C* GetDefaultObj();

	void CalculateDamageValues(class UQtnUpgradeSlot* OwningSlot, class UQtnVerb* SourceVerb, class AActor* TargetActor, float InBaseDamage, TSubclassOf<class UQtnDamageType> DamageType, float* OutDamageScalar, float* OutBonusDamage);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_Bow_ElvenEyes(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, class UVerb_Bow_Sniper_C* CallFunc_GetVerb_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, bool K2Node_Event_LoadedRunProgress, class UVerb_Bow_Sniper_C* CallFunc_GetVerb_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_2, float CallFunc_GetValueOfUpgrade_ReturnValue_2, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_2, float CallFunc_GetValueOfUpgrade_ReturnValue_3, class UVerb_Bow_Sniper_C* CallFunc_GetVerb_ReturnValue_2);
};

}


