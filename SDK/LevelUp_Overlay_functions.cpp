#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LevelUp_Overlay.LevelUp_Overlay_C
// (None)

class UClass* ULevelUp_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelUp_Overlay_C");

	return Clss;
}


// LevelUp_Overlay_C LevelUp_Overlay.Default__LevelUp_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULevelUp_Overlay_C* ULevelUp_Overlay_C::GetDefaultObj()
{
	static class ULevelUp_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelUp_Overlay_C*>(ULevelUp_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


