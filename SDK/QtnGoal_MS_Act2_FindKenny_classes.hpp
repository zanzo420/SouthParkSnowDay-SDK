#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x290 (0x570 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_MS_Act2_FindKenny.QtnGoal_MS_Act2_FindKenny_C
class UQtnGoal_MS_Act2_FindKenny_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         StartingCueFinished;                               // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4348[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACinematicSceneArchetype_BP_C*         StanAmbushCinematic;                               // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayersCrossedWall;                                // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4349[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VO_WallReminderIndex;                              // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnStruct_VOLine                     VO_GetOverWallReminder;                            // 0x300(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_434A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_GetOverWallReminder2;                           // 0x328(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_434B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_GetOverWallReminder3;                           // 0x350(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_434C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         VO_DeadTime_AllPlayersInDeadZone;                  // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TownSquareCombatOver;                              // 0x379(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_434D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterProximityVolumeBP_C*         DeadTimeTrackingVolume;                            // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VO_PlayedDeadTimeLine;                             // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_434E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_DeadTime;                                       // 0x390(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_434F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalDetail_FollowStan;                             // 0x3B8(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalTitle_FollowStan;                              // 0x3D0(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalTitle_FindStan;                                // 0x3E8(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_FindStan;                               // 0x400(0x18)(Edit, BlueprintVisible)
	class ATravelVolume_BP_C*                    ExitGate;                                          // 0x418(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  GoalDetail_WaitGate;                               // 0x420(0x18)(Edit, BlueprintVisible)
	TArray<class ABodyPawnPlayer_C*>             ListOfUpgradedPlayers;                             // 0x438(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	TArray<class ABodyPawnPlayer_C*>             HoldingArray;                                      // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	class FText                                  GoalDetail_ReadyGate;                              // 0x458(0x18)(Edit, BlueprintVisible)
	class AQtnAIJob_TetherPatrolSnipe_C*         CartmanBlockageJob;                                // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATargetLocationVolume_C*               CatapultVolume;                                    // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SomeoneSawCatapults;                               // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4352[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALocationMarker_BP_C*                  CartmanPostStandoffLocation;                       // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABodyPawn_CartmanBuddy_C*              Cartman;                                           // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CartmanDespawnRequested;                           // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4354[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_KennyHeraldConvo;                               // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VO_KennyHerald_Played;                             // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4355[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_DirectToIceRink;                                // 0x4B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VO_DirectToIceRink_Played;                         // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4357[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKennyMainStreet_BP_C*                 PoliceStationKenny;                                // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKennyMainStreet_BP_C*                 IceRinkKenny;                                      // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnStruct_VOLine                     VO_KennyCheer;                                     // 0x4E0(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4359[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_Catapult_C*>                VO_CatapultsToTrackVO;                             // 0x508(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FQtnStruct_VOLine                     VO_AxeComplaint;                                   // 0x518(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_435A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         VO_FirstFling;                                     // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_435D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          VO_DeadTimeTimerHandle;                            // 0x548(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AUpgradeStation_BP_C*                  UpgradeStation;                                    // 0x550(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CombatComplete;                                    // 0x558(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_4360[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALocationMarker_BP_C*                  AmphitheatreQuestMarker;                           // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATargetLocationVolume_C*               WallTrackingVolume;                                // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnGoal_MS_Act2_FindKenny_C* GetDefaultObj();

	void All_Players_Crossed_Wall_Server_Only(bool* All_players_crossed_wall, bool LOCAL_FoundOutlier, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, bool CallFunc_IsServer_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetQuestMarker(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void OnRep_combatComplete();
	void GetUpgrade(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class AUpgradeStation_BP_C* K2Node_DynamicCast_AsUpgrade_Station_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
	void GetFirstCatapults(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_Catapult_C* K2Node_DynamicCast_AsBP_Catapult, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void VO_Kenny_Devotee(class AQtnSkirmish* Skirmish, class AQtnPawn* LOCAL_Fan);
	void Check_For_Get_Over_Wall_VOReminder(int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, TArray<struct FQtnStruct_VOLine>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FQtnStruct_VOLine>& K2Node_MakeArray_Array_1, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue);
	void Check_To_Play_Dead_Time_VO(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_AreBotsOrPlayersInCombat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FQtnStruct_VOLine>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void Post_VOConversation_Server_Only(bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetKennys(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AKennyMainStreet_BP_C* K2Node_DynamicCast_AsKenny_Main_Street_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void VO_Ice_Rink_Directions(bool CallFunc_IsServer_ReturnValue);
	void VO_KennyHerald();
	void FindCartman(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_MainStreet_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Main_Street, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABodyPawn_CartmanBuddy_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Buddy, bool K2Node_DynamicCast_bSuccess_1, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors_1, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, class ABodyPawn_CartmanBuddy_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Buddy_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetCartmanFinalDestination(class FName Temp_name_Variable, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void GetCatapultVolume(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATargetLocationVolume_C* K2Node_DynamicCast_AsTarget_Location_Volume, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void GetCartmanBlockageJob(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AQtnAIJob_TetherPatrolSnipe_C* K2Node_DynamicCast_AsQtn_AIJob_Tether_Patrol_Snipe, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Destroy_Cartman(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void CheckForJokerUpgrade(bool CallFunc_IsServer_ReturnValue);
	void Toggle_Hide_Icons_for_Standoff(bool WantOn);
	void OnRep_listOfUpgradedPlayers();
	void GetExitGate(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
	void LOCAL_UITextUpdate(int32 CallFunc_Array_Length_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnRep_CutsceneTriggered();
	void GetDeadTimeTrackingVolume(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsOnServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AEncounterProximityVolumeBP_C* K2Node_DynamicCast_AsEncounter_Proximity_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, class AQtnSkirmish* LOCAL_SkirmishCalling, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue_5, bool CallFunc_EqualEqual_NameName_ReturnValue_6, bool CallFunc_EqualEqual_NameName_ReturnValue_7, bool CallFunc_EqualEqual_NameName_ReturnValue_8, bool CallFunc_EqualEqual_NameName_ReturnValue_9, bool CallFunc_EqualEqual_NameName_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ABodyPawn_CartmanBuddy_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue_1);
	void GetCinematicActor(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ACinematicSceneArchetype_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue);
	void DEBUGONLY_EndGoal();
	void OnGoalSpawned_ServerOnly();
	void EndGoalSequence();
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void Server_BindDeadTimeTracking();
	void DeadTime_PlayerEnter();
	void Server_UnbindDeadTimeTracking();
	void DeadTime_PlayerExt();
	void bindCatapultVolumeEvents();
	void PlayerEnteredCatapultVolume(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit);
	void UnbindCatapultVolumeEvents();
	void DelayAndCartmanLookAnimation();
	void DelayAndKennyFanCheer(class AQtnSkirmish* Skirmish);
	void bindCatapultVO();
	void UnbindFlingEvent();
	void FirstFlingVO();
	void bindUpgradeTrackingEvents();
	void PlayerUpgraded(class ABodyPawnPlayer_C* Player_who_upgraded);
	void UnbindUpgradeTrackingEvents();
	void UpgradeComplete();
	void bindSpokeArrivalEvents_ServerOnly();
	void PlayersInPoliceStation_ServerOnly();
	void BindWallCrossedTrackingEvents_ServerOnly();
	void PlayerCrossedWall_ServerOnly(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit);
	void UnbindWallCrossedTrackingEvent_ServerOnly();
	void ExecuteUbergraph_QtnGoal_MS_Act2_FindKenny(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsOnServer_ReturnValue, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsOnServer_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered_1, bool K2Node_CustomEvent_onExit_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_3, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, class AQtnSkirmish* K2Node_CustomEvent_Skirmish, bool CallFunc_IsServer_ReturnValue_4, class ABP_Catapult_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, class ABP_Catapult_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsServer_ReturnValue_6, bool CallFunc_IsServer_ReturnValue_7, bool CallFunc_IsServer_ReturnValue_8, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_who_upgraded, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsServer_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsServer_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_7, int32 Temp_int_Loop_Counter_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsServer_ReturnValue_12, bool CallFunc_IsServer_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsServer_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsServer_ReturnValue_15, bool CallFunc_All_Players_Crossed_Wall_Server_Only_all_players_crossed_wall, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered, bool K2Node_CustomEvent_onExit, bool CallFunc_IsServer_ReturnValue_16, bool CallFunc_IsServer_ReturnValue_17);
};

}


