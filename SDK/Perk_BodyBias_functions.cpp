#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Perk_BodyBias.Perk_BodyBias_C
// (None)

class UClass* UPerk_BodyBias_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Perk_BodyBias_C");

	return Clss;
}


// Perk_BodyBias_C Perk_BodyBias.Default__Perk_BodyBias_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerk_BodyBias_C* UPerk_BodyBias_C::GetDefaultObj()
{
	static class UPerk_BodyBias_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerk_BodyBias_C*>(UPerk_BodyBias_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Perk_BodyBias.Perk_BodyBias_C.GetPerkValueAtInstanceCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ValueIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceCount                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UPerk_BodyBias_C::GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_BodyBias_C", "GetPerkValueAtInstanceCount");

	Params::UPerk_BodyBias_C_GetPerkValueAtInstanceCount_Params Parms{};

	Parms.ValueIndex = ValueIndex;
	Parms.InstanceCount = InstanceCount;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Perk_BodyBias.Perk_BodyBias_C.ChanceToIncreaseBodyCardRarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              PercentChance                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetReplicatedActiveInstances_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_BodyBias_C::ChanceToIncreaseBodyCardRarity(float* PercentChance, int32 CallFunc_GetReplicatedActiveInstances_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_BodyBias_C", "ChanceToIncreaseBodyCardRarity");

	Params::UPerk_BodyBias_C_ChanceToIncreaseBodyCardRarity_Params Parms{};

	Parms.CallFunc_GetReplicatedActiveInstances_ReturnValue = CallFunc_GetReplicatedActiveInstances_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PercentChance != nullptr)
		*PercentChance = Parms.PercentChance;

}

}


