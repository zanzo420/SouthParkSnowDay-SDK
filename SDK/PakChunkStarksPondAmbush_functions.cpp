#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkStarksPondAmbush.PakChunkStarksPondAmbush_C
// (None)

class UClass* UPakChunkStarksPondAmbush_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkStarksPondAmbush_C");

	return Clss;
}


// PakChunkStarksPondAmbush_C PakChunkStarksPondAmbush.Default__PakChunkStarksPondAmbush_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkStarksPondAmbush_C* UPakChunkStarksPondAmbush_C::GetDefaultObj()
{
	static class UPakChunkStarksPondAmbush_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkStarksPondAmbush_C*>(UPakChunkStarksPondAmbush_C::StaticClass()->DefaultObject);

	return Default;
}

}


