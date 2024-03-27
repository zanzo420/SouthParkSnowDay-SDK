#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateHealTactics.MentalSubStateHealTactics_C
// (None)

class UClass* UMentalSubStateHealTactics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateHealTactics_C");

	return Clss;
}


// MentalSubStateHealTactics_C MentalSubStateHealTactics.Default__MentalSubStateHealTactics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateHealTactics_C* UMentalSubStateHealTactics_C::GetDefaultObj()
{
	static class UMentalSubStateHealTactics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateHealTactics_C*>(UMentalSubStateHealTactics_C::StaticClass()->DefaultObject);

	return Default;
}

}


