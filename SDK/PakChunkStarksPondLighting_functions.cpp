#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkStarksPondLighting.PakChunkStarksPondLighting_C
// (None)

class UClass* UPakChunkStarksPondLighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkStarksPondLighting_C");

	return Clss;
}


// PakChunkStarksPondLighting_C PakChunkStarksPondLighting.Default__PakChunkStarksPondLighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkStarksPondLighting_C* UPakChunkStarksPondLighting_C::GetDefaultObj()
{
	static class UPakChunkStarksPondLighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkStarksPondLighting_C*>(UPakChunkStarksPondLighting_C::StaticClass()->DefaultObject);

	return Default;
}

}


