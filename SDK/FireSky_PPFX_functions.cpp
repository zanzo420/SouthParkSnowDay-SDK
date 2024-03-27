#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireSky_PPFX.FireSky_PPFX_C
// (None)

class UClass* UFireSky_PPFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireSky_PPFX_C");

	return Clss;
}


// FireSky_PPFX_C FireSky_PPFX.Default__FireSky_PPFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireSky_PPFX_C* UFireSky_PPFX_C::GetDefaultObj()
{
	static class UFireSky_PPFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireSky_PPFX_C*>(UFireSky_PPFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


