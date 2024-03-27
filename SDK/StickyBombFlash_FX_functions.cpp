#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StickyBombFlash_FX.StickyBombFlash_FX_C
// (Actor)

class UClass* AStickyBombFlash_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StickyBombFlash_FX_C");

	return Clss;
}


// StickyBombFlash_FX_C StickyBombFlash_FX.Default__StickyBombFlash_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStickyBombFlash_FX_C* AStickyBombFlash_FX_C::GetDefaultObj()
{
	static class AStickyBombFlash_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStickyBombFlash_FX_C*>(AStickyBombFlash_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


