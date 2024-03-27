#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Propulsion_Overlay.Propulsion_Overlay_C
// (None)

class UClass* UPropulsion_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Propulsion_Overlay_C");

	return Clss;
}


// Propulsion_Overlay_C Propulsion_Overlay.Default__Propulsion_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPropulsion_Overlay_C* UPropulsion_Overlay_C::GetDefaultObj()
{
	static class UPropulsion_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropulsion_Overlay_C*>(UPropulsion_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


