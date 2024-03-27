#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HealthPickupOverlay.HealthPickupOverlay_C
// (None)

class UClass* UHealthPickupOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HealthPickupOverlay_C");

	return Clss;
}


// HealthPickupOverlay_C HealthPickupOverlay.Default__HealthPickupOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHealthPickupOverlay_C* UHealthPickupOverlay_C::GetDefaultObj()
{
	static class UHealthPickupOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHealthPickupOverlay_C*>(UHealthPickupOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


