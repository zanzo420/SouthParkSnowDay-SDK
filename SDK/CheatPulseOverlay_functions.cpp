#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CheatPulseOverlay.CheatPulseOverlay_C
// (None)

class UClass* UCheatPulseOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatPulseOverlay_C");

	return Clss;
}


// CheatPulseOverlay_C CheatPulseOverlay.Default__CheatPulseOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatPulseOverlay_C* UCheatPulseOverlay_C::GetDefaultObj()
{
	static class UCheatPulseOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatPulseOverlay_C*>(UCheatPulseOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


