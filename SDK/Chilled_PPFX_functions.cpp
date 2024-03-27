#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chilled_PPFX.Chilled_PPFX_C
// (None)

class UClass* UChilled_PPFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chilled_PPFX_C");

	return Clss;
}


// Chilled_PPFX_C Chilled_PPFX.Default__Chilled_PPFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChilled_PPFX_C* UChilled_PPFX_C::GetDefaultObj()
{
	static class UChilled_PPFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChilled_PPFX_C*>(UChilled_PPFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


