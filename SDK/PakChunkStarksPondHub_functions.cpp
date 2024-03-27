#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkStarksPondHub.PakChunkStarksPondHub_C
// (None)

class UClass* UPakChunkStarksPondHub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkStarksPondHub_C");

	return Clss;
}


// PakChunkStarksPondHub_C PakChunkStarksPondHub.Default__PakChunkStarksPondHub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkStarksPondHub_C* UPakChunkStarksPondHub_C::GetDefaultObj()
{
	static class UPakChunkStarksPondHub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkStarksPondHub_C*>(UPakChunkStarksPondHub_C::StaticClass()->DefaultObject);

	return Default;
}

}


