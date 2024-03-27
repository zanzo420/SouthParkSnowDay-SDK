#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkFTUXNav.PakChunkFTUXNav_C
// (None)

class UClass* UPakChunkFTUXNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkFTUXNav_C");

	return Clss;
}


// PakChunkFTUXNav_C PakChunkFTUXNav.Default__PakChunkFTUXNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkFTUXNav_C* UPakChunkFTUXNav_C::GetDefaultObj()
{
	static class UPakChunkFTUXNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkFTUXNav_C*>(UPakChunkFTUXNav_C::StaticClass()->DefaultObject);

	return Default;
}

}


