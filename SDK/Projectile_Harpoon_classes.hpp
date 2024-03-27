#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x4B0 - 0x468)
// BlueprintGeneratedClass Projectile_Harpoon.Projectile_Harpoon_C
class AProjectile_Harpoon_C : public AQtnProjectileArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     RopeCapsule;                                       // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                       HarpoonRope;                                       // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnDamageReceptorComponent*           QtnDamageReceptor;                                 // 0x488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHarpoonVerb_C*                        HarpoonVerb;                                       // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHarpoonWeapon_C*                      HarpoonWeapon;                                     // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         R_isRetracting;                                    // 0x4A0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_4DDC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitialSpeed;                                      // 0x4A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPawn*                              OriginalCulprit;                                   // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_Harpoon_C* GetDefaultObj();

	void IsRopeObstructed(bool* Yes, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<struct FHitResult>& CallFunc_LineTrace_hits, bool CallFunc_LineTrace_ReturnValue);
	void GetProjectileDamageType(class UClass** DamageType);
	void StartRetraction_ServerOnly();
	void TickRetraction(float& DeltaSeconds, float DistanceToTravel, float DistanceFromCulprit, const struct FVector& SelfToCulprit, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue);
	void OnRep_r_isRetracting(class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue);
	void AdjustRopeCollision(const struct FVector& WeaponToSelf, const struct FVector& WeaponPosition, const struct FVector& CapsulePosition, float CapsuleHalfHeight, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1);
	void OnInitProjectile(class AActor* SourceOwner, class UQtnVerb* InSourceVerb, const struct FVector& InitialVelocity, bool IsServer);
	void BndEvt__Projectile_Harpoon_QtnDamageReceptor_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void ReceiveTick(float DeltaSeconds);
	void OnReflection_ServerOnly(class UQtnVerb* ReflectingVerb, class AActor* ReflectingActor, class AQtnPawn* NewCulprit, struct FVector& NewVelocity);
	void OnBlocked_ServerOnly(class UQtnVerb* blockingVerb, class AActor* blockingActor, class AQtnPawn* blockingPawn);
	void OnFinalizeImpactEvent(const struct FHitResult& HitResult, bool IsServer);
	void UpdateTetherVisual();
	void ExecuteUbergraph_Projectile_Harpoon(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AQtnProjectile* K2Node_DynamicCast_AsQtn_Projectile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_K2_IsCollisionEnabled_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, bool CallFunc_IsAlly_ReturnValue, class UQtnVerb* K2Node_Event_reflectingVerb, class AActor* K2Node_Event_reflectingActor, class AQtnPawn* K2Node_Event_newCulprit, const struct FVector& K2Node_Event_newVelocity, class AQtnPawn* CallFunc_GetCulprit_ReturnValue_1, class UQtnVerb* K2Node_Event_blockingVerb, class AActor* K2Node_Event_blockingActor, class AQtnPawn* K2Node_Event_blockingPawn, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_isServer, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class AActor* K2Node_Event_SourceOwner, class UQtnVerb* K2Node_Event_InSourceVerb, const struct FVector& K2Node_Event_InitialVelocity, bool K2Node_Event_isServer_1, class UHarpoonVerb_C* K2Node_DynamicCast_AsHarpoon_Verb, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_VSize_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AHarpoonWeapon_C* K2Node_DynamicCast_AsHarpoon_Weapon, bool K2Node_DynamicCast_bSuccess_2);
};

}


