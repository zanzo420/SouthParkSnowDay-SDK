#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkQtnSystems.PakChunkQtnSystems_C
// (None)

class UClass* UPakChunkQtnSystems_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkQtnSystems_C");

	return Clss;
}


// PakChunkQtnSystems_C PakChunkQtnSystems.Default__PakChunkQtnSystems_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkQtnSystems_C* UPakChunkQtnSystems_C::GetDefaultObj()
{
	static class UPakChunkQtnSystems_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkQtnSystems_C*>(UPakChunkQtnSystems_C::StaticClass()->DefaultObject);

	return Default;
}

}


