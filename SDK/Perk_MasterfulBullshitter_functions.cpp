#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Perk_MasterfulBullshitter.Perk_MasterfulBullshitter_C
// (None)

class UClass* UPerk_MasterfulBullshitter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Perk_MasterfulBullshitter_C");

	return Clss;
}


// Perk_MasterfulBullshitter_C Perk_MasterfulBullshitter.Default__Perk_MasterfulBullshitter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerk_MasterfulBullshitter_C* UPerk_MasterfulBullshitter_C::GetDefaultObj()
{
	static class UPerk_MasterfulBullshitter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerk_MasterfulBullshitter_C*>(UPerk_MasterfulBullshitter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Perk_MasterfulBullshitter.Perk_MasterfulBullshitter_C.GetPerkValueAtInstanceCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ValueIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceCount                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UPerk_MasterfulBullshitter_C::GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_MasterfulBullshitter_C", "GetPerkValueAtInstanceCount");

	Params::UPerk_MasterfulBullshitter_C_GetPerkValueAtInstanceCount_Params Parms{};

	Parms.ValueIndex = ValueIndex;
	Parms.InstanceCount = InstanceCount;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


