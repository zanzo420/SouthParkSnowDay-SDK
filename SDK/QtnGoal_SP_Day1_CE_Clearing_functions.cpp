#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_SP_Day1_CE_Clearing.QtnGoal_SP_Day1_CE_Clearing_C
// (None)

class UClass* UQtnGoal_SP_Day1_CE_Clearing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_SP_Day1_CE_Clearing_C");

	return Clss;
}


// QtnGoal_SP_Day1_CE_Clearing_C QtnGoal_SP_Day1_CE_Clearing.Default__QtnGoal_SP_Day1_CE_Clearing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_SP_Day1_CE_Clearing_C* UQtnGoal_SP_Day1_CE_Clearing_C::GetDefaultObj()
{
	static class UQtnGoal_SP_Day1_CE_Clearing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_SP_Day1_CE_Clearing_C*>(UQtnGoal_SP_Day1_CE_Clearing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_SP_Day1_CE_Clearing.QtnGoal_SP_Day1_CE_Clearing_C.VO_CheckForEntryVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_CE_Clearing_C::VO_CheckForEntryVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Clearing_C", "VO_CheckForEntryVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_CE_Clearing.QtnGoal_SP_Day1_CE_Clearing_C.Receive Skirmish Notify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                Skirmish_Sending_Event                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Final_skirmish_action                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Action_Tag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQtnGoal_SP_Day1_CE_Clearing_C::Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_CE_Clearing_C", "Receive Skirmish Notify");

	Params::UQtnGoal_SP_Day1_CE_Clearing_C_Receive_Skirmish_Notify_Params Parms{};

	Parms.Skirmish_Sending_Event = Skirmish_Sending_Event;
	Parms.Final_skirmish_action = Final_skirmish_action;
	Parms.Action_Tag = Action_Tag;

	UObject::ProcessEvent(Func, &Parms);

}

}


