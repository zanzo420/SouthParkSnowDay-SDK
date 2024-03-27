#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass QtnUpgradePPRule_IncreaseLevels.QtnUpgradePPRule_IncreaseLevels_C
class UQtnUpgradePPRule_IncreaseLevels_C : public UQtnUpgradePostProcessingRule
{
public:

	static class UClass* StaticClass();
	static class UQtnUpgradePPRule_IncreaseLevels_C* GetDefaultObj();

	void GetNextRarityValue(const struct FGameplayTag& RarityTag, struct FGameplayTag* OutRarityTag, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess);
	void RunPostProcessingRule(class AQtnBodyPawn* Pawn, TArray<struct FQtnRolledUpgradeResult>& CurrentLootArray, int32 RarityIncreaseModifier, int32 CallFunc_Array_Length_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, bool CallFunc_HasUpgrade_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetAttributeValue_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float Temp_float_Variable, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item, int32 CallFunc_FTrunc_ReturnValue, const struct FGameplayTag& CallFunc_GetNextRarityValue_OutRarityTag, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, const struct FQtnRolledUpgradeResult& K2Node_MakeStruct_QtnRolledUpgradeResult, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
};

}


