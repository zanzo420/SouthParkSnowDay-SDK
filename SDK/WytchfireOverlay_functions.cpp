#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WytchfireOverlay.WytchfireOverlay_C
// (None)

class UClass* UWytchfireOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WytchfireOverlay_C");

	return Clss;
}


// WytchfireOverlay_C WytchfireOverlay.Default__WytchfireOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWytchfireOverlay_C* UWytchfireOverlay_C::GetDefaultObj()
{
	static class UWytchfireOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWytchfireOverlay_C*>(UWytchfireOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


