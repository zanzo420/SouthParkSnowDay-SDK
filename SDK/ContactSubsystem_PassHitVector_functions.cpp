#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ContactSubsystem_PassHitVector.ContactSubsystem_PassHitVector_C
// (None)

class UClass* UContactSubsystem_PassHitVector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContactSubsystem_PassHitVector_C");

	return Clss;
}


// ContactSubsystem_PassHitVector_C ContactSubsystem_PassHitVector.Default__ContactSubsystem_PassHitVector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContactSubsystem_PassHitVector_C* UContactSubsystem_PassHitVector_C::GetDefaultObj()
{
	static class UContactSubsystem_PassHitVector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContactSubsystem_PassHitVector_C*>(UContactSubsystem_PassHitVector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ContactSubsystem_PassHitVector.ContactSubsystem_PassHitVector_C.ModifySpawnedContactFX
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnFXActor*                 ActorFX                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnContactData*             ContactData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnContactEventInfo        ContactInfo                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// struct FQtnSurfaceData             SurfaceData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UNiagaraComponent*           CallFunc_GetNiagaraComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContactSubsystem_PassHitVector_C::ModifySpawnedContactFX(class AQtnFXActor* ActorFX, class UQtnContactData* ContactData, struct FQtnContactEventInfo& ContactInfo, struct FQtnSurfaceData& SurfaceData, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContactSubsystem_PassHitVector_C", "ModifySpawnedContactFX");

	Params::UContactSubsystem_PassHitVector_C_ModifySpawnedContactFX_Params Parms{};

	Parms.ActorFX = ActorFX;
	Parms.ContactData = ContactData;
	Parms.ContactInfo = ContactInfo;
	Parms.SurfaceData = SurfaceData;
	Parms.CallFunc_GetNiagaraComponent_ReturnValue = CallFunc_GetNiagaraComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


