#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x90 - 0x83)
// BlueprintGeneratedClass FartEscape_TheRectalTriangle.FartEscape_TheRectalTriangle_C
class UFartEscape_TheRectalTriangle_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_75DD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UFartEscape_TheRectalTriangle_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_FartEscape_TheRectalTriangle(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, float CallFunc_GetValueOfUpgrade_ReturnValue, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class UFartEscapeVerb_C* K2Node_DynamicCast_AsFart_Escape_Verb, bool K2Node_DynamicCast_bSuccess, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, float CallFunc_GetValueOfUpgrade_ReturnValue_1, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class UFartEscapeVerb_C* K2Node_DynamicCast_AsFart_Escape_Verb_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue_2, class UFartEscapeVerb_C* K2Node_DynamicCast_AsFart_Escape_Verb_2, bool K2Node_DynamicCast_bSuccess_2);
};

}


