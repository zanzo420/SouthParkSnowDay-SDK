#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TimeBombExplode_FX.TimeBombExplode_FX_C
// (Actor)

class UClass* ATimeBombExplode_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeBombExplode_FX_C");

	return Clss;
}


// TimeBombExplode_FX_C TimeBombExplode_FX.Default__TimeBombExplode_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATimeBombExplode_FX_C* ATimeBombExplode_FX_C::GetDefaultObj()
{
	static class ATimeBombExplode_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATimeBombExplode_FX_C*>(ATimeBombExplode_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


