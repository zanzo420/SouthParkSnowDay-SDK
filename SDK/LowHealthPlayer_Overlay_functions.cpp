#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LowHealthPlayer_Overlay.LowHealthPlayer_Overlay_C
// (None)

class UClass* ULowHealthPlayer_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowHealthPlayer_Overlay_C");

	return Clss;
}


// LowHealthPlayer_Overlay_C LowHealthPlayer_Overlay.Default__LowHealthPlayer_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULowHealthPlayer_Overlay_C* ULowHealthPlayer_Overlay_C::GetDefaultObj()
{
	static class ULowHealthPlayer_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowHealthPlayer_Overlay_C*>(ULowHealthPlayer_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


