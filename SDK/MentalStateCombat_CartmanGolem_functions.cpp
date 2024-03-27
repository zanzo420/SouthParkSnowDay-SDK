#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_CartmanGolem.MentalStateCombat_CartmanGolem_C
// (None)

class UClass* UMentalStateCombat_CartmanGolem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_CartmanGolem_C");

	return Clss;
}


// MentalStateCombat_CartmanGolem_C MentalStateCombat_CartmanGolem.Default__MentalStateCombat_CartmanGolem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_CartmanGolem_C* UMentalStateCombat_CartmanGolem_C::GetDefaultObj()
{
	static class UMentalStateCombat_CartmanGolem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_CartmanGolem_C*>(UMentalStateCombat_CartmanGolem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalStateCombat_CartmanGolem.MentalStateCombat_CartmanGolem_C.OnEnterMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnMentalState*             PreviousMentalState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_CartmanGolem_C::OnEnterMentalState(class UQtnMentalState* PreviousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_CartmanGolem_C", "OnEnterMentalState");

	Params::UMentalStateCombat_CartmanGolem_C_OnEnterMentalState_Params Parms{};

	Parms.PreviousMentalState = PreviousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateCombat_CartmanGolem.MentalStateCombat_CartmanGolem_C.ExecuteUbergraph_MentalStateCombat_CartmanGolem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMentalState*             K2Node_Event_previousMentalState                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_CartmanGolem_C::ExecuteUbergraph_MentalStateCombat_CartmanGolem(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_CartmanGolem_C", "ExecuteUbergraph_MentalStateCombat_CartmanGolem");

	Params::UMentalStateCombat_CartmanGolem_C_ExecuteUbergraph_MentalStateCombat_CartmanGolem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_previousMentalState = K2Node_Event_previousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}

}


