#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExplosiveMineBase.ExplosiveMineBase_C
// (Actor)

class UClass* AExplosiveMineBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExplosiveMineBase_C");

	return Clss;
}


// ExplosiveMineBase_C ExplosiveMineBase.Default__ExplosiveMineBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AExplosiveMineBase_C* AExplosiveMineBase_C::GetDefaultObj()
{
	static class AExplosiveMineBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AExplosiveMineBase_C*>(AExplosiveMineBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ExplosiveMineBase.ExplosiveMineBase_C.GetExplosionRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Radius                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExplosiveMineBase_C::GetExplosionRadius(float* Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplosiveMineBase_C", "GetExplosionRadius");

	Params::AExplosiveMineBase_C_GetExplosionRadius_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

}


// Function ExplosiveMineBase.ExplosiveMineBase_C.Explode
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DelayTimeToDestroy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExplosiveMineBase_C::Explode(float DelayTimeToDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplosiveMineBase_C", "Explode");

	Params::AExplosiveMineBase_C_Explode_Params Parms{};

	Parms.DelayTimeToDestroy = DelayTimeToDestroy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExplosiveMineBase.ExplosiveMineBase_C.OnInitProjectile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      SourceOwner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    InSourceVerb                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InitialVelocity                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AExplosiveMineBase_C::OnInitProjectile(class AActor* SourceOwner, class UQtnVerb* InSourceVerb, const struct FVector& InitialVelocity, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplosiveMineBase_C", "OnInitProjectile");

	Params::AExplosiveMineBase_C_OnInitProjectile_Params Parms{};

	Parms.SourceOwner = SourceOwner;
	Parms.InSourceVerb = InSourceVerb;
	Parms.InitialVelocity = InitialVelocity;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExplosiveMineBase.ExplosiveMineBase_C.ExecuteUbergraph_ExplosiveMineBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetExplosionRadius_Radius                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRangedFloat             K2Node_MakeStruct_QtnRangedFloat                                 (NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_delayTimeToDestroy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_DynamicCast_AsQtn_Pawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_SourceOwner                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    K2Node_Event_InSourceVerb                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_InitialVelocity                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetExplosionRadius_Radius_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_MakeStruct_QtnDamageInfo                                  (ContainsInstancedReference)
// TArray<class AActor*>              CallFunc_QtnDoRadialDamage_ReturnValue                           (ReferenceParm)

void AExplosiveMineBase_C::ExecuteUbergraph_ExplosiveMineBase(int32 EntryPoint, float CallFunc_GetExplosionRadius_Radius, const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_Event_delayTimeToDestroy, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AActor* K2Node_Event_SourceOwner, class UQtnVerb* K2Node_Event_InSourceVerb, const struct FVector& K2Node_Event_InitialVelocity, bool K2Node_Event_isServer, float CallFunc_GetExplosionRadius_Radius_1, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, TArray<class AActor*>& CallFunc_QtnDoRadialDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplosiveMineBase_C", "ExecuteUbergraph_ExplosiveMineBase");

	Params::AExplosiveMineBase_C_ExecuteUbergraph_ExplosiveMineBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetExplosionRadius_Radius = CallFunc_GetExplosionRadius_Radius;
	Parms.K2Node_MakeStruct_QtnRangedFloat = K2Node_MakeStruct_QtnRangedFloat;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_delayTimeToDestroy = K2Node_Event_delayTimeToDestroy;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Pawn = K2Node_DynamicCast_AsQtn_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_Event_SourceOwner = K2Node_Event_SourceOwner;
	Parms.K2Node_Event_InSourceVerb = K2Node_Event_InSourceVerb;
	Parms.K2Node_Event_InitialVelocity = K2Node_Event_InitialVelocity;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.CallFunc_GetExplosionRadius_Radius_1 = CallFunc_GetExplosionRadius_Radius_1;
	Parms.K2Node_MakeStruct_QtnDamageInfo = K2Node_MakeStruct_QtnDamageInfo;
	Parms.CallFunc_QtnDoRadialDamage_ReturnValue = CallFunc_QtnDoRadialDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExplosiveMineBase.ExplosiveMineBase_C.OnExplodedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AExplosiveMineBase_C*        ExplosiveMinObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExplosiveMineBase_C::OnExplodedEvent__DelegateSignature(class AExplosiveMineBase_C* ExplosiveMinObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplosiveMineBase_C", "OnExplodedEvent__DelegateSignature");

	Params::AExplosiveMineBase_C_OnExplodedEvent__DelegateSignature_Params Parms{};

	Parms.ExplosiveMinObject = ExplosiveMinObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


