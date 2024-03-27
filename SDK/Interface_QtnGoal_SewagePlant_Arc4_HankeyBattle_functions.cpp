#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle.Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C
// (None)

class UClass* IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C");

	return Clss;
}


// Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle.Default__Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C* IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C::GetDefaultObj()
{
	static class IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C*>(IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle.Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C.SetHankeyDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HankeyDown                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C::SetHankeyDown(bool HankeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C", "SetHankeyDown");

	Params::IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C_SetHankeyDown_Params Parms{};

	Parms.HankeyDown = HankeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle.Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C.GetHankeyWorm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HankeyWorm                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C::GetHankeyWorm(class AActor** HankeyWorm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C", "GetHankeyWorm");

	Params::IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C_GetHankeyWorm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HankeyWorm != nullptr)
		*HankeyWorm = Parms.HankeyWorm;

}


// Function Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle.Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C.DoEndGoalSequence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C::DoEndGoalSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C", "DoEndGoalSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle.Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C.DEBUGONLY_SetCanSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanSpawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C::DEBUGONLY_SetCanSpawn(bool CanSpawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C", "DEBUGONLY_SetCanSpawn");

	Params::IInterface_QtnGoal_SewagePlant_Arc4_HankeyBattle_C_DEBUGONLY_SetCanSpawn_Params Parms{};

	Parms.CanSpawn = CanSpawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


