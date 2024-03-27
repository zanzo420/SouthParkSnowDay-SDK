#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x90 - 0x83)
// BlueprintGeneratedClass BullRush_InelasticCollision.BullRush_InelasticCollision_C
class UBullRush_InelasticCollision_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_4E0C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBullRush_InelasticCollision_C* GetDefaultObj();

	void CalculateDamageValues(class UQtnUpgradeSlot* OwningSlot, class UQtnVerb* SourceVerb, class AActor* TargetActor, float InBaseDamage, TSubclassOf<class UQtnDamageType> DamageType, float* OutDamageScalar, float* OutBonusDamage, float CallFunc_GetValueOfUpgrade_ReturnValue, class UBullRush_Verb_C* K2Node_DynamicCast_AsBull_Rush_Verb, bool K2Node_DynamicCast_bSuccess);
	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_BullRush_InelasticCollision(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue_1, class UBullRush_Verb_C* K2Node_DynamicCast_AsBull_Rush_Verb, bool K2Node_DynamicCast_bSuccess, class UBullRush_Verb_C* K2Node_DynamicCast_AsBull_Rush_Verb_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue_2, class UBullRush_Verb_C* K2Node_DynamicCast_AsBull_Rush_Verb_2, bool K2Node_DynamicCast_bSuccess_2);
};

}


