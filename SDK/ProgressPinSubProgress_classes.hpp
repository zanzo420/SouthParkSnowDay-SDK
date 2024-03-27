#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x138 - 0x38)
// BlueprintGeneratedClass ProgressPinSubProgress.ProgressPinSubProgress_C
class UProgressPinSubProgress_C : public UQtnRunSubProgress
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FQtnStruct_ProgressPin>        PotentialPinsThisRun;                              // 0x40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_ProgressPin>        CompletedPinsThisRun;                              // 0x50(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         PotentialPinListGenerated;                         // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5800[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StartingMapName;                                   // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                EndingMapName;                                     // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                MapName_Starks;                                    // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                MapName_MainStreet;                                // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                MapName_HellsPassBoss;                             // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                MapName_HellsPass;                                 // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                MapName_School;                                    // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                MapName_Playground;                                // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                MapName_Tegridy;                                   // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                MapName_SewagePlant;                               // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                MapName_Foothills;                                 // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                MapName_CartmanBoss;                               // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                MapName_Downtown;                                  // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UProgressPinSubProgress_C* GetDefaultObj();

	void Get_Icons(const struct FQtnStruct_ProgressPin& Pin, class UMaterialInstance** Complete_Icon, class UMaterialInstance** Loss_Icon, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess);
	void GetMapScreenInfo(class FString* Starting_Map_Name, class FString* Ending_Map_Name, TArray<struct FQtnStruct_ProgressPin>* Potential_Pins_This_Run, TArray<struct FQtnStruct_ProgressPin>* Completed_Pins_This_Run, bool* Found_Error, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void Get_Terminal_Map_Names(int32 Day, class FString* StartMap, class FString* EndMap, bool K2Node_SwitchInteger_CmpSuccess);
	void OnMapBeginPlay_ServerOnly();
	void OnRunProgressCheckpoint_ServerOnly(bool FlushMissionProgress);
	void OnRunProgressReset_ServerOnly();
	void Server_UpdatePotentialPins(TArray<struct FQtnStruct_ProgressPin>& NewList);
	void ExecuteUbergraph_ProgressPinSubProgress(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, TArray<struct FQtnStruct_ProgressPin>& CallFunc_Get_Completed_Progress_Pins_Completed_Progress_Pins_This_Map, bool K2Node_Event_flushMissionProgress, int32 CallFunc_Array_Length_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetCurrentArc_ReturnValue, TArray<struct FQtnStruct_ProgressPin>& CallFunc_GetPotentialProgressPins_PotentialProgressPinsThisRun, const class FString& CallFunc_Get_Terminal_Map_Names_StartMap, const class FString& CallFunc_Get_Terminal_Map_Names_EndMap, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FQtnStruct_ProgressPin& CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_3, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_2, bool K2Node_DynamicCast_bSuccess_4, TArray<struct FQtnStruct_ProgressPin>& K2Node_CustomEvent_newList);
};

}


