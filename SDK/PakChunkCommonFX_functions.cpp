#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkCommonFX.PakChunkCommonFX_C
// (None)

class UClass* UPakChunkCommonFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkCommonFX_C");

	return Clss;
}


// PakChunkCommonFX_C PakChunkCommonFX.Default__PakChunkCommonFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkCommonFX_C* UPakChunkCommonFX_C::GetDefaultObj()
{
	static class UPakChunkCommonFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkCommonFX_C*>(UPakChunkCommonFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


