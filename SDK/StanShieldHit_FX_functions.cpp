#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StanShieldHit_FX.StanShieldHit_FX_C
// (Actor)

class UClass* AStanShieldHit_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StanShieldHit_FX_C");

	return Clss;
}


// StanShieldHit_FX_C StanShieldHit_FX.Default__StanShieldHit_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStanShieldHit_FX_C* AStanShieldHit_FX_C::GetDefaultObj()
{
	static class AStanShieldHit_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStanShieldHit_FX_C*>(AStanShieldHit_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


