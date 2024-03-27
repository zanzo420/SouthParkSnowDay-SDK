#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkCommonUI.PakChunkCommonUI_C
// (None)

class UClass* UPakChunkCommonUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkCommonUI_C");

	return Clss;
}


// PakChunkCommonUI_C PakChunkCommonUI.Default__PakChunkCommonUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkCommonUI_C* UPakChunkCommonUI_C::GetDefaultObj()
{
	static class UPakChunkCommonUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkCommonUI_C*>(UPakChunkCommonUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


