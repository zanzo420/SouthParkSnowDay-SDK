#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkDowntownLighting.PakChunkDowntownLighting_C
// (None)

class UClass* UPakChunkDowntownLighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkDowntownLighting_C");

	return Clss;
}


// PakChunkDowntownLighting_C PakChunkDowntownLighting.Default__PakChunkDowntownLighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkDowntownLighting_C* UPakChunkDowntownLighting_C::GetDefaultObj()
{
	static class UPakChunkDowntownLighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkDowntownLighting_C*>(UPakChunkDowntownLighting_C::StaticClass()->DefaultObject);

	return Default;
}

}


