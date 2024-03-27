#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefensiveEncroacherSpear.DefensiveEncroacherSpear_C
// (Actor)

class UClass* ADefensiveEncroacherSpear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefensiveEncroacherSpear_C");

	return Clss;
}


// DefensiveEncroacherSpear_C DefensiveEncroacherSpear.Default__DefensiveEncroacherSpear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADefensiveEncroacherSpear_C* ADefensiveEncroacherSpear_C::GetDefaultObj()
{
	static class ADefensiveEncroacherSpear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADefensiveEncroacherSpear_C*>(ADefensiveEncroacherSpear_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DefensiveEncroacherSpear.DefensiveEncroacherSpear_C.HandleUnequip_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADefensiveEncroacherSpear_C::HandleUnequip_Derived(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DefensiveEncroacherSpear_C", "HandleUnequip_Derived");

	Params::ADefensiveEncroacherSpear_C_HandleUnequip_Derived_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DefensiveEncroacherSpear.DefensiveEncroacherSpear_C.HandleEquip_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADefensiveEncroacherSpear_C::HandleEquip_Derived(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DefensiveEncroacherSpear_C", "HandleEquip_Derived");

	Params::ADefensiveEncroacherSpear_C_HandleEquip_Derived_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DefensiveEncroacherSpear.DefensiveEncroacherSpear_C.Set Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Visible                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADefensiveEncroacherSpear_C::Set_Visibility(bool Is_Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DefensiveEncroacherSpear_C", "Set Visibility");

	Params::ADefensiveEncroacherSpear_C_Set_Visibility_Params Parms{};

	Parms.Is_Visible = Is_Visible;

	UObject::ProcessEvent(Func, &Parms);

}

}


