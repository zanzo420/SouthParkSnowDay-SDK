#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkStarksPondTrainStation.PakChunkStarksPondTrainStation_C
// (None)

class UClass* UPakChunkStarksPondTrainStation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkStarksPondTrainStation_C");

	return Clss;
}


// PakChunkStarksPondTrainStation_C PakChunkStarksPondTrainStation.Default__PakChunkStarksPondTrainStation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkStarksPondTrainStation_C* UPakChunkStarksPondTrainStation_C::GetDefaultObj()
{
	static class UPakChunkStarksPondTrainStation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkStarksPondTrainStation_C*>(UPakChunkStarksPondTrainStation_C::StaticClass()->DefaultObject);

	return Default;
}

}


