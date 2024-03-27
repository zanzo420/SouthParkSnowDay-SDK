#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinorLevelUp_FX.MinorLevelUp_FX_C
// (Actor)

class UClass* AMinorLevelUp_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinorLevelUp_FX_C");

	return Clss;
}


// MinorLevelUp_FX_C MinorLevelUp_FX.Default__MinorLevelUp_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMinorLevelUp_FX_C* AMinorLevelUp_FX_C::GetDefaultObj()
{
	static class AMinorLevelUp_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMinorLevelUp_FX_C*>(AMinorLevelUp_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


