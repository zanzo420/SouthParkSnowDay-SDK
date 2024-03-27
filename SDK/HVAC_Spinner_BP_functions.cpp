#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HVAC_Spinner_BP.HVAC_Spinner_BP_C
// (Actor)

class UClass* AHVAC_Spinner_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HVAC_Spinner_BP_C");

	return Clss;
}


// HVAC_Spinner_BP_C HVAC_Spinner_BP.Default__HVAC_Spinner_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHVAC_Spinner_BP_C* AHVAC_Spinner_BP_C::GetDefaultObj()
{
	static class AHVAC_Spinner_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHVAC_Spinner_BP_C*>(AHVAC_Spinner_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


