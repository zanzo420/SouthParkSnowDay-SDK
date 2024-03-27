#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x170 - 0x120)
// BlueprintGeneratedClass SocialHubDataBag.SocialHubDataBag_C
class USocialHubDataBag_C : public UQtnDataBag
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        PreMissionDarkMatterCurrency;                      // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SocialHubInitComplete;                             // 0x12C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7288[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UQtnUpgrade>>     EncounteredEnemyUpgrades;                          // 0x130(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TArray<TSoftClassPtr<class UQtnUpgrade>>     EncounteredPlayerUpgrades;                         // 0x140(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TArray<TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>> EncounteredEnemyBullshit;                          // 0x150(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TArray<TSoftClassPtr<class UQtn_CheatVerb_Archetype_C>> EncounteredPlayerBullshit;                         // 0x160(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)

	static class UClass* StaticClass();
	static class USocialHubDataBag_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, class UQtnDebugWrapper* LocalDebugWrapper, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, TSoftClassPtr<class UQtn_CheatVerb_Archetype_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_SoftClassReferenceToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C> CallFunc_Array_Get_Item_1, TSoftClassPtr<class UQtnUpgrade> CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_SoftClassReferenceToString_ReturnValue_1, const class FString& CallFunc_Conv_SoftClassReferenceToString_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, TSoftClassPtr<class UQtnUpgrade> CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, const class FString& CallFunc_Conv_SoftClassReferenceToString_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3);
	void PreSaveDataBP(class UQtnSaveData* SaveData, class AQtnBodyPawn* LocalOriginalBody);
	void SetLocalSocialhubInit(bool Init_complete);
	void PostLoadDataBP(class UQtnSaveData* SaveData, bool Success, class AQtnBodyPawn* LocalOriginalBody);
	void ExecuteUbergraph_SocialHubDataBag(int32 EntryPoint, class UQtnSaveData* K2Node_Event_saveData_1, class AQtnBodyPawn* K2Node_Event_localOriginalBody_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetCurrencyQuantity_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_CustomEvent_init_complete, class UQtnSaveData* K2Node_Event_saveData, bool K2Node_Event_success, class AQtnBodyPawn* K2Node_Event_localOriginalBody, bool CallFunc_HasValidBagData_ReturnValue);
};

}


