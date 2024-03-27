#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ContactSubsystemSpawnModifier_SetWorldRotation.ContactSubsystemSpawnModifier_SetWorldRotation_C
// (None)

class UClass* UContactSubsystemSpawnModifier_SetWorldRotation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContactSubsystemSpawnModifier_SetWorldRotation_C");

	return Clss;
}


// ContactSubsystemSpawnModifier_SetWorldRotation_C ContactSubsystemSpawnModifier_SetWorldRotation.Default__ContactSubsystemSpawnModifier_SetWorldRotation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContactSubsystemSpawnModifier_SetWorldRotation_C* UContactSubsystemSpawnModifier_SetWorldRotation_C::GetDefaultObj()
{
	static class UContactSubsystemSpawnModifier_SetWorldRotation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContactSubsystemSpawnModifier_SetWorldRotation_C*>(UContactSubsystemSpawnModifier_SetWorldRotation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ContactSubsystemSpawnModifier_SetWorldRotation.ContactSubsystemSpawnModifier_SetWorldRotation_C.ModifySpawnedContactFX
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnFXActor*                 ActorFX                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnContactData*             ContactData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnContactEventInfo        ContactInfo                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// struct FQtnSurfaceData             SurfaceData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UParticleSystemComponent*    CallFunc_GetParticleSystemComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UContactSubsystemSpawnModifier_SetWorldRotation_C::ModifySpawnedContactFX(class AQtnFXActor* ActorFX, class UQtnContactData* ContactData, struct FQtnContactEventInfo& ContactInfo, struct FQtnSurfaceData& SurfaceData, class UParticleSystemComponent* CallFunc_GetParticleSystemComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContactSubsystemSpawnModifier_SetWorldRotation_C", "ModifySpawnedContactFX");

	Params::UContactSubsystemSpawnModifier_SetWorldRotation_C_ModifySpawnedContactFX_Params Parms{};

	Parms.ActorFX = ActorFX;
	Parms.ContactData = ContactData;
	Parms.ContactInfo = ContactInfo;
	Parms.SurfaceData = SurfaceData;
	Parms.CallFunc_GetParticleSystemComponent_ReturnValue = CallFunc_GetParticleSystemComponent_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue = CallFunc_GetNiagaraComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


