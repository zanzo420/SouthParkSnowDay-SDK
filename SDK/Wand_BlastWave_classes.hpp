#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x90 - 0x83)
// BlueprintGeneratedClass Wand_BlastWave.Wand_BlastWave_C
class UWand_BlastWave_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_7708[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWand_BlastWave_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_Wand_BlastWave(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, class AWand_C* K2Node_DynamicCast_AsWand, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UFlameThrowerVerb_C* CallFunc_GetVerb_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, float CallFunc_GetValueOfUpgrade_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, class AWand_C* K2Node_DynamicCast_AsWand_1, bool K2Node_DynamicCast_bSuccess_2, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class UFlameThrowerVerb_C* CallFunc_GetVerb_ReturnValue_1, float CallFunc_GetValueOfUpgrade_ReturnValue_3, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, float CallFunc_Add_FloatFloat_ReturnValue_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_2, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_2, class AWand_C* K2Node_DynamicCast_AsWand_2, bool K2Node_DynamicCast_bSuccess_4, class UFlameThrowerVerb_C* CallFunc_GetVerb_ReturnValue_2, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2);
};

}


