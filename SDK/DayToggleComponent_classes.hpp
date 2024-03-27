#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0xF9 - 0xE0)
// BlueprintGeneratedClass DayToggleComponent.DayToggleComponent_C
class UDayToggleComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<int32>                                ValidDays;                                         // 0xE8(0x10)(Edit, BlueprintVisible)
	bool                                         OnValidDay;                                        // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UDayToggleComponent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_DayToggleComponent(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentArc_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class ASkirmishDoor_C* K2Node_DynamicCast_AsSkirmish_Door, bool K2Node_DynamicCast_bSuccess_1, class ALevelFeatureBase_C* K2Node_DynamicCast_AsLevel_Feature_Base, bool K2Node_DynamicCast_bSuccess_2);
};

}


