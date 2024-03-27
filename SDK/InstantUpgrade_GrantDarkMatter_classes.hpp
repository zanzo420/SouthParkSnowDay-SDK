#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x83 - 0x83)
// BlueprintGeneratedClass InstantUpgrade_GrantDarkMatter.InstantUpgrade_GrantDarkMatter_C
class UInstantUpgrade_GrantDarkMatter_C : public UQtnUpgradeArchetype_C
{
public:

	static class UClass* StaticClass();
	static class UInstantUpgrade_GrantDarkMatter_C* GetDefaultObj();

	class FText CDO_GenerateTextValueForDisplay(struct FQtnUpgradeSettings& InUpgradeSettings, struct FQtnRolledUpgradeData& RolledUpgradeData, int32 ArrayIndex, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	class FName CDO_GenerateTargetModifiableIdentity(class AQtnBodyPawn* TargetPawn, struct FQtnUpgradeSettings& InUpgradeSettings, struct FQtnRolledUpgradeData& RolledUpgradeData, struct FGameplayTag* OutRarityTag, int32* OutLevel, TArray<class UQtnUpgrade*>& CallFunc_GetCurrentUpgradesArray_ReturnValue, class UQtnUpgrade* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


