#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x90 - 0x83)
// BlueprintGeneratedClass Upgrade_Bodypawn_BigBoned.Upgrade_Bodypawn_BigBoned_C
class UUpgrade_Bodypawn_BigBoned_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_4D8D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUpgrade_Bodypawn_BigBoned_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_Upgrade_Bodypawn_BigBoned(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, float CallFunc_GetValueOfUpgrade_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_RemoveModifier_self_CastInput, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_AddModifier_self_CastInput, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_2, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_HasAuthority_ReturnValue_2, float CallFunc_GetValueOfUpgradeWithSettings_ReturnValue, float CallFunc_GetValueOfUpgradeWithSettings_ReturnValue_1);
};

}


