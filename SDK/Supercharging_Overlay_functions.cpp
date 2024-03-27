#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Supercharging_Overlay.Supercharging_Overlay_C
// (None)

class UClass* USupercharging_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Supercharging_Overlay_C");

	return Clss;
}


// Supercharging_Overlay_C Supercharging_Overlay.Default__Supercharging_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USupercharging_Overlay_C* USupercharging_Overlay_C::GetDefaultObj()
{
	static class USupercharging_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USupercharging_Overlay_C*>(USupercharging_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


