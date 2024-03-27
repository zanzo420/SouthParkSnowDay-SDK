#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass InstantUpgradeAction_TradeForCurrency.InstantUpgradeAction_TradeForCurrency_C
class UInstantUpgradeAction_TradeForCurrency_C : public UQtnInstantUpgradeActionArchetype_C
{
public:
	struct FGameplayTag                          CurrencyTag;                                       // 0x28(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FQtnRangedInt                         QuantityRange;                                     // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UInstantUpgradeAction_TradeForCurrency_C* GetDefaultObj();

	bool K2_ActivateUpgrade(class AQtnBodyPawn* TargetUser, struct FQtnRolledUpgradeResult& RolledUpgradeSettings, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_GetValueOfUpgradeWithSettings_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue_1, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, bool CallFunc_UnslotUpgrade_ServerOnly_ReturnValue);
};

}


