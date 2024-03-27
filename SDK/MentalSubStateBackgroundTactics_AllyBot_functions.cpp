#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateBackgroundTactics_AllyBot.MentalSubStateBackgroundTactics_AllyBot_C
// (None)

class UClass* UMentalSubStateBackgroundTactics_AllyBot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateBackgroundTactics_AllyBot_C");

	return Clss;
}


// MentalSubStateBackgroundTactics_AllyBot_C MentalSubStateBackgroundTactics_AllyBot.Default__MentalSubStateBackgroundTactics_AllyBot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateBackgroundTactics_AllyBot_C* UMentalSubStateBackgroundTactics_AllyBot_C::GetDefaultObj()
{
	static class UMentalSubStateBackgroundTactics_AllyBot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateBackgroundTactics_AllyBot_C*>(UMentalSubStateBackgroundTactics_AllyBot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalSubStateBackgroundTactics_AllyBot.MentalSubStateBackgroundTactics_AllyBot_C.OnThinkMentalSubState
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TimeSinceLastThought                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalSubStateBackgroundTactics_AllyBot_C::OnThinkMentalSubState(float TimeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalSubStateBackgroundTactics_AllyBot_C", "OnThinkMentalSubState");

	Params::UMentalSubStateBackgroundTactics_AllyBot_C_OnThinkMentalSubState_Params Parms{};

	Parms.TimeSinceLastThought = TimeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalSubStateBackgroundTactics_AllyBot.MentalSubStateBackgroundTactics_AllyBot_C.ExecuteUbergraph_MentalSubStateBackgroundTactics_AllyBot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_timeSinceLastThought                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyControllerAllyBot_C*    K2Node_DynamicCast_AsBody_Controller_Ally_Bot                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMentalSubStateBackgroundTactics_AllyBot_C::ExecuteUbergraph_MentalSubStateBackgroundTactics_AllyBot(int32 EntryPoint, float K2Node_Event_timeSinceLastThought, class ABodyControllerAllyBot_C* K2Node_DynamicCast_AsBody_Controller_Ally_Bot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalSubStateBackgroundTactics_AllyBot_C", "ExecuteUbergraph_MentalSubStateBackgroundTactics_AllyBot");

	Params::UMentalSubStateBackgroundTactics_AllyBot_C_ExecuteUbergraph_MentalSubStateBackgroundTactics_AllyBot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_timeSinceLastThought = K2Node_Event_timeSinceLastThought;
	Parms.K2Node_DynamicCast_AsBody_Controller_Ally_Bot = K2Node_DynamicCast_AsBody_Controller_Ally_Bot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


