#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkMainStreetCentral.PakChunkMainStreetCentral_C
// (None)

class UClass* UPakChunkMainStreetCentral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkMainStreetCentral_C");

	return Clss;
}


// PakChunkMainStreetCentral_C PakChunkMainStreetCentral.Default__PakChunkMainStreetCentral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkMainStreetCentral_C* UPakChunkMainStreetCentral_C::GetDefaultObj()
{
	static class UPakChunkMainStreetCentral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkMainStreetCentral_C*>(UPakChunkMainStreetCentral_C::StaticClass()->DefaultObject);

	return Default;
}

}


