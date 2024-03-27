#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15B (0xC04 - 0xAA9)
// BlueprintGeneratedClass Verb_Grenade.Verb_Grenade_C
class UVerb_Grenade_C : public UVerb_Ranged_Archetype_C
{
public:
	uint8                                        Pad_56A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AGrenadier_C*                          OwnerGrenadier;                                    // 0xAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnProjectile*                        ProjectileInstance;                                // 0xAC0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CachedStartPosition;                               // 0xAC8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Arc;                                          // 0xAD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SticksToWalls;                                     // 0xAD5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56A1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpeedCached;                                       // 0xAD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChargeAmount;                                      // 0xADC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CachedVelocity;                                    // 0xAE0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnDangerVolume*                      DangerCapsuleForAllies_ServerOnly;                 // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRangedFloat                       DangerCapsuleRadii;                                // 0xAF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        DangerCapsuleLength;                               // 0xB00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VolumeDamageRadius;                                // 0xB04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SticksToEnemies;                                   // 0xB08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageOverTime;                                    // 0xB0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectDuration;                                    // 0xB10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PitchFollowsCamera;                                // 0xB14(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeToExplode;                                     // 0xB18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGrenade_UpgradeArchetype_C*>   GrenadeUpdateSlots;                                // 0xB20(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FVector                               Knockback;                                         // 0xB30(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionRadiusMultiplier;                         // 0xB3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CheesyPuffChance;                                  // 0xB40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Knockdown_Duration;                                // 0xB44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Heavy_Knockdown;                                   // 0xB48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Knockdown;                                         // 0xB49(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            GrenadeVFXDataTable;                               // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_GrenadeVFX>                 QtnFXActors;                                       // 0xB58(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         VFXInit;                                           // 0xB68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UClass*, struct FS_GrenadeVFX>    FXCached;                                          // 0xB70(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        MinTimeToExplode;                                  // 0xBC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasProjectileInstanceActive;                       // 0xBC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EQtnStatChannel                   Explosion_Damage_Table_Channel;                    // 0xBC5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeoutForAutoExplode;                             // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           RangeCurve;                                        // 0xBD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           SpeedCurve;                                        // 0xBD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           GravityCurve;                                      // 0xBE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   DataTableRow;                                      // 0xBE8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector                               BodyBasedMuzzle;                                   // 0xBF8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVerb_Grenade_C* GetDefaultObj();

	float GetLocalCurrentSpeed(float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void GetLocalAimingParameters(float Speed, struct FTwoVectors* PositionVelocity, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FQtnCameraVerbAim& CallFunc_GetVerbLocalProjectileAim_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTwoVectors& K2Node_MakeStruct_TwoVectors, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FQtnCameraVerbAim& CallFunc_GetVerbLocalProjectileAimTarget_ReturnValue, const struct FTwoVectors& K2Node_MakeStruct_TwoVectors_1);
	void Spawn_Projectile_from_Local();
	void DamageMultiplierFromUpgrades(class AActor* Target, float* Mult, float Multipliers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UGrenade_UpgradeArchetype_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_DamageMultiplicator_Multiplicator, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void Init_UpgradesOnSpawnedProjectile(class AQtnProjectile* Spawned_Projectile, class AGrenadeProjectile_Parent_C* LOCAL_SpawnedGrenadeProjectile, class AGrenadeProjectile_Parent_C* K2Node_DynamicCast_AsGrenade_Projectile_Parent, bool K2Node_DynamicCast_bSuccess);
	void GetDangerCapsuleEnds_ServerOnly(struct FVector* Start, struct FVector* End, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FQtnPawnIntentions& CallFunc_GetIntentions_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	bool AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb, class UDodgeVerb_C* K2Node_DynamicCast_AsDodge_Verb, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void GetTotalHoldTime(float* OutHoldTimeSeconds, float CallFunc_GetTotalHoldTime_OutHoldTimeSeconds);
	float GetDamageValue(class AActor* VictimActor, float* BaseDamage, float DamageMultiplier, float Multi, float TotalDam, float BaseDam, float TotalBaseDamage, bool CallFunc_IsValid_ReturnValue, float CallFunc_DamageMultiplierFromUpgrades_Mult, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_GetVerbDamageFromChannel_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_GetVerbDamageFromChannel_ReturnValue_1);
	void UpdateProjectileAimCached(const struct FTwoVectors& PosAndVelocity, float LCharge, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, float CallFunc_GetLocalCurrentSpeed_ReturnValue, const struct FTwoVectors& CallFunc_GetLocalAimingParameters_PositionVelocity);
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void GetMuzzleComponent(class USceneComponent** OutMuzzleComponent, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void MulticastLaunchProjectile();
	void Activate_Projectile_Visual();
	void Deactivate_Projectile_Visual();
	void OnMontageCompleted(class UAnimMontage* Montage, bool Interrupted);
	void OnProjectileSpawned(class AQtnProjectile* SpawnedProjectile, bool IsServer);
	void AddUpdateSlot(class UGrenade_UpgradeArchetype_C*& Upgrade);
	void RemoveUpdateSlot(class UGrenade_UpgradeArchetype_C*& Upgrade);
	void InitVFX();
	void OnProjectileExploded();
	void OnVerbInit(bool IsServer);
	void ExecuteUbergraph_Verb_Grenade(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_5, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_4, class AGrenadier_C* K2Node_DynamicCast_AsGrenadier, bool K2Node_DynamicCast_bSuccess, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_3, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_1, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_2, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_2, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AQtnProjectile* K2Node_Event_spawnedProjectile, bool K2Node_Event_isServer_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, const struct FQtnDangerParameters& K2Node_MakeStruct_QtnDangerParameters, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_2, const struct FVector& CallFunc_GetDangerCapsuleEnds_ServerOnly_start, const struct FVector& CallFunc_GetDangerCapsuleEnds_ServerOnly_end, class AQtnDangerVolume* CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetDangerCapsuleEnds_ServerOnly_start_1, const struct FVector& CallFunc_GetDangerCapsuleEnds_ServerOnly_end_1, bool CallFunc_IsValid_ReturnValue_1, class UGrenade_UpgradeArchetype_C* K2Node_CustomEvent_Upgrade_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_AddUnique_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_GrenadeVFX& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UGrenade_UpgradeArchetype_C* K2Node_CustomEvent_Upgrade, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UGrenade_UpgradeArchetype_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_GrenadeVFX& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class AGrenadeProjectile_Parent_C* K2Node_DynamicCast_AsGrenade_Projectile_Parent, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool K2Node_Event_isServer, const struct FS_GrenadeSettings& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5);
};

}


