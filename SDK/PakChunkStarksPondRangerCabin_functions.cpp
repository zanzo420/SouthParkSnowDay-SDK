#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkStarksPondRangerCabin.PakChunkStarksPondRangerCabin_C
// (None)

class UClass* UPakChunkStarksPondRangerCabin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkStarksPondRangerCabin_C");

	return Clss;
}


// PakChunkStarksPondRangerCabin_C PakChunkStarksPondRangerCabin.Default__PakChunkStarksPondRangerCabin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkStarksPondRangerCabin_C* UPakChunkStarksPondRangerCabin_C::GetDefaultObj()
{
	static class UPakChunkStarksPondRangerCabin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkStarksPondRangerCabin_C*>(UPakChunkStarksPondRangerCabin_C::StaticClass()->DefaultObject);

	return Default;
}

}


