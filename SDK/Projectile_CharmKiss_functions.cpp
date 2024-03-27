#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_CharmKiss.Projectile_CharmKiss_C
// (Actor)

class UClass* AProjectile_CharmKiss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_CharmKiss_C");

	return Clss;
}


// Projectile_CharmKiss_C Projectile_CharmKiss.Default__Projectile_CharmKiss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_CharmKiss_C* AProjectile_CharmKiss_C::GetDefaultObj()
{
	static class AProjectile_CharmKiss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_CharmKiss_C*>(AProjectile_CharmKiss_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_CharmKiss.Projectile_CharmKiss_C.OnActorPreHit_ServerOnly
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorAboutToBeHit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               IgnoreCollision                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnActorPreHit_ServerOnly_ignoreCollision                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AProjectile_CharmKiss_C*     K2Node_DynamicCast_AsProjectile_Charm_Kiss                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AProjectile_CharmKiss_C::OnActorPreHit_ServerOnly(class AActor* ActorAboutToBeHit, struct FHitResult& HitResult, bool* IgnoreCollision, bool CallFunc_OnActorPreHit_ServerOnly_ignoreCollision, class AProjectile_CharmKiss_C* K2Node_DynamicCast_AsProjectile_Charm_Kiss, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_CharmKiss_C", "OnActorPreHit_ServerOnly");

	Params::AProjectile_CharmKiss_C_OnActorPreHit_ServerOnly_Params Parms{};

	Parms.ActorAboutToBeHit = ActorAboutToBeHit;
	Parms.HitResult = HitResult;
	Parms.CallFunc_OnActorPreHit_ServerOnly_ignoreCollision = CallFunc_OnActorPreHit_ServerOnly_ignoreCollision;
	Parms.K2Node_DynamicCast_AsProjectile_Charm_Kiss = K2Node_DynamicCast_AsProjectile_Charm_Kiss;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IgnoreCollision != nullptr)
		*IgnoreCollision = Parms.IgnoreCollision;

}


// Function Projectile_CharmKiss.Projectile_CharmKiss_C.SetKissTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnBase_C*             Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProjectileMovementComponent*CallFunc_GetProjectileMovement_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_CharmKiss_C::SetKissTarget(class ABodyPawnBase_C*& Body, class UQtnProjectileMovementComponent* CallFunc_GetProjectileMovement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_CharmKiss_C", "SetKissTarget");

	Params::AProjectile_CharmKiss_C_SetKissTarget_Params Parms{};

	Parms.Body = Body;
	Parms.CallFunc_GetProjectileMovement_ReturnValue = CallFunc_GetProjectileMovement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_CharmKiss.Projectile_CharmKiss_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProjectile_CharmKiss_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_CharmKiss_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_CharmKiss.Projectile_CharmKiss_C.Burst__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AProjectile_CharmKiss_C::Burst__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_CharmKiss_C", "Burst__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_CharmKiss.Projectile_CharmKiss_C.Burst__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AProjectile_CharmKiss_C::Burst__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_CharmKiss_C", "Burst__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_CharmKiss.Projectile_CharmKiss_C.OnInitProjectile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      SourceOwner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    InSourceVerb                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InitialVelocity                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProjectile_CharmKiss_C::OnInitProjectile(class AActor* SourceOwner, class UQtnVerb* InSourceVerb, const struct FVector& InitialVelocity, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_CharmKiss_C", "OnInitProjectile");

	Params::AProjectile_CharmKiss_C_OnInitProjectile_Params Parms{};

	Parms.SourceOwner = SourceOwner;
	Parms.InSourceVerb = InSourceVerb;
	Parms.InitialVelocity = InitialVelocity;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_CharmKiss.Projectile_CharmKiss_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_CharmKiss_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_CharmKiss_C", "ReceiveEndPlay");

	Params::AProjectile_CharmKiss_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_CharmKiss.Projectile_CharmKiss_C.BndEvt__Projectile_CharmKiss_QtnDamageReceptor_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UQtnDamageReceptorComponent* DamagedReceptor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              DamageInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         HitReactionInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProjectile_CharmKiss_C::BndEvt__Projectile_CharmKiss_QtnDamageReceptor_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_CharmKiss_C", "BndEvt__Projectile_CharmKiss_QtnDamageReceptor_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature");

	Params::AProjectile_CharmKiss_C_BndEvt__Projectile_CharmKiss_QtnDamageReceptor_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature_Params Parms{};

	Parms.DamagedReceptor = DamagedReceptor;
	Parms.DamageInfo = DamageInfo;
	Parms.HitReactionInfo = HitReactionInfo;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_CharmKiss.Projectile_CharmKiss_C.MulticastDestroyFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProjectile_CharmKiss_C::MulticastDestroyFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_CharmKiss_C", "MulticastDestroyFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_CharmKiss.Projectile_CharmKiss_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProjectile_CharmKiss_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_CharmKiss_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_CharmKiss.Projectile_CharmKiss_C.ExecuteUbergraph_Projectile_CharmKiss
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_SourceOwner                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    K2Node_Event_InSourceVerb                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_InitialVelocity                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnDangerParameters        K2Node_MakeStruct_QtnDangerParameters                            (NoDestructor)
// class AQtnPawn*                    CallFunc_GetCulprit_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_ComponentBoundEvent_damageInfo                            (ConstParm, ContainsInstancedReference)
// struct FQtnHitReactionInfo         K2Node_ComponentBoundEvent_hitReactionInfo                       (ConstParm)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnDangerVolume*            CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_CharmKiss_C::ExecuteUbergraph_Projectile_CharmKiss(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* K2Node_Event_SourceOwner, class UQtnVerb* K2Node_Event_InSourceVerb, const struct FVector& K2Node_Event_InitialVelocity, bool K2Node_Event_isServer, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue, const struct FQtnDangerParameters& K2Node_MakeStruct_QtnDangerParameters, class AQtnPawn* CallFunc_GetCulprit_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AQtnDangerVolume* CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_CharmKiss_C", "ExecuteUbergraph_Projectile_CharmKiss");

	Params::AProjectile_CharmKiss_C_ExecuteUbergraph_Projectile_CharmKiss_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_SourceOwner = K2Node_Event_SourceOwner;
	Parms.K2Node_Event_InSourceVerb = K2Node_Event_InSourceVerb;
	Parms.K2Node_Event_InitialVelocity = K2Node_Event_InitialVelocity;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_QtnDangerParameters = K2Node_MakeStruct_QtnDangerParameters;
	Parms.CallFunc_GetCulprit_ReturnValue = CallFunc_GetCulprit_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_damagedReceptor = K2Node_ComponentBoundEvent_damagedReceptor;
	Parms.K2Node_ComponentBoundEvent_damageInfo = K2Node_ComponentBoundEvent_damageInfo;
	Parms.K2Node_ComponentBoundEvent_hitReactionInfo = K2Node_ComponentBoundEvent_hitReactionInfo;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue = CallFunc_SpawnDangerCapsule_ServerOnly_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


