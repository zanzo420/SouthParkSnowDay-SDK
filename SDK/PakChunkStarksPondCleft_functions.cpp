#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkStarksPondCleft.PakChunkStarksPondCleft_C
// (None)

class UClass* UPakChunkStarksPondCleft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkStarksPondCleft_C");

	return Clss;
}


// PakChunkStarksPondCleft_C PakChunkStarksPondCleft.Default__PakChunkStarksPondCleft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkStarksPondCleft_C* UPakChunkStarksPondCleft_C::GetDefaultObj()
{
	static class UPakChunkStarksPondCleft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkStarksPondCleft_C*>(UPakChunkStarksPondCleft_C::StaticClass()->DefaultObject);

	return Default;
}

}


