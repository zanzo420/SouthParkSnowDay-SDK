#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x168 - 0x120)
// BlueprintGeneratedClass CurrencyDataBag.CurrencyDataBag_C
class UCurrencyDataBag_C : public UQtnDataBag
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 CurrenciesToSave;                                  // 0x128(0x20)(Edit, BlueprintVisible)
	TArray<struct FGameplayTag>                  CurrencyTags;                                      // 0x148(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TArray<int32>                                CurrencyQuantities;                                // 0x158(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)

	static class UClass* StaticClass();
	static class UCurrencyDataBag_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void PreSaveDataBP(class UQtnSaveData* SaveData, class AQtnBodyPawn* LocalOriginalBody);
	void OnParentDataBagOccupy(class AQtnBodyPawn* OccupiedBodyPawn);
	void PostLoadDataBP(class UQtnSaveData* SaveData, bool Success, class AQtnBodyPawn* LocalOriginalBody);
	void ExecuteUbergraph_CurrencyDataBag(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UQtnSaveData* K2Node_Event_saveData_1, class AQtnBodyPawn* K2Node_Event_localOriginalBody_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FQtnCurrencyEntry>& CallFunc_GetCurrencyArray_CurrencyArray, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsHero_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FQtnCurrencyEntry& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_MatchesAnyTags_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UQtnSaveData* K2Node_Event_saveData, bool K2Node_Event_success, class AQtnBodyPawn* K2Node_Event_localOriginalBody, bool CallFunc_IsTradeshowDemo_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess);
};

}


