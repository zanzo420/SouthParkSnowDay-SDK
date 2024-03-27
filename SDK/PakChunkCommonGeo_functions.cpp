#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkCommonGeo.PakChunkCommonGeo_C
// (None)

class UClass* UPakChunkCommonGeo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkCommonGeo_C");

	return Clss;
}


// PakChunkCommonGeo_C PakChunkCommonGeo.Default__PakChunkCommonGeo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkCommonGeo_C* UPakChunkCommonGeo_C::GetDefaultObj()
{
	static class UPakChunkCommonGeo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkCommonGeo_C*>(UPakChunkCommonGeo_C::StaticClass()->DefaultObject);

	return Default;
}

}


