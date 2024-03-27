#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateReviveTactics.MentalSubStateReviveTactics_C
// (None)

class UClass* UMentalSubStateReviveTactics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateReviveTactics_C");

	return Clss;
}


// MentalSubStateReviveTactics_C MentalSubStateReviveTactics.Default__MentalSubStateReviveTactics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateReviveTactics_C* UMentalSubStateReviveTactics_C::GetDefaultObj()
{
	static class UMentalSubStateReviveTactics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateReviveTactics_C*>(UMentalSubStateReviveTactics_C::StaticClass()->DefaultObject);

	return Default;
}

}


