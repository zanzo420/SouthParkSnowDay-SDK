#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2B0 - 0x260)
// BlueprintGeneratedClass DevCheatsArchetype.DevCheatsArchetype_C
class UDevCheatsArchetype_C : public UQtnDevCheatsComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                LocalLastSpawnedActorClass;                        // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         R_InfiniteCannons;                                 // 0x270(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5072[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>> AllEnemyBullshits;                                 // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftClassPtr<class UQtn_CheatVerb_Archetype_C>> AllPlayerBullshits;                                // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          GrenadeWeaponType;                                 // 0x298(0x8)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        VaultIndex;                                        // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5073[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnInventoryComponent*                BodyInventory;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDevCheatsArchetype_C* GetDefaultObj();

	void TestLookAtCam_LocalOnly(class ULookAtPerceptionComponent_C* L_enemyBSPerception, class AActor* L_lookAtTarget, class AQtnPlayerPawnArchetype_C* CallFunc_GetOwningPlayerPawn_owningPlayerPawn, class AQtnBodyPawn* CallFunc_GetOriginalBodyPawn_ReturnValue, class AQtnPlayerControllerArchetype_C* CallFunc_GetOwningPlayerController_owningPlayerController, class AQtnPlayerUI* CallFunc_GetPlayerUI_ReturnValue, class AActor* CallFunc_GetDebugTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Set_Enemy_Bullshits(class UClass* BS_Type, int32 Remaining_Bullshits, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void GetOwningPlayerController(class AQtnPlayerControllerArchetype_C** OwningPlayerController, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerController* CallFunc_GetQtnPlayerController_ReturnValue, class AQtnPlayerControllerArchetype_C* K2Node_DynamicCast_AsQtn_Player_Controller_Archetype, bool K2Node_DynamicCast_bSuccess_1);
	void GetOwningPlayerPawn(class AQtnPlayerPawnArchetype_C** OwningPlayerPawn, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess);
	void AddCheatVerbFromDebug(class UClass* CheatVerbClass, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnPlayerPawn* K2Node_DynamicCast_AsQtn_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetOriginalBodyPawn_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UQtn_CheatVerb_Archetype_C* CallFunc_AddVerb_ServerOnly_ReturnValue);
	void Spawn_Actor_from_Debug_Server_Only(class UClass*& ActorClass, int32& Count, float MinZ, class AQtnPlayerPawn* PlayerPawn, const struct FTransform& SpawnTransform, int32 RemainingCount, int32 Temp_int_Variable, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_SnapToGround_foundGround, const struct FVector& CallFunc_SnapToGround_hitNormal, enum class EPhysicalSurface CallFunc_SnapToGround_physicalSurface, const struct FVector& CallFunc_SnapToGround_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, class AActor* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnPlayerPawn* K2Node_DynamicCast_AsQtn_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue);
	void QtnHorde_LoadSnowmansLand();
	void QtnHorde_LoadBoomBridge();
	void QtnHorde_LoadCitySquare();
	void QtnHorde_LoadIsland();
	void QtnHorde_LoadTwoFold();
	void QtnHorde_LoadTrainstation();
	void ServerSpawnActor(class UClass* ActorClass, int32 Count);
	void LocalSpawnActor(class UClass*& ActorClass, int32& Count);
	void QtnSpawnAgain();
	void OnSpawnNPC_ServerOnly(class AQtnBodyPawn* SpawnedNPC);
	void LocalAddCheatVerb(class UClass*& CheatVerbClass);
	void ServerAddCheatVerb(class UClass* CheatVerbClass);
	void ServerInduceEnemyCheatOnBody(class AQtnBodyPawn* AiBody, class UClass* CheatVerbClass);
	void QtnForceEnemyBullshitNerfed();
	void QtnForceEnemyBullshitProjectileKids();
	void QtnForceEnemyBullshitBubbleShield();
	void QtnForceEnemyBullshitDoOver();
	void QtnForceEnemyBullshitVampirism();
	void QtnForceEnemyBullshitHailStorm();
	void QtnForceEnemyBullshitLaserSword();
	void QtnForceEnemyBullshitSuperSize();
	void QtnForceEnemyBullshitStupidProjectiles();
	void QtnForceEnemyBullshitTraps();
	void QtnToggleBullshitDebugInfo();
	void QtnAdvanceCartmanBossPhase();
	void QtnRequestCartmanBullshitDoOver();
	void QtnRequestCartmanBullshitNerfed();
	void QtnRequestCartmanBullshitBubbleShield();
	void QtnRequestCartmanBullshitSuperSize();
	void QtnShizaCheat_NextPhase();
	void QtnShizaCheat_Cannon_();
	void QtnShizaCheat_Recovery_();
	void QtnShizaCheat_UseExperimentalFightLogic();
	void QtnShizaCheat_RequestVerb(int32 VerbIndex);
	void QtnSkipHankeyCannon();
	void QtnToggleInfiniteCannons();
	void ServerToggleInfiniteCannons();
	void ServerAddEnemyUpgrade(class UClass* EnemyUpgradeClass);
	void QtnFTUXForceCompletion();
	void QtnLookAt();
	void QtnSetDecalsSpawnRadius(float Radius);
	void QtnToggleDecalsDebug();
	void QtnSetFartCloudOverlappedThreshold(float OverlappedThreshold);
	void QtnToggleFartCloudOverlappedDebug();
	void QtnSetFartCloudMergeTriggerThreshold(float TriggerThreshold);
	void QtnRememberAllCards();
	void QtnForgetAllCards();
	void QtnRememberRandomCards();
	void QtnEquipWeaponGrenadier();
	void QtnLevelSocialHub();
	void QtnLevelUpgradeTester();
	void QtnRestartCurrentLevel();
	void ExecuteUbergraph_DevCheatsArchetype(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_5, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UClass* K2Node_CustomEvent_actorClass_1, int32 K2Node_CustomEvent_count_1, bool K2Node_SwitchEnum_CmpSuccess, class UClass* K2Node_CustomEvent_actorClass, int32 K2Node_CustomEvent_count, class AQtnBodyPawn* K2Node_Event_spawnedNPC, bool CallFunc_IsValidClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* K2Node_CustomEvent_cheatVerbClass_2, class UClass* K2Node_CustomEvent_cheatVerbClass_1, class AQtnBodyPawn* K2Node_CustomEvent_aiBody, class UClass* K2Node_CustomEvent_cheatVerbClass, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_1, bool K2Node_ClassDynamicCast_bSuccess_1, class UClass* CallFunc_SyncLoadClass_ReturnValue_2, class UClass* CallFunc_SyncLoadClass_ReturnValue_3, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_2, bool K2Node_ClassDynamicCast_bSuccess_2, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_3, bool K2Node_ClassDynamicCast_bSuccess_3, class UClass* CallFunc_SyncLoadClass_ReturnValue_4, class UClass* CallFunc_SyncLoadClass_ReturnValue_5, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_4, bool K2Node_ClassDynamicCast_bSuccess_4, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_5, bool K2Node_ClassDynamicCast_bSuccess_5, class UClass* CallFunc_SyncLoadClass_ReturnValue_6, class UClass* CallFunc_SyncLoadClass_ReturnValue_7, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_6, bool K2Node_ClassDynamicCast_bSuccess_6, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_7, bool K2Node_ClassDynamicCast_bSuccess_7, class UClass* CallFunc_SyncLoadClass_ReturnValue_8, class UClass* CallFunc_SyncLoadClass_ReturnValue_9, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_8, bool K2Node_ClassDynamicCast_bSuccess_8, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base_9, bool K2Node_ClassDynamicCast_bSuccess_9, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable_5, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Add_IntInt_ReturnValue_5, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C> K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss, bool K2Node_DynamicCast_bSuccess_1, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors_1, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors_2, class AActor* CallFunc_Array_Get_Item_1, class AActor* CallFunc_Array_Get_Item_2, TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C> K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C> K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_2, bool K2Node_DynamicCast_bSuccess_3, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors_3, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors_4, class AActor* CallFunc_Array_Get_Item_3, class AActor* CallFunc_Array_Get_Item_4, TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C> K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_3, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IInterface_BodyPawn_CartmanBoss_C> K2Node_DynamicCast_AsInterface_Body_Pawn_Cartman_Boss_4, bool K2Node_DynamicCast_bSuccess_5, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue_1, class AActor* CallFunc_GetActorOfClass_ReturnValue, class AActor* CallFunc_GetActorOfClass_ReturnValue_1, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetActorOfClass_ReturnValue_2, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_2, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetActorOfClass_ReturnValue_3, class AActor* CallFunc_GetActorOfClass_ReturnValue_4, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_3, bool K2Node_DynamicCast_bSuccess_9, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_4, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, int32 K2Node_CustomEvent_VerbIndex, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_SewagePlant_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Sewage_Plant, bool K2Node_DynamicCast_bSuccess_11, TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle, bool K2Node_DynamicCast_bSuccess_12, TScriptInterface<class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C> K2Node_DynamicCast_AsInterface_Qtn_Goal_Sewage_Plant_Arc_4_Hankey_Battle_1, bool K2Node_DynamicCast_bSuccess_13, class AActor* CallFunc_GetHankeyWorm_hankeyWorm, TScriptInterface<class IInterface_QtnPawn_ShizaHulud_C> K2Node_DynamicCast_AsInterface_Qtn_Pawn_Shiza_Hulud_5, bool K2Node_DynamicCast_bSuccess_14, bool CallFunc_IsValid_ReturnValue_5, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_2, class UClass* K2Node_CustomEvent_enemyUpgradeClass, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UQtnEnemyUpgradeHandlerSubsystem* CallFunc_GetEnemyUpgradeHandlerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class AQtnPlayerControllerArchetype_C* CallFunc_GetOwningPlayerController_owningPlayerController, const class FString& CallFunc_MakeLiteralString_ReturnValue, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_2, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, float K2Node_CustomEvent_radius, int32 Temp_int_Array_Index_Variable_6, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype, bool K2Node_DynamicCast_bSuccess_15, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, float K2Node_CustomEvent_OverlappedThreshold, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_1, bool K2Node_DynamicCast_bSuccess_16, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_2, bool K2Node_DynamicCast_bSuccess_17, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_3, float K2Node_CustomEvent_TriggerThreshold, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_3, bool K2Node_DynamicCast_bSuccess_18, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_4, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_4, bool K2Node_DynamicCast_bSuccess_19, bool CallFunc_Not_PreBool_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_6, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_3, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_1, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_1, int32 CallFunc_Add_IntInt_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess_4, class USocialHubDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin_1, class FName CallFunc_Array_Get_Item_5, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_2, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_2, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_2, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_2, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_6, bool CallFunc_Less_IntInt_ReturnValue, class USocialHubDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_Array_Get_Item_6, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin_2, bool K2Node_SwitchEnum_CmpSuccess_7, TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C> CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_3, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_3, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_3, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_3, bool K2Node_SwitchEnum_CmpSuccess_8, class USocialHubDataBag_C* CallFunc_GetCustomDataBag_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_RandomBool_ReturnValue, TSoftClassPtr<class UQtn_CheatVerb_Archetype_C> CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_RandomBool_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, bool CallFunc_RandomBool_ReturnValue_2, class FName CallFunc_Array_Get_Item_9, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Array_AddUnique_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_3, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, class FName CallFunc_Array_Get_Item_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_Array_AddUnique_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_RandomBool_ReturnValue_3, class AQtnPlayerControllerArchetype_C* CallFunc_GetOwningPlayerController_owningPlayerController_1, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_4, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_4, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_4, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_4, class AQtnPlayerControllerArchetype_C* CallFunc_GetOwningPlayerController_owningPlayerController_2, bool K2Node_SwitchEnum_CmpSuccess_9, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag, bool K2Node_DynamicCast_bSuccess_20, class AQtnPlayerPawnArchetype_C* CallFunc_GetOwningPlayerPawn_owningPlayerPawn, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FQtnItemData& CallFunc_Array_Get_Item_11, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<struct FQtnItemData>& CallFunc_GetVaultWeapons_ReturnValue, bool CallFunc_IsWeaponRanged_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
};

}

