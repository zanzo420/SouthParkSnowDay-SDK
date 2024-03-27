#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateMeleeTactics.MentalSubStateMeleeTactics_C
// (None)

class UClass* UMentalSubStateMeleeTactics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateMeleeTactics_C");

	return Clss;
}


// MentalSubStateMeleeTactics_C MentalSubStateMeleeTactics.Default__MentalSubStateMeleeTactics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateMeleeTactics_C* UMentalSubStateMeleeTactics_C::GetDefaultObj()
{
	static class UMentalSubStateMeleeTactics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateMeleeTactics_C*>(UMentalSubStateMeleeTactics_C::StaticClass()->DefaultObject);

	return Default;
}

}


