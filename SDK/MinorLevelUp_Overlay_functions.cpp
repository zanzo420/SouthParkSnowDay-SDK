#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinorLevelUp_Overlay.MinorLevelUp_Overlay_C
// (None)

class UClass* UMinorLevelUp_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinorLevelUp_Overlay_C");

	return Clss;
}


// MinorLevelUp_Overlay_C MinorLevelUp_Overlay.Default__MinorLevelUp_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinorLevelUp_Overlay_C* UMinorLevelUp_Overlay_C::GetDefaultObj()
{
	static class UMinorLevelUp_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinorLevelUp_Overlay_C*>(UMinorLevelUp_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


