#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateMeleeTactics_AllyBot.MentalSubStateMeleeTactics_AllyBot_C
// (None)

class UClass* UMentalSubStateMeleeTactics_AllyBot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateMeleeTactics_AllyBot_C");

	return Clss;
}


// MentalSubStateMeleeTactics_AllyBot_C MentalSubStateMeleeTactics_AllyBot.Default__MentalSubStateMeleeTactics_AllyBot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateMeleeTactics_AllyBot_C* UMentalSubStateMeleeTactics_AllyBot_C::GetDefaultObj()
{
	static class UMentalSubStateMeleeTactics_AllyBot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateMeleeTactics_AllyBot_C*>(UMentalSubStateMeleeTactics_AllyBot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalSubStateMeleeTactics_AllyBot.MentalSubStateMeleeTactics_AllyBot_C.OnThinkMentalSubState
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TimeSinceLastThought                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalSubStateMeleeTactics_AllyBot_C::OnThinkMentalSubState(float TimeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalSubStateMeleeTactics_AllyBot_C", "OnThinkMentalSubState");

	Params::UMentalSubStateMeleeTactics_AllyBot_C_OnThinkMentalSubState_Params Parms{};

	Parms.TimeSinceLastThought = TimeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalSubStateMeleeTactics_AllyBot.MentalSubStateMeleeTactics_AllyBot_C.ExecuteUbergraph_MentalSubStateMeleeTactics_AllyBot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_timeSinceLastThought                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyControllerAllyBot_C*    K2Node_DynamicCast_AsBody_Controller_Ally_Bot                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMentalSubStateMeleeTactics_AllyBot_C::ExecuteUbergraph_MentalSubStateMeleeTactics_AllyBot(int32 EntryPoint, float K2Node_Event_timeSinceLastThought, class ABodyControllerAllyBot_C* K2Node_DynamicCast_AsBody_Controller_Ally_Bot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalSubStateMeleeTactics_AllyBot_C", "ExecuteUbergraph_MentalSubStateMeleeTactics_AllyBot");

	Params::UMentalSubStateMeleeTactics_AllyBot_C_ExecuteUbergraph_MentalSubStateMeleeTactics_AllyBot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_timeSinceLastThought = K2Node_Event_timeSinceLastThought;
	Parms.K2Node_DynamicCast_AsBody_Controller_Ally_Bot = K2Node_DynamicCast_AsBody_Controller_Ally_Bot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


