#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkBridges.PakChunkBridges_C
// (None)

class UClass* UPakChunkBridges_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkBridges_C");

	return Clss;
}


// PakChunkBridges_C PakChunkBridges.Default__PakChunkBridges_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkBridges_C* UPakChunkBridges_C::GetDefaultObj()
{
	static class UPakChunkBridges_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkBridges_C*>(UPakChunkBridges_C::StaticClass()->DefaultObject);

	return Default;
}

}


