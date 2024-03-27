#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LowHealth_Overlay.LowHealth_Overlay_C
// (None)

class UClass* ULowHealth_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowHealth_Overlay_C");

	return Clss;
}


// LowHealth_Overlay_C LowHealth_Overlay.Default__LowHealth_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULowHealth_Overlay_C* ULowHealth_Overlay_C::GetDefaultObj()
{
	static class ULowHealth_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowHealth_Overlay_C*>(ULowHealth_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


