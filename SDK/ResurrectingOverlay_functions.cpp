#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ResurrectingOverlay.ResurrectingOverlay_C
// (None)

class UClass* UResurrectingOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResurrectingOverlay_C");

	return Clss;
}


// ResurrectingOverlay_C ResurrectingOverlay.Default__ResurrectingOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResurrectingOverlay_C* UResurrectingOverlay_C::GetDefaultObj()
{
	static class UResurrectingOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResurrectingOverlay_C*>(UResurrectingOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


