#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x480 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_SewagePlant_Arc5_HankeyBattle.QtnGoal_SewagePlant_Arc5_HankeyBattle_C
class UQtnGoal_SewagePlant_Arc5_HankeyBattle_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AQtnPawn_ShizaHulud_C*                 HankeyWorm;                                        // 0x2E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DEBUGONLY_CanSpawn;                                // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalDetail_Cannon;                                 // 0x2F8(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_Colon;                                  // 0x310(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_Slash;                                  // 0x328(0x18)(Edit, BlueprintVisible)
	class FText                                  GoalDetail_Portal;                                 // 0x340(0x18)(Edit, BlueprintVisible, Deprecated)
	TArray<class AAimableCannonPawn_C*>          Cannons;                                           // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)
	class FText                                  GoalDetail_Prostate;                               // 0x368(0x18)(Edit, BlueprintVisible)
	class FText                                  VictoryText;                                       // 0x380(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UShizaFightManagerComponent_C*         CachedShizaFightManager;                           // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  GoalDetail_End;                                    // 0x3A0(0x18)(Edit, BlueprintVisible)
	TArray<class ABP_GoalPickup_ShizaCannonAmmo_C*> StartingAmmoBundles;                               // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         VO_FirstBeamPlayed;                                // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         VO_TPHintPlayed;                                   // 0x3C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C58[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_TPHint_Kyle;                                    // 0x3D0(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKennyAirdrop_BP_C*                    Kenny;                                             // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Done;                                              // 0x400(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2C5A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_ShizaAttackStart;                               // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_FirstBeam;                                      // 0x418(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FQtnStruct_VOLine                     VO_NextBeams;                                      // 0x428(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_TPHint_Butters;                                 // 0x450(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACinematic_ShizaIntro_C*               IntroCutscene;                                     // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnGoal_SewagePlant_Arc5_HankeyBattle_C* GetDefaultObj();

	void GetHankeyWorm(class AActor** HankeyWorm);
	void Get_Intro_Cutscene_Server_Only(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ACinematic_ShizaIntro_C* K2Node_DynamicCast_AsCinematic_Shiza_Intro, bool K2Node_DynamicCast_bSuccess);
	void StartBossCombatMusic(enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess);
	void OnRep_done();
	void VO_Shiza_Attack_Start(bool beam, float LOCAL_RandomFloat, bool CallFunc_IsServer_ReturnValue);
	void GetKennyAirDrop(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AKennyAirdrop_BP_C* K2Node_DynamicCast_AsKenny_Airdrop_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Post_VOConversation_Server_Only();
	void HasTP_(class ABodyPawnPlayer_C* Player, bool* Found_TP, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ABP_GoalPickup_C* CallFunc_Array_Get_Item, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void VO_CheckForHint(class AActor* Player, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasTP__found_TP, bool CallFunc_RandomBool_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void End_Ammo_Icons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_GoalPickup_ShizaCannonAmmo_C* K2Node_DynamicCast_AsBP_Goal_Pickup_Shiza_Cannon_Ammo, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void StartAmmoIcons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ABP_GoalPickup_ShizaCannonAmmo_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void KillShiza(const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsServer_ReturnValue, TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_1, bool K2Node_DynamicCast_bSuccess_1, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1);
	void GetCannons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AAimableCannonPawn_C* K2Node_DynamicCast_AsAimable_Cannon_Pawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetStartingAmmo(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_GoalPickup_ShizaCannonAmmo_C* K2Node_DynamicCast_AsBP_Goal_Pickup_Shiza_Cannon_Ammo, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ReportNewCannonball(class ABP_GoalPickup_ShizaCannonAmmo_C* New_Cannonball);
	void Add_Actor_to_Icon_List(class AActor* Actor_to_add, const TArray<class AActor*>& LOCAL_HoldingArray, bool CallFunc_Array_RemoveItem_ReturnValue);
	void OnRep_HankeyDown();
	void OnRep_CannonHitsRemaining();
	void GetSkirmish(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsOnServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void LOCAL_UITextUpdate(class UGoalHUD_C* GoalHud_LOCAL, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGoalHUD_C* CallFunc_GetUserWidget_ReturnValue);
	void DEBUGONLY_EndGoal();
	void EndGoalSequence(const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UQtnGoal_SewagePlant_Arc5_Exit_C* K2Node_DynamicCast_AsQtn_Goal_Sewage_Plant_Arc_5_Exit, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
	void GetHankey(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_SewagePlant_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Sewage_Plant, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class AQtnPawn> Temp_class_Variable, bool CallFunc_IsValid_ReturnValue, TMap<TSubclassOf<class AQtnPawn>, struct FQtnTrackedSkirmishPawns> CallFunc_GetTrackedPawns_ServerOnly_ReturnValue, const struct FQtnTrackedSkirmishPawns& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1);
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void bindHankeyEvents();
	void WormDeath();
	void UnbindWormEvents();
	void OnGoalSpawned_ServerOnly();
	void DEBUGONLY_SetCanSpawn(bool CanSpawn);
	void DoEndGoalSequence();
	void SetHankeyDown(bool HankeyDown);
	void DelayedStart_ServerOnly();
	void DelayedIntroCutscene_ServerOnly();
	void IntroCutsceneDone_ServerOnly(class UClass* Goal_class, int32 Cutscene_ID);
	void ExecuteUbergraph_QtnGoal_SewagePlant_Arc5_HankeyBattle(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EQtnTurretBossState Temp_byte_Variable, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, enum class EQtnTurretBossState Temp_byte_Variable_1, bool K2Node_Event_canSpawn, bool K2Node_Event_hankeyDown, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class AQtnGameState* CallFunc_WaitForAllExpectedPlayersReady_readyGameState, int32 CallFunc_WaitForAllExpectedPlayersReady_numExpectedPlayers, int32 CallFunc_WaitForAllExpectedPlayersReady_numReadyPlayers, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue_5, class AQtnGameState* CallFunc_WaitForAllExpectedPlayersReady_readyGameState_1, int32 CallFunc_WaitForAllExpectedPlayersReady_numExpectedPlayers_1, int32 CallFunc_WaitForAllExpectedPlayersReady_numReadyPlayers_1, bool CallFunc_IsServer_ReturnValue_6, class UClass* K2Node_CustomEvent_goal_class, int32 K2Node_CustomEvent_Cutscene_ID, bool CallFunc_IsServer_ReturnValue_7, bool Temp_bool_Variable, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, enum class EQtnTurretBossState K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_4);
};

}


