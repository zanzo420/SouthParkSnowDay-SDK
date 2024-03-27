#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharmVictimOverlay_FX.CharmVictimOverlay_FX_C
// (Actor)

class UClass* ACharmVictimOverlay_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharmVictimOverlay_FX_C");

	return Clss;
}


// CharmVictimOverlay_FX_C CharmVictimOverlay_FX.Default__CharmVictimOverlay_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACharmVictimOverlay_FX_C* ACharmVictimOverlay_FX_C::GetDefaultObj()
{
	static class ACharmVictimOverlay_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACharmVictimOverlay_FX_C*>(ACharmVictimOverlay_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


