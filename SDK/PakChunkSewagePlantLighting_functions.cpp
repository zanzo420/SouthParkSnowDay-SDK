#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkSewagePlantLighting.PakChunkSewagePlantLighting_C
// (None)

class UClass* UPakChunkSewagePlantLighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkSewagePlantLighting_C");

	return Clss;
}


// PakChunkSewagePlantLighting_C PakChunkSewagePlantLighting.Default__PakChunkSewagePlantLighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkSewagePlantLighting_C* UPakChunkSewagePlantLighting_C::GetDefaultObj()
{
	static class UPakChunkSewagePlantLighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkSewagePlantLighting_C*>(UPakChunkSewagePlantLighting_C::StaticClass()->DefaultObject);

	return Default;
}

}


