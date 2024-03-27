#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat.MentalStateCombat_C
// (None)

class UClass* UMentalStateCombat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_C");

	return Clss;
}


// MentalStateCombat_C MentalStateCombat.Default__MentalStateCombat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_C* UMentalStateCombat_C::GetDefaultObj()
{
	static class UMentalStateCombat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_C*>(UMentalStateCombat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalStateCombat.MentalStateCombat_C.OnEnterMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnMentalState*             PreviousMentalState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_C::OnEnterMentalState(class UQtnMentalState* PreviousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_C", "OnEnterMentalState");

	Params::UMentalStateCombat_C_OnEnterMentalState_Params Parms{};

	Parms.PreviousMentalState = PreviousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateCombat.MentalStateCombat_C.ExecuteUbergraph_MentalStateCombat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMentalState*             K2Node_Event_previousMentalState                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_C::ExecuteUbergraph_MentalStateCombat(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_C", "ExecuteUbergraph_MentalStateCombat");

	Params::UMentalStateCombat_C_ExecuteUbergraph_MentalStateCombat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_previousMentalState = K2Node_Event_previousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}

}


