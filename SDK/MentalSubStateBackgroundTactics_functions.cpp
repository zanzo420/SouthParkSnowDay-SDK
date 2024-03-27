#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateBackgroundTactics.MentalSubStateBackgroundTactics_C
// (None)

class UClass* UMentalSubStateBackgroundTactics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateBackgroundTactics_C");

	return Clss;
}


// MentalSubStateBackgroundTactics_C MentalSubStateBackgroundTactics.Default__MentalSubStateBackgroundTactics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateBackgroundTactics_C* UMentalSubStateBackgroundTactics_C::GetDefaultObj()
{
	static class UMentalSubStateBackgroundTactics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateBackgroundTactics_C*>(UMentalSubStateBackgroundTactics_C::StaticClass()->DefaultObject);

	return Default;
}

}


