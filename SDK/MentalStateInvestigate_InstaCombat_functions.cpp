#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateInvestigate_InstaCombat.MentalStateInvestigate_InstaCombat_C
// (None)

class UClass* UMentalStateInvestigate_InstaCombat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateInvestigate_InstaCombat_C");

	return Clss;
}


// MentalStateInvestigate_InstaCombat_C MentalStateInvestigate_InstaCombat.Default__MentalStateInvestigate_InstaCombat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateInvestigate_InstaCombat_C* UMentalStateInvestigate_InstaCombat_C::GetDefaultObj()
{
	static class UMentalStateInvestigate_InstaCombat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateInvestigate_InstaCombat_C*>(UMentalStateInvestigate_InstaCombat_C::StaticClass()->DefaultObject);

	return Default;
}

}


