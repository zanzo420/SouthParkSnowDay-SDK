#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkMiscLevels.PakChunkMiscLevels_C
// (None)

class UClass* UPakChunkMiscLevels_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkMiscLevels_C");

	return Clss;
}


// PakChunkMiscLevels_C PakChunkMiscLevels.Default__PakChunkMiscLevels_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkMiscLevels_C* UPakChunkMiscLevels_C::GetDefaultObj()
{
	static class UPakChunkMiscLevels_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkMiscLevels_C*>(UPakChunkMiscLevels_C::StaticClass()->DefaultObject);

	return Default;
}

}


