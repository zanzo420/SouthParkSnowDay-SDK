#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Perk_SecondLife.Perk_SecondLife_C
// (None)

class UClass* UPerk_SecondLife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Perk_SecondLife_C");

	return Clss;
}


// Perk_SecondLife_C Perk_SecondLife.Default__Perk_SecondLife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerk_SecondLife_C* UPerk_SecondLife_C::GetDefaultObj()
{
	static class UPerk_SecondLife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerk_SecondLife_C*>(UPerk_SecondLife_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Perk_SecondLife.Perk_SecondLife_C.OnActivatePerkEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetBodyPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_SecondLife_C::OnActivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_SecondLife_C", "OnActivatePerkEvent");

	Params::UPerk_SecondLife_C_OnActivatePerkEvent_Params Parms{};

	Parms.TargetBodyPawn = TargetBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Perk_SecondLife.Perk_SecondLife_C.OnDeactivatePerkEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetBodyPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_SecondLife_C::OnDeactivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_SecondLife_C", "OnDeactivatePerkEvent");

	Params::UPerk_SecondLife_C_OnDeactivatePerkEvent_Params Parms{};

	Parms.TargetBodyPawn = TargetBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Perk_SecondLife.Perk_SecondLife_C.ExecuteUbergraph_Perk_SecondLife
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_TargetBodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_TargetBodyPawn_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffect_Revive_C*      CallFunc_AddStatusEffect_ServerOnly_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerk_SecondLife_C::ExecuteUbergraph_Perk_SecondLife(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn, bool CallFunc_HasAuthority_ReturnValue, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn_1, class UStatusEffect_Revive_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_SecondLife_C", "ExecuteUbergraph_Perk_SecondLife");

	Params::UPerk_SecondLife_C_ExecuteUbergraph_Perk_SecondLife_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TargetBodyPawn = K2Node_Event_TargetBodyPawn;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_TargetBodyPawn_1 = K2Node_Event_TargetBodyPawn_1;
	Parms.CallFunc_AddStatusEffect_ServerOnly_ReturnValue = CallFunc_AddStatusEffect_ServerOnly_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


