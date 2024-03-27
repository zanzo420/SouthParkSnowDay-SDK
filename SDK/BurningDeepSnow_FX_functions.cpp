#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BurningDeepSnow_FX.BurningDeepSnow_FX_C
// (Actor)

class UClass* ABurningDeepSnow_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BurningDeepSnow_FX_C");

	return Clss;
}


// BurningDeepSnow_FX_C BurningDeepSnow_FX.Default__BurningDeepSnow_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABurningDeepSnow_FX_C* ABurningDeepSnow_FX_C::GetDefaultObj()
{
	static class ABurningDeepSnow_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABurningDeepSnow_FX_C*>(ABurningDeepSnow_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


