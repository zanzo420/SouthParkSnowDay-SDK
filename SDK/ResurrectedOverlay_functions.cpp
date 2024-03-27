#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ResurrectedOverlay.ResurrectedOverlay_C
// (None)

class UClass* UResurrectedOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResurrectedOverlay_C");

	return Clss;
}


// ResurrectedOverlay_C ResurrectedOverlay.Default__ResurrectedOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResurrectedOverlay_C* UResurrectedOverlay_C::GetDefaultObj()
{
	static class UResurrectedOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResurrectedOverlay_C*>(UResurrectedOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


