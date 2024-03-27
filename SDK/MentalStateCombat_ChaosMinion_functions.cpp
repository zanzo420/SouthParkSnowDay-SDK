#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_ChaosMinion.MentalStateCombat_ChaosMinion_C
// (None)

class UClass* UMentalStateCombat_ChaosMinion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_ChaosMinion_C");

	return Clss;
}


// MentalStateCombat_ChaosMinion_C MentalStateCombat_ChaosMinion.Default__MentalStateCombat_ChaosMinion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_ChaosMinion_C* UMentalStateCombat_ChaosMinion_C::GetDefaultObj()
{
	static class UMentalStateCombat_ChaosMinion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_ChaosMinion_C*>(UMentalStateCombat_ChaosMinion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalStateCombat_ChaosMinion.MentalStateCombat_ChaosMinion_C.OnEnterMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnMentalState*             PreviousMentalState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_ChaosMinion_C::OnEnterMentalState(class UQtnMentalState* PreviousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_ChaosMinion_C", "OnEnterMentalState");

	Params::UMentalStateCombat_ChaosMinion_C_OnEnterMentalState_Params Parms{};

	Parms.PreviousMentalState = PreviousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateCombat_ChaosMinion.MentalStateCombat_ChaosMinion_C.ExecuteUbergraph_MentalStateCombat_ChaosMinion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMentalState*             K2Node_Event_previousMentalState                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetClosestPlayer_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_ChaosMinion_C::ExecuteUbergraph_MentalStateCombat_ChaosMinion(int32 EntryPoint, class UQtnMentalState* K2Node_Event_previousMentalState, class AQtnBodyPawn* CallFunc_GetClosestPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_ChaosMinion_C", "ExecuteUbergraph_MentalStateCombat_ChaosMinion");

	Params::UMentalStateCombat_ChaosMinion_C_ExecuteUbergraph_MentalStateCombat_ChaosMinion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_previousMentalState = K2Node_Event_previousMentalState;
	Parms.CallFunc_GetClosestPlayer_ReturnValue = CallFunc_GetClosestPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


