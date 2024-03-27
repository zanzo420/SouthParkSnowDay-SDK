#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x4F4 - 0x468)
// BlueprintGeneratedClass Projectile_FireOrbBase.Projectile_FireOrbBase_C
class AProjectile_FireOrbBase_C : public AQtnProjectileArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Shell;                                             // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Charged;                                           // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Fire;                                              // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        R_ChargePower;                                     // 0x488(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         TickLifetime;                                      // 0x48C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CDE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDamageRadiusMultiplier;                         // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageRadiusInnerRatio;                            // 0x494(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxKnockbackAmount;                                // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChaoticRebound_MaxCount;                           // 0x49C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChaoticRebound_Count;                              // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CDF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnPawn*                              ChaoticRebound_BouncedTarget;                      // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AQtnPawn*>                      Actor_About_to_be_Hit;                             // 0x4B0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         LOCAL_WasTargetKO;                                 // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Upgrade_TheMagicPath_DamageReduction;              // 0x4C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Upgrade_ChaoticRebound_DamageReduction;            // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsChaoticRebound_Child;                            // 0x4CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Upgrade_DelayedGratification_DamageIncrease;       // 0x4D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrade_BloodOvercharge;                           // 0x4D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CE2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          Owning_Body_Pawn;                                  // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Upgrade_BloodOvercharge_Lifesteal;                 // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ChaoticBounce;                                     // 0x4E4(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        Perk_Deadeye_Damage_Multiplier;                    // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_FireOrbBase_C* GetDefaultObj();

	void OnRep_ChaoticBounce();
	void Upgrade_BloodOvercharge(class AActor* InputPin, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAliveAndConscious_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsAlly_ReturnValue, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_1, bool K2Node_DynamicCast_bSuccess_1);
	void CalculateDamage(class AActor* InputPin, struct FQtnDamageInfo& Damage_Info, class AActor** OutputPin, struct FQtnDamageInfo* StructOut, float Temp_float_Variable, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FMax_ReturnValue);
	struct FQtnDamageInfo ConstructDamageInfo(class AActor* TargetActor, const struct FQtnDamageInfo& CallFunc_ConstructDamageInfo_ReturnValue);
	void Get_Lifesteal_Amount(float* LifestealAmount, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UVerb_Staff_Lob_Archetype_C* K2Node_DynamicCast_AsVerb_Staff_Lob_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void OnActorPreHit_ServerOnly(class AActor* ActorAboutToBeHit, struct FHitResult& HitResult, bool* IgnoreCollision, bool CallFunc_Chaotic_Rebound_Upgrade_Active, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, class UVerb_Staff_Lob_Archetype_C* K2Node_DynamicCast_AsVerb_Staff_Lob_Archetype, bool K2Node_DynamicCast_bSuccess_1);
	void Chaotic_Rebound(const struct FHitResult& Hit_Result, bool* Upgrade_Active, const struct FVector& Normal, class AProjectile_FireOrbBase_C* SpawneProjectile, float DistanceToClosest, class AQtnPawn* ClosestToCenter, float CallFunc_Abs_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_FMax_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, class AQtnPawn* CallFunc_GetCulprit_ReturnValue_1, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, bool Temp_bool_Variable, class UVerb_Staff_Lob_Archetype_C* K2Node_DynamicCast_AsVerb_Staff_Lob_Archetype, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FVector& CallFunc_GetProjectileVelocity_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetReflectionVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue_1, class AProjectile_FireOrbBase_C* CallFunc_SpawnProjectile_ServerOnly_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetWorldGravity_ReturnValue, class AQtnPawn* CallFunc_GetBestPawnWithinViewCone_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Abs_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, TArray<class AQtnPawn*>& CallFunc_GatherPawnsWithinRadius_pawns, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& K2Node_Select_Default, class AProjectile_FireOrbBase_C* CallFunc_SpawnProjectile_ServerOnly_ReturnValue_1);
	void Impact__VFX_SFX(const struct FHitResult& Hit_Result, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	struct FVector GetKnockbackAmount(class AActor* TargetActor, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void GetDamageRadii(struct FQtnRangedFloat* DamageRadii, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat);
	void OnRep_r_ChargePower(bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void MULTI_ImpactVFX(const struct FHitResult& Hit_Result);
	void ApplyProjectileDamage(class AActor* ProjectileVictim, struct FQtnDamageInfo& DamageInfo);
	void HealLifesteal_Multi(const struct FVector& StartLocation);
	void ReceiveBeginPlay();
	void HealOnPlayer();
	void ExecuteUbergraph_Projectile_FireOrbBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Hit_Result, class AActor* K2Node_Event_projectileVictim, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, class AActor* CallFunc_CalculateDamage_OutputPin, const struct FQtnDamageInfo& CallFunc_CalculateDamage_StructOut, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, const struct FVector& K2Node_CustomEvent_StartLocation, class UQtnVerb* CallFunc_GetSourceVerb_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue);
};

}


