#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkDowntownGeo.PakChunkDowntownGeo_C
// (None)

class UClass* UPakChunkDowntownGeo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkDowntownGeo_C");

	return Clss;
}


// PakChunkDowntownGeo_C PakChunkDowntownGeo.Default__PakChunkDowntownGeo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkDowntownGeo_C* UPakChunkDowntownGeo_C::GetDefaultObj()
{
	static class UPakChunkDowntownGeo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkDowntownGeo_C*>(UPakChunkDowntownGeo_C::StaticClass()->DefaultObject);

	return Default;
}

}


