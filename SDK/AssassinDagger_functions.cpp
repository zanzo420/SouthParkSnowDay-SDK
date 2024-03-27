#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AssassinDagger.AssassinDagger_C
// (Actor)

class UClass* AAssassinDagger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssassinDagger_C");

	return Clss;
}


// AssassinDagger_C AssassinDagger.Default__AssassinDagger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAssassinDagger_C* AAssassinDagger_C::GetDefaultObj()
{
	static class AAssassinDagger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAssassinDagger_C*>(AAssassinDagger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AssassinDagger.AssassinDagger_C.HandleEquip_Derived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAssassinDagger_C::HandleEquip_Derived(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssassinDagger_C", "HandleEquip_Derived");

	Params::AAssassinDagger_C_HandleEquip_Derived_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


