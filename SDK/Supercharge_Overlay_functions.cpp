#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Supercharge_Overlay.Supercharge_Overlay_C
// (None)

class UClass* USupercharge_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Supercharge_Overlay_C");

	return Clss;
}


// Supercharge_Overlay_C Supercharge_Overlay.Default__Supercharge_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USupercharge_Overlay_C* USupercharge_Overlay_C::GetDefaultObj()
{
	static class USupercharge_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USupercharge_Overlay_C*>(USupercharge_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


