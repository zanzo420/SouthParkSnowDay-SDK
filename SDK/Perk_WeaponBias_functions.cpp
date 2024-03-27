#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Perk_WeaponBias.Perk_WeaponBias_C
// (None)

class UClass* UPerk_WeaponBias_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Perk_WeaponBias_C");

	return Clss;
}


// Perk_WeaponBias_C Perk_WeaponBias.Default__Perk_WeaponBias_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerk_WeaponBias_C* UPerk_WeaponBias_C::GetDefaultObj()
{
	static class UPerk_WeaponBias_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerk_WeaponBias_C*>(UPerk_WeaponBias_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Perk_WeaponBias.Perk_WeaponBias_C.GetPerkValueAtInstanceCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ValueIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceCount                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UPerk_WeaponBias_C::GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_WeaponBias_C", "GetPerkValueAtInstanceCount");

	Params::UPerk_WeaponBias_C_GetPerkValueAtInstanceCount_Params Parms{};

	Parms.ValueIndex = ValueIndex;
	Parms.InstanceCount = InstanceCount;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Perk_WeaponBias.Perk_WeaponBias_C.ChanceToIncreaseWeaponCardRarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Chance01                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetReplicatedActiveInstances_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_WeaponBias_C::ChanceToIncreaseWeaponCardRarity(float* Chance01, int32 CallFunc_GetReplicatedActiveInstances_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_WeaponBias_C", "ChanceToIncreaseWeaponCardRarity");

	Params::UPerk_WeaponBias_C_ChanceToIncreaseWeaponCardRarity_Params Parms{};

	Parms.CallFunc_GetReplicatedActiveInstances_ReturnValue = CallFunc_GetReplicatedActiveInstances_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Chance01 != nullptr)
		*Chance01 = Parms.Chance01;

}

}


