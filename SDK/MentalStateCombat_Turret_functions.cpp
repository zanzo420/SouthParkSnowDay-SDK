#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_Turret.MentalStateCombat_Turret_C
// (None)

class UClass* UMentalStateCombat_Turret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_Turret_C");

	return Clss;
}


// MentalStateCombat_Turret_C MentalStateCombat_Turret.Default__MentalStateCombat_Turret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_Turret_C* UMentalStateCombat_Turret_C::GetDefaultObj()
{
	static class UMentalStateCombat_Turret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_Turret_C*>(UMentalStateCombat_Turret_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalStateCombat_Turret.MentalStateCombat_Turret_C.OnEnterMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnMentalState*             PreviousMentalState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_Turret_C::OnEnterMentalState(class UQtnMentalState* PreviousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_Turret_C", "OnEnterMentalState");

	Params::UMentalStateCombat_Turret_C_OnEnterMentalState_Params Parms{};

	Parms.PreviousMentalState = PreviousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateCombat_Turret.MentalStateCombat_Turret_C.ExecuteUbergraph_MentalStateCombat_Turret
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMentalState*             K2Node_Event_previousMentalState                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_Turret_C::ExecuteUbergraph_MentalStateCombat_Turret(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_Turret_C", "ExecuteUbergraph_MentalStateCombat_Turret");

	Params::UMentalStateCombat_Turret_C_ExecuteUbergraph_MentalStateCombat_Turret_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_previousMentalState = K2Node_Event_previousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}

}


