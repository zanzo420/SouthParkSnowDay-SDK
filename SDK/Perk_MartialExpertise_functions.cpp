#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Perk_MartialExpertise.Perk_MartialExpertise_C
// (None)

class UClass* UPerk_MartialExpertise_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Perk_MartialExpertise_C");

	return Clss;
}


// Perk_MartialExpertise_C Perk_MartialExpertise.Default__Perk_MartialExpertise_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerk_MartialExpertise_C* UPerk_MartialExpertise_C::GetDefaultObj()
{
	static class UPerk_MartialExpertise_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerk_MartialExpertise_C*>(UPerk_MartialExpertise_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Perk_MartialExpertise.Perk_MartialExpertise_C.GetPerkValueAtInstanceCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ValueIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceCount                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UPerk_MartialExpertise_C::GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_MartialExpertise_C", "GetPerkValueAtInstanceCount");

	Params::UPerk_MartialExpertise_C_GetPerkValueAtInstanceCount_Params Parms{};

	Parms.ValueIndex = ValueIndex;
	Parms.InstanceCount = InstanceCount;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


