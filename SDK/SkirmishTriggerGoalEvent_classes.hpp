#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x68 - 0x48)
// BlueprintGeneratedClass SkirmishTriggerGoalEvent.SkirmishTriggerGoalEvent_C
class USkirmishTriggerGoalEvent_C : public UQtnSkirmishTrigger
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         GoalEventFired;                                    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_752E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GoalClass;                                         // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Tag;                                               // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USkirmishTriggerGoalEvent_C* GetDefaultObj();

	void FireEvent(class UQtnGoal* Goal_calling_event, class FName Tag);
	void OnSkirmishInit(class AQtnSkirmish* OwningSkirmish);
	void FireGoalEvent(class ASubGoalArchetype_C* Goal_calling_event, class UQtnGoal* QTN_goal_calling_event, class FName Tag);
	void ExecuteUbergraph_SkirmishTriggerGoalEvent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQtnGoal* K2Node_CustomEvent_goal_calling_event_1, class FName K2Node_CustomEvent_Tag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AQtnSkirmish* K2Node_Event_owningSkirmish, class ASubGoalArchetype_C* K2Node_CustomEvent_goal_calling_event, class UQtnGoal* K2Node_CustomEvent_QTN_goal_calling_event, class FName K2Node_CustomEvent_Tag, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, class ASkirmishWithGoalEvent_C* K2Node_DynamicCast_AsSkirmish_with_Goal_Event, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1);
};

}


