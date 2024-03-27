#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tower_TimerExplode_Overlay.Tower_TimerExplode_Overlay_C
// (None)

class UClass* UTower_TimerExplode_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tower_TimerExplode_Overlay_C");

	return Clss;
}


// Tower_TimerExplode_Overlay_C Tower_TimerExplode_Overlay.Default__Tower_TimerExplode_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTower_TimerExplode_Overlay_C* UTower_TimerExplode_Overlay_C::GetDefaultObj()
{
	static class UTower_TimerExplode_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTower_TimerExplode_Overlay_C*>(UTower_TimerExplode_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


