#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x90 - 0x83)
// BlueprintGeneratedClass SwordShield_ShieldRedirection.SwordShield_ShieldRedirection_C
class USwordShield_ShieldRedirection_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_5277[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USwordShield_ShieldRedirection_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_SwordShield_ShieldRedirection(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, float CallFunc_GetValueOfUpgrade_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetVerb_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetVerb_ReturnValue_1, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_2, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_2, float CallFunc_GetValueOfUpgrade_ReturnValue_3, class UMeleeVerbSwordShieldCombo3_C* CallFunc_GetVerb_ReturnValue_2);
};

}


