#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ClericWeapon_Necromancer.ClericWeapon_Necromancer_C
// (Actor)

class UClass* AClericWeapon_Necromancer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClericWeapon_Necromancer_C");

	return Clss;
}


// ClericWeapon_Necromancer_C ClericWeapon_Necromancer.Default__ClericWeapon_Necromancer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AClericWeapon_Necromancer_C* AClericWeapon_Necromancer_C::GetDefaultObj()
{
	static class AClericWeapon_Necromancer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AClericWeapon_Necromancer_C*>(AClericWeapon_Necromancer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ClericWeapon_Necromancer.ClericWeapon_Necromancer_C.ToggleFlame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AClericWeapon_Necromancer_C::ToggleFlame(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericWeapon_Necromancer_C", "ToggleFlame");

	Params::AClericWeapon_Necromancer_C_ToggleFlame_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClericWeapon_Necromancer.ClericWeapon_Necromancer_C.ExecuteUbergraph_ClericWeapon_Necromancer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_On                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AClericWeapon_Necromancer_C::ExecuteUbergraph_ClericWeapon_Necromancer(int32 EntryPoint, bool K2Node_Event_On, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericWeapon_Necromancer_C", "ExecuteUbergraph_ClericWeapon_Necromancer");

	Params::AClericWeapon_Necromancer_C_ExecuteUbergraph_ClericWeapon_Necromancer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_On = K2Node_Event_On;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


