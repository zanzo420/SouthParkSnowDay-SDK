#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KillHit_FX.KillHit_FX_C
// (Actor)

class UClass* AKillHit_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KillHit_FX_C");

	return Clss;
}


// KillHit_FX_C KillHit_FX.Default__KillHit_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKillHit_FX_C* AKillHit_FX_C::GetDefaultObj()
{
	static class AKillHit_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKillHit_FX_C*>(AKillHit_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


