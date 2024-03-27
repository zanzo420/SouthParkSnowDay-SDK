#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageFlash_Overlay.DamageFlash_Overlay_C
// (None)

class UClass* UDamageFlash_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageFlash_Overlay_C");

	return Clss;
}


// DamageFlash_Overlay_C DamageFlash_Overlay.Default__DamageFlash_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageFlash_Overlay_C* UDamageFlash_Overlay_C::GetDefaultObj()
{
	static class UDamageFlash_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageFlash_Overlay_C*>(UDamageFlash_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


