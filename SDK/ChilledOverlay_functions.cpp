#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChilledOverlay.ChilledOverlay_C
// (None)

class UClass* UChilledOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChilledOverlay_C");

	return Clss;
}


// ChilledOverlay_C ChilledOverlay.Default__ChilledOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChilledOverlay_C* UChilledOverlay_C::GetDefaultObj()
{
	static class UChilledOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChilledOverlay_C*>(UChilledOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


