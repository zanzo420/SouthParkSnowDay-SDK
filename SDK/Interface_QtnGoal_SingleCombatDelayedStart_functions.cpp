#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_QtnGoal_SingleCombatDelayedStart.Interface_QtnGoal_SingleCombatDelayedStart_C
// (None)

class UClass* IInterface_QtnGoal_SingleCombatDelayedStart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_QtnGoal_SingleCombatDelayedStart_C");

	return Clss;
}


// Interface_QtnGoal_SingleCombatDelayedStart_C Interface_QtnGoal_SingleCombatDelayedStart.Default__Interface_QtnGoal_SingleCombatDelayedStart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_QtnGoal_SingleCombatDelayedStart_C* IInterface_QtnGoal_SingleCombatDelayedStart_C::GetDefaultObj()
{
	static class IInterface_QtnGoal_SingleCombatDelayedStart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_QtnGoal_SingleCombatDelayedStart_C*>(IInterface_QtnGoal_SingleCombatDelayedStart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_QtnGoal_SingleCombatDelayedStart.Interface_QtnGoal_SingleCombatDelayedStart_C.DoGetLateJoinTeleportLoc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DeadPlayerTeleportLoc_C* LateJoinTeleportLoc                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SingleCombatDelayedStart_C::DoGetLateJoinTeleportLoc(class ABP_DeadPlayerTeleportLoc_C** LateJoinTeleportLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SingleCombatDelayedStart_C", "DoGetLateJoinTeleportLoc");

	Params::IInterface_QtnGoal_SingleCombatDelayedStart_C_DoGetLateJoinTeleportLoc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LateJoinTeleportLoc != nullptr)
		*LateJoinTeleportLoc = Parms.LateJoinTeleportLoc;

}


// Function Interface_QtnGoal_SingleCombatDelayedStart.Interface_QtnGoal_SingleCombatDelayedStart_C.DoGetEntranceGate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATravelVolume_BP_C*          EntranceGate                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_QtnGoal_SingleCombatDelayedStart_C::DoGetEntranceGate(class ATravelVolume_BP_C** EntranceGate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_QtnGoal_SingleCombatDelayedStart_C", "DoGetEntranceGate");

	Params::IInterface_QtnGoal_SingleCombatDelayedStart_C_DoGetEntranceGate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntranceGate != nullptr)
		*EntranceGate = Parms.EntranceGate;

}

}


