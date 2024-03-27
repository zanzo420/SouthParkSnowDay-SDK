#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_ShizaNoxiousGas.Projectile_ShizaNoxiousGas_C
// (Actor)

class UClass* AProjectile_ShizaNoxiousGas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_ShizaNoxiousGas_C");

	return Clss;
}


// Projectile_ShizaNoxiousGas_C Projectile_ShizaNoxiousGas.Default__Projectile_ShizaNoxiousGas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_ShizaNoxiousGas_C* AProjectile_ShizaNoxiousGas_C::GetDefaultObj()
{
	static class AProjectile_ShizaNoxiousGas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_ShizaNoxiousGas_C*>(AProjectile_ShizaNoxiousGas_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_ShizaNoxiousGas.Projectile_ShizaNoxiousGas_C.Set Homing Target Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProjectileMovementComponent*CallFunc_GetProjectileMovement_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_ShizaNoxiousGas_C::Set_Homing_Target_Server_Only(class AQtnBodyPawn* Body, float CallFunc_GetRandomValue_ReturnValue, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_ShizaNoxiousGas_C", "Set Homing Target Server Only");

	Params::AProjectile_ShizaNoxiousGas_C_Set_Homing_Target_Server_Only_Params Parms{};

	Parms.Body = Body;
	Parms.CallFunc_GetRandomValue_ReturnValue = CallFunc_GetRandomValue_ReturnValue;
	Parms.CallFunc_GetProjectileMovement_ReturnValue = CallFunc_GetProjectileMovement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_ShizaNoxiousGas.Projectile_ShizaNoxiousGas_C.BurstMat__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AProjectile_ShizaNoxiousGas_C::BurstMat__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_ShizaNoxiousGas_C", "BurstMat__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_ShizaNoxiousGas.Projectile_ShizaNoxiousGas_C.BurstMat__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AProjectile_ShizaNoxiousGas_C::BurstMat__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_ShizaNoxiousGas_C", "BurstMat__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_ShizaNoxiousGas.Projectile_ShizaNoxiousGas_C.MulticastDestroyFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProjectile_ShizaNoxiousGas_C::MulticastDestroyFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_ShizaNoxiousGas_C", "MulticastDestroyFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_ShizaNoxiousGas.Projectile_ShizaNoxiousGas_C.OnInitProjectile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      SourceOwner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    InSourceVerb                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InitialVelocity                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProjectile_ShizaNoxiousGas_C::OnInitProjectile(class AActor* SourceOwner, class UQtnVerb* InSourceVerb, const struct FVector& InitialVelocity, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_ShizaNoxiousGas_C", "OnInitProjectile");

	Params::AProjectile_ShizaNoxiousGas_C_OnInitProjectile_Params Parms{};

	Parms.SourceOwner = SourceOwner;
	Parms.InSourceVerb = InSourceVerb;
	Parms.InitialVelocity = InitialVelocity;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_ShizaNoxiousGas.Projectile_ShizaNoxiousGas_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_ShizaNoxiousGas_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_ShizaNoxiousGas_C", "ReceiveEndPlay");

	Params::AProjectile_ShizaNoxiousGas_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_ShizaNoxiousGas.Projectile_ShizaNoxiousGas_C.OnFinalizeImpactEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProjectile_ShizaNoxiousGas_C::OnFinalizeImpactEvent(const struct FHitResult& HitResult, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_ShizaNoxiousGas_C", "OnFinalizeImpactEvent");

	Params::AProjectile_ShizaNoxiousGas_C_OnFinalizeImpactEvent_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_ShizaNoxiousGas.Projectile_ShizaNoxiousGas_C.BndEvt__Projectile_ShizaNoxiousGas_QtnDamageReceptor_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnDamageReceptorComponent* DamagedReceptor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         HitReactionInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProjectile_ShizaNoxiousGas_C::BndEvt__Projectile_ShizaNoxiousGas_QtnDamageReceptor_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_ShizaNoxiousGas_C", "BndEvt__Projectile_ShizaNoxiousGas_QtnDamageReceptor_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature");

	Params::AProjectile_ShizaNoxiousGas_C_BndEvt__Projectile_ShizaNoxiousGas_QtnDamageReceptor_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature_Params Parms{};

	Parms.DamagedReceptor = DamagedReceptor;
	Parms.DamageInfo = DamageInfo;
	Parms.HitReactionInfo = HitReactionInfo;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_ShizaNoxiousGas.Projectile_ShizaNoxiousGas_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_ShizaNoxiousGas_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_ShizaNoxiousGas_C", "ReceiveTick");

	Params::AProjectile_ShizaNoxiousGas_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_ShizaNoxiousGas.Projectile_ShizaNoxiousGas_C.DestroyFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AProjectile_ShizaNoxiousGas_C::DestroyFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_ShizaNoxiousGas_C", "DestroyFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_ShizaNoxiousGas.Projectile_ShizaNoxiousGas_C.ExecuteUbergraph_Projectile_ShizaNoxiousGas
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_SourceOwner                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    K2Node_Event_InSourceVerb                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_InitialVelocity                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnDangerParameters        K2Node_MakeStruct_QtnDangerParameters                            (NoDestructor)
// class AQtnPawn*                    CallFunc_GetCulprit_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnDangerVolume*            CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetCulprit_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn_ShizaHulud_C*       K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_ComponentBoundEvent_damageInfo                            (ConstParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         K2Node_ComponentBoundEvent_hitReactionInfo                       (ConstParm)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProjectileMovementComponent*CallFunc_GetProjectileMovement_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProjectileMovementComponent*CallFunc_GetProjectileMovement_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProjectileMovementComponent*CallFunc_GetProjectileMovement_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetCulprit_ReturnValue_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnemy_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_ShizaNoxiousGas_C::ExecuteUbergraph_Projectile_ShizaNoxiousGas(int32 EntryPoint, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AActor* K2Node_Event_SourceOwner, class UQtnVerb* K2Node_Event_InSourceVerb, const struct FVector& K2Node_Event_InitialVelocity, bool K2Node_Event_isServer_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQtnDangerParameters& K2Node_MakeStruct_QtnDangerParameters, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_isServer, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AQtnDangerVolume* CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, class AQtnPawn* CallFunc_GetCulprit_ReturnValue_1, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer, float K2Node_Event_DeltaSeconds, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue_2, class AQtnPawn* CallFunc_GetCulprit_ReturnValue_2, bool CallFunc_IsEnemy_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_ShizaNoxiousGas_C", "ExecuteUbergraph_Projectile_ShizaNoxiousGas");

	Params::AProjectile_ShizaNoxiousGas_C_ExecuteUbergraph_Projectile_ShizaNoxiousGas_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.K2Node_Event_SourceOwner = K2Node_Event_SourceOwner;
	Parms.K2Node_Event_InSourceVerb = K2Node_Event_InSourceVerb;
	Parms.K2Node_Event_InitialVelocity = K2Node_Event_InitialVelocity;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue = CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_QtnDangerParameters = K2Node_MakeStruct_QtnDangerParameters;
	Parms.CallFunc_GetCulprit_ReturnValue = CallFunc_GetCulprit_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue = CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_GetCulprit_ReturnValue_1 = CallFunc_GetCulprit_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud = K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_damagedReceptor = K2Node_ComponentBoundEvent_damagedReceptor;
	Parms.K2Node_ComponentBoundEvent_damageInfo = K2Node_ComponentBoundEvent_damageInfo;
	Parms.K2Node_ComponentBoundEvent_hitReactionInfo = K2Node_ComponentBoundEvent_hitReactionInfo;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetProjectileMovement_ReturnValue = CallFunc_GetProjectileMovement_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetProjectileMovement_ReturnValue_1 = CallFunc_GetProjectileMovement_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetProjectileMovement_ReturnValue_2 = CallFunc_GetProjectileMovement_ReturnValue_2;
	Parms.CallFunc_GetCulprit_ReturnValue_2 = CallFunc_GetCulprit_ReturnValue_2;
	Parms.CallFunc_IsEnemy_ReturnValue = CallFunc_IsEnemy_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


