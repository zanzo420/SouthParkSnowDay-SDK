#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkPlayground.PakChunkPlayground_C
// (None)

class UClass* UPakChunkPlayground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkPlayground_C");

	return Clss;
}


// PakChunkPlayground_C PakChunkPlayground.Default__PakChunkPlayground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkPlayground_C* UPakChunkPlayground_C::GetDefaultObj()
{
	static class UPakChunkPlayground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkPlayground_C*>(UPakChunkPlayground_C::StaticClass()->DefaultObject);

	return Default;
}

}


