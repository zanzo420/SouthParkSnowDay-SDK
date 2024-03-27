#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkHellsPassNav.PakChunkHellsPassNav_C
// (None)

class UClass* UPakChunkHellsPassNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkHellsPassNav_C");

	return Clss;
}


// PakChunkHellsPassNav_C PakChunkHellsPassNav.Default__PakChunkHellsPassNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkHellsPassNav_C* UPakChunkHellsPassNav_C::GetDefaultObj()
{
	static class UPakChunkHellsPassNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkHellsPassNav_C*>(UPakChunkHellsPassNav_C::StaticClass()->DefaultObject);

	return Default;
}

}


