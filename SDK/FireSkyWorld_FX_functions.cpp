#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireSkyWorld_FX.FireSkyWorld_FX_C
// (Actor)

class UClass* AFireSkyWorld_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireSkyWorld_FX_C");

	return Clss;
}


// FireSkyWorld_FX_C FireSkyWorld_FX.Default__FireSkyWorld_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFireSkyWorld_FX_C* AFireSkyWorld_FX_C::GetDefaultObj()
{
	static class AFireSkyWorld_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFireSkyWorld_FX_C*>(AFireSkyWorld_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


