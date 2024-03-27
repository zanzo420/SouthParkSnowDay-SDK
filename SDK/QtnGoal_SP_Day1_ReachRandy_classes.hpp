#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2F0 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_SP_Day1_ReachRandy.QtnGoal_SP_Day1_ReachRandy_C
class UQtnGoal_SP_Day1_ReachRandy_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ATargetLocationVolume_C*               TargetVolume;                                      // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnGoal_SP_Day1_ReachRandy_C* GetDefaultObj();

	void DEBUGONLY_EndGoal();
	void GetTargetVolume(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ATargetLocationVolume_C* K2Node_DynamicCast_AsTarget_Location_Volume, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue);
	void OnGoalSpawned_ServerOnly();
	void PlayerEnteredVolumeEvent(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit);
	void UnBindGoalEvents();
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void Multicast_refreshUI();
	void Multicast_SaveIceBrokenOnce();
	void ExecuteUbergraph_QtnGoal_SP_Day1_ReachRandy(int32 EntryPoint, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered, bool K2Node_CustomEvent_onExit, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_1, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue);
};

}


