#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Perk_SweetTalker.Perk_SweetTalker_C
// (None)

class UClass* UPerk_SweetTalker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Perk_SweetTalker_C");

	return Clss;
}


// Perk_SweetTalker_C Perk_SweetTalker.Default__Perk_SweetTalker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerk_SweetTalker_C* UPerk_SweetTalker_C::GetDefaultObj()
{
	static class UPerk_SweetTalker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerk_SweetTalker_C*>(UPerk_SweetTalker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Perk_SweetTalker.Perk_SweetTalker_C.GetPerkValueAtInstanceCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ValueIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceCount                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UPerk_SweetTalker_C::GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_SweetTalker_C", "GetPerkValueAtInstanceCount");

	Params::UPerk_SweetTalker_C_GetPerkValueAtInstanceCount_Params Parms{};

	Parms.ValueIndex = ValueIndex;
	Parms.InstanceCount = InstanceCount;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Perk_SweetTalker.Perk_SweetTalker_C.OnActivatePerkEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetBodyPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_SweetTalker_C::OnActivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_SweetTalker_C", "OnActivatePerkEvent");

	Params::UPerk_SweetTalker_C_OnActivatePerkEvent_Params Parms{};

	Parms.TargetBodyPawn = TargetBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Perk_SweetTalker.Perk_SweetTalker_C.ExecuteUbergraph_Perk_SweetTalker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_TargetBodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_SweetTalker_C::ExecuteUbergraph_Perk_SweetTalker(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_SweetTalker_C", "ExecuteUbergraph_Perk_SweetTalker");

	Params::UPerk_SweetTalker_C_ExecuteUbergraph_Perk_SweetTalker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TargetBodyPawn = K2Node_Event_TargetBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


