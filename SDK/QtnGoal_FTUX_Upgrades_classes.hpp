#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x350 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_FTUX_Upgrades.QtnGoal_FTUX_Upgrades_C
class UQtnGoal_FTUX_Upgrades_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FQtnStruct_VOLine>             VO_StartUpgrade;                                   // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Detail_Talk;                                       // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Detail_Listen;                                     // 0x310(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_EndUpgrade;                                     // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Upgraded;                                          // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         VO_EnteredUpgradeScreen;                           // 0x339(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6652[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AUpgradeStation_FTUX_C*                HealingTotemJimmy;                                 // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUpgradeStation_FTUX_C*                MyJimmyUpgradeStation;                             // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnGoal_FTUX_Upgrades_C* GetDefaultObj();

	void RefreshUpgradeStation(const struct FQtnReactionToTag& K2Node_MakeStruct_QtnReactionToTag, TArray<struct FQtnReactionToTag>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void EndSequence(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void Post_VOConversation_Server_Only();
	void GetJimmy(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AUpgradeStation_FTUX_C* K2Node_DynamicCast_AsUpgrade_Station_FTUX, bool K2Node_DynamicCast_bSuccess);
	void OnGoalSpawned_ServerOnly();
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void PlayInterruptableConvo(TArray<struct FQtnStruct_VOLine>& Convo);
	void HideDoubleJimmy();
	void bindJimmyFrobEventNEW();
	void PlayerEnteredFTUXNEW();
	void PLAYERLEFTFTUXNEW();
	void ExecuteUbergraph_QtnGoal_FTUX_Upgrades(int32 EntryPoint, TArray<struct FQtnStruct_VOLine>& K2Node_CustomEvent_Convo, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_Event_willEndImmediatelyFromLateJoin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex);
};

}


