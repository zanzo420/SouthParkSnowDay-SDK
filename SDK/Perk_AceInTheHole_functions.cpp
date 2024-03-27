#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Perk_AceInTheHole.Perk_AceInTheHole_C
// (None)

class UClass* UPerk_AceInTheHole_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Perk_AceInTheHole_C");

	return Clss;
}


// Perk_AceInTheHole_C Perk_AceInTheHole.Default__Perk_AceInTheHole_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerk_AceInTheHole_C* UPerk_AceInTheHole_C::GetDefaultObj()
{
	static class UPerk_AceInTheHole_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerk_AceInTheHole_C*>(UPerk_AceInTheHole_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Perk_AceInTheHole.Perk_AceInTheHole_C.GetPerkValueAtInstanceCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ValueIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceCount                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UPerk_AceInTheHole_C::GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_AceInTheHole_C", "GetPerkValueAtInstanceCount");

	Params::UPerk_AceInTheHole_C_GetPerkValueAtInstanceCount_Params Parms{};

	Parms.ValueIndex = ValueIndex;
	Parms.InstanceCount = InstanceCount;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


