#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitStopFlash_Overlay.HitStopFlash_Overlay_C
// (None)

class UClass* UHitStopFlash_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitStopFlash_Overlay_C");

	return Clss;
}


// HitStopFlash_Overlay_C HitStopFlash_Overlay.Default__HitStopFlash_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitStopFlash_Overlay_C* UHitStopFlash_Overlay_C::GetDefaultObj()
{
	static class UHitStopFlash_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitStopFlash_Overlay_C*>(UHitStopFlash_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


