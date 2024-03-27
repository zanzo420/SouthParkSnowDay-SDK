#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedTowerExplosiveMine.RangedTowerExplosiveMine_C
// (Actor)

class UClass* ARangedTowerExplosiveMine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedTowerExplosiveMine_C");

	return Clss;
}


// RangedTowerExplosiveMine_C RangedTowerExplosiveMine.Default__RangedTowerExplosiveMine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARangedTowerExplosiveMine_C* ARangedTowerExplosiveMine_C::GetDefaultObj()
{
	static class ARangedTowerExplosiveMine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARangedTowerExplosiveMine_C*>(ARangedTowerExplosiveMine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RangedTowerExplosiveMine.RangedTowerExplosiveMine_C.SetDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARangedTowerExplosiveMine_C::SetDamage(int32 Damage, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedTowerExplosiveMine_C", "SetDamage");

	Params::ARangedTowerExplosiveMine_C_SetDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RangedTowerExplosiveMine.RangedTowerExplosiveMine_C.StartRotating
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ARangedTowerExplosiveMine_C::StartRotating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedTowerExplosiveMine_C", "StartRotating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RangedTowerExplosiveMine.RangedTowerExplosiveMine_C.StopRotating
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ARangedTowerExplosiveMine_C::StopRotating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedTowerExplosiveMine_C", "StopRotating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RangedTowerExplosiveMine.RangedTowerExplosiveMine_C.ExecuteUbergraph_RangedTowerExplosiveMine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ARangedTowerExplosiveMine_C::ExecuteUbergraph_RangedTowerExplosiveMine(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedTowerExplosiveMine_C", "ExecuteUbergraph_RangedTowerExplosiveMine");

	Params::ARangedTowerExplosiveMine_C_ExecuteUbergraph_RangedTowerExplosiveMine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue = CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue;
	Parms.CallFunc_MakeRotFromZ_ReturnValue = CallFunc_MakeRotFromZ_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


