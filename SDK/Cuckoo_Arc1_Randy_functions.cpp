#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cuckoo_Arc1_Randy.Cuckoo_Arc1_Randy_C
// (Actor)

class UClass* ACuckoo_Arc1_Randy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cuckoo_Arc1_Randy_C");

	return Clss;
}


// Cuckoo_Arc1_Randy_C Cuckoo_Arc1_Randy.Default__Cuckoo_Arc1_Randy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACuckoo_Arc1_Randy_C* ACuckoo_Arc1_Randy_C::GetDefaultObj()
{
	static class ACuckoo_Arc1_Randy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACuckoo_Arc1_Randy_C*>(ACuckoo_Arc1_Randy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cuckoo_Arc1_Randy.Cuckoo_Arc1_Randy_C.LOCAL_UpdateToggleVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACuckoo_Arc1_Randy_C::LOCAL_UpdateToggleVis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cuckoo_Arc1_Randy_C", "LOCAL_UpdateToggleVis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cuckoo_Arc1_Randy.Cuckoo_Arc1_Randy_C.OnRep_toggledOnToday
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACuckoo_Arc1_Randy_C::OnRep_toggledOnToday()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cuckoo_Arc1_Randy_C", "OnRep_toggledOnToday");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cuckoo_Arc1_Randy.Cuckoo_Arc1_Randy_C.Toggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Want_On                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGoalManager*             CallFunc_GetGoalManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACuckoo_Arc1_Randy_C::Toggle(bool Want_On, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cuckoo_Arc1_Randy_C", "Toggle");

	Params::ACuckoo_Arc1_Randy_C_Toggle_Params Parms{};

	Parms.Want_On = Want_On;
	Parms.CallFunc_GetGoalManager_ReturnValue = CallFunc_GetGoalManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cuckoo_Arc1_Randy.Cuckoo_Arc1_Randy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACuckoo_Arc1_Randy_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cuckoo_Arc1_Randy_C", "ReceiveTick");

	Params::ACuckoo_Arc1_Randy_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cuckoo_Arc1_Randy.Cuckoo_Arc1_Randy_C.ToggleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantOn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACuckoo_Arc1_Randy_C::ToggleEvent(bool WantOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cuckoo_Arc1_Randy_C", "ToggleEvent");

	Params::ACuckoo_Arc1_Randy_C_ToggleEvent_Params Parms{};

	Parms.WantOn = WantOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cuckoo_Arc1_Randy.Cuckoo_Arc1_Randy_C.ExecuteUbergraph_Cuckoo_Arc1_Randy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_WantOn                                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACuckoo_Arc1_Randy_C::ExecuteUbergraph_Cuckoo_Arc1_Randy(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_Event_WantOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cuckoo_Arc1_Randy_C", "ExecuteUbergraph_Cuckoo_Arc1_Randy");

	Params::ACuckoo_Arc1_Randy_C_ExecuteUbergraph_Cuckoo_Arc1_Randy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_WantOn = K2Node_Event_WantOn;

	UObject::ProcessEvent(Func, &Parms);

}

}


