#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WorldEdge_PPFX.WorldEdge_PPFX_C
// (None)

class UClass* UWorldEdge_PPFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldEdge_PPFX_C");

	return Clss;
}


// WorldEdge_PPFX_C WorldEdge_PPFX.Default__WorldEdge_PPFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWorldEdge_PPFX_C* UWorldEdge_PPFX_C::GetDefaultObj()
{
	static class UWorldEdge_PPFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldEdge_PPFX_C*>(UWorldEdge_PPFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


