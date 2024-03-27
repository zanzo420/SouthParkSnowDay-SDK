#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStatePatrol_PsychicAwareness.MentalStatePatrol_PsychicAwareness_C
// (None)

class UClass* UMentalStatePatrol_PsychicAwareness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStatePatrol_PsychicAwareness_C");

	return Clss;
}


// MentalStatePatrol_PsychicAwareness_C MentalStatePatrol_PsychicAwareness.Default__MentalStatePatrol_PsychicAwareness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStatePatrol_PsychicAwareness_C* UMentalStatePatrol_PsychicAwareness_C::GetDefaultObj()
{
	static class UMentalStatePatrol_PsychicAwareness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStatePatrol_PsychicAwareness_C*>(UMentalStatePatrol_PsychicAwareness_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalStatePatrol_PsychicAwareness.MentalStatePatrol_PsychicAwareness_C.OnThinkMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TimeSinceLastThought                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStatePatrol_PsychicAwareness_C::OnThinkMentalState(float TimeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStatePatrol_PsychicAwareness_C", "OnThinkMentalState");

	Params::UMentalStatePatrol_PsychicAwareness_C_OnThinkMentalState_Params Parms{};

	Parms.TimeSinceLastThought = TimeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStatePatrol_PsychicAwareness.MentalStatePatrol_PsychicAwareness_C.ExecuteUbergraph_MentalStatePatrol_PsychicAwareness
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_timeSinceLastThought                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStatePatrol_PsychicAwareness_C::ExecuteUbergraph_MentalStatePatrol_PsychicAwareness(int32 EntryPoint, float K2Node_Event_timeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStatePatrol_PsychicAwareness_C", "ExecuteUbergraph_MentalStatePatrol_PsychicAwareness");

	Params::UMentalStatePatrol_PsychicAwareness_C_ExecuteUbergraph_MentalStatePatrol_PsychicAwareness_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_timeSinceLastThought = K2Node_Event_timeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}

}


