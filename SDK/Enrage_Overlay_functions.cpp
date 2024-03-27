#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Enrage_Overlay.Enrage_Overlay_C
// (None)

class UClass* UEnrage_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Enrage_Overlay_C");

	return Clss;
}


// Enrage_Overlay_C Enrage_Overlay.Default__Enrage_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnrage_Overlay_C* UEnrage_Overlay_C::GetDefaultObj()
{
	static class UEnrage_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnrage_Overlay_C*>(UEnrage_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


