#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Radioactive_Overlay.Radioactive_Overlay_C
// (None)

class UClass* URadioactive_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Radioactive_Overlay_C");

	return Clss;
}


// Radioactive_Overlay_C Radioactive_Overlay.Default__Radioactive_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URadioactive_Overlay_C* URadioactive_Overlay_C::GetDefaultObj()
{
	static class URadioactive_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URadioactive_Overlay_C*>(URadioactive_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


