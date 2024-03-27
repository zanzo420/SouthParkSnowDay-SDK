#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x138 - 0x120)
// BlueprintGeneratedClass PerkDataBag.PerkDataBag_C
class UPerkDataBag_C : public UQtnDataBag
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FQtnSavedPerkLoadoutData>      SavedPerks;                                        // 0x128(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)

	static class UClass* StaticClass();
	static class UPerkDataBag_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnSavedPerkLoadoutData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void PreSaveDataBP(class UQtnSaveData* SaveData, class AQtnBodyPawn* LocalOriginalBody);
	void OnParentDataBagOccupy(class AQtnBodyPawn* OccupiedBodyPawn);
	void PostLoadDataBP(class UQtnSaveData* SaveData, bool Success, class AQtnBodyPawn* LocalOriginalBody);
	void ExecuteUbergraph_PerkDataBag(int32 EntryPoint, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UQtnSaveData* K2Node_Event_saveData_1, class AQtnBodyPawn* K2Node_Event_localOriginalBody_1, bool CallFunc_IsHero_ReturnValue, TArray<class UQtnPerk*>& CallFunc_GetAllPerks_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQtnSavedPerkLoadoutData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, int32 Temp_int_Array_Index_Variable_1, class UQtnPerk* CallFunc_Array_Get_Item_1, const struct FQtnSavedPerkLoadoutData& CallFunc_CreateSavedLoadoutData_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_HasValidBagData_ReturnValue, class UQtnSaveData* K2Node_Event_saveData, bool K2Node_Event_success, class AQtnBodyPawn* K2Node_Event_localOriginalBody, bool CallFunc_IsTradeshowDemo_ReturnValue);
};

}


