#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x4B8 - 0x468)
// BlueprintGeneratedClass Projectile_CharmKiss.Projectile_CharmKiss_C
class AProjectile_CharmKiss_C : public AQtnProjectileArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnDamageReceptorComponent*           QtnDamageReceptor;                                 // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh1;                                     // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara;                                           // 0x488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Burst_NewTrack_0_952822814EF9C03F400989966AEAC2E2; // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Burst__Direction_952822814EF9C03F400989966AEAC2E2; // 0x494(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B28[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Burst;                                             // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnDangerVolume*                      DangerCapsule_ServerOnly;                          // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRangedFloat                       DangerRadii;                                       // 0x4A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UMaterialInstanceDynamic*              HeartMat;                                          // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_CharmKiss_C* GetDefaultObj();

	void OnActorPreHit_ServerOnly(class AActor* ActorAboutToBeHit, struct FHitResult& HitResult, bool* IgnoreCollision, bool CallFunc_OnActorPreHit_ServerOnly_ignoreCollision, class AProjectile_CharmKiss_C* K2Node_DynamicCast_AsProjectile_Charm_Kiss, bool K2Node_DynamicCast_bSuccess);
	void SetKissTarget(class ABodyPawnBase_C*& Body, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue);
	void UserConstructionScript();
	void Burst__FinishedFunc();
	void Burst__UpdateFunc();
	void OnInitProjectile(class AActor* SourceOwner, class UQtnVerb* InSourceVerb, const struct FVector& InitialVelocity, bool IsServer);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__Projectile_CharmKiss_QtnDamageReceptor_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void MulticastDestroyFX();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Projectile_CharmKiss(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* K2Node_Event_SourceOwner, class UQtnVerb* K2Node_Event_InSourceVerb, const struct FVector& K2Node_Event_InitialVelocity, bool K2Node_Event_isServer, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue, const struct FQtnDangerParameters& K2Node_MakeStruct_QtnDangerParameters, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AQtnDangerVolume* CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}


