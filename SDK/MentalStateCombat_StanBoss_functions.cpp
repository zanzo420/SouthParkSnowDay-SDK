#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_StanBoss.MentalStateCombat_StanBoss_C
// (None)

class UClass* UMentalStateCombat_StanBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_StanBoss_C");

	return Clss;
}


// MentalStateCombat_StanBoss_C MentalStateCombat_StanBoss.Default__MentalStateCombat_StanBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_StanBoss_C* UMentalStateCombat_StanBoss_C::GetDefaultObj()
{
	static class UMentalStateCombat_StanBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_StanBoss_C*>(UMentalStateCombat_StanBoss_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalStateCombat_StanBoss.MentalStateCombat_StanBoss_C.OnEnterMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnMentalState*             PreviousMentalState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_StanBoss_C::OnEnterMentalState(class UQtnMentalState* PreviousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_StanBoss_C", "OnEnterMentalState");

	Params::UMentalStateCombat_StanBoss_C_OnEnterMentalState_Params Parms{};

	Parms.PreviousMentalState = PreviousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateCombat_StanBoss.MentalStateCombat_StanBoss_C.ExecuteUbergraph_MentalStateCombat_StanBoss
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMentalState*             K2Node_Event_previousMentalState                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_StanBoss_C::ExecuteUbergraph_MentalStateCombat_StanBoss(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_StanBoss_C", "ExecuteUbergraph_MentalStateCombat_StanBoss");

	Params::UMentalStateCombat_StanBoss_C_ExecuteUbergraph_MentalStateCombat_StanBoss_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_previousMentalState = K2Node_Event_previousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}

}


