#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x398 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_SP_Day1_CE_Parent.QtnGoal_SP_Day1_CE_Parent_C
class UQtnGoal_SP_Day1_CE_Parent_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ATravelVolume_BP_C*                    ExitGate;                                          // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DeadPlayerTeleportLoc_C*           EntranceDestination;                               // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  GoalDetailWaitingForOthers;                        // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AUpgradeStation_BP_C*                  UpgradeStation;                                    // 0x310(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABodyPawnPlayer_C*>             ListOfUpgradedPlayers;                             // 0x318(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	TArray<class ABodyPawnPlayer_C*>             HoldingArray;                                      // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	class AFTUXManager_C*                        FTUXManager;                                       // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InStarks;                                          // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         R_StarksDroppedGas;                                // 0x341(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         R_StarksDroppedKeys;                               // 0x342(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_4FEA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalDetail_Starks_DropGas;                         // 0x348(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalDetail_Starks_DropKeys;                        // 0x360(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         EndReady;                                          // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalDetail_Default;                                // 0x380(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UQtnGoal_SP_Day1_CE_Parent_C* GetDefaultObj();

	void DoGetLateJoinTeleportLoc(class ABP_DeadPlayerTeleportLoc_C** LateJoinTeleportLoc);
	void DoGetDefaultLateJoinLocation(class ABP_DeadPlayerTeleportLoc_C** DefaultLateJoinLocation);
	void DoGetExitGate(class ATravelVolume_BP_C** ExitGate);
	void DoGetEntranceDestination(class ABP_DeadPlayerTeleportLoc_C** EntranceDestination);
	void Local_StarksDroppedItem();
	void Check_For_Goal_End_On_Item_Pickup_Server_Only(bool CallFunc_IsServer_ReturnValue);
	void Reconcile_Gate_Status_with_All_Items_Server_Only(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void OnRep_r_StarksDroppedKeys();
	void OnRep_r_StarksDroppedGas();
	void Starks_Item_Status_Change_Server_Only(bool Dropped_Gas, bool Dropped_Keys, bool Picked_Up_Gas, bool Picked_Up_Keys, bool CallFunc_IsServer_ReturnValue);
	void Get_Default_Late_Join_Location();
	void GetFTUXManager(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AFTUXManager_C* K2Node_DynamicCast_AsFTUXManager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void VO_CheckForEntryVO(const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnGoal_SP_Day1_CE_Crossroad_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Crossroad, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
	void SaveGoalAsSeen(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
	void DEBUGONLY_Start_Goal(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void UpdateUIText(bool CallFunc_BooleanOR_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	void OnRep_listOfUpgradedPlayers();
	void GetEntranceDestination(bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_DeadPlayerTeleportLoc_C* K2Node_DynamicCast_AsBP_Dead_Player_Teleport_Loc, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue);
	void GetExitGate(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsOnServer_ReturnValue);
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void OnGoalSpawned_ServerOnly();
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void UpdateThisPlayerUI(class ABodyPawnPlayer_C* Player_who_upgraded);
	void CustomEvent(class AUpgradeStation_BP_C* Upgrade_Station);
	void ExecuteUbergraph_QtnGoal_SP_Day1_CE_Parent(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_who_upgraded, class AUpgradeStation_BP_C* K2Node_CustomEvent_upgrade_Station, bool CallFunc_IsValid_ReturnValue_1, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsOnServer_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


