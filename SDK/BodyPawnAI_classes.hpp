#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E8 (0x15D0 - 0x13E8)
// BlueprintGeneratedClass BodyPawnAI.BodyPawnAI_C
class ABodyPawnAI_C : public ABodyPawnBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x13E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     BossBeamFX;                                        // 0x13F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULootSpawnComponentArchetype_C*        LootSpawnComponent;                                // 0x13F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnDebugDisplayComponent*             QtnDebugDisplay;                                   // 0x1400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            AIDeath;                                           // 0x1408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         BossHealthBar;                                     // 0x1418(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6F52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAIHealth_Widget_C*                    HealthBar;                                         // 0x1420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSummonableCharacter;                             // 0x1428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasPriorUpgrades;                                  // 0x1429(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6F53[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          EnemyTypeTag;                                      // 0x142C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         DropWeaponsOnDeath;                                // 0x1434(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6F54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          GracefulDespawnTimerHandle;                        // 0x1438(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        GracefulDespawnDuration;                           // 0x1440(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnScreen_Texture                     OnscreenIconData;                                  // 0x1448(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               IconOnscreen;                                      // 0x1470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOffScreen_Texture                    OffscreenIconData;                                 // 0x1478(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               IconOffscreen;                                     // 0x1498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIndicatorData                        Indicator_Data;                                    // 0x14A0(0x129)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_6F56[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABodyPawnAI_C* GetDefaultObj();

	void GetIndicatorData(struct FIndicatorData* IndicatorData);
	void CreateIndicatorData();
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void AwardDefeatUnlocks(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class AQtnPawn* CallFunc_GetLastDamagingCulprit_ReturnValue, bool CallFunc_IsBoss_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, class AQtnPawn* CallFunc_GetLastDamagingCulprit_ReturnValue_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsPlayerControlled_ReturnValue_1, class AQtnPawn* CallFunc_GetLastDamagingCulprit_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_2, bool CallFunc_IsPlayerControlled_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_3, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_4, const struct FQtnDamageInfo& CallFunc_GetLastDamageInfo_ReturnValue, class AQtnPawn* CallFunc_GetLastDamagingCulprit_ReturnValue_3, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsMeleeWeaponVerb_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasStatusEffect_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsPlayerControlled_ReturnValue_3, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_5, class AQtnPawn* CallFunc_GetLastDamagingCulprit_ReturnValue_4, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_4, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue_2, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_3, class UStatusEffect_MoonShoes_C* CallFunc_GetStatusEffect_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_6, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_6, bool CallFunc_IsPlayerControlled_ReturnValue_5);
	void ToggleBossBeam(bool WantOn, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void DropWeaponOnDeath(class AQtnItem* ItemToDrop, const struct FQtnDamageInfo& CallFunc_GetLastDamageInfo_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_rangedWeapon, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_meleeWeapon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void CanAcceptEnemyUpgrades(bool* Accept, bool CallFunc_IsBoss_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleResurrection_ServerOnly();
	void ServerUnregisterSummonableCharacter(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
	void ServerRegisterSummonableCharacter(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess);
	void HandleDeath(class AQtnItem* ItemToDrop, float Delay_Amount, float Ring_Offset, float Center_Radius, bool CallFunc_IsBoss_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_SpawnLoot_ServerOnly_secondsToFinishSpawning, bool CallFunc_IsServer_ReturnValue);
	void UserConstructionScript(enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess);
	void BndEvt__QtnDebugDisplay_K2Node_ComponentBoundEvent_1_QtnDebugDisplayEvent__DelegateSignature(class UQtnDebugWrapper* DebugWrapper);
	void PrepForRecycling_ServerOnly();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnQtnReadyForGameplay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnOutgoingDamage_Event_0(class AActor* DamagedActor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void ScheduleGracefulDespawn_ServerOnly(float GracePeriod);
	void OnGracefulDespawn_ServerOnly();
	void CancelGracefulDespawn_ServerOnly();
	void OnCutsceneEvent(bool IsCutsceneActive, bool DoWorldCleanup);
	void ExecuteUbergraph_BodyPawnAI(int32 EntryPoint, bool CallFunc_IsMarkedForCleanup_ReturnValue, enum class EQtnPawnLOD CallFunc_GetPawnLOD_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue, TArray<class UQtnStatusEffect*>& CallFunc_GetAllStatusEffects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQtnDebugWrapper* K2Node_ComponentBoundEvent_debugWrapper, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FQtnEntityTuningDataRow& CallFunc_GetEntityTuningData_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_2, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UWorld* CallFunc_GetExpectedWorld_ReturnValue, bool CallFunc_IsEndPlayShuttingDown_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_CanAcceptEnemyUpgrades_accept, bool CallFunc_HasAuthority_ReturnValue_1, class AActor* K2Node_Event_damagedActor, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, const struct FQtnHitReactionInfo& K2Node_Event_hitReactionInfo, bool K2Node_Event_isServer, bool CallFunc_BooleanAND_ReturnValue_1, class UStatusEffect_Cheesed_C* CallFunc_GetStatusEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_CustomEvent_gracePeriod, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, bool K2Node_CustomEvent_isCutsceneActive, bool K2Node_CustomEvent_doWorldCleanup, class UQtnEnemyUpgradeHandlerSubsystem* CallFunc_GetEnemyUpgradeHandlerSubsystem_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void AIDeath__DelegateSignature(class AActor* DeadAI);
};

}


