#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkSocialHubGeoBackdrop.PakChunkSocialHubGeoBackdrop_C
// (None)

class UClass* UPakChunkSocialHubGeoBackdrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkSocialHubGeoBackdrop_C");

	return Clss;
}


// PakChunkSocialHubGeoBackdrop_C PakChunkSocialHubGeoBackdrop.Default__PakChunkSocialHubGeoBackdrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkSocialHubGeoBackdrop_C* UPakChunkSocialHubGeoBackdrop_C::GetDefaultObj()
{
	static class UPakChunkSocialHubGeoBackdrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkSocialHubGeoBackdrop_C*>(UPakChunkSocialHubGeoBackdrop_C::StaticClass()->DefaultObject);

	return Default;
}

}


