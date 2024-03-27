#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SeductionVictim_Overlay.SeductionVictim_Overlay_C
// (None)

class UClass* USeductionVictim_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SeductionVictim_Overlay_C");

	return Clss;
}


// SeductionVictim_Overlay_C SeductionVictim_Overlay.Default__SeductionVictim_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USeductionVictim_Overlay_C* USeductionVictim_Overlay_C::GetDefaultObj()
{
	static class USeductionVictim_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USeductionVictim_Overlay_C*>(USeductionVictim_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


