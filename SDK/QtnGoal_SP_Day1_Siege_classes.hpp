#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x238 (0x518 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_SP_Day1_Siege.QtnGoal_SP_Day1_Siege_C
class UQtnGoal_SP_Day1_Siege_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ACinematicSceneArchetype_BP_C*         CinematicActor;                                    // 0x2E8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CutsceneID;                                        // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WavesRemaining;                                    // 0x2F4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int32                                        WavesTotal;                                        // 0x2F8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CompletedWaves;                                    // 0x2FC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LinePlaying;                                       // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ARandy_Actor_BP_C*                     RandyActor;                                        // 0x308(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasPlayedPlayerDownLine;                           // 0x310(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_WaveAnnouncements;                              // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_RandyStructsPlayed;                             // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FQtnStruct_VOLine                     VO_PlayerDownLines;                                // 0x338(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         SkirmishConcluded;                                 // 0x360(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  VictoryPauseGoalDetail;                            // 0x368(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  VictoryText;                                       // 0x380(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_UFOAnnounce_Wave3;                              // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_LedgeAnnounce_Wave2;                            // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FQtnStruct_VOLine                     VO_FinalWave;                                      // 0x3B8(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  WavesPrefix;                                       // 0x3E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Detail_FinalWave;                                  // 0x3F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        RemainingAIDisplayCount;                           // 0x410(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Detail_EnemiesRemaining;                           // 0x418(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Detail_LockReady;                                  // 0x430(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         R_lockReady;                                       // 0x448(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_34C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGateLock_BP_C*                        R_GateLock;                                        // 0x450(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGenericBlockerMist_BP_C*              BacktrackBlocker;                                  // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_BattleStart;                                    // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FQtnStruct_VOLine                     VO_GateReminder;                                   // 0x470(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeToRemindPlayersAboutGate;                      // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_SiegeComplete;                                  // 0x4A0(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Title_Combat;                                      // 0x4C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         R_sceneComplete;                                   // 0x4E0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_34CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Title_PreCombat;                                   // 0x4E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Detail_PreCombat;                                  // 0x500(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UQtnGoal_SP_Day1_Siege_C* GetDefaultObj();

	void OnRep_r_sceneComplete();
	void VO_Remind_Gate_Server_Only(enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue);
	void Get_Backtrack_Blocker_Server_Only(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class AGenericBlockerMist_BP_C* K2Node_DynamicCast_AsGeneric_Blocker_Mist_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
	void GetGateLock_ServerOnly(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AGateLock_BP_C* K2Node_DynamicCast_AsGate_Lock_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void OnRep_lockReady();
	void OnRep_RemainingAIDisplayCount();
	void CheckForMissingIcons(const TArray<class ABodyPawnAI_C*>& LOCAL_MissingPawns, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class AQtnPawn*>& CallFunc_GetTrackedLivingPawns_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABodyPawnAI_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Post_VOConversation_Server_Only();
	void Force_Drop_All_Cannonballs(int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, bool CallFunc_IsServer_ReturnValue, class AQtnPlayerPawn* CallFunc_Array_Get_Item, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UQtnCarryComponent*>& CallFunc_GetManagedCarryComponents_ReturnValue, class UQtnCarryComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class ABP_Cannonball_C* K2Node_DynamicCast_AsBP_Cannonball, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue);
	void DEBUGONLY_EndGoal();
	void GetRandomUnusedRandyLine(bool On_Final_Wave, struct FQtnStruct_VOLine* Linestruct, bool* Success, const struct FQtnStruct_VOLine& LocalStructToPlay, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void OnRep_wavesRemaining();
	void ApplyIcons_toSkirmishAIs(class AQtnSkirmish* Skirmish, const TArray<class AQtnPawn*>& LOCAL_pawnsToTrack, const TArray<class AQtnPawn*>& NewLocalVar_0, TMap<TSubclassOf<class AQtnPawn>, struct FQtnTrackedSkirmishPawns> CallFunc_GetTrackedPawns_ServerOnly_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<TSubclassOf<class AQtnPawn>>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UClass* CallFunc_Array_Get_Item, const struct FQtnTrackedSkirmishPawns& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void LOCAL_UITextUpdate();
	void LOCAL_Update_Goal_Detail(const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, int32 WavesCompleted, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void GetCinematicActor(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsOnServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ACinematicSceneArchetype_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void PostCutsceneStart();
	void Multicast_refreshUI();
	void CutsceneEnded(class UClass* Goal_class, int32 Cutscene_ID);
	void UnbindCutsceneEvent();
	void EndGoalSequence();
	void OnGoalSpawned_ServerOnly();
	void bindEventsToAIDeath(class ABodyPawnAI_C* AI_to_bind);
	void RemoveDeadAIIcon(class AActor* DeadAI);
	void Multicast_UpdateGoalIcons();
	void Multicast_UpdateText();
	void Multicast_RandyVO(class USoundCue* Cue);
	void bindPlayerVOReactions();
	void PlayDeathVO(class ABodyPawnPlayer_C* Dead_Player);
	void UnbindPlayerDeathVOEvent();
	void Multicast_EndSiegePresentation();
	void Server_DelayFinished(class FName Delay_ID_Tag);
	void UnbindIconDeathEvent(class ABodyPawnAI_C* AI);
	void DEBUGONLY_EndSequenceNoDelay();
	void PlayWaveAnnouncement(const struct FQtnStruct_VOLine& Chosen_Randy_Line);
	void Multicast_WaveAnnouncementVFX();
	void DelayAndConfirmDeadAIs();
	void EndGoalStartExitGoal_ServerOnly();
	void bindLockDoneEvent_ServerOnly();
	void GateLockOpen_ServerOnly(class AGateLock_BP_C* Lock);
	void ExecuteUbergraph_QtnGoal_SP_Day1_Siege(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsOnServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* K2Node_CustomEvent_goal_class, int32 K2Node_CustomEvent_Cutscene_ID, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UClass* CallFunc_GetObjectClass_ReturnValue_1, class ABodyPawnAI_C* K2Node_CustomEvent_AI_to_bind, bool CallFunc_IsOnServer_ReturnValue_2, class AActor* K2Node_CustomEvent_deadAI, bool CallFunc_IsOnServer_ReturnValue_3, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, class ABodyPawn_Ent_C* K2Node_DynamicCast_AsBody_Pawn_Ent, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class USoundCue* K2Node_CustomEvent_cue, class ABodyPawnPlayer_C* K2Node_CustomEvent_Dead_Player, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, bool CallFunc_IsOnServer_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_5, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns_1, bool CallFunc_IsOnServer_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_2, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_3, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Array_Index_Variable, class AQtnPlayerPawn* CallFunc_Array_Get_Item_1, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_3, bool K2Node_DynamicCast_bSuccess_6, class FName K2Node_Event_Delay_ID_Tag, bool CallFunc_IsOnServer_ReturnValue_7, bool CallFunc_EqualEqual_NameName_ReturnValue, class ABodyPawnAI_C* K2Node_CustomEvent_AI, bool CallFunc_IsOnServer_ReturnValue_8, bool CallFunc_IsOnServer_ReturnValue_9, bool CallFunc_IsServer_ReturnValue, const struct FQtnStruct_VOLine& K2Node_CustomEvent_chosen_Randy_Line, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsServer_ReturnValue_1, class AQtnPlayerPawn* CallFunc_Array_Get_Item_2, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_4, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_3, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_4, TArray<struct FQtnStruct_VOLine>& K2Node_MakeArray_Array, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess_4, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsServer_ReturnValue_2, TArray<class AQtnPawn*>& CallFunc_GetTrackedLivingPawns_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsOnServer_ReturnValue_10, bool CallFunc_IsServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class AGateLock_BP_C* K2Node_CustomEvent_Lock, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Loop_Counter_Variable_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsValid_ReturnValue_5);
};

}


