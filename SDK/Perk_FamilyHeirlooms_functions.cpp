#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Perk_FamilyHeirlooms.Perk_FamilyHeirlooms_C
// (None)

class UClass* UPerk_FamilyHeirlooms_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Perk_FamilyHeirlooms_C");

	return Clss;
}


// Perk_FamilyHeirlooms_C Perk_FamilyHeirlooms.Default__Perk_FamilyHeirlooms_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerk_FamilyHeirlooms_C* UPerk_FamilyHeirlooms_C::GetDefaultObj()
{
	static class UPerk_FamilyHeirlooms_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerk_FamilyHeirlooms_C*>(UPerk_FamilyHeirlooms_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Perk_FamilyHeirlooms.Perk_FamilyHeirlooms_C.GetPerkValueAtInstanceCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ValueIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceCount                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UPerk_FamilyHeirlooms_C::GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_FamilyHeirlooms_C", "GetPerkValueAtInstanceCount");

	Params::UPerk_FamilyHeirlooms_C_GetPerkValueAtInstanceCount_Params Parms{};

	Parms.ValueIndex = ValueIndex;
	Parms.InstanceCount = InstanceCount;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Perk_FamilyHeirlooms.Perk_FamilyHeirlooms_C.GetToiletPaperValueToAdd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ToiletPaperValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetReplicatedActiveInstances_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_FamilyHeirlooms_C::GetToiletPaperValueToAdd(int32* ToiletPaperValue, int32 CallFunc_GetReplicatedActiveInstances_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_FamilyHeirlooms_C", "GetToiletPaperValueToAdd");

	Params::UPerk_FamilyHeirlooms_C_GetToiletPaperValueToAdd_Params Parms{};

	Parms.CallFunc_GetReplicatedActiveInstances_ReturnValue = CallFunc_GetReplicatedActiveInstances_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ToiletPaperValue != nullptr)
		*ToiletPaperValue = Parms.ToiletPaperValue;

}


// Function Perk_FamilyHeirlooms.Perk_FamilyHeirlooms_C.OnActivatePerkEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetBodyPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_FamilyHeirlooms_C::OnActivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_FamilyHeirlooms_C", "OnActivatePerkEvent");

	Params::UPerk_FamilyHeirlooms_C_OnActivatePerkEvent_Params Parms{};

	Parms.TargetBodyPawn = TargetBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Perk_FamilyHeirlooms.Perk_FamilyHeirlooms_C.ExecuteUbergraph_Perk_FamilyHeirlooms
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_TargetBodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_FamilyHeirlooms_C::ExecuteUbergraph_Perk_FamilyHeirlooms(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_FamilyHeirlooms_C", "ExecuteUbergraph_Perk_FamilyHeirlooms");

	Params::UPerk_FamilyHeirlooms_C_ExecuteUbergraph_Perk_FamilyHeirlooms_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TargetBodyPawn = K2Node_Event_TargetBodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


