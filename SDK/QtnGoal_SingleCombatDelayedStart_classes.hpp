#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x480 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_SingleCombatDelayedStart.QtnGoal_SingleCombatDelayedStart_C
class UQtnGoal_SingleCombatDelayedStart_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                  GoalDetail_needUpgrade;                            // 0x2E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalDetail_Combat;                                 // 0x300(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalDetail_wait;                                   // 0x318(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ATravelVolume_BP_C*                    ExitGate;                                          // 0x330(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABodyPawnPlayer_C*>             UpgradedPlayers;                                   // 0x338(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	class AUpgradeStation_BP_C*                  UpgradeStation;                                    // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABodyPawnPlayer_C*>             HoldingArray;                                      // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         SkirmishDone;                                      // 0x360(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_6880[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalDetail_leave;                                  // 0x368(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UpgradeDone;                                       // 0x380(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         CombatReady;                                       // 0x381(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_6881[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalDetail_start;                                  // 0x388(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalTitle_start;                                   // 0x3A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalTitle_Combat;                                  // 0x3B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ATravelVolume_BP_C*                    EntranceGate;                                      // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasUpgrade;                                        // 0x3D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CheckForFTUXReminders;                             // 0x3D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6882[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_FTUXBSReminder;                                 // 0x3E0(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6883[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_FTUXBSUse;                                      // 0x408(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6884[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_FTUXBSIgnore;                                   // 0x430(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6885[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AQtnPlayerPawn*>                PlayersWhoNeedBSFTUX;                              // 0x458(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         UseParentText;                                     // 0x468(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_6886[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            JokerFTUX_GoalEnded;                               // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UQtnGoal_SingleCombatDelayedStart_C* GetDefaultObj();

	void DoGetEntranceGate(class ATravelVolume_BP_C** EntranceGate);
	void DoGetLateJoinTeleportLoc(class ABP_DeadPlayerTeleportLoc_C** LateJoinTeleportLoc);
	void Local_UpdateGateHUDText();
	void UpdateExitGate(bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess);
	void StopJokerFTUX(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnRep_useParentText();
	void SaveGoalAsSeen(class UClass* CallFunc_GetObjectClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
	void VO_LOCAL_Player_FTUXBSUse();
	void Check_For_Joker_Upgrade_At_Exit(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AUpgradeStation_Henrietta_BP_C* K2Node_DynamicCast_AsUpgrade_Station_Henrietta_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
	void DEBUGONLY_Start_Goal(bool CallFunc_IsValid_ReturnValue);
	void DEBUGONLY_EndGoal();
	void UnregisterPreviousGoalUI(bool CallFunc_IsOnServer_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_SP_Day1_FindRandy_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Find_Randy, bool K2Node_DynamicCast_bSuccess_1);
	void GetEntranceGate(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsOnServer_ReturnValue);
	void OnRep_combatReady();
	void OnRep_upgradeDone();
	void OnRep_skirmishDone();
	void GetExitGate(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsOnServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void OnRep_UpgradedPlayers();
	void LOCAL_UITextUpdate(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, class UQtnGoal_SP_Day1_FindRandy_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Find_Randy, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetLocalTextDuringUpgrade_text_to_show, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_Contains_ReturnValue);
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void OnGoalSpawned_ServerOnly();
	void UpdateThisPlayerUI(class ABodyPawnPlayer_C* Player_who_upgraded);
	void UpgradeStationSpawned(class AUpgradeStation_BP_C* Upgrade_Station);
	void AllPlayersUpgraded();
	void DelayedStartSequence();
	void PlayersLeftSpoke(class ATravelVolume_BP_C* From_this_volume);
	void UnbindGateEvents();
	void bindEntranceGateEvents(class ATravelVolume_BP_C* Gate);
	void OnTravel(class ATravelVolume_BP_C* From_this_volume);
	void Multicast_UpdateText();
	void PlayerLeftWorld(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn);
	void Multicast_LOCALPlayReminderBSVO();
	void Multicast_LocalPlayFTUXBSIgnore();
	void OnBSUse();
	void Multicast_RefreshText();
	void ExecuteUbergraph_QtnGoal_SingleCombatDelayedStart(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_CustomEvent_player_who_upgraded, bool CallFunc_IsValid_ReturnValue_2, class AUpgradeStation_BP_C* K2Node_CustomEvent_upgrade_Station, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsOnServer_ReturnValue_2, bool CallFunc_IsOnServer_ReturnValue_3, class ATravelVolume_BP_C* K2Node_CustomEvent_from_this_volume_1, bool CallFunc_IsOnServer_ReturnValue_4, bool CallFunc_IsOnServer_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class ATravelVolume_BP_C* K2Node_CustomEvent_gate, bool CallFunc_IsOnServer_ReturnValue_6, class ATravelVolume_BP_C* K2Node_CustomEvent_from_this_volume, bool CallFunc_IsOnServer_ReturnValue_7, bool CallFunc_IsServer_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_HaveExpectedPlayersUpgraded____HaveAllUpgraded, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_2, TArray<class UQtnVerb*>& CallFunc_GetAllEquippedVerbs_pawnVerbs, class UQtnVerb* CallFunc_Array_Get_Item, class UQtn_CheatVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn_1, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn_1, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI_1, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState_1, bool CallFunc_GetLocalPlayerInformation_isHosting_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin_1, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_4, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	void JokerFTUX_GoalEnded__DelegateSignature();
};

}


