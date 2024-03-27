#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkCartmanBossFightNav.PakChunkCartmanBossFightNav_C
// (None)

class UClass* UPakChunkCartmanBossFightNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkCartmanBossFightNav_C");

	return Clss;
}


// PakChunkCartmanBossFightNav_C PakChunkCartmanBossFightNav.Default__PakChunkCartmanBossFightNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkCartmanBossFightNav_C* UPakChunkCartmanBossFightNav_C::GetDefaultObj()
{
	static class UPakChunkCartmanBossFightNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkCartmanBossFightNav_C*>(UPakChunkCartmanBossFightNav_C::StaticClass()->DefaultObject);

	return Default;
}

}


