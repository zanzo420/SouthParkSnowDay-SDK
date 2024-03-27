#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkCommonProps.PakChunkCommonProps_C
// (None)

class UClass* UPakChunkCommonProps_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkCommonProps_C");

	return Clss;
}


// PakChunkCommonProps_C PakChunkCommonProps.Default__PakChunkCommonProps_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkCommonProps_C* UPakChunkCommonProps_C::GetDefaultObj()
{
	static class UPakChunkCommonProps_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkCommonProps_C*>(UPakChunkCommonProps_C::StaticClass()->DefaultObject);

	return Default;
}

}


