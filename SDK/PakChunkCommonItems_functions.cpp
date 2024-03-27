#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkCommonItems.PakChunkCommonItems_C
// (None)

class UClass* UPakChunkCommonItems_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkCommonItems_C");

	return Clss;
}


// PakChunkCommonItems_C PakChunkCommonItems.Default__PakChunkCommonItems_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkCommonItems_C* UPakChunkCommonItems_C::GetDefaultObj()
{
	static class UPakChunkCommonItems_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkCommonItems_C*>(UPakChunkCommonItems_C::StaticClass()->DefaultObject);

	return Default;
}

}


