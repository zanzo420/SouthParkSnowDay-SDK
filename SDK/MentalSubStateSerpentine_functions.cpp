#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateSerpentine.MentalSubStateSerpentine_C
// (None)

class UClass* UMentalSubStateSerpentine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateSerpentine_C");

	return Clss;
}


// MentalSubStateSerpentine_C MentalSubStateSerpentine.Default__MentalSubStateSerpentine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateSerpentine_C* UMentalSubStateSerpentine_C::GetDefaultObj()
{
	static class UMentalSubStateSerpentine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateSerpentine_C*>(UMentalSubStateSerpentine_C::StaticClass()->DefaultObject);

	return Default;
}

}


