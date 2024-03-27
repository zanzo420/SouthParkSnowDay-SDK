#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x112 (0x3F2 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_Day1_CE_FoilpackFTUX.QtnGoal_Day1_CE_FoilpackFTUX_C
class UQtnGoal_Day1_CE_FoilpackFTUX_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFTUXManager_C*                        FTUXManager;                                       // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATravelVolume_BP_C*                    ExitGate;                                          // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Detail_OpenChest;                                  // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         TaskComplete;                                      // 0x310(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_690F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Detail_Listen;                                     // 0x318(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Title;                                             // 0x330(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABodyPawnPlayer_C*>             ListOfUpgradedPlayers;                             // 0x348(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	class AUpgradeStation_BP_C*                  Upgrade_Station;                                   // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABodyPawnPlayer_C*>             HoldingArray;                                      // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AQtnPlayerPawn*>                HoldingArray2;                                     // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         TolkienExplained;                                  // 0x380(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_6910[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Chest;                                             // 0x388(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnStruct_VOLine                     VO_FoilPackOnOpen;                                 // 0x390(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6911[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         VO_ListenTolkien;                                  // 0x3B8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_6912[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalDetail_Starks_DropKeys;                        // 0x3C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalDetail_Starks_DropGas;                         // 0x3D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         R_StarksDroppedGas;                                // 0x3F0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         R_StarksDroppedKeys;                               // 0x3F1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class UQtnGoal_Day1_CE_FoilpackFTUX_C* GetDefaultObj();

	void Check_For_Goal_End_On_Item_Pickup_Server_Only();
	void Reconcile_Gate_Status_with_All_Items_Server_Only(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void StarksItemStatusChange_ServerOnly(bool DroppedGas, bool DroppedKeys, bool PickedUpGas, bool PickedUpKeys, bool CallFunc_IsServer_ReturnValue);
	void OnRep_r_StarksDroppedKeys();
	void OnRep_r_StarksDroppedGas();
	void LOCAL_Starks_Dropped_Item();
	void ResumeGoalIcons_ServerOnly(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_SP_Day1_DeliveryParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UQtnGoal_SP_Day1_DeliveryParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1);
	void OnRep_VO_ListenTolkien();
	void GetChestSpawnLocation(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void FoilpackExplained(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void GetFTUXManager(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AFTUXManager_C* K2Node_DynamicCast_AsFTUXManager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void OnRep_TolkienExplained();
	void OnRep_playersWhoCompletedFTUX();
	void OnRep_listOfUpgradedPlayers();
	void OnRep_TaskComplete();
	void LOCAL_UITextUpdate(int32 CallFunc_Array_Length_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Open_Upgrade_Station(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Block_Upgrade_Station(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetExitGate(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void OnGoalSpawned_ServerOnly();
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void bindArrivalStartEvent();
	void PlayersArrived();
	void bindFTUXCompleteEvent();
	void FTUXDone();
	void bindUpgradeStationEvents();
	void PlayerUpgraded(class ABodyPawnPlayer_C* Player_who_upgraded);
	void bindEndGoalEvent();
	void PlayersLeftSpoke(class ATravelVolume_BP_C* From_this_volume);
	void ExecuteUbergraph_QtnGoal_Day1_CE_FoilpackFTUX(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_who_upgraded, bool CallFunc_IsServer_ReturnValue_5, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsServer_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_6, class ATravelVolume_BP_C* K2Node_CustomEvent_from_this_volume, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsServer_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8);
};

}


