#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateBTFrob.MentalSubStateBTFrob_C
// (None)

class UClass* UMentalSubStateBTFrob_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateBTFrob_C");

	return Clss;
}


// MentalSubStateBTFrob_C MentalSubStateBTFrob.Default__MentalSubStateBTFrob_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateBTFrob_C* UMentalSubStateBTFrob_C::GetDefaultObj()
{
	static class UMentalSubStateBTFrob_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateBTFrob_C*>(UMentalSubStateBTFrob_C::StaticClass()->DefaultObject);

	return Default;
}

}


