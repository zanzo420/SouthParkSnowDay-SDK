#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x5C9 - 0x569)
// BlueprintGeneratedClass QtnGoal_SP_Day1_DeliverKeys_RopeCourse.QtnGoal_SP_Day1_DeliverKeys_RopeCourse_C
class UQtnGoal_SP_Day1_DeliverKeys_RopeCourse_C : public UQtnGoal_SP_Day1_DeliverKeysParent_C
{
public:
	uint8                                        Pad_D7[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnStruct_VOLine                     VO_ExitReminder;                                   // 0x578(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D8[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VO_ExitReminderTimer;                              // 0x5A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D9[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABodyPawnPlayer_C*>             VO_PlayersWhoEnteredExitVolume;                    // 0x5A8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	class ATargetLocationVolume_C*               ExitDetectionVolume;                               // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          VO_ExitReminderTimerHandle;                        // 0x5C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         VO_ExitReminded;                                   // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UQtnGoal_SP_Day1_DeliverKeys_RopeCourse_C* GetDefaultObj();

	void DEBUGONLY_Start_Goal(bool CallFunc_IsServer_ReturnValue);
	void EndGoalSequence(bool CallFunc_IsServer_ReturnValue);
	void GetExitDetectionVOVolume(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATargetLocationVolume_C* K2Node_DynamicCast_AsTarget_Location_Volume, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void VO_Check_for_Exit_Reminder(enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsOnServer_ReturnValue);
	void Pick_Up_Quest_Item(class ABP_GoalPickup_C* Item_picked_up, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnGoalSpawned_ServerOnly();
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void PlayerEnteredExitVolume(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit);
	void Multicast_ExitReminder();
	void bindExitReminderEvents();
	void ExecuteUbergraph_QtnGoal_SP_Day1_DeliverKeys_RopeCourse(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_willEndImmediatelyFromLateJoin, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered, bool K2Node_CustomEvent_onExit, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue);
};

}


