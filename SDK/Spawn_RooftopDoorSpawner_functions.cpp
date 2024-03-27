#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Spawn_RooftopDoorSpawner.Spawn_RooftopDoorSpawner_C
// (Actor)

class UClass* ASpawn_RooftopDoorSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Spawn_RooftopDoorSpawner_C");

	return Clss;
}


// Spawn_RooftopDoorSpawner_C Spawn_RooftopDoorSpawner.Default__Spawn_RooftopDoorSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpawn_RooftopDoorSpawner_C* ASpawn_RooftopDoorSpawner_C::GetDefaultObj()
{
	static class ASpawn_RooftopDoorSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpawn_RooftopDoorSpawner_C*>(ASpawn_RooftopDoorSpawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


