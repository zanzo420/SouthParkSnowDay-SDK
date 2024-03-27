#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x310 - 0x2F9)
// BlueprintGeneratedClass QtnGoal_MS_Act2_MapEntry.QtnGoal_MS_Act2_MapEntry_C
class UQtnGoal_MS_Act2_MapEntry_C : public UQtnGoal_MapEntry_C
{
public:
	uint8                                        Pad_6810[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ATravelVolume_BP_C*                    Gate;                                              // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnGoal_MS_Act2_MapEntry_C* GetDefaultObj();

	void StartChildGoals(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street, bool K2Node_DynamicCast_bSuccess, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Get_Gate(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue);
	void OnGoalSpawned_ServerOnly();
	void bindGateTravelStartAmbush();
	void ResolveAmbushConflict(class ATravelVolume_BP_C* From_this_volume);
	void OnGoalEnd(bool JustStartedFromLateJoin);
	void ExecuteUbergraph_QtnGoal_MS_Act2_MapEntry(int32 EntryPoint, bool CallFunc_IsPlayingInEditor_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ATravelVolume_BP_C* K2Node_CustomEvent_from_this_volume, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_justStartedFromLateJoin, bool CallFunc_IsServer_ReturnValue_2, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_1, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ShouldPlayCutscenes_play_cutscenes);
};

}


