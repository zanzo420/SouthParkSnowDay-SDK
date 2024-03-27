#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkPlaygroundNav.PakChunkPlaygroundNav_C
// (None)

class UClass* UPakChunkPlaygroundNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkPlaygroundNav_C");

	return Clss;
}


// PakChunkPlaygroundNav_C PakChunkPlaygroundNav.Default__PakChunkPlaygroundNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkPlaygroundNav_C* UPakChunkPlaygroundNav_C::GetDefaultObj()
{
	static class UPakChunkPlaygroundNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkPlaygroundNav_C*>(UPakChunkPlaygroundNav_C::StaticClass()->DefaultObject);

	return Default;
}

}


