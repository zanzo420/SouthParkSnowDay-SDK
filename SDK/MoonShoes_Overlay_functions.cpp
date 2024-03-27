#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MoonShoes_Overlay.MoonShoes_Overlay_C
// (None)

class UClass* UMoonShoes_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoonShoes_Overlay_C");

	return Clss;
}


// MoonShoes_Overlay_C MoonShoes_Overlay.Default__MoonShoes_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMoonShoes_Overlay_C* UMoonShoes_Overlay_C::GetDefaultObj()
{
	static class UMoonShoes_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoonShoes_Overlay_C*>(UMoonShoes_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


