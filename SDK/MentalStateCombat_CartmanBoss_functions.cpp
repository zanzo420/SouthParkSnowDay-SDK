#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_CartmanBoss.MentalStateCombat_CartmanBoss_C
// (None)

class UClass* UMentalStateCombat_CartmanBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_CartmanBoss_C");

	return Clss;
}


// MentalStateCombat_CartmanBoss_C MentalStateCombat_CartmanBoss.Default__MentalStateCombat_CartmanBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_CartmanBoss_C* UMentalStateCombat_CartmanBoss_C::GetDefaultObj()
{
	static class UMentalStateCombat_CartmanBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_CartmanBoss_C*>(UMentalStateCombat_CartmanBoss_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalStateCombat_CartmanBoss.MentalStateCombat_CartmanBoss_C.OnEnterMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnMentalState*             PreviousMentalState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_CartmanBoss_C::OnEnterMentalState(class UQtnMentalState* PreviousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_CartmanBoss_C", "OnEnterMentalState");

	Params::UMentalStateCombat_CartmanBoss_C_OnEnterMentalState_Params Parms{};

	Parms.PreviousMentalState = PreviousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateCombat_CartmanBoss.MentalStateCombat_CartmanBoss_C.ExecuteUbergraph_MentalStateCombat_CartmanBoss
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMentalState*             K2Node_Event_previousMentalState                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_CartmanBoss_C::ExecuteUbergraph_MentalStateCombat_CartmanBoss(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_CartmanBoss_C", "ExecuteUbergraph_MentalStateCombat_CartmanBoss");

	Params::UMentalStateCombat_CartmanBoss_C_ExecuteUbergraph_MentalStateCombat_CartmanBoss_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_previousMentalState = K2Node_Event_previousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}

}


