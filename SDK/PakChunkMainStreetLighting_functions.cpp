#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkMainStreetLighting.PakChunkMainStreetLighting_C
// (None)

class UClass* UPakChunkMainStreetLighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkMainStreetLighting_C");

	return Clss;
}


// PakChunkMainStreetLighting_C PakChunkMainStreetLighting.Default__PakChunkMainStreetLighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkMainStreetLighting_C* UPakChunkMainStreetLighting_C::GetDefaultObj()
{
	static class UPakChunkMainStreetLighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkMainStreetLighting_C*>(UPakChunkMainStreetLighting_C::StaticClass()->DefaultObject);

	return Default;
}

}


