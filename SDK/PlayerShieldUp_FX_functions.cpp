#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerShieldUp_FX.PlayerShieldUp_FX_C
// (Actor)

class UClass* APlayerShieldUp_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerShieldUp_FX_C");

	return Clss;
}


// PlayerShieldUp_FX_C PlayerShieldUp_FX.Default__PlayerShieldUp_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerShieldUp_FX_C* APlayerShieldUp_FX_C::GetDefaultObj()
{
	static class APlayerShieldUp_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerShieldUp_FX_C*>(APlayerShieldUp_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


