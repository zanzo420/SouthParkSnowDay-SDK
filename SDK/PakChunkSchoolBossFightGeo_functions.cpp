#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkSchoolBossFightGeo.PakChunkSchoolBossFightGeo_C
// (None)

class UClass* UPakChunkSchoolBossFightGeo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkSchoolBossFightGeo_C");

	return Clss;
}


// PakChunkSchoolBossFightGeo_C PakChunkSchoolBossFightGeo.Default__PakChunkSchoolBossFightGeo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkSchoolBossFightGeo_C* UPakChunkSchoolBossFightGeo_C::GetDefaultObj()
{
	static class UPakChunkSchoolBossFightGeo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkSchoolBossFightGeo_C*>(UPakChunkSchoolBossFightGeo_C::StaticClass()->DefaultObject);

	return Default;
}

}


