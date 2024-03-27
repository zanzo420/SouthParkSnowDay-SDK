#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ClericWeapon_Marshwalker.ClericWeapon_Marshwalker_C
// (Actor)

class UClass* AClericWeapon_Marshwalker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClericWeapon_Marshwalker_C");

	return Clss;
}


// ClericWeapon_Marshwalker_C ClericWeapon_Marshwalker.Default__ClericWeapon_Marshwalker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AClericWeapon_Marshwalker_C* AClericWeapon_Marshwalker_C::GetDefaultObj()
{
	static class AClericWeapon_Marshwalker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AClericWeapon_Marshwalker_C*>(AClericWeapon_Marshwalker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ClericWeapon_Marshwalker.ClericWeapon_Marshwalker_C.HandleClericFX_Derived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AClericWeapon_Marshwalker_C::HandleClericFX_Derived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericWeapon_Marshwalker_C", "HandleClericFX_Derived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClericWeapon_Marshwalker.ClericWeapon_Marshwalker_C.ExecuteUbergraph_ClericWeapon_Marshwalker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)

void AClericWeapon_Marshwalker_C::ExecuteUbergraph_ClericWeapon_Marshwalker(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericWeapon_Marshwalker_C", "ExecuteUbergraph_ClericWeapon_Marshwalker");

	Params::AClericWeapon_Marshwalker_C_ExecuteUbergraph_ClericWeapon_Marshwalker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


