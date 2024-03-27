#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E0 (0xED8 - 0xAF8)
// BlueprintGeneratedClass QtnGameStateArchetype.QtnGameStateArchetype_C
class AQtnGameStateArchetype_C : public AQtnGameState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHordeModeManager_C*                   HordeModeManager;                                  // 0xB00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDemoManager_C*                        DemoManager;                                       // 0xB08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCardGalleryProgressComponent_C*       CardGalleryProgressComponent;                      // 0xB10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKennyBossBattleComponent_C*           KennyBossBattleComponent;                          // 0xB18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShizaFightManagerComponent_C*         ShizaFightManagerComponent;                        // 0xB20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTrainingMoment_Component_C*           TrainingMoment_Component;                          // 0xB28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScreenIndicatorManagerComponent_C*    ScreenIndicatorManagerComponent;                   // 0xB30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URulebookManagerComponent_C*           RulebookManagerComponent;                          // 0xB38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCartmanGolemBattleComponent_C*        CartmanGolemBattleComponent;                       // 0xB40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMainStreetComponent_C*                MainStreetComponent;                               // 0xB48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStanBossBattleComponent_C*            StanBossBattleComponent;                           // 0xB50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEntManager_C*                         EntManager;                                        // 0xB58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEnemyBSManagerComponent_C*            EnemyBSManagerComponent;                           // 0xB60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBattlefieldTrackingComponent_C*       BattlefieldTrackingComponent;                      // 0xB68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorldBullshitManager_C*               WorldBullshitManager;                              // 0xB70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMissionManagerComponent_C*            MissionManagerComponent;                           // 0xB78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0xB80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SessionCreated;                                    // 0xB88(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FReplicatedArcDepthInfo               R_ArcMapInfo;                                      // 0xB98(0x14)(Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	uint8                                        Pad_316B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RandomStreamInt;                                   // 0xBB0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_316C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            RandomStreamInitialized;                           // 0xBB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  Label_PublicSession;                               // 0xBC8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Label_FriendsOnlySession;                          // 0xBE0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                StringConcat;                                      // 0xBF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            MissionReady;                                      // 0xC08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<TSoftClassPtr<class AScriptedSkeletalPhoneActor_C>> AlwaysPresentPhoneActorClasses;                    // 0xC18(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FQtnPhoneActorArray> MissionSpecificPhoneActorClasses;                  // 0xC28(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TSoftClassPtr<class AScriptedSkeletalPhoneActor_C>, float> PhoneActorWeightsMap;                              // 0xC78(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FQtnGameplayTagArray> MissionCommentaryMuteLists;                        // 0xCC8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag> MissionEnemyLeaderSpeakers;                        // 0xD18(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AScriptedSkeletalPhoneActor_C*> R_phoneActors;                                     // 0xD68(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, RepNotify)
	class ALevelSequencingActor_C*               LevelSequencingActor;                              // 0xD78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxUnlockedArcAllPlayers_ServerOnly;               // 0xD80(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_316D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ArcMapUpdated;                                     // 0xD88(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FQtnStruct_ProgressPin>        CompletedGoalsStructs;                             // 0xD98(0x10)(Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance, RepNotify)
	TArray<struct FQtnStruct_ProgressPin>        PotentialGoalsStructs;                             // 0xDA8(0x10)(Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance, RepNotify)
	FMulticastInlineDelegateProperty_            GoalPinsUpdated;                                   // 0xDB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class USkeletalMesh*>                 PreloadedAllyBotMeshes;                            // 0xDC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        beginPlayTime;                                     // 0xDD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LateJoinTimeThreshold;                             // 0xDDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        R_MapEntryCountdownGlobal;                         // 0xDE0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_316E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnGlobalMapEntryTimerChangedEvent;                 // 0xDE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ATribunal_Manager_Actor_C*             TribunalManager;                                   // 0xDF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            BossDeathBegin;                                    // 0xE00(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABodyPawnAI_C*                         PendingBossPawnDeath;                              // 0xE10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BossDeathDuration;                                 // 0xE18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_316F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          bossDeathTimerHandle;                              // 0xE20(0x8)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            BossDeathEnd;                                      // 0xE28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        BossDeathTimeDilation;                             // 0xE38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3170[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            EventOnLootContainerOpened;                        // 0xE40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class ACannonTarget_BP_C*>            CannonTargets;                                     // 0xE50(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACullingVolume_C*>              CullingVolumes;                                    // 0xE60(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ACutsceneManagerActor_C*               CutsceneManagerActor;                              // 0xE70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AHealingTotem_C*>               RegisteredHealingTotems;                           // 0xE78(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)
	float                                        LastHealingTotemUnregisterTime;                    // 0xE88(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3173[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BotEnterWorldEvent;                                // 0xE90(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            BotExitWorldEvent;                                 // 0xEA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         R_IsHordeMode;                                     // 0xEB0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3174[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            IsHordeModeUpdated;                                // 0xEB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPawnDeath;                                       // 0xEC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class AQtnGameStateArchetype_C* GetDefaultObj();

	void OnRep_r_IsHordeMode();
	void CanAllyBotThinkAboutHealing(bool* Yes, float L_timeSinceLastHealingTotemUnregister, enum class EQtnDifficulty Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, enum class EQtnDifficulty CallFunc_GetDifficulty_ReturnValue, float K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetQtnTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void UnRegisterHealingTotem(class AHealingTotem_C* HealingTotem, float CallFunc_GetQtnTimeSeconds_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void RegisterHealingTotem(class AHealingTotem_C* HealingTotem, int32 CallFunc_Array_Add_ReturnValue);
	void RegisterCullingVolume(class ACullingVolume_C* CullingVolume, bool Adding, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void RegisterCannonTarget(class ACannonTarget_BP_C* CannonTargetBP, bool Adding, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void UnregisterSpawnedLootContainer_ServerOnly(class ALoot_Container_Parent_C* LootContainer);
	void RegisterSpawnedLootContainer_ServerOnly(class ALoot_Container_Parent_C* LootContainer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void HandleDeadBossVisibilityChanged(bool CurrentVisibility);
	void HandleDeadBossDestroyed(class AActor* DestroyedActor, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void HandleBossDeathTimerFinish(bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void RegisterTribunalManager(class ATribunal_Manager_Actor_C* TribunalManager, bool CallFunc_IsValid_ReturnValue);
	void OnRep_r_ArcMapInfo();
	void SetMapEntryCountdownGlobally_ServerOnly(int32 Value, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void OnRep_r_MapEntryCountdownGlobal();
	void GetAveragePlayerPerkLevel(float* AveragePlayerPerkLevel, float Local_averagePlayerPerkLevel, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_CalculatePlayerLevelFromPerks_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, class UQtnDebugWrapper* LocalDebugWrapper, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess);
	void MuteCommentarySpeakers(TArray<struct FGameplayTag>& MuteSpeakers, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnRep_r_phoneActors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AScriptedSkeletalPhoneActor_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Add_Screen_Indicator_Local_Only(const struct FIndicatorData& IndicatorStruct, bool Adding, class UScreenIndicator_C* Indicator, class AActor* IndicatorActor, class UScreenIndicator_C** IndicatorOut, class UScreenIndicator_C* CallFunc_CreateIndicator_LocalOnly_Indicator_Ref);
	void OnRep_PotentialGoalsStructs();
	void OnRep_CompletedGoalsStructs();
	void Set_Max_Unlocked_Arc_All_Players_Server_Only(int32 MaxUnlockedArc, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Max_ReturnValue);
	void GetMaxUnlockedDayAllPlayers_ServerOnly(int32* MaxUnlockedDay);
	void DoesPhoneActorExist(class UClass* PhoneActorClass, bool* PhoneActorExists, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AScriptedSkeletalPhoneActor_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void SpawnAndAddPhoneActors_ServerOnly(TArray<TSoftClassPtr<class AScriptedSkeletalPhoneActor_C>>& PhoneActorClasses, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TSoftClassPtr<class AScriptedSkeletalPhoneActor_C> CallFunc_Array_Get_Item, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_DoesPhoneActorExist_phoneActorExists, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AScriptedSkeletalPhoneActor_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void OnRep_randomStream();
	void TestSession();
	void ReceiveBeginPlay();
	void ShowEntryUI();
	void OnSetScriptedVOScene_ServerOnly(const struct FGameplayTag& ScriptedVOScene);
	void Spawn_Always_Present_Phone_Actors_Server_Only();
	void ServerSetPlayerMaxUnlockedDay(int32 MaxUnlockedDay);
	void Combat_Event_BP(bool CombatBeginning);
	void ReadyForGameplay(bool IsServer);
	void OnPlayerEnterWorldEvent_ServerOnly(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void OnBossDeath(class ABodyPawnAI_C* bossPawn);
	void OnLootContainerOpened(class ALoot_Container_Parent_C* LootContainer, class AQtnPawn* Opener);
	void ExecuteUbergraph_QtnGameStateArchetype(int32 EntryPoint, class ALoot_Container_Parent_C* K2Node_CustomEvent_lootContainer, class AQtnPawn* K2Node_CustomEvent_opener, bool CallFunc_IsServer_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_Event_scriptedVOScene, const struct FQtnPhoneActorArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, int32 K2Node_CustomEvent_maxUnlockedDay, bool K2Node_CustomEvent_combatBeginning, int32 CallFunc_Max_ReturnValue, class UQtnOutcomeTrackingSubsystem* CallFunc_GetOutcomeTrackingSubsystem_ReturnValue, const struct FQtnGameplayTagArray& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FGameplayTag& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, enum class EQtnOutputYesNoEnum CallFunc_DoesThisMapSpawnBodiesBP_outputPin, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_isServer, TArray<class USkeletalMesh*>& CallFunc_PreloadDefaultMeshesForClass_ReturnValue, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, int32 CallFunc_CalculatePlayerLevelFromPerks_ReturnValue, float CallFunc_GetQtnTimeSeconds_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetQtnTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetAveragePlayerPerkLevel_averagePlayerPerkLevel, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class ABodyPawnAI_C* K2Node_CustomEvent_bossPawn, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_HasAuthority_ReturnValue);
	void OnPawnDeath__DelegateSignature(class AQtnPawn* DeadPawn, class UQtnVerb* SourceVerb, class AQtnPawn* Culprit);
	void IsHordeModeUpdated__DelegateSignature();
	void BotExitWorldEvent__DelegateSignature(class ABodyPawnAIAllyBot_C* ExitingBotBody);
	void BotEnterWorldEvent__DelegateSignature(class ABodyPawnAIAllyBot_C* EnteringBotBody);
	void EventOnLootContainerOpened__DelegateSignature(class ALoot_Container_Parent_C* LootContainer, class AQtnPawn* Opener);
	void BossDeathEnd__DelegateSignature(class AQtnPawn* bossPawn);
	void BossDeathBegin__DelegateSignature(class AQtnPawn* bossPawn);
	void OnGlobalMapEntryTimerChangedEvent__DelegateSignature(int32 TimerValue);
	void GoalPinsUpdated__DelegateSignature();
	void ArcMapUpdated__DelegateSignature();
	void MissionReady__DelegateSignature();
	void RandomStreamInitialized__DelegateSignature();
	void SessionCreated__DelegateSignature();
};

}


