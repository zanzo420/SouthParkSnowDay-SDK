#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlameThrower_BlastWave_FX.FlameThrower_BlastWave_FX_C
// (Actor)

class UClass* AFlameThrower_BlastWave_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlameThrower_BlastWave_FX_C");

	return Clss;
}


// FlameThrower_BlastWave_FX_C FlameThrower_BlastWave_FX.Default__FlameThrower_BlastWave_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFlameThrower_BlastWave_FX_C* AFlameThrower_BlastWave_FX_C::GetDefaultObj()
{
	static class AFlameThrower_BlastWave_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFlameThrower_BlastWave_FX_C*>(AFlameThrower_BlastWave_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


