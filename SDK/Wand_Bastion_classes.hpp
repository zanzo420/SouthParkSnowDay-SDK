#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x90 - 0x83)
// BlueprintGeneratedClass Wand_Bastion.Wand_Bastion_C
class UWand_Bastion_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_32C3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWand_Bastion_C* GetDefaultObj();

	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void ExecuteUbergraph_Wand_Bastion(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, bool K2Node_Event_LoadedRunProgress, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, class UFlameThrowerVerb_C* CallFunc_GetVerb_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, float CallFunc_GetValueOfUpgrade_ReturnValue_2, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, float CallFunc_GetValueOfUpgrade_ReturnValue_3, class UFlameThrowerVerb_C* CallFunc_GetVerb_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_2, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_2, class UFlameThrowerVerb_C* CallFunc_GetVerb_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


