#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Perk_Tester.Perk_Tester_C
// (None)

class UClass* UPerk_Tester_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Perk_Tester_C");

	return Clss;
}


// Perk_Tester_C Perk_Tester.Default__Perk_Tester_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerk_Tester_C* UPerk_Tester_C::GetDefaultObj()
{
	static class UPerk_Tester_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerk_Tester_C*>(UPerk_Tester_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Perk_Tester.Perk_Tester_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_Tester_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_Tester_C", "OnDebugDisplay");

	Params::UPerk_Tester_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Perk_Tester.Perk_Tester_C.IsPerkEquipped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPerk_Tester_C::IsPerkEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_Tester_C", "IsPerkEquipped");

	Params::UPerk_Tester_C_IsPerkEquipped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Perk_Tester.Perk_Tester_C.OnActivatePerkEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetBodyPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_Tester_C::OnActivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_Tester_C", "OnActivatePerkEvent");

	Params::UPerk_Tester_C_OnActivatePerkEvent_Params Parms{};

	Parms.TargetBodyPawn = TargetBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Perk_Tester.Perk_Tester_C.OnDeactivatePerkEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetBodyPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_Tester_C::OnDeactivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_Tester_C", "OnDeactivatePerkEvent");

	Params::UPerk_Tester_C_OnDeactivatePerkEvent_Params Parms{};

	Parms.TargetBodyPawn = TargetBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Perk_Tester.Perk_Tester_C.ExecuteUbergraph_Perk_Tester
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_TargetBodyPawn_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_TargetBodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_Tester_C::ExecuteUbergraph_Perk_Tester(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn_1, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_Tester_C", "ExecuteUbergraph_Perk_Tester");

	Params::UPerk_Tester_C_ExecuteUbergraph_Perk_Tester_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TargetBodyPawn_1 = K2Node_Event_TargetBodyPawn_1;
	Parms.K2Node_Event_TargetBodyPawn = K2Node_Event_TargetBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


