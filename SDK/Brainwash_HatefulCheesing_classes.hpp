#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x90 - 0x83)
// BlueprintGeneratedClass Brainwash_HatefulCheesing.Brainwash_HatefulCheesing_C
class UBrainwash_HatefulCheesing_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_860[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBrainwash_HatefulCheesing_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_Brainwash_HatefulCheesing(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, class UBrainwash_Verb_C* K2Node_DynamicCast_AsBrainwash_Verb, bool K2Node_DynamicCast_bSuccess, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue_1, class UBrainwash_Verb_C* K2Node_DynamicCast_AsBrainwash_Verb_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue_2, class UBrainwash_Verb_C* K2Node_DynamicCast_AsBrainwash_Verb_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetValueOfUpgrade_ReturnValue_1);
};

}

