#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_KyleBoss.MentalStateCombat_KyleBoss_C
// (None)

class UClass* UMentalStateCombat_KyleBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_KyleBoss_C");

	return Clss;
}


// MentalStateCombat_KyleBoss_C MentalStateCombat_KyleBoss.Default__MentalStateCombat_KyleBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_KyleBoss_C* UMentalStateCombat_KyleBoss_C::GetDefaultObj()
{
	static class UMentalStateCombat_KyleBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_KyleBoss_C*>(UMentalStateCombat_KyleBoss_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalStateCombat_KyleBoss.MentalStateCombat_KyleBoss_C.OnEnterMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnMentalState*             PreviousMentalState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_KyleBoss_C::OnEnterMentalState(class UQtnMentalState* PreviousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_KyleBoss_C", "OnEnterMentalState");

	Params::UMentalStateCombat_KyleBoss_C_OnEnterMentalState_Params Parms{};

	Parms.PreviousMentalState = PreviousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateCombat_KyleBoss.MentalStateCombat_KyleBoss_C.ExecuteUbergraph_MentalStateCombat_KyleBoss
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMentalState*             K2Node_Event_previousMentalState                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_KyleBoss_C::ExecuteUbergraph_MentalStateCombat_KyleBoss(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_KyleBoss_C", "ExecuteUbergraph_MentalStateCombat_KyleBoss");

	Params::UMentalStateCombat_KyleBoss_C_ExecuteUbergraph_MentalStateCombat_KyleBoss_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_previousMentalState = K2Node_Event_previousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}

}


