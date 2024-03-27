#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x580 - 0x569)
// BlueprintGeneratedClass QtnGoal_SP_Day1_DeliverKeys_TrainStation.QtnGoal_SP_Day1_DeliverKeys_TrainStation_C
class UQtnGoal_SP_Day1_DeliverKeys_TrainStation_C : public UQtnGoal_SP_Day1_DeliverKeysParent_C
{
public:
	uint8                                        Pad_4774[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ALandmarkVOPlayer_C*                   VO_LandmarkPlayer_Porch;                           // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnGoal_SP_Day1_DeliverKeys_TrainStation_C* GetDefaultObj();

	void DEBUGONLY_Start_Goal(bool CallFunc_IsServer_ReturnValue);
	void Pick_Up_Quest_Item(class ABP_GoalPickup_C* Item_picked_up, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetLandmarkVO(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ALandmarkVOPlayer_C* K2Node_DynamicCast_AsLandmark_VOPlayer, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue);
	void OnGoalSpawned_ServerOnly();
	void ExecuteUbergraph_QtnGoal_SP_Day1_DeliverKeys_TrainStation(int32 EntryPoint);
};

}


