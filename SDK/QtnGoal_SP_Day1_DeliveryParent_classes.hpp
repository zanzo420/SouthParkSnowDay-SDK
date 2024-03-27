#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x221 (0x501 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_SP_Day1_DeliveryParent.QtnGoal_SP_Day1_DeliveryParent_C
class UQtnGoal_SP_Day1_DeliveryParent_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                QuestItemClass;                                    // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASP_TruckCrash_CinematicBP_C*          Truck;                                             // 0x2F0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATravelVolume_BP_C*                    SpokeEntranceGate;                                 // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Delivered;                                         // 0x300(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         PickedUp;                                          // 0x301(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         PickedUpAtLeastOnce;                               // 0x302(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_68D1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATravelVolume_BP_C*                    SpokeExitGate;                                     // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllPlayersUpgraded;                                // 0x310(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_68D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABodyPawnPlayer_C*>             ListOfUpgradedPlayers;                             // 0x318(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	bool                                         SkirmishDone;                                      // 0x328(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_68D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalDetail_ThisPlayerPickedUp;                     // 0x330(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_PickedUp;                               // 0x348(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_Delivered;                              // 0x360(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_Dropped;                                // 0x378(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_Locate;                                 // 0x390(0x18)(Edit, BlueprintVisible)
	class UQtnGoal_SP_Day1_DeliveryParent_C*     SiblingGoal;                                       // 0x3A8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            UpdateQuestItemStatus;                             // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABodyPawnPlayer_C*                     Carrier;                                           // 0x3C0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class ABP_DeadPlayerTeleportLoc_C*           DefaultHubReturnTeleportPoint;                     // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  GoalDetail_Return;                                 // 0x3D0(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_GetUpgrade;                             // 0x3E8(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_WaitUpgrade;                            // 0x400(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_WinBattle;                              // 0x418(0x18)(Edit, BlueprintVisible)
	class AUpgradeStation_BP_C*                  UpgradeStation;                                    // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABodyPawnPlayer_C*>             HoldingArray;                                      // 0x438(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	class UMaterialInstance*                     TruckIcon;                                         // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALocationMarker_BP_C*                  DummyTruck;                                        // 0x450(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UpgradeComplete;                                   // 0x458(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_68D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalRejection_MissingItem;                         // 0x460(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalRejection_ActiveCombat;                        // 0x478(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalRejection_Gas;                                 // 0x490(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalRejection_Keys;                                // 0x4A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ProgressPin_specificName;                          // 0x4C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HostInSpoke;                                       // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_68D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnGoalManager_StarksPond_C*          StarksGoalManager;                                 // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NotInHub;                                          // 0x4E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_68D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_DeadPlayerTeleportLoc_C*>   All_Hub_Return_Points;                             // 0x4F0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         LeftSpoke;                                         // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UQtnGoal_SP_Day1_DeliveryParent_C* GetDefaultObj();

	void DoGetDelivered(bool* Delivered);
	void DoGetSpokeExitGate(class ATravelVolume_BP_C** SpokeExitGate);
	void DoGetSpokeEntranceGate(class ATravelVolume_BP_C** SpokeEntranceGate);
	void Update_Foilpack_FTUX_Goal_Status_Server_Only(class UQtnGoal_Day1_CE_FoilpackFTUX_C* Foilpack_ftux_goal, bool Was_drop);
	void Update_Bonus_Zone_Status_Server_Only(class UQtnGoal_SP_Day1_CE_Parent_C* bonus_goal, bool Was_drop);
	void Update_Ambush_Status_Server_Only(class UQtnGoal_Ambush_Parent_C* Ambush_Goal, bool Was_drop);
	void Handle_Carried_Item_Status_Change_in_Ambush_Server_Only(bool Dropped, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UQtnGoal_Day1_CE_FoilpackFTUX_C* K2Node_DynamicCast_AsQtn_Goal_Day_1_CE_Foilpack_FTUX, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_ContainsAnAmbush_ServerOnly_foundAmbush, class UQtnGoal_Ambush_Parent_C* CallFunc_ContainsAnAmbush_ServerOnly_ambushgoal, bool CallFunc_ContainsAnAmbush_ServerOnly_foundBonus, class UQtnGoal_SP_Day1_CE_Parent_C* CallFunc_ContainsAnAmbush_ServerOnly_bonus_zone_goal, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6);
	void ContainsAnAmbush_ServerOnly(TArray<class UQtnGoal*>& Goals, bool* FoundAmbush, class UQtnGoal_Ambush_Parent_C** Ambushgoal, bool* FoundBonus, class UQtnGoal_SP_Day1_CE_Parent_C** bonus_zone_goal, class UQtnGoal_SP_Day1_CE_Parent_C* LOCAL_BonusGoal, bool LOCAL_FoundBonus, class UQtnGoal_Ambush_Parent_C* LOCAL_Goal, bool LOCAL_FoundAmbush, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UQtnGoal* CallFunc_Array_Get_Item, class UQtnGoal_SP_Day1_CE_Parent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_CE_Parent, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_Ambush_Parent_C* K2Node_DynamicCast_AsQtn_Goal_Ambush_Parent, bool K2Node_DynamicCast_bSuccess_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void GetHubDestinations_ServerOnly(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetHubStatus_ServerOnly(bool New_In_Hub_Status, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void OnRep_NotInHub(enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess);
	void ProgressPinStatusUpdate(bool Want_Complete_, bool CallFunc_IsServer_ReturnValue);
	void RegisterGoalRejection(class FText New_Rejection, bool CallFunc_TextIsEmpty_ReturnValue, class UQtnGoal_SP_Day1_DeliverGasParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Deliver_Gas_Parent, bool K2Node_DynamicCast_bSuccess, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess_1);
	void Temp_Toggle_Sister_Entrance_Gate_Icon(bool Want_On, const TArray<class AActor*>& LOCAL_HoldingArray, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SafeApplyGateIcons(bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void OnRep_upgradeComplete();
	void SaveGoalAsSeen(class UClass* CallFunc_GetObjectClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void DEBUGONLY_Start_Goal(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, class UQtnGoal* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UQtnGoal_SP_Day1_FindRandy_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Find_Randy, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnRep_allPlayersUpgraded();
	void OnRep_listOfUpgradedPlayers();
	void OnRep_skirmishDone();
	void DEBUGONLY_EndGoal();
	void Get_Default_Late_Join_Location(const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_DeadPlayerTeleportLoc_C* K2Node_DynamicCast_AsBP_Dead_Player_Teleport_Loc, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue);
	void UpdateTeleportPoint(class ABP_DeadPlayerTeleportLoc_C* Teleport_Point, class FName Temp_name_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsOnServer_ReturnValue);
	void OnRep_carrier(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void PlayPickupFacetime(bool CallFunc_IsOnServer_ReturnValue);
	void EndGoalSequence();
	void Pick_Up_Quest_Item(class ABP_GoalPickup_C* Item_picked_up, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_4);
	void DropQuestItem(class ABP_GoalPickup_C* Item_dropped, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void LOCAL_Hide_Show_Icons(enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess);
	void UpdateGoalIcons(class ABodyPawnPlayer_C* Player_to_update);
	void RemoveTruckIconForNonCarrier(class ABodyPawnPlayer_C* Player, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void LOCAL_UITextUpdate();
	void LOCAL_UpdateGoalDetail(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_1, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_1, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_1, bool CallFunc_GetLocalPlayerInformation_isHosting_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1);
	void OnRep_pickedUp();
	void OnRep_delivered(enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void Get_Spoke_Exit_Gate(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsOnServer_ReturnValue);
	void Get_Spoke_Entrance_Gate(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsOnServer_ReturnValue);
	void CloseGate(class ATravelVolume_BP_C* Gate, bool CallFunc_IsOnServer_ReturnValue);
	void Open_Gate(class ATravelVolume_BP_C* Gate_to_open, bool Use_beam, bool CallFunc_IsOnServer_ReturnValue);
	void GetTruck(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors_1, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class ASP_TruckCrash_CinematicBP_C* K2Node_DynamicCast_AsSP_Truck_Crash_Cinematic_BP, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsOnServer_ReturnValue);
	void DeliverItem(bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_K2_TeleportTo_ReturnValue);
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void OnGoalSpawned_ServerOnly();
	void PostDeliverySequence();
	void PickUpEvent(class ALevelFeatureSpawner_C* Spawner, class ABP_GoalPickup_C* Crystal);
	void DropEvent(class ABP_GoalPickup_C* Crystal);
	void UnbindItemStatusEvents();
	void Multicast_refreshUI();
	void CheckForCharacterEncounterReroute(class FText SpokeID);
	void UpdateThisPlayerUI(class ABodyPawnPlayer_C* Player_who_upgraded);
	void OnUpgradeStationSpawned(class AUpgradeStation_BP_C* Upgrade_Station);
	void bindUpgradeEvents();
	void OnAllPlayersUpgraded();
	void PlayersTravelled(class FText SpokeID);
	void bindFTUXFoilPackEvent();
	void RerouteFTUXSpoke(class ATravelVolume_BP_C* From_this_volume);
	void UnbindFTUXFoilPackEvent();
	void AllPlayersHaveUpgraded();
	void DoDeliverItem();
	void DoCloseGate(class ATravelVolume_BP_C* Gate);
	void SetSiblingGoal(class UQtnGoal* SiblingGoal);
	void BindSpokeArrivalEvents();
	void PlayersArrivedInSpoke();
	void bindHubArrivalEvents_ServerOnly();
	void UpdateHubStatusOnArrival_ServerOnly();
	void ExecuteUbergraph_QtnGoal_SP_Day1_DeliveryParent(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsOnServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsOnServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_SpawnWithTag_ReturnValue, class ABP_GoalPickup_C* K2Node_DynamicCast_AsBP_Goal_Pickup, bool K2Node_DynamicCast_bSuccess, class ALevelFeatureSpawner_C* K2Node_CustomEvent_spawner, class ABP_GoalPickup_C* K2Node_CustomEvent_crystal_1, class ABP_GoalPickup_C* K2Node_CustomEvent_crystal, class FText K2Node_CustomEvent_spokeID_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_who_upgraded, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess_1, class AUpgradeStation_BP_C* K2Node_CustomEvent_upgrade_Station, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsOnServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsOnServer_ReturnValue_4, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_5, bool CallFunc_IsOnServer_ReturnValue_6, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText K2Node_CustomEvent_spokeID, bool CallFunc_IsOnServer_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class ATravelVolume_BP_C* K2Node_CustomEvent_from_this_volume, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_8, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsServer_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class ATravelVolume_BP_C* K2Node_Event_gate, class UQtnGoal* K2Node_Event_siblingGoal, class UQtnGoal_SP_Day1_DeliveryParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsServer_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_9, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_DeadPlayerTeleportLoc_C* K2Node_DynamicCast_AsBP_Dead_Player_Teleport_Loc, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsValid_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsValid_ReturnValue_12, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_13, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue_6, class ABP_DeadPlayerTeleportLoc_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_7);
	void UpdateQuestItemStatus__DelegateSignature(class ABP_GoalPickup_C* Item, bool Delivered, bool Picked_up);
};

}


