#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x83 - 0x83)
// BlueprintGeneratedClass InstantUpgrade_IncrementLevels.InstantUpgrade_IncrementLevels_C
class UInstantUpgrade_IncrementLevels_C : public UQtnUpgradeArchetype_C
{
public:

	static class UClass* StaticClass();
	static class UInstantUpgrade_IncrementLevels_C* GetDefaultObj();

	class FText CDO_GenerateTextValueForDisplay(struct FQtnUpgradeSettings& InUpgradeSettings, struct FQtnRolledUpgradeData& RolledUpgradeData, int32 ArrayIndex, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	class FName CDO_GenerateTargetModifiableIdentity(class AQtnBodyPawn* TargetPawn, struct FQtnUpgradeSettings& InUpgradeSettings, struct FQtnRolledUpgradeData& RolledUpgradeData, struct FGameplayTag* OutRarityTag, int32* OutLevel, const TArray<class UQtnUpgrade*>& Valid_Upgrades, const TArray<class UQtnUpgrade*>& Unmaxxed_Upgrades);
	bool CanUpgradeBeRolled(class AQtnBodyPawn* TargetBodyPawn, TArray<class UQtnUpgrade*>& CallFunc_GetCurrentUpgradesArray_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UQtnUpgrade* CallFunc_Array_Get_Item, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


