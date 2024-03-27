#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunk_DLC_Language_German.PakChunk_DLC_Language_German_C
// (None)

class UClass* UPakChunk_DLC_Language_German_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunk_DLC_Language_German_C");

	return Clss;
}


// PakChunk_DLC_Language_German_C PakChunk_DLC_Language_German.Default__PakChunk_DLC_Language_German_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunk_DLC_Language_German_C* UPakChunk_DLC_Language_German_C::GetDefaultObj()
{
	static class UPakChunk_DLC_Language_German_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunk_DLC_Language_German_C*>(UPakChunk_DLC_Language_German_C::StaticClass()->DefaultObject);

	return Default;
}

}


