#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateFleeTactics.MentalSubStateFleeTactics_C
// (None)

class UClass* UMentalSubStateFleeTactics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateFleeTactics_C");

	return Clss;
}


// MentalSubStateFleeTactics_C MentalSubStateFleeTactics.Default__MentalSubStateFleeTactics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateFleeTactics_C* UMentalSubStateFleeTactics_C::GetDefaultObj()
{
	static class UMentalSubStateFleeTactics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateFleeTactics_C*>(UMentalSubStateFleeTactics_C::StaticClass()->DefaultObject);

	return Default;
}

}


