#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkSewagePlant.PakChunkSewagePlant_C
// (None)

class UClass* UPakChunkSewagePlant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkSewagePlant_C");

	return Clss;
}


// PakChunkSewagePlant_C PakChunkSewagePlant.Default__PakChunkSewagePlant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkSewagePlant_C* UPakChunkSewagePlant_C::GetDefaultObj()
{
	static class UPakChunkSewagePlant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkSewagePlant_C*>(UPakChunkSewagePlant_C::StaticClass()->DefaultObject);

	return Default;
}

}


