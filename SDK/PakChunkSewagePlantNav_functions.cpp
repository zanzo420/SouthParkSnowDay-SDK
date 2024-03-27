#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkSewagePlantNav.PakChunkSewagePlantNav_C
// (None)

class UClass* UPakChunkSewagePlantNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkSewagePlantNav_C");

	return Clss;
}


// PakChunkSewagePlantNav_C PakChunkSewagePlantNav.Default__PakChunkSewagePlantNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkSewagePlantNav_C* UPakChunkSewagePlantNav_C::GetDefaultObj()
{
	static class UPakChunkSewagePlantNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkSewagePlantNav_C*>(UPakChunkSewagePlantNav_C::StaticClass()->DefaultObject);

	return Default;
}

}


