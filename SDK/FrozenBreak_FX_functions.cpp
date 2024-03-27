#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FrozenBreak_FX.FrozenBreak_FX_C
// (Actor)

class UClass* AFrozenBreak_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrozenBreak_FX_C");

	return Clss;
}


// FrozenBreak_FX_C FrozenBreak_FX.Default__FrozenBreak_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrozenBreak_FX_C* AFrozenBreak_FX_C::GetDefaultObj()
{
	static class AFrozenBreak_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrozenBreak_FX_C*>(AFrozenBreak_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


