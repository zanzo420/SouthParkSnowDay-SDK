#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkStarksPondEntry.PakChunkStarksPondEntry_C
// (None)

class UClass* UPakChunkStarksPondEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkStarksPondEntry_C");

	return Clss;
}


// PakChunkStarksPondEntry_C PakChunkStarksPondEntry.Default__PakChunkStarksPondEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkStarksPondEntry_C* UPakChunkStarksPondEntry_C::GetDefaultObj()
{
	static class UPakChunkStarksPondEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkStarksPondEntry_C*>(UPakChunkStarksPondEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


