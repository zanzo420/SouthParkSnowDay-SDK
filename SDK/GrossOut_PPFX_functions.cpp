#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrossOut_PPFX.GrossOut_PPFX_C
// (None)

class UClass* UGrossOut_PPFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrossOut_PPFX_C");

	return Clss;
}


// GrossOut_PPFX_C GrossOut_PPFX.Default__GrossOut_PPFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrossOut_PPFX_C* UGrossOut_PPFX_C::GetDefaultObj()
{
	static class UGrossOut_PPFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrossOut_PPFX_C*>(UGrossOut_PPFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


