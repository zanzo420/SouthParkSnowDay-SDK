#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkFoothillsLighting.PakChunkFoothillsLighting_C
// (None)

class UClass* UPakChunkFoothillsLighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkFoothillsLighting_C");

	return Clss;
}


// PakChunkFoothillsLighting_C PakChunkFoothillsLighting.Default__PakChunkFoothillsLighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkFoothillsLighting_C* UPakChunkFoothillsLighting_C::GetDefaultObj()
{
	static class UPakChunkFoothillsLighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkFoothillsLighting_C*>(UPakChunkFoothillsLighting_C::StaticClass()->DefaultObject);

	return Default;
}

}


