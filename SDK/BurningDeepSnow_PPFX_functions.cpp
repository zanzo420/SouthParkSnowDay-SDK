#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BurningDeepSnow_PPFX.BurningDeepSnow_PPFX_C
// (None)

class UClass* UBurningDeepSnow_PPFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BurningDeepSnow_PPFX_C");

	return Clss;
}


// BurningDeepSnow_PPFX_C BurningDeepSnow_PPFX.Default__BurningDeepSnow_PPFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBurningDeepSnow_PPFX_C* UBurningDeepSnow_PPFX_C::GetDefaultObj()
{
	static class UBurningDeepSnow_PPFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBurningDeepSnow_PPFX_C*>(UBurningDeepSnow_PPFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


