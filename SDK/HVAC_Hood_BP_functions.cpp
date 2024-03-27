#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HVAC_Hood_BP.HVAC_Hood_BP_C
// (Actor)

class UClass* AHVAC_Hood_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HVAC_Hood_BP_C");

	return Clss;
}


// HVAC_Hood_BP_C HVAC_Hood_BP.Default__HVAC_Hood_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHVAC_Hood_BP_C* AHVAC_Hood_BP_C::GetDefaultObj()
{
	static class AHVAC_Hood_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHVAC_Hood_BP_C*>(AHVAC_Hood_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


