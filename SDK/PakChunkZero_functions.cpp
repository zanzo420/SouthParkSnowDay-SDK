#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkZero.PakChunkZero_C
// (None)

class UClass* UPakChunkZero_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkZero_C");

	return Clss;
}


// PakChunkZero_C PakChunkZero.Default__PakChunkZero_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkZero_C* UPakChunkZero_C::GetDefaultObj()
{
	static class UPakChunkZero_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkZero_C*>(UPakChunkZero_C::StaticClass()->DefaultObject);

	return Default;
}

}


