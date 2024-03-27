#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadioactiveAuraComponent.RadioactiveAuraComponent_C
// (None)

class UClass* URadioactiveAuraComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadioactiveAuraComponent_C");

	return Clss;
}


// RadioactiveAuraComponent_C RadioactiveAuraComponent.Default__RadioactiveAuraComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URadioactiveAuraComponent_C* URadioactiveAuraComponent_C::GetDefaultObj()
{
	static class URadioactiveAuraComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URadioactiveAuraComponent_C*>(URadioactiveAuraComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RadioactiveAuraComponent.RadioactiveAuraComponent_C.RemoveAuraEffect_ServerOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnBase_C*             VictimBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioactiveAuraComponent_C::RemoveAuraEffect_ServerOnly(class ABodyPawnBase_C*& VictimBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioactiveAuraComponent_C", "RemoveAuraEffect_ServerOnly");

	Params::URadioactiveAuraComponent_C_RemoveAuraEffect_ServerOnly_Params Parms{};

	Parms.VictimBody = VictimBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RadioactiveAuraComponent.RadioactiveAuraComponent_C.ApplyAuraEffect_ServerOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnBase_C*             VictimBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioactiveAuraComponent_C::ApplyAuraEffect_ServerOnly(class ABodyPawnBase_C*& VictimBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioactiveAuraComponent_C", "ApplyAuraEffect_ServerOnly");

	Params::URadioactiveAuraComponent_C_ApplyAuraEffect_ServerOnly_Params Parms{};

	Parms.VictimBody = VictimBody;

	UObject::ProcessEvent(Func, &Parms);

}

}


