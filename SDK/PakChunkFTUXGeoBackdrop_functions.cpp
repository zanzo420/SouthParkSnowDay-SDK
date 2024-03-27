#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkFTUXGeoBackdrop.PakChunkFTUXGeoBackdrop_C
// (None)

class UClass* UPakChunkFTUXGeoBackdrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkFTUXGeoBackdrop_C");

	return Clss;
}


// PakChunkFTUXGeoBackdrop_C PakChunkFTUXGeoBackdrop.Default__PakChunkFTUXGeoBackdrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkFTUXGeoBackdrop_C* UPakChunkFTUXGeoBackdrop_C::GetDefaultObj()
{
	static class UPakChunkFTUXGeoBackdrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkFTUXGeoBackdrop_C*>(UPakChunkFTUXGeoBackdrop_C::StaticClass()->DefaultObject);

	return Default;
}

}


