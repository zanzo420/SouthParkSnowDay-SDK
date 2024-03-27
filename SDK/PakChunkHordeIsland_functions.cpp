#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkHordeIsland.PakChunkHordeIsland_C
// (None)

class UClass* UPakChunkHordeIsland_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkHordeIsland_C");

	return Clss;
}


// PakChunkHordeIsland_C PakChunkHordeIsland.Default__PakChunkHordeIsland_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkHordeIsland_C* UPakChunkHordeIsland_C::GetDefaultObj()
{
	static class UPakChunkHordeIsland_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkHordeIsland_C*>(UPakChunkHordeIsland_C::StaticClass()->DefaultObject);

	return Default;
}

}


