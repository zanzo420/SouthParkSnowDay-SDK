#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateRangedTactics.MentalSubStateRangedTactics_C
// (None)

class UClass* UMentalSubStateRangedTactics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateRangedTactics_C");

	return Clss;
}


// MentalSubStateRangedTactics_C MentalSubStateRangedTactics.Default__MentalSubStateRangedTactics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateRangedTactics_C* UMentalSubStateRangedTactics_C::GetDefaultObj()
{
	static class UMentalSubStateRangedTactics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateRangedTactics_C*>(UMentalSubStateRangedTactics_C::StaticClass()->DefaultObject);

	return Default;
}

}


