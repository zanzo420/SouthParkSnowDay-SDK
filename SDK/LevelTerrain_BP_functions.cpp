#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LevelTerrain_BP.LevelTerrain_BP_C
// (Actor)

class UClass* ALevelTerrain_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelTerrain_BP_C");

	return Clss;
}


// LevelTerrain_BP_C LevelTerrain_BP.Default__LevelTerrain_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALevelTerrain_BP_C* ALevelTerrain_BP_C::GetDefaultObj()
{
	static class ALevelTerrain_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelTerrain_BP_C*>(ALevelTerrain_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


