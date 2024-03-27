#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkPlaygroundLighting.PakChunkPlaygroundLighting_C
// (None)

class UClass* UPakChunkPlaygroundLighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkPlaygroundLighting_C");

	return Clss;
}


// PakChunkPlaygroundLighting_C PakChunkPlaygroundLighting.Default__PakChunkPlaygroundLighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkPlaygroundLighting_C* UPakChunkPlaygroundLighting_C::GetDefaultObj()
{
	static class UPakChunkPlaygroundLighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkPlaygroundLighting_C*>(UPakChunkPlaygroundLighting_C::StaticClass()->DefaultObject);

	return Default;
}

}


