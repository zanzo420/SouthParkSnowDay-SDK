#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedChaffWeapon.RangedChaffWeapon_C
// (Actor)

class UClass* ARangedChaffWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedChaffWeapon_C");

	return Clss;
}


// RangedChaffWeapon_C RangedChaffWeapon.Default__RangedChaffWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARangedChaffWeapon_C* ARangedChaffWeapon_C::GetDefaultObj()
{
	static class ARangedChaffWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARangedChaffWeapon_C*>(ARangedChaffWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RangedChaffWeapon.RangedChaffWeapon_C.FireAnim_Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ARangedChaffWeapon_C::FireAnim_Intro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedChaffWeapon_C", "FireAnim_Intro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RangedChaffWeapon.RangedChaffWeapon_C.FireAnim_Outro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ARangedChaffWeapon_C::FireAnim_Outro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedChaffWeapon_C", "FireAnim_Outro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RangedChaffWeapon.RangedChaffWeapon_C.ExecuteUbergraph_RangedChaffWeapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ARangedChaffWeapon_C::ExecuteUbergraph_RangedChaffWeapon(int32 EntryPoint, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedChaffWeapon_C", "ExecuteUbergraph_RangedChaffWeapon");

	Params::ARangedChaffWeapon_C_ExecuteUbergraph_RangedChaffWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


