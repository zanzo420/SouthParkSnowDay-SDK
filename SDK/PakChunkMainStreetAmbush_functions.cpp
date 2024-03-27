#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkMainStreetAmbush.PakChunkMainStreetAmbush_C
// (None)

class UClass* UPakChunkMainStreetAmbush_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkMainStreetAmbush_C");

	return Clss;
}


// PakChunkMainStreetAmbush_C PakChunkMainStreetAmbush.Default__PakChunkMainStreetAmbush_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkMainStreetAmbush_C* UPakChunkMainStreetAmbush_C::GetDefaultObj()
{
	static class UPakChunkMainStreetAmbush_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkMainStreetAmbush_C*>(UPakChunkMainStreetAmbush_C::StaticClass()->DefaultObject);

	return Default;
}

}


