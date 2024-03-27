#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkCartmanBossFightLighting.PakChunkCartmanBossFightLighting_C
// (None)

class UClass* UPakChunkCartmanBossFightLighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkCartmanBossFightLighting_C");

	return Clss;
}


// PakChunkCartmanBossFightLighting_C PakChunkCartmanBossFightLighting.Default__PakChunkCartmanBossFightLighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkCartmanBossFightLighting_C* UPakChunkCartmanBossFightLighting_C::GetDefaultObj()
{
	static class UPakChunkCartmanBossFightLighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkCartmanBossFightLighting_C*>(UPakChunkCartmanBossFightLighting_C::StaticClass()->DefaultObject);

	return Default;
}

}


