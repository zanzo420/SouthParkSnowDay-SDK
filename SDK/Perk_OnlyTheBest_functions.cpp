#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Perk_OnlyTheBest.Perk_OnlyTheBest_C
// (None)

class UClass* UPerk_OnlyTheBest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Perk_OnlyTheBest_C");

	return Clss;
}


// Perk_OnlyTheBest_C Perk_OnlyTheBest.Default__Perk_OnlyTheBest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerk_OnlyTheBest_C* UPerk_OnlyTheBest_C::GetDefaultObj()
{
	static class UPerk_OnlyTheBest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerk_OnlyTheBest_C*>(UPerk_OnlyTheBest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Perk_OnlyTheBest.Perk_OnlyTheBest_C.GetPerkValueAtInstanceCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ValueIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceCount                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UPerk_OnlyTheBest_C::GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_OnlyTheBest_C", "GetPerkValueAtInstanceCount");

	Params::UPerk_OnlyTheBest_C_GetPerkValueAtInstanceCount_Params Parms{};

	Parms.ValueIndex = ValueIndex;
	Parms.InstanceCount = InstanceCount;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Perk_OnlyTheBest.Perk_OnlyTheBest_C.OnActivatePerkEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetBodyPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_OnlyTheBest_C::OnActivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_OnlyTheBest_C", "OnActivatePerkEvent");

	Params::UPerk_OnlyTheBest_C_OnActivatePerkEvent_Params Parms{};

	Parms.TargetBodyPawn = TargetBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Perk_OnlyTheBest.Perk_OnlyTheBest_C.ExecuteUbergraph_Perk_OnlyTheBest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_TargetBodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_OnlyTheBest_C::ExecuteUbergraph_Perk_OnlyTheBest(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_OnlyTheBest_C", "ExecuteUbergraph_Perk_OnlyTheBest");

	Params::UPerk_OnlyTheBest_C_ExecuteUbergraph_Perk_OnlyTheBest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TargetBodyPawn = K2Node_Event_TargetBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


