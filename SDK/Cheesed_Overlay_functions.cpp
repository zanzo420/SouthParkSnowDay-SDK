#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cheesed_Overlay.Cheesed_Overlay_C
// (None)

class UClass* UCheesed_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cheesed_Overlay_C");

	return Clss;
}


// Cheesed_Overlay_C Cheesed_Overlay.Default__Cheesed_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheesed_Overlay_C* UCheesed_Overlay_C::GetDefaultObj()
{
	static class UCheesed_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheesed_Overlay_C*>(UCheesed_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


