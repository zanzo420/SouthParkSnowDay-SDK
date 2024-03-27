#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkMainStreetNav.PakChunkMainStreetNav_C
// (None)

class UClass* UPakChunkMainStreetNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkMainStreetNav_C");

	return Clss;
}


// PakChunkMainStreetNav_C PakChunkMainStreetNav.Default__PakChunkMainStreetNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkMainStreetNav_C* UPakChunkMainStreetNav_C::GetDefaultObj()
{
	static class UPakChunkMainStreetNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkMainStreetNav_C*>(UPakChunkMainStreetNav_C::StaticClass()->DefaultObject);

	return Default;
}

}


