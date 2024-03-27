#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkSchoolBossFightLighting.PakChunkSchoolBossFightLighting_C
// (None)

class UClass* UPakChunkSchoolBossFightLighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkSchoolBossFightLighting_C");

	return Clss;
}


// PakChunkSchoolBossFightLighting_C PakChunkSchoolBossFightLighting.Default__PakChunkSchoolBossFightLighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkSchoolBossFightLighting_C* UPakChunkSchoolBossFightLighting_C::GetDefaultObj()
{
	static class UPakChunkSchoolBossFightLighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkSchoolBossFightLighting_C*>(UPakChunkSchoolBossFightLighting_C::StaticClass()->DefaultObject);

	return Default;
}

}


