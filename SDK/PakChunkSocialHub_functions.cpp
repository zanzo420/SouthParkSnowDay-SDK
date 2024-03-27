#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkSocialHub.PakChunkSocialHub_C
// (None)

class UClass* UPakChunkSocialHub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkSocialHub_C");

	return Clss;
}


// PakChunkSocialHub_C PakChunkSocialHub.Default__PakChunkSocialHub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkSocialHub_C* UPakChunkSocialHub_C::GetDefaultObj()
{
	static class UPakChunkSocialHub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkSocialHub_C*>(UPakChunkSocialHub_C::StaticClass()->DefaultObject);

	return Default;
}

}


