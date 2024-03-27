#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkHellsPassGeo.PakChunkHellsPassGeo_C
// (None)

class UClass* UPakChunkHellsPassGeo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkHellsPassGeo_C");

	return Clss;
}


// PakChunkHellsPassGeo_C PakChunkHellsPassGeo.Default__PakChunkHellsPassGeo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkHellsPassGeo_C* UPakChunkHellsPassGeo_C::GetDefaultObj()
{
	static class UPakChunkHellsPassGeo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkHellsPassGeo_C*>(UPakChunkHellsPassGeo_C::StaticClass()->DefaultObject);

	return Default;
}

}


