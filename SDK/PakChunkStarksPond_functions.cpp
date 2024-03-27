#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkStarksPond.PakChunkStarksPond_C
// (None)

class UClass* UPakChunkStarksPond_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkStarksPond_C");

	return Clss;
}


// PakChunkStarksPond_C PakChunkStarksPond.Default__PakChunkStarksPond_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkStarksPond_C* UPakChunkStarksPond_C::GetDefaultObj()
{
	static class UPakChunkStarksPond_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkStarksPond_C*>(UPakChunkStarksPond_C::StaticClass()->DefaultObject);

	return Default;
}

}


