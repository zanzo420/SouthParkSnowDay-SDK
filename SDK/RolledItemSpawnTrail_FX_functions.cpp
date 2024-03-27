#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RolledItemSpawnTrail_FX.RolledItemSpawnTrail_FX_C
// (Actor)

class UClass* ARolledItemSpawnTrail_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RolledItemSpawnTrail_FX_C");

	return Clss;
}


// RolledItemSpawnTrail_FX_C RolledItemSpawnTrail_FX.Default__RolledItemSpawnTrail_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARolledItemSpawnTrail_FX_C* ARolledItemSpawnTrail_FX_C::GetDefaultObj()
{
	static class ARolledItemSpawnTrail_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARolledItemSpawnTrail_FX_C*>(ARolledItemSpawnTrail_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


