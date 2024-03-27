#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkSocialHubLighting.PakChunkSocialHubLighting_C
// (None)

class UClass* UPakChunkSocialHubLighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkSocialHubLighting_C");

	return Clss;
}


// PakChunkSocialHubLighting_C PakChunkSocialHubLighting.Default__PakChunkSocialHubLighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkSocialHubLighting_C* UPakChunkSocialHubLighting_C::GetDefaultObj()
{
	static class UPakChunkSocialHubLighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkSocialHubLighting_C*>(UPakChunkSocialHubLighting_C::StaticClass()->DefaultObject);

	return Default;
}

}


