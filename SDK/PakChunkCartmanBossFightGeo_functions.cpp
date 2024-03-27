#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkCartmanBossFightGeo.PakChunkCartmanBossFightGeo_C
// (None)

class UClass* UPakChunkCartmanBossFightGeo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkCartmanBossFightGeo_C");

	return Clss;
}


// PakChunkCartmanBossFightGeo_C PakChunkCartmanBossFightGeo.Default__PakChunkCartmanBossFightGeo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkCartmanBossFightGeo_C* UPakChunkCartmanBossFightGeo_C::GetDefaultObj()
{
	static class UPakChunkCartmanBossFightGeo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkCartmanBossFightGeo_C*>(UPakChunkCartmanBossFightGeo_C::StaticClass()->DefaultObject);

	return Default;
}

}


