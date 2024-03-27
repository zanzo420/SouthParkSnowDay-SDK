#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkFoothillsAmbush.PakChunkFoothillsAmbush_C
// (None)

class UClass* UPakChunkFoothillsAmbush_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkFoothillsAmbush_C");

	return Clss;
}


// PakChunkFoothillsAmbush_C PakChunkFoothillsAmbush.Default__PakChunkFoothillsAmbush_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkFoothillsAmbush_C* UPakChunkFoothillsAmbush_C::GetDefaultObj()
{
	static class UPakChunkFoothillsAmbush_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkFoothillsAmbush_C*>(UPakChunkFoothillsAmbush_C::StaticClass()->DefaultObject);

	return Default;
}

}


