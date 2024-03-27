#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkFoothillsNav.PakChunkFoothillsNav_C
// (None)

class UClass* UPakChunkFoothillsNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkFoothillsNav_C");

	return Clss;
}


// PakChunkFoothillsNav_C PakChunkFoothillsNav.Default__PakChunkFoothillsNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkFoothillsNav_C* UPakChunkFoothillsNav_C::GetDefaultObj()
{
	static class UPakChunkFoothillsNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkFoothillsNav_C*>(UPakChunkFoothillsNav_C::StaticClass()->DefaultObject);

	return Default;
}

}


