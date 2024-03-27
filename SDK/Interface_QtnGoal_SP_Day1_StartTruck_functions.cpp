#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_QtnGoal_SP_Day1_StartTruck.Interface_QtnGoal_SP_Day1_StartTruck_C
// (None)

class UClass* IInterface_QtnGoal_SP_Day1_StartTruck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_QtnGoal_SP_Day1_StartTruck_C");

	return Clss;
}


// Interface_QtnGoal_SP_Day1_StartTruck_C Interface_QtnGoal_SP_Day1_StartTruck.Default__Interface_QtnGoal_SP_Day1_StartTruck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_QtnGoal_SP_Day1_StartTruck_C* IInterface_QtnGoal_SP_Day1_StartTruck_C::GetDefaultObj()
{
	static class IInterface_QtnGoal_SP_Day1_StartTruck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_QtnGoal_SP_Day1_StartTruck_C*>(IInterface_QtnGoal_SP_Day1_StartTruck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_QtnGoal_SP_Day1_StartTruck.Interface_QtnGoal_SP_Day1_StartTruck_C.DoSetKeyGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    KeyGoal                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SP_Day1_StartTruck_C::DoSetKeyGoal(class UQtnGoal* KeyGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_StartTruck_C", "DoSetKeyGoal");

	Params::IInterface_QtnGoal_SP_Day1_StartTruck_C_DoSetKeyGoal_Params Parms{};

	Parms.KeyGoal = KeyGoal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_QtnGoal_SP_Day1_StartTruck.Interface_QtnGoal_SP_Day1_StartTruck_C.DoSetGasGoal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal*                    GasGoal                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SP_Day1_StartTruck_C::DoSetGasGoal(class UQtnGoal* GasGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_StartTruck_C", "DoSetGasGoal");

	Params::IInterface_QtnGoal_SP_Day1_StartTruck_C_DoSetGasGoal_Params Parms{};

	Parms.GasGoal = GasGoal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_QtnGoal_SP_Day1_StartTruck.Interface_QtnGoal_SP_Day1_StartTruck_C.DoTruckStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_QtnGoal_SP_Day1_StartTruck_C::DoTruckStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_StartTruck_C", "DoTruckStarted");



	UObject::ProcessEvent(Func, nullptr);

}

}


