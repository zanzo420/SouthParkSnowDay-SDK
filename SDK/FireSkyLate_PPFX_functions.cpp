#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireSkyLate_PPFX.FireSkyLate_PPFX_C
// (None)

class UClass* UFireSkyLate_PPFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireSkyLate_PPFX_C");

	return Clss;
}


// FireSkyLate_PPFX_C FireSkyLate_PPFX.Default__FireSkyLate_PPFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireSkyLate_PPFX_C* UFireSkyLate_PPFX_C::GetDefaultObj()
{
	static class UFireSkyLate_PPFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireSkyLate_PPFX_C*>(UFireSkyLate_PPFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


