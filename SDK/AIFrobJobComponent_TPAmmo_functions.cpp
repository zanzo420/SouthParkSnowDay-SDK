#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIFrobJobComponent_TPAmmo.AIFrobJobComponent_TPAmmo_C
// (SceneComponent)

class UClass* UAIFrobJobComponent_TPAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIFrobJobComponent_TPAmmo_C");

	return Clss;
}


// AIFrobJobComponent_TPAmmo_C AIFrobJobComponent_TPAmmo.Default__AIFrobJobComponent_TPAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIFrobJobComponent_TPAmmo_C* UAIFrobJobComponent_TPAmmo_C::GetDefaultObj()
{
	static class UAIFrobJobComponent_TPAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIFrobJobComponent_TPAmmo_C*>(UAIFrobJobComponent_TPAmmo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIFrobJobComponent_TPAmmo.AIFrobJobComponent_TPAmmo_C.IsAIJobViable_ServerOnly
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnPawn*                    Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForInitialAdoption                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class UQtnCarryComponent*>  CallFunc_GetManagedCarryComponents_ReturnValue                   (ConstParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIFrobJobComponent_TPAmmo_C::IsAIJobViable_ServerOnly(class AQtnPawn* Pawn, bool ForInitialAdoption, TArray<class UQtnCarryComponent*>& CallFunc_GetManagedCarryComponents_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIFrobJobComponent_TPAmmo_C", "IsAIJobViable_ServerOnly");

	Params::UAIFrobJobComponent_TPAmmo_C_IsAIJobViable_ServerOnly_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.ForInitialAdoption = ForInitialAdoption;
	Parms.CallFunc_GetManagedCarryComponents_ReturnValue = CallFunc_GetManagedCarryComponents_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


