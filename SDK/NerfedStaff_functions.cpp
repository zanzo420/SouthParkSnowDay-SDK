#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NerfedStaff.NerfedStaff_C
// (Actor)

class UClass* ANerfedStaff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NerfedStaff_C");

	return Clss;
}


// NerfedStaff_C NerfedStaff.Default__NerfedStaff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANerfedStaff_C* ANerfedStaff_C::GetDefaultObj()
{
	static class ANerfedStaff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANerfedStaff_C*>(ANerfedStaff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NerfedStaff.NerfedStaff_C.HandleEquip_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANerfedStaff_C::HandleEquip_Derived(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NerfedStaff_C", "HandleEquip_Derived");

	Params::ANerfedStaff_C_HandleEquip_Derived_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


