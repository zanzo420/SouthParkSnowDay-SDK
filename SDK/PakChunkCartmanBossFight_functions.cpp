#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkCartmanBossFight.PakChunkCartmanBossFight_C
// (None)

class UClass* UPakChunkCartmanBossFight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkCartmanBossFight_C");

	return Clss;
}


// PakChunkCartmanBossFight_C PakChunkCartmanBossFight.Default__PakChunkCartmanBossFight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkCartmanBossFight_C* UPakChunkCartmanBossFight_C::GetDefaultObj()
{
	static class UPakChunkCartmanBossFight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkCartmanBossFight_C*>(UPakChunkCartmanBossFight_C::StaticClass()->DefaultObject);

	return Default;
}

}


