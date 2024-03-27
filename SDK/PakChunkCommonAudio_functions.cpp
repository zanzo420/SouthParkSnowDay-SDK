#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkCommonAudio.PakChunkCommonAudio_C
// (None)

class UClass* UPakChunkCommonAudio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkCommonAudio_C");

	return Clss;
}


// PakChunkCommonAudio_C PakChunkCommonAudio.Default__PakChunkCommonAudio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkCommonAudio_C* UPakChunkCommonAudio_C::GetDefaultObj()
{
	static class UPakChunkCommonAudio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkCommonAudio_C*>(UPakChunkCommonAudio_C::StaticClass()->DefaultObject);

	return Default;
}

}


