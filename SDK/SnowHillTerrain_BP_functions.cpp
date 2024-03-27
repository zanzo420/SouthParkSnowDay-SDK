#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SnowHillTerrain_BP.SnowHillTerrain_BP_C
// (Actor)

class UClass* ASnowHillTerrain_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SnowHillTerrain_BP_C");

	return Clss;
}


// SnowHillTerrain_BP_C SnowHillTerrain_BP.Default__SnowHillTerrain_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASnowHillTerrain_BP_C* ASnowHillTerrain_BP_C::GetDefaultObj()
{
	static class ASnowHillTerrain_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASnowHillTerrain_BP_C*>(ASnowHillTerrain_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


