#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stunned_FX.Stunned_FX_C
// (Actor)

class UClass* AStunned_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stunned_FX_C");

	return Clss;
}


// Stunned_FX_C Stunned_FX.Default__Stunned_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStunned_FX_C* AStunned_FX_C::GetDefaultObj()
{
	static class AStunned_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStunned_FX_C*>(AStunned_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


