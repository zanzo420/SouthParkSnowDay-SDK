#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass InstantUpgradeAction_TradeForLevels.InstantUpgradeAction_TradeForLevels_C
class UInstantUpgradeAction_TradeForLevels_C : public UQtnInstantUpgradeActionArchetype_C
{
public:

	static class UClass* StaticClass();
	static class UInstantUpgradeAction_TradeForLevels_C* GetDefaultObj();

	bool K2_ActivateUpgrade(class AQtnBodyPawn* TargetUser, struct FQtnRolledUpgradeResult& RolledUpgradeSettings, TArray<class UQtnUpgrade*>& CallFunc_GetCurrentUpgradesArray_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UQtnUpgrade* CallFunc_Array_Get_Item, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_UnslotUpgrade_ServerOnly_ReturnValue, bool CallFunc_UpdateRolledData_ServerOnly_ReturnValue);
};

}


