#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkStarksPondWaterfall.PakChunkStarksPondWaterfall_C
// (None)

class UClass* UPakChunkStarksPondWaterfall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkStarksPondWaterfall_C");

	return Clss;
}


// PakChunkStarksPondWaterfall_C PakChunkStarksPondWaterfall.Default__PakChunkStarksPondWaterfall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkStarksPondWaterfall_C* UPakChunkStarksPondWaterfall_C::GetDefaultObj()
{
	static class UPakChunkStarksPondWaterfall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkStarksPondWaterfall_C*>(UPakChunkStarksPondWaterfall_C::StaticClass()->DefaultObject);

	return Default;
}

}


