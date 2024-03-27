#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x140 - 0xA0)
// BlueprintGeneratedClass PlayerSubProgress_Upgrades.PlayerSubProgress_Upgrades_C
class UPlayerSubProgress_Upgrades_C : public UQtnPlayerRunProgress
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        BeefcakeProgress;                                  // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3692[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnUpgradeRunProgressData>    BodyUpgradeRunProgressData;                        // 0xB0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnUpgradeRunProgressData>    MeleeUpgradeRunProgressData;                       // 0xC0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnUpgradeRunProgressData>    RangedUpgradeRunProgressData;                      // 0xD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UClass*, struct FFQtnPowerUpgradeRunProgressData> PowerUpgradeRunProgressData;                       // 0xE0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnUpgradeRunProgressData>    Temp_PowerUpgradeRunProgressData;                  // 0x130(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UPlayerSubProgress_Upgrades_C* GetDefaultObj();

	void HasAnyUpgrades(bool* HasUpgrades_, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_3);
	void ResetUpgradesInSlots(TArray<class UQtnUpgradeSlot*>& InUpgradeSlots, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UQtnUpgradeSlot* CallFunc_Array_Get_Item, bool CallFunc_UnslotUpgrade_ServerOnly_ReturnValue, bool CallFunc_IsSlotFilled_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ResetUpgrades();
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, TArray<class UClass*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FQtnUpgradeRunProgressData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FQtnUpgradeRunProgressData& CallFunc_Array_Get_Item_1, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class UClass* CallFunc_Array_Get_Item_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const struct FFQtnPowerUpgradeRunProgressData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQtnUpgradeRunProgressData& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const struct FQtnUpgradeRunProgressData& CallFunc_Array_Get_Item_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15);
	void OnRunProgressReset_ServerOnly();
	void OnRunProgressCheckpoint_ServerOnly(class AQtnBodyPawn* PlayerBody, bool FlushMissionProgress);
	void OnReadyForGameplay_ServerOnly(class AQtnPlayerPawn* PlayerPawn, class AQtnBodyPawn* PlayerBody, bool HasCheckpointHappened);
	void ExecuteUbergraph_PlayerSubProgress_Upgrades(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, class AQtnBodyPawn* K2Node_Event_PlayerBody_1, bool K2Node_Event_flushMissionProgress, class AQtnPlayerPawn* K2Node_Event_playerPawn, class AQtnBodyPawn* K2Node_Event_PlayerBody, bool K2Node_Event_hasCheckpointHappened, TArray<class UQtnVerb*>& CallFunc_GetAllEquippedVerbs_pawnVerbs, int32 CallFunc_Array_Length_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_1, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_2, class UQtnUpgradeSlot* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FQtnUpgradeRunProgressData& CallFunc_SerializeToRunProgressData_ServerOnly_ReturnValue, bool CallFunc_IsSlotFilled_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_1, const struct FQtnUpgradeRunProgressData& CallFunc_SerializeToRunProgressData_ServerOnly_ReturnValue_1, bool CallFunc_IsSlotFilled_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Array_Index_Variable_5, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_2, const struct FQtnUpgradeRunProgressData& CallFunc_SerializeToRunProgressData_ServerOnly_ReturnValue_2, bool CallFunc_IsSlotFilled_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2, const struct FFQtnPowerUpgradeRunProgressData& K2Node_MakeStruct_FQtnPowerUpgradeRunProgressData, const struct FQtnUpgradeRunProgressData& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Array_Index_Variable_6, class UQtnVerb* CallFunc_Array_Get_Item_5, class UClass* CallFunc_GetObjectClass_ReturnValue, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_4, class UQtnUpgradeSlot* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_6, const struct FQtnUpgradeRunProgressData& CallFunc_SerializeToRunProgressData_ServerOnly_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_IsSlotFilled_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_6, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_6, TArray<class UClass*>& CallFunc_Map_Keys_Keys, class UClass* CallFunc_Array_Get_Item_7, class UQtnVerb* CallFunc_GetVerb_ReturnValue, const struct FFQtnPowerUpgradeRunProgressData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_6);
};

}


