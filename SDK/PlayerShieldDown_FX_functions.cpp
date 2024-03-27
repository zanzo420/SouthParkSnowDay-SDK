#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerShieldDown_FX.PlayerShieldDown_FX_C
// (Actor)

class UClass* APlayerShieldDown_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerShieldDown_FX_C");

	return Clss;
}


// PlayerShieldDown_FX_C PlayerShieldDown_FX.Default__PlayerShieldDown_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerShieldDown_FX_C* APlayerShieldDown_FX_C::GetDefaultObj()
{
	static class APlayerShieldDown_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerShieldDown_FX_C*>(APlayerShieldDown_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


