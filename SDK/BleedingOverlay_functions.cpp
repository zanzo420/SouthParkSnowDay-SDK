#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BleedingOverlay.BleedingOverlay_C
// (None)

class UClass* UBleedingOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BleedingOverlay_C");

	return Clss;
}


// BleedingOverlay_C BleedingOverlay.Default__BleedingOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBleedingOverlay_C* UBleedingOverlay_C::GetDefaultObj()
{
	static class UBleedingOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBleedingOverlay_C*>(UBleedingOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


