#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x6A0 - 0x669)
// BlueprintGeneratedClass SkirmishWithGoalEvent.SkirmishWithGoalEvent_C
class ASkirmishWithGoalEvent_C : public ASkirmishBase_C
{
public:
	uint8                                        Pad_3593[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SkirmishGoalStartEvent;                            // 0x670(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            SkirmishGoalEvent;                                 // 0x680(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            SkirmishGoalSpawnedEvent;                          // 0x690(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ASkirmishWithGoalEvent_C* GetDefaultObj();

	void SkirmishGoalSpawnedEvent__DelegateSignature(class FName Tag, class UQtnGoal* Spawned_Goal);
	void SkirmishGoalStartEvent__DelegateSignature(class FName Tag, class UQtnGoal* QTN_goal_calling_event);
	void SkirmishGoalEvent__DelegateSignature(class ASubGoalArchetype_C* Goal_calling_event, class UQtnGoal* QTN_goal_calling_event, class FName Tag);
};

}


