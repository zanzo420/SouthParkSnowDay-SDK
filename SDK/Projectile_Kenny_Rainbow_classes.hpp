#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4F8 - 0x4E0)
// BlueprintGeneratedClass Projectile_Kenny_Rainbow.Projectile_Kenny_Rainbow_C
class AProjectile_Kenny_Rainbow_C : public AProjectile_ArrowBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnRangedFloat                       DangerRadii;                                       // 0x4E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AQtnDangerVolume*                      DangerCapsule_ServerOnly;                          // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_Kenny_Rainbow_C* GetDefaultObj();

	struct FVector GetKnockbackAmount(class AActor* TargetActor, const struct FVector& CallFunc_GetProjectileVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	float GetDamageAmount(class AActor* TargetActor, float* BaseDamage, float CallFunc_GetDamageAmount_baseDamage, float CallFunc_GetDamageAmount_ReturnValue);
	void OnActorPreHit_ServerOnly(class AActor* ActorAboutToBeHit, struct FHitResult& HitResult, bool* IgnoreCollision, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void RainbowBlast_MULTI(const struct FVector& Loc);
	void OnInitProjectile(class AActor* SourceOwner, class UQtnVerb* InSourceVerb, const struct FVector& InitialVelocity, bool IsServer);
	void ExecuteUbergraph_Projectile_Kenny_Rainbow(int32 EntryPoint, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& K2Node_CustomEvent_Loc, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AActor* K2Node_Event_SourceOwner, class UQtnVerb* K2Node_Event_InSourceVerb, const struct FVector& K2Node_Event_InitialVelocity, bool K2Node_Event_isServer, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FQtnDangerParameters& K2Node_MakeStruct_QtnDangerParameters, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, class AQtnDangerVolume* CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue);
};

}


