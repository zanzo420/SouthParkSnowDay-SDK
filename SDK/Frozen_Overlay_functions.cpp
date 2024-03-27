#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frozen_Overlay.Frozen_Overlay_C
// (None)

class UClass* UFrozen_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frozen_Overlay_C");

	return Clss;
}


// Frozen_Overlay_C Frozen_Overlay.Default__Frozen_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFrozen_Overlay_C* UFrozen_Overlay_C::GetDefaultObj()
{
	static class UFrozen_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFrozen_Overlay_C*>(UFrozen_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


