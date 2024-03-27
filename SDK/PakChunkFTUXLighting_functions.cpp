#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkFTUXLighting.PakChunkFTUXLighting_C
// (None)

class UClass* UPakChunkFTUXLighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkFTUXLighting_C");

	return Clss;
}


// PakChunkFTUXLighting_C PakChunkFTUXLighting.Default__PakChunkFTUXLighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkFTUXLighting_C* UPakChunkFTUXLighting_C::GetDefaultObj()
{
	static class UPakChunkFTUXLighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkFTUXLighting_C*>(UPakChunkFTUXLighting_C::StaticClass()->DefaultObject);

	return Default;
}

}


