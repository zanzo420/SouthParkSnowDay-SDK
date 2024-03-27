#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BurningDeath_FX.BurningDeath_FX_C
// (Actor)

class UClass* ABurningDeath_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BurningDeath_FX_C");

	return Clss;
}


// BurningDeath_FX_C BurningDeath_FX.Default__BurningDeath_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABurningDeath_FX_C* ABurningDeath_FX_C::GetDefaultObj()
{
	static class ABurningDeath_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABurningDeath_FX_C*>(ABurningDeath_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


