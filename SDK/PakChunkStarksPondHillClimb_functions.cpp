#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkStarksPondHillClimb.PakChunkStarksPondHillClimb_C
// (None)

class UClass* UPakChunkStarksPondHillClimb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkStarksPondHillClimb_C");

	return Clss;
}


// PakChunkStarksPondHillClimb_C PakChunkStarksPondHillClimb.Default__PakChunkStarksPondHillClimb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkStarksPondHillClimb_C* UPakChunkStarksPondHillClimb_C::GetDefaultObj()
{
	static class UPakChunkStarksPondHillClimb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkStarksPondHillClimb_C*>(UPakChunkStarksPondHillClimb_C::StaticClass()->DefaultObject);

	return Default;
}

}


