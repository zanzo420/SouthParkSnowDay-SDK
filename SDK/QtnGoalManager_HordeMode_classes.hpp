#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x590 - 0x578)
// BlueprintGeneratedClass QtnGoalManager_HordeMode.QtnGoalManager_HordeMode_C
class UQtnGoalManager_HordeMode_C : public UQtnGoalManagerBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<TSoftClassPtr<class UGoalBase_C>>     ProgressPin_Estimate_HordeMode_Soft;               // 0x580(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UQtnGoalManager_HordeMode_C* GetDefaultObj();

	void GetPotentialProgressPins(TArray<struct FQtnStruct_ProgressPin>* PotentialProgressPinsThisRun, const TArray<TSoftClassPtr<class UGoalBase_C>>& LOCAL_TodaysEstimatedGoals_Soft, int32 Temp_int_Array_Index_Variable, TSoftClassPtr<class UGoalBase_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess, const struct FQtnStruct_ProgressPin& K2Node_MakeStruct_QtnStruct_ProgressPin, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetupSeedGoals_ServerOnly();
	void ExecuteUbergraph_QtnGoalManager_HordeMode(int32 EntryPoint, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6);
};

}


