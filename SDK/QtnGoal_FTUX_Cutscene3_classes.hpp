#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x320 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_FTUX_Cutscene3.QtnGoal_FTUX_Cutscene3_C
class UQtnGoal_FTUX_Cutscene3_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                  GoalDetail_Flagpole;                               // 0x2E8(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_Listen;                                 // 0x300(0x18)(Edit, BlueprintVisible)
	class ACinematicSceneCharacter_BP_C*         As_Cinematic_Scene_Character_BP;                   // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnGoal_FTUX_Cutscene3_C* GetDefaultObj();

	void TrainingSatisfied_(class UClass* QtnTutorial, const class FString& Prompt, bool* IsFound, bool* IsSatisfied, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1);
	void GetCutscene(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ACinematicSceneCharacter_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void EndSequence(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void OnGoalSpawned_ServerOnly();
	void PostCutscene(class UClass* Goal_class, int32 Cutscene_ID);
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void ExecuteUbergraph_QtnGoal_FTUX_Cutscene3(int32 EntryPoint, bool K2Node_Event_willEndImmediatelyFromLateJoin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* K2Node_CustomEvent_goal_class, int32 K2Node_CustomEvent_Cutscene_ID, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1);
};

}


