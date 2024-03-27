#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireSkyWorldLate_FX.FireSkyWorldLate_FX_C
// (Actor)

class UClass* AFireSkyWorldLate_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireSkyWorldLate_FX_C");

	return Clss;
}


// FireSkyWorldLate_FX_C FireSkyWorldLate_FX.Default__FireSkyWorldLate_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFireSkyWorldLate_FX_C* AFireSkyWorldLate_FX_C::GetDefaultObj()
{
	static class AFireSkyWorldLate_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFireSkyWorldLate_FX_C*>(AFireSkyWorldLate_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


