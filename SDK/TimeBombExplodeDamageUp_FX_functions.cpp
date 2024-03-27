#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TimeBombExplodeDamageUp_FX.TimeBombExplodeDamageUp_FX_C
// (Actor)

class UClass* ATimeBombExplodeDamageUp_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeBombExplodeDamageUp_FX_C");

	return Clss;
}


// TimeBombExplodeDamageUp_FX_C TimeBombExplodeDamageUp_FX.Default__TimeBombExplodeDamageUp_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATimeBombExplodeDamageUp_FX_C* ATimeBombExplodeDamageUp_FX_C::GetDefaultObj()
{
	static class ATimeBombExplodeDamageUp_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATimeBombExplodeDamageUp_FX_C*>(ATimeBombExplodeDamageUp_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


