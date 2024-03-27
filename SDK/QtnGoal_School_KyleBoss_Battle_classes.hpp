#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E8 (0x4C8 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_School_KyleBoss_Battle.QtnGoal_School_KyleBoss_Battle_C
class UQtnGoal_School_KyleBoss_Battle_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ACinematicSceneArchetype_BP_C*         CinematicActor;                                    // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CutsceneID;                                        // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DD2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABodyPawnAIKyleBoss_C*                 Kyle;                                              // 0x2F8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSyncedAudioStruct                    LastKyleVOCalled;                                  // 0x300(0x2D)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Phase;                                             // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KyleActive;                                        // 0x334(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALocationMarker_BP_C*                  KyleWaitPoint;                                     // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VO_OnHalfHealth_Played;                            // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_OnHalfHealth;                                   // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        KyleIdleTime;                                      // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DD8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_IntroToKyle;                                    // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_Trampoline_C*>              JumpPads;                                          // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABodyPawnPlayer_C*>             PlayersWhoUsedAJumpPad;                            // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        NumKyleHitsBeforeGentleHint;                       // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class ABodyPawnPlayer_C*, int32>        PlayersToKyleHits;                                 // 0x398(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	struct FQtnStruct_VOLine                     VO_UseJumpPads;                                    // 0x3E8(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_UseJumpPadsUrge;                                // 0x410(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DDB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumKyleHitsBeforeUrgentHint;                       // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StopCheckingFTUXStatus_Boss;                       // 0x43C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DDC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AQtnPlayerPawn*>                ReportedPlayers_Boss;                              // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	struct FQtnStruct_VOLine                     VO_PlayerDown;                                     // 0x450(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DDD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_AllDead;                                        // 0x478(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DDE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_StartPhase;                                     // 0x4A0(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DDF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQtnGoal_School_KyleBoss_Battle_C* GetDefaultObj();

	void All_Expected_Players_Here(bool* Yes, const TArray<class AQtnPlayerPawn*>& LOCAL_ReportedPlayersPool, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, class AQtnPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void Server_Report_Boss_Status(bool NeedFTUXVO, class AQtnPlayerPawn* Player_Reporting, bool CallFunc_All_Expected_Players_Here_Yes, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void VO_JumpPad();
	void GetJumpPads(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_Trampoline_C* K2Node_DynamicCast_AsBP_Trampoline, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void LOCAL_UITextUpdate(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UGoalHUD_C* CallFunc_GetUserWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGoalHUD_C* K2Node_DynamicCast_AsGoal_HUD, bool K2Node_DynamicCast_bSuccess);
	void GetKyleDestination(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void KyleTaunt(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue);
	void CheckReleaseKyle(const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AKyleBossItem_C* K2Node_DynamicCast_AsKyle_Boss_Item, bool K2Node_DynamicCast_bSuccess, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class UKyleBossThornTeleportVerb_C* CallFunc_GetVerb_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void DEBUGONLY_EndGoal();
	void AreAllPlayersDead(bool* All_dead, bool LOCAL_FoundAlive, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnPlayerPawn* CallFunc_Array_Get_Item, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue_1);
	void GetKyle(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABodyPawnAIKyleBoss_C* K2Node_DynamicCast_AsBody_Pawn_AIKyle_Boss, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue);
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsOnServer_ReturnValue);
	void EndGoalSequence(bool CallFunc_IsOnServer_ReturnValue, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void GetCinematicActor(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ACinematicSceneArchetype_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue);
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void OnGoalSpawned_ServerOnly();
	void CutsceneEnded(class UClass* Goal_class, int32 Cutscene_ID);
	void UnbindCutsceneEvent();
	void bindKyleDeathEvents();
	void KyleDeath(class AActor* DeadAI);
	void bindKyleVOEvents();
	void KyleNewPhaseEntered(int32 NewPhaseNumber);
	void Multicast_PlayPhaseVO(const struct FSyncedAudioStruct& VO, bool Inbattle);
	void bindPlayerVOReactions();
	void PlayDeathVO(class ABodyPawnPlayer_C* Dead_Player);
	void bindKyleFirstDamageEvent();
	void KyleFirstHit();
	void OnGoalEnd(bool JustStartedFromLateJoin);
	void VO_server_PlayHealthHealthConversation();
	void BindJumpPadVO();
	void PlayerUsedJumpPad(class AActor* Player);
	void BindPlayerDamageEvent();
	void DamageReceived(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void UnbindAllJumpPadVO();
	void AnyonesFirstBoss_();
	void Multicast_LocalSaveMetRandyasSeen();
	void ExecuteUbergraph_QtnGoal_School_KyleBoss_Battle(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsOnServer_ReturnValue, class UClass* K2Node_CustomEvent_goal_class, int32 K2Node_CustomEvent_Cutscene_ID, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_CustomEvent_deadAI, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue_2, bool CallFunc_IsOnServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, int32 K2Node_CustomEvent_NewPhaseNumber, bool CallFunc_IsOnServer_ReturnValue_4, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FSyncedAudioStruct& K2Node_CustomEvent_VO, bool K2Node_CustomEvent_inBattle, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class ABodyPawnPlayer_C* K2Node_CustomEvent_Dead_Player, bool CallFunc_IsOnServer_ReturnValue_5, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, class AQtnPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, int32 Temp_int_Variable_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_areAllPlayersDead_all_dead, bool CallFunc_IsOnServer_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsOnServer_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, bool K2Node_Event_justStartedFromLateJoin, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsServer_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_GetAttributeValue_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, class ABP_Trampoline_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, class AActor* K2Node_CustomEvent_player, bool CallFunc_Less_IntInt_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsServer_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsServer_ReturnValue_4, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns_1, class AQtnPlayerPawn* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UQtnDamageReceptorComponent* K2Node_CustomEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_CustomEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_CustomEvent_hitReactionInfo, bool K2Node_CustomEvent_isServer, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_4, bool K2Node_DynamicCast_bSuccess_5, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_5, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_3, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_5, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns_2, class AQtnPlayerPawn* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_5, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue_1, int32 Temp_int_Variable_2, bool CallFunc_IsServer_ReturnValue_6, int32 Temp_int_Variable_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_Less_IntInt_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, float Temp_float_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns_3, class AQtnPlayerPawn* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_Less_IntInt_ReturnValue_7, class UQtnReplicatedSaveDataComponent* CallFunc_WaitForReplicationReadiness_readySaveData, class UReplicatedSaveDataComponent_C* K2Node_DynamicCast_AsReplicated_Save_Data_Component, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsServer_ReturnValue_7, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_3, class UMissionDataBag_C* CallFunc_GetCustomDataBag_ReturnValue);
};

}


