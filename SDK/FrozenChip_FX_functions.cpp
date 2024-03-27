#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FrozenChip_FX.FrozenChip_FX_C
// (Actor)

class UClass* AFrozenChip_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrozenChip_FX_C");

	return Clss;
}


// FrozenChip_FX_C FrozenChip_FX.Default__FrozenChip_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrozenChip_FX_C* AFrozenChip_FX_C::GetDefaultObj()
{
	static class AFrozenChip_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrozenChip_FX_C*>(AFrozenChip_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


