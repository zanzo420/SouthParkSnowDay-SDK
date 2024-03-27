#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_QtnGoal_MS_Act2_ReachEndOfStreet.Interface_QtnGoal_MS_Act2_ReachEndOfStreet_C
// (None)

class UClass* IInterface_QtnGoal_MS_Act2_ReachEndOfStreet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_QtnGoal_MS_Act2_ReachEndOfStreet_C");

	return Clss;
}


// Interface_QtnGoal_MS_Act2_ReachEndOfStreet_C Interface_QtnGoal_MS_Act2_ReachEndOfStreet.Default__Interface_QtnGoal_MS_Act2_ReachEndOfStreet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_QtnGoal_MS_Act2_ReachEndOfStreet_C* IInterface_QtnGoal_MS_Act2_ReachEndOfStreet_C::GetDefaultObj()
{
	static class IInterface_QtnGoal_MS_Act2_ReachEndOfStreet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_QtnGoal_MS_Act2_ReachEndOfStreet_C*>(IInterface_QtnGoal_MS_Act2_ReachEndOfStreet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_QtnGoal_MS_Act2_ReachEndOfStreet.Interface_QtnGoal_MS_Act2_ReachEndOfStreet_C.SetCatapultGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    CatapultGoal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_MS_Act2_ReachEndOfStreet_C::SetCatapultGoal(class UQtnGoal* CatapultGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_MS_Act2_ReachEndOfStreet_C", "SetCatapultGoal");

	Params::IInterface_QtnGoal_MS_Act2_ReachEndOfStreet_C_SetCatapultGoal_Params Parms{};

	Parms.CatapultGoal = CatapultGoal;

	UObject::ProcessEvent(Func, &Parms);

}

}


