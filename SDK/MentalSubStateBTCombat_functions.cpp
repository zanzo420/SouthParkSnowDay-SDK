#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateBTCombat.MentalSubStateBTCombat_C
// (None)

class UClass* UMentalSubStateBTCombat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateBTCombat_C");

	return Clss;
}


// MentalSubStateBTCombat_C MentalSubStateBTCombat.Default__MentalSubStateBTCombat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateBTCombat_C* UMentalSubStateBTCombat_C::GetDefaultObj()
{
	static class UMentalSubStateBTCombat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateBTCombat_C*>(UMentalSubStateBTCombat_C::StaticClass()->DefaultObject);

	return Default;
}

}


