#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_QtnGoal_SP_Day1_CE_Parent.Interface_QtnGoal_SP_Day1_CE_Parent_C
// (None)

class UClass* IInterface_QtnGoal_SP_Day1_CE_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_QtnGoal_SP_Day1_CE_Parent_C");

	return Clss;
}


// Interface_QtnGoal_SP_Day1_CE_Parent_C Interface_QtnGoal_SP_Day1_CE_Parent.Default__Interface_QtnGoal_SP_Day1_CE_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_QtnGoal_SP_Day1_CE_Parent_C* IInterface_QtnGoal_SP_Day1_CE_Parent_C::GetDefaultObj()
{
	static class IInterface_QtnGoal_SP_Day1_CE_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_QtnGoal_SP_Day1_CE_Parent_C*>(IInterface_QtnGoal_SP_Day1_CE_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_QtnGoal_SP_Day1_CE_Parent.Interface_QtnGoal_SP_Day1_CE_Parent_C.DoGetLateJoinTeleportLoc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DeadPlayerTeleportLoc_C* LateJoinTeleportLoc                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SP_Day1_CE_Parent_C::DoGetLateJoinTeleportLoc(class ABP_DeadPlayerTeleportLoc_C** LateJoinTeleportLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_CE_Parent_C", "DoGetLateJoinTeleportLoc");

	Params::IInterface_QtnGoal_SP_Day1_CE_Parent_C_DoGetLateJoinTeleportLoc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LateJoinTeleportLoc != nullptr)
		*LateJoinTeleportLoc = Parms.LateJoinTeleportLoc;

}


// Function Interface_QtnGoal_SP_Day1_CE_Parent.Interface_QtnGoal_SP_Day1_CE_Parent_C.DoGetDefaultLateJoinLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DeadPlayerTeleportLoc_C* DefaultLateJoinLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SP_Day1_CE_Parent_C::DoGetDefaultLateJoinLocation(class ABP_DeadPlayerTeleportLoc_C** DefaultLateJoinLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_CE_Parent_C", "DoGetDefaultLateJoinLocation");

	Params::IInterface_QtnGoal_SP_Day1_CE_Parent_C_DoGetDefaultLateJoinLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DefaultLateJoinLocation != nullptr)
		*DefaultLateJoinLocation = Parms.DefaultLateJoinLocation;

}


// Function Interface_QtnGoal_SP_Day1_CE_Parent.Interface_QtnGoal_SP_Day1_CE_Parent_C.DoGetExitGate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          ExitGate                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SP_Day1_CE_Parent_C::DoGetExitGate(class ATravelVolume_BP_C** ExitGate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_CE_Parent_C", "DoGetExitGate");

	Params::IInterface_QtnGoal_SP_Day1_CE_Parent_C_DoGetExitGate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExitGate != nullptr)
		*ExitGate = Parms.ExitGate;

}


// Function Interface_QtnGoal_SP_Day1_CE_Parent.Interface_QtnGoal_SP_Day1_CE_Parent_C.DoGetEntranceDestination
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DeadPlayerTeleportLoc_C* EntranceDestination                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SP_Day1_CE_Parent_C::DoGetEntranceDestination(class ABP_DeadPlayerTeleportLoc_C** EntranceDestination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SP_Day1_CE_Parent_C", "DoGetEntranceDestination");

	Params::IInterface_QtnGoal_SP_Day1_CE_Parent_C_DoGetEntranceDestination_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntranceDestination != nullptr)
		*EntranceDestination = Parms.EntranceDestination;

}

}


