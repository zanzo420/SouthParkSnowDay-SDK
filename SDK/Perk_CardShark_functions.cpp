#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Perk_CardShark.Perk_CardShark_C
// (None)

class UClass* UPerk_CardShark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Perk_CardShark_C");

	return Clss;
}


// Perk_CardShark_C Perk_CardShark.Default__Perk_CardShark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerk_CardShark_C* UPerk_CardShark_C::GetDefaultObj()
{
	static class UPerk_CardShark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerk_CardShark_C*>(UPerk_CardShark_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Perk_CardShark.Perk_CardShark_C.GetPerkValueAtInstanceCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ValueIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceCount                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UPerk_CardShark_C::GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_CardShark_C", "GetPerkValueAtInstanceCount");

	Params::UPerk_CardShark_C_GetPerkValueAtInstanceCount_Params Parms{};

	Parms.ValueIndex = ValueIndex;
	Parms.InstanceCount = InstanceCount;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


