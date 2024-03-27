#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEC (0x554 - 0x468)
// BlueprintGeneratedClass BombardierProjectile.BombardierProjectile_C
class ABombardierProjectile_C : public AQtnProjectileArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       ImpactDecal;                                       // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ImpactTimer;                                       // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ImpactPrevis;                                      // 0x488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Rotate_NewTrack_0_764335CA4A7211C839BCED8EB08489D9; // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Rotate__Direction_764335CA4A7211C839BCED8EB08489D9; // 0x494(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D96[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Rotate;                                            // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_RadiusExpand_B4650B9C42505D193640E08EB39D47F1; // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_B4650B9C42505D193640E08EB39D47F1; // 0x4A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage_Radius;                                     // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BaseDamage;                                        // 0x4B4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TotalDamage;                                       // 0x4B8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Detonated;                                         // 0x4BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timer_Countdown;                                   // 0x4C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Armed;                                             // 0x4C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ArmOnImpact;                                       // 0x4C5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TimerUp;                                           // 0x4C6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D99[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Time_To_Explode;                                   // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Previs_Asset_Scale;                                // 0x4CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MaxKnockback;                                      // 0x4D0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDangerParameters                  DangerParams;                                      // 0x4DC(0x3)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_5D9A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnDangerVolume*                      DangerVolume;                                      // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Danger_Volume;                                 // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DecalMat;                                          // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CachedRadius;                                      // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceRadialVis;                                    // 0x4FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitialTimerValue;                                 // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D9D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              ProjectileMat;                                     // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RandRotator;                                       // 0x510(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        BounceBombsRemaining;                              // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Initial_Damage_Radius;                             // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Initial_baseDamage;                                // 0x524(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Initial_total_Damage;                              // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Initial_Time_To_Explode;                           // 0x52C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Initial_Previs_Asset_Scale;                        // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Initial_MaxKnockback;                              // 0x534(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnDangerParameters                  Initial_DangerParams;                              // 0x540(0x3)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Initial_Use_Danger_Volume;                         // 0x543(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Initial_Armed;                                     // 0x544(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Initial_TimerUp;                                   // 0x545(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Initial_ForceRadialVis;                            // 0x546(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D9E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Initial_ImpactDecalScale;                          // 0x548(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABombardierProjectile_C* GetDefaultObj();

	void ResetToInitialState(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void CachePropertiesInitialValue();
	void FindBounceLocation_ServerOnly(struct FVector* TargetLocation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_QtnGetRandomReachablePoint_foundRandomReachablePoint, const struct FVector& CallFunc_QtnGetRandomReachablePoint_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_QtnGetRandomReachablePoint_foundRandomReachablePoint_1, const struct FVector& CallFunc_QtnGetRandomReachablePoint_ReturnValue_1);
	void InitBounceBomb(int32 RemainingBounces, float Radius);
	void ArmProjectile(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_FindBounceLocation_ServerOnly_TargetLocation, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualExactly_VectorVector_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_GetWorldGravity_ReturnValue, const struct FVector& CallFunc_GetPredictiveAimVelocity_projectileVelocity, bool CallFunc_GetPredictiveAimVelocity_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ABombardierProjectile_C* CallFunc_SpawnProjectile_ServerOnly_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasUpgrade_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, float CallFunc_GetExplosionRadius_Radius, float CallFunc_GetExplosionRadius_Radius_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AQtnPawn* CallFunc_GetCulprit_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class AQtnDangerVolume* CallFunc_SpawnDangerSphere_ServerOnly_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue_2, bool CallFunc_IsHero_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1);
	void GetExplosionRadius(float* Radius, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	bool IsValidActorToHit(class AActor* TargetActor, struct FHitResult& HitResult, bool CallFunc_IsValidActorToHit_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Rotate__FinishedFunc();
	void Rotate__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Explode(float DelayTimeToDestroy);
	void Hide_Target_Zone();
	void OnFinalizeImpactEvent(const struct FHitResult& HitResult, bool IsServer);
	void RadiusIntro();
	void StopRotating();
	void StartRotating();
	void OnInitProjectile(class AActor* SourceOwner, class UQtnVerb* InSourceVerb, const struct FVector& InitialVelocity, bool IsServer);
	void OnReusedFromPool();
	void OnReclaimToPool();
	void ExecuteUbergraph_BombardierProjectile(int32 EntryPoint, bool CallFunc_UseSwitchQuality_ReturnValue, TSubclassOf<class AQtnFXActor> Temp_class_Variable, TSubclassOf<class AQtnFXActor> Temp_class_Variable_1, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue, float K2Node_CustomEvent_delayTimeToDestroy, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TSubclassOf<class AQtnFXActor> K2Node_Select_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_isServer_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, class AActor* CallFunc_GetSourceActor_ReturnValue, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class ABombardierWeapon_C* K2Node_DynamicCast_AsBombardier_Weapon, bool K2Node_DynamicCast_bSuccess_1, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue_1, class AQtnPawn* CallFunc_GetCulprit_ReturnValue_2, bool CallFunc_IsHero_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_HasUpgrade_ReturnValue, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Vector_Zero_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue_3, float CallFunc_GetExplosionRadius_Radius, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_2, bool K2Node_DynamicCast_bSuccess_3, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UClass* CallFunc_GetProjectileDamageType_DamageType, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Lerp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, const struct FRotator& CallFunc_RandomRotator_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, float CallFunc_GetExplosionRadius_Radius_1, class AActor* K2Node_Event_SourceOwner, class UQtnVerb* K2Node_Event_InSourceVerb, const struct FVector& K2Node_Event_InitialVelocity, bool K2Node_Event_isServer, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, float CallFunc_GetDamageValue_baseDamage, float CallFunc_GetDamageValue_ReturnValue, TArray<class AActor*>& CallFunc_QtnDoRadialDamage_ReturnValue);
};

}


