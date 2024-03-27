#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkHellsPassLighting.PakChunkHellsPassLighting_C
// (None)

class UClass* UPakChunkHellsPassLighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkHellsPassLighting_C");

	return Clss;
}


// PakChunkHellsPassLighting_C PakChunkHellsPassLighting.Default__PakChunkHellsPassLighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkHellsPassLighting_C* UPakChunkHellsPassLighting_C::GetDefaultObj()
{
	static class UPakChunkHellsPassLighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkHellsPassLighting_C*>(UPakChunkHellsPassLighting_C::StaticClass()->DefaultObject);

	return Default;
}

}


