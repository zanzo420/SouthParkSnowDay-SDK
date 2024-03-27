#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkSocialHubDesignCinematic.PakChunkSocialHubDesignCinematic_C
// (None)

class UClass* UPakChunkSocialHubDesignCinematic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkSocialHubDesignCinematic_C");

	return Clss;
}


// PakChunkSocialHubDesignCinematic_C PakChunkSocialHubDesignCinematic.Default__PakChunkSocialHubDesignCinematic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkSocialHubDesignCinematic_C* UPakChunkSocialHubDesignCinematic_C::GetDefaultObj()
{
	static class UPakChunkSocialHubDesignCinematic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkSocialHubDesignCinematic_C*>(UPakChunkSocialHubDesignCinematic_C::StaticClass()->DefaultObject);

	return Default;
}

}


