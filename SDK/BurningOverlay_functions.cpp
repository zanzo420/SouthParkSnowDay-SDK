#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BurningOverlay.BurningOverlay_C
// (None)

class UClass* UBurningOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BurningOverlay_C");

	return Clss;
}


// BurningOverlay_C BurningOverlay.Default__BurningOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBurningOverlay_C* UBurningOverlay_C::GetDefaultObj()
{
	static class UBurningOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBurningOverlay_C*>(UBurningOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


