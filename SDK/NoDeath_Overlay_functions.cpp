#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NoDeath_Overlay.NoDeath_Overlay_C
// (None)

class UClass* UNoDeath_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NoDeath_Overlay_C");

	return Clss;
}


// NoDeath_Overlay_C NoDeath_Overlay.Default__NoDeath_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNoDeath_Overlay_C* UNoDeath_Overlay_C::GetDefaultObj()
{
	static class UNoDeath_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNoDeath_Overlay_C*>(UNoDeath_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


