#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TowerDestruction_Overlay.TowerDestruction_Overlay_C
// (None)

class UClass* UTowerDestruction_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TowerDestruction_Overlay_C");

	return Clss;
}


// TowerDestruction_Overlay_C TowerDestruction_Overlay.Default__TowerDestruction_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTowerDestruction_Overlay_C* UTowerDestruction_Overlay_C::GetDefaultObj()
{
	static class UTowerDestruction_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTowerDestruction_Overlay_C*>(UTowerDestruction_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


