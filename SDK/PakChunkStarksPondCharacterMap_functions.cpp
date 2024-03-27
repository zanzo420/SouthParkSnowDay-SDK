#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkStarksPondCharacterMap.PakChunkStarksPondCharacterMap_C
// (None)

class UClass* UPakChunkStarksPondCharacterMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkStarksPondCharacterMap_C");

	return Clss;
}


// PakChunkStarksPondCharacterMap_C PakChunkStarksPondCharacterMap.Default__PakChunkStarksPondCharacterMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkStarksPondCharacterMap_C* UPakChunkStarksPondCharacterMap_C::GetDefaultObj()
{
	static class UPakChunkStarksPondCharacterMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkStarksPondCharacterMap_C*>(UPakChunkStarksPondCharacterMap_C::StaticClass()->DefaultObject);

	return Default;
}

}


