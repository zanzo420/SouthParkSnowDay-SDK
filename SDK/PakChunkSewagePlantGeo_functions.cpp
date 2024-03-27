#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkSewagePlantGeo.PakChunkSewagePlantGeo_C
// (None)

class UClass* UPakChunkSewagePlantGeo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkSewagePlantGeo_C");

	return Clss;
}


// PakChunkSewagePlantGeo_C PakChunkSewagePlantGeo.Default__PakChunkSewagePlantGeo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkSewagePlantGeo_C* UPakChunkSewagePlantGeo_C::GetDefaultObj()
{
	static class UPakChunkSewagePlantGeo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkSewagePlantGeo_C*>(UPakChunkSewagePlantGeo_C::StaticClass()->DefaultObject);

	return Default;
}

}


