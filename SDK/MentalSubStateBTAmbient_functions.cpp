#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateBTAmbient.MentalSubStateBTAmbient_C
// (None)

class UClass* UMentalSubStateBTAmbient_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateBTAmbient_C");

	return Clss;
}


// MentalSubStateBTAmbient_C MentalSubStateBTAmbient.Default__MentalSubStateBTAmbient_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateBTAmbient_C* UMentalSubStateBTAmbient_C::GetDefaultObj()
{
	static class UMentalSubStateBTAmbient_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateBTAmbient_C*>(UMentalSubStateBTAmbient_C::StaticClass()->DefaultObject);

	return Default;
}

}


