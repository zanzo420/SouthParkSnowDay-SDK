#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkCosmetics.PakChunkCosmetics_C
// (None)

class UClass* UPakChunkCosmetics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkCosmetics_C");

	return Clss;
}


// PakChunkCosmetics_C PakChunkCosmetics.Default__PakChunkCosmetics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkCosmetics_C* UPakChunkCosmetics_C::GetDefaultObj()
{
	static class UPakChunkCosmetics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkCosmetics_C*>(UPakChunkCosmetics_C::StaticClass()->DefaultObject);

	return Default;
}

}


