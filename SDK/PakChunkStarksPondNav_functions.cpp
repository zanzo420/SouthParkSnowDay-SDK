#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkStarksPondNav.PakChunkStarksPondNav_C
// (None)

class UClass* UPakChunkStarksPondNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkStarksPondNav_C");

	return Clss;
}


// PakChunkStarksPondNav_C PakChunkStarksPondNav.Default__PakChunkStarksPondNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkStarksPondNav_C* UPakChunkStarksPondNav_C::GetDefaultObj()
{
	static class UPakChunkStarksPondNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkStarksPondNav_C*>(UPakChunkStarksPondNav_C::StaticClass()->DefaultObject);

	return Default;
}

}


