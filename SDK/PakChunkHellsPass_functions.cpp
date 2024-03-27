#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkHellsPass.PakChunkHellsPass_C
// (None)

class UClass* UPakChunkHellsPass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkHellsPass_C");

	return Clss;
}


// PakChunkHellsPass_C PakChunkHellsPass.Default__PakChunkHellsPass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkHellsPass_C* UPakChunkHellsPass_C::GetDefaultObj()
{
	static class UPakChunkHellsPass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkHellsPass_C*>(UPakChunkHellsPass_C::StaticClass()->DefaultObject);

	return Default;
}

}


