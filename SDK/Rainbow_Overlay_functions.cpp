#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rainbow_Overlay.Rainbow_Overlay_C
// (None)

class UClass* URainbow_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rainbow_Overlay_C");

	return Clss;
}


// Rainbow_Overlay_C Rainbow_Overlay.Default__Rainbow_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URainbow_Overlay_C* URainbow_Overlay_C::GetDefaultObj()
{
	static class URainbow_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URainbow_Overlay_C*>(URainbow_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


