#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass InstantUpgradeAction_RaiseRarity.InstantUpgradeAction_RaiseRarity_C
class UInstantUpgradeAction_RaiseRarity_C : public UQtnInstantUpgradeActionArchetype_C
{
public:
	struct FGameplayTag                          CurrencyTag;                                       // 0x28(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FQtnRangedInt                         QuantityRange;                                     // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UInstantUpgradeAction_RaiseRarity_C* GetDefaultObj();

	void Increment_Rarity(const struct FQtnRolledUpgradeData& Existing_Data, class UClass* UpgradeClass, struct FQtnRolledUpgradeData* Adjusted_Data, bool FoundValue, const struct FGameplayTag& Old_Rarity, const struct FGameplayTag& New_Rarity, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, const struct FQtnRolledUpgradeData& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool K2_ActivateUpgrade(class AQtnBodyPawn* TargetUser, struct FQtnRolledUpgradeResult& RolledUpgradeSettings, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, const struct FQtnRolledUpgradeData& CallFunc_Increment_Rarity_Adjusted_Data, bool CallFunc_UpdateRolledData_ServerOnly_ReturnValue);
};

}


