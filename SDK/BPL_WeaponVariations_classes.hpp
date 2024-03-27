#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPL_WeaponVariations.BPL_WeaponVariations_C
class UBPL_WeaponVariations_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPL_WeaponVariations_C* GetDefaultObj();

	void Gather_All_Weapon_VariationTags(struct FGameplayTag& Key, bool IncludeYourself, class UObject* __WorldContext, TArray<struct FGameplayTag>* AllRelevantTags, const TArray<struct FGameplayTag>& NewLocalVar_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FQtnWeaponConfiguration& CallFunc_Weapon_Config_fromTag_Value, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, bool CallFunc_NotEqual_GameplayTag_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1);
	void Weapon_Config_fromTag(struct FGameplayTag& Key, class UObject* __WorldContext, struct FQtnWeaponConfiguration* Value, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, const struct FQtnWeaponConfiguration& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void ItemFromGameplayTag(const struct FGameplayTag& B, class UObject* __WorldContext, struct FQtnItemData* Item, bool* Found, int32* Array_Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, TArray<struct FQtnItemData>& CallFunc_GetVaultWeapons_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnItemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void Weapon_Config_from_Item(struct FQtnItemData& QtnItemData, class UObject* __WorldContext, struct FQtnWeaponConfiguration* Value, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, const struct FQtnWeaponConfiguration& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


