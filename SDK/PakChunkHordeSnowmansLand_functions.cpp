#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkHordeSnowmansLand.PakChunkHordeSnowmansLand_C
// (None)

class UClass* UPakChunkHordeSnowmansLand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkHordeSnowmansLand_C");

	return Clss;
}


// PakChunkHordeSnowmansLand_C PakChunkHordeSnowmansLand.Default__PakChunkHordeSnowmansLand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkHordeSnowmansLand_C* UPakChunkHordeSnowmansLand_C::GetDefaultObj()
{
	static class UPakChunkHordeSnowmansLand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkHordeSnowmansLand_C*>(UPakChunkHordeSnowmansLand_C::StaticClass()->DefaultObject);

	return Default;
}

}


