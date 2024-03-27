#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkPlaygroundGeo.PakChunkPlaygroundGeo_C
// (None)

class UClass* UPakChunkPlaygroundGeo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkPlaygroundGeo_C");

	return Clss;
}


// PakChunkPlaygroundGeo_C PakChunkPlaygroundGeo.Default__PakChunkPlaygroundGeo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkPlaygroundGeo_C* UPakChunkPlaygroundGeo_C::GetDefaultObj()
{
	static class UPakChunkPlaygroundGeo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkPlaygroundGeo_C*>(UPakChunkPlaygroundGeo_C::StaticClass()->DefaultObject);

	return Default;
}

}


