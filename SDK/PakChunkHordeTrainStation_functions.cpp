#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkHordeTrainStation.PakChunkHordeTrainStation_C
// (None)

class UClass* UPakChunkHordeTrainStation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkHordeTrainStation_C");

	return Clss;
}


// PakChunkHordeTrainStation_C PakChunkHordeTrainStation.Default__PakChunkHordeTrainStation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkHordeTrainStation_C* UPakChunkHordeTrainStation_C::GetDefaultObj()
{
	static class UPakChunkHordeTrainStation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkHordeTrainStation_C*>(UPakChunkHordeTrainStation_C::StaticClass()->DefaultObject);

	return Default;
}

}


