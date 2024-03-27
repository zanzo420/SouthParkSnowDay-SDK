#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LevelCardSpawnTrail_FX.LevelCardSpawnTrail_FX_C
// (Actor)

class UClass* ALevelCardSpawnTrail_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelCardSpawnTrail_FX_C");

	return Clss;
}


// LevelCardSpawnTrail_FX_C LevelCardSpawnTrail_FX.Default__LevelCardSpawnTrail_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALevelCardSpawnTrail_FX_C* ALevelCardSpawnTrail_FX_C::GetDefaultObj()
{
	static class ALevelCardSpawnTrail_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelCardSpawnTrail_FX_C*>(ALevelCardSpawnTrail_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


