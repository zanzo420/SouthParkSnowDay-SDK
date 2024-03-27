#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireSkyOutro_FX.FireSkyOutro_FX_C
// (Actor)

class UClass* AFireSkyOutro_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireSkyOutro_FX_C");

	return Clss;
}


// FireSkyOutro_FX_C FireSkyOutro_FX.Default__FireSkyOutro_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFireSkyOutro_FX_C* AFireSkyOutro_FX_C::GetDefaultObj()
{
	static class AFireSkyOutro_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFireSkyOutro_FX_C*>(AFireSkyOutro_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


