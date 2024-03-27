#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x5E0 - 0x468)
// BlueprintGeneratedClass GrenadeProjectile_Parent.GrenadeProjectile_Parent_C
class AGrenadeProjectile_Parent_C : public AQtnProjectileArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULootSpawnComponentArchetype_C*        LootSpawnComponentArchetype;                       // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       ImpactDecal;                                       // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ImpactTimer;                                       // 0x488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ImpactPrevis;                                      // 0x490(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Rotate_NewTrack_0_976C8E114147978EAB2C26AF1072F586; // 0x498(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Rotate__Direction_976C8E114147978EAB2C26AF1072F586; // 0x49C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Rotate;                                            // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_RadiusExpand_44FC061842E867998B56A8B45907FF0F; // 0x4A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_44FC061842E867998B56A8B45907FF0F; // 0x4AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F09[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage_Radius;                                     // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timer_Countdown;                                   // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time_To_Explode;                                   // 0x4C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Previs_Asset_Scale;                                // 0x4C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MaxKnockback;                                      // 0x4C8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DecalMat;                                          // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CachedRadius;                                      // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceRadialVis;                                    // 0x4E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F0B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitialTimerValue;                                 // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDangerParameters                  DangerParams;                                      // 0x4EC(0x3)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_2F0C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnDangerVolume*                      DangerVolume;                                      // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Armed;                                             // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TimerUp;                                           // 0x4F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Detonated;                                         // 0x4FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F0D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              ProjectileMat;                                     // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RandRotator;                                       // 0x508(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        BounceBombsRemaining;                              // 0x514(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Initial_Damage_Radius;                             // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Initial_Time_To_Explode;                           // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Initial_Previs_Asset_Scale;                        // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Initial_MaxKnockback;                              // 0x524(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDangerParameters                  Initial_DangerParams;                              // 0x530(0x3)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Initial_Use_Danger_Volume;                         // 0x533(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Initial_Armed;                                     // 0x534(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Initial_TimerUp;                                   // 0x535(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Initial_ForceRadialVis;                            // 0x536(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F0E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Initial_ImpactDecalScale;                          // 0x538(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Danger_Volume;                                 // 0x544(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldPassThroughEnemies;                          // 0x545(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ArmOnImpact;                                       // 0x546(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldStickToWalls;                                // 0x547(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               DecalRadiusMod;                                    // 0x548(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpawnVolumeRadius;                                 // 0x554(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BombEffectDuration;                                // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Knockdown_Duration;                                // 0x55C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Initial_Bomb_Effect_Duration;                      // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AQtnFXActor>               FXExplosionClass;                                  // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInterface*                    ProjectileMaterial;                                // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        FXProjectile;                                      // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageOverTime;                                    // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldStickToNPC;                                  // 0x584(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HeavyKnockdown;                                    // 0x585(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F10[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExplosionRadiusMultiplier;                         // 0x588(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Damaged_Actors;                                    // 0x590(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            Exploded;                                          // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<TSubclassOf<class AQtnFXActor>>       ExplosionFX;                                       // 0x5B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         DrawDebugCollision;                                // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Min_Time_To_Explode;                               // 0x5C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableDefaultExplosionIfUpgrades;                 // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AutoArm;                                           // 0x5C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F13[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoArmCountdown;                                  // 0x5CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartLocation;                                     // 0x5D0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DesiredRange;                                      // 0x5DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGrenadeProjectile_Parent_C* GetDefaultObj();

	void Set_Fuse_Percentage(float Percentage, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void StickyBehavior(const struct FHitResult& HitResult);
	TArray<class AActor*> ExplosionEffect(class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, float CallFunc_GetDamageAmount_baseDamage, float CallFunc_GetDamageAmount_ReturnValue, class UVerb_Grenade_C* K2Node_DynamicCast_AsVerb_Grenade, bool K2Node_DynamicCast_bSuccess, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue_1, class UVerb_Grenade_C* K2Node_DynamicCast_AsVerb_Grenade_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, class UClass* CallFunc_GetProjectileDamageType_DamageType, float CallFunc_GetExplosionRadius_Radius, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, TArray<class AActor*>& CallFunc_QtnDoRadialDamage_ReturnValue);
	void ProjectileRemoval(float InputPin, bool CallFunc_IsServer_ReturnValue);
	void PostInitSetup(bool DisableDefault, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<TSubclassOf<class AQtnFXActor>>& K2Node_MakeArray_Array, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UVerb_Grenade_C* K2Node_DynamicCast_AsVerb_Grenade, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_GrenadeVFX& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void CountdownSFX(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
	void HandleVFX(TSubclassOf<class AQtnFXActor> FxClass, float CallFunc_GetExplosionRadius_Radius, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue);
	void TryToReuseSpawnedDecal(const struct FVector& Location, bool* ShouldReuse, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class AQtnGameModeMissionArchetype_C* K2Node_DynamicCast_AsQtn_Game_Mode_Mission_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_Array_Get_Item, float CallFunc_Square_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AVolume_PeeField_C* K2Node_DynamicCast_AsVolume_Pee_Field, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetLifeSpan_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void ResetToInitialState(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void CachePropertiesInitialValue();
	void FindBounceLocation_ServerOnly(struct FVector* TargetLocation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_QtnGetRandomReachablePoint_foundRandomReachablePoint, const struct FVector& CallFunc_QtnGetRandomReachablePoint_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_QtnGetRandomReachablePoint_foundRandomReachablePoint_1, const struct FVector& CallFunc_QtnGetRandomReachablePoint_ReturnValue_1);
	void InitBounceBomb(int32 RemainingBounces, float Radius);
	void ArmProjectile(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, float CallFunc_GetExplosionRadius_Radius, float CallFunc_GetExplosionRadius_Radius_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AQtnDangerVolume* CallFunc_SpawnDangerSphere_ServerOnly_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetExplosionRadius(float* Radius, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	bool IsValidActorToHit(class AActor* TargetActor, struct FHitResult& HitResult, bool CallFunc_IsValidActorToHit_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Rotate__FinishedFunc();
	void Rotate__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Explode(float DelayTimeToDestroy);
	void OnFinalizeImpactEvent(const struct FHitResult& HitResult, bool IsServer);
	void RadiusIntro();
	void StopRotating();
	void StartRotating();
	void OnInitProjectile(class AActor* SourceOwner, class UQtnVerb* InSourceVerb, const struct FVector& InitialVelocity, bool IsServer);
	void OnReusedFromPool();
	void OnReclaimToPool();
	void OnLightningMulticast(const struct FVector& Origin, const struct FVector& Destination, class AActor* EnemyTarget, class ABodyPawnPlayer_C* OwningPlayer, float DamageValue);
	void ExecuteUbergraph_GrenadeProjectile_Parent(int32 EntryPoint, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, class UVerb_Grenade_C* K2Node_DynamicCast_AsVerb_Grenade, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue_1, class UVerb_Grenade_C* K2Node_DynamicCast_AsVerb_Grenade_1, bool K2Node_DynamicCast_bSuccess_1, class UGrenade_UpgradeArchetype_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, float K2Node_Event_DeltaSeconds, float K2Node_CustomEvent_delayTimeToDestroy, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FS_GrenadeVFX& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_isServer_1, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FQtnDamageInfo& CallFunc_ConstructDamageInfo_ReturnValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, bool CallFunc_IsHero_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable_2, float CallFunc_Divide_FloatFloat_ReturnValue, class UGrenade_UpgradeArchetype_C* CallFunc_Array_Get_Item_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, const struct FRotator& CallFunc_RandomRotator_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, class AActor* K2Node_Event_SourceOwner, class UQtnVerb* K2Node_Event_InSourceVerb, const struct FVector& K2Node_Event_InitialVelocity, bool K2Node_Event_isServer, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_IsSimulatingPhysics_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, TArray<class AActor*>& CallFunc_ExplosionEffect_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetExplosionRadius_Radius, class UClass* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingleByProfile_OutHit, bool CallFunc_LineTraceSingleByProfile_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue_1, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, const struct FVector& K2Node_CustomEvent_Origin, const struct FVector& K2Node_CustomEvent_Destination, class AActor* K2Node_CustomEvent_EnemyTarget, class ABodyPawnPlayer_C* K2Node_CustomEvent_OwningPlayer, float K2Node_CustomEvent_DamageValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI_1, bool K2Node_DynamicCast_bSuccess_3, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue_2, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_NotEqual_VectorVector_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue_3, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, float CallFunc_FInterpTo_Constant_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult);
	void Exploded__DelegateSignature();
};

}

