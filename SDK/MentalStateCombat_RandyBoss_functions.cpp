#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_RandyBoss.MentalStateCombat_RandyBoss_C
// (None)

class UClass* UMentalStateCombat_RandyBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_RandyBoss_C");

	return Clss;
}


// MentalStateCombat_RandyBoss_C MentalStateCombat_RandyBoss.Default__MentalStateCombat_RandyBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_RandyBoss_C* UMentalStateCombat_RandyBoss_C::GetDefaultObj()
{
	static class UMentalStateCombat_RandyBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_RandyBoss_C*>(UMentalStateCombat_RandyBoss_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalStateCombat_RandyBoss.MentalStateCombat_RandyBoss_C.OnEnterMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnMentalState*             PreviousMentalState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_RandyBoss_C::OnEnterMentalState(class UQtnMentalState* PreviousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_RandyBoss_C", "OnEnterMentalState");

	Params::UMentalStateCombat_RandyBoss_C_OnEnterMentalState_Params Parms{};

	Parms.PreviousMentalState = PreviousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateCombat_RandyBoss.MentalStateCombat_RandyBoss_C.ExecuteUbergraph_MentalStateCombat_RandyBoss
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMentalState*             K2Node_Event_previousMentalState                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_RandyBoss_C::ExecuteUbergraph_MentalStateCombat_RandyBoss(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_RandyBoss_C", "ExecuteUbergraph_MentalStateCombat_RandyBoss");

	Params::UMentalStateCombat_RandyBoss_C_ExecuteUbergraph_MentalStateCombat_RandyBoss_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_previousMentalState = K2Node_Event_previousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}

}


