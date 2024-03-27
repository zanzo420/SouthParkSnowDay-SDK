#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x320 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_FTUX_CreateCharacter.QtnGoal_FTUX_CreateCharacter_C
class UQtnGoal_FTUX_CreateCharacter_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                  GoalDetail_Flagpole;                               // 0x2E8(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_Listen;                                 // 0x300(0x18)(Edit, BlueprintVisible)
	class UFTUX_Character_Screen_C*              CharacterScreen;                                   // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnGoal_FTUX_CreateCharacter_C* GetDefaultObj();

	void TrainingSatisfied_(class UClass* QtnTutorial, const class FString& Prompt, bool* IsFound, bool* IsSatisfied, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1);
	void EndSequence(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void OnGoalSpawned_ServerOnly();
	void EndGoal();
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void ExecuteUbergraph_QtnGoal_FTUX_CreateCharacter(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UFTUX_Character_Screen_C* CallFunc_GetScreen_ReturnValue, bool K2Node_Event_willEndImmediatelyFromLateJoin);
};

}


