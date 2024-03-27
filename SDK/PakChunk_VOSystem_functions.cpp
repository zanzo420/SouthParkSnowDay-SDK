#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunk_VOSystem.PakChunk_VOSystem_C
// (None)

class UClass* UPakChunk_VOSystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunk_VOSystem_C");

	return Clss;
}


// PakChunk_VOSystem_C PakChunk_VOSystem.Default__PakChunk_VOSystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunk_VOSystem_C* UPakChunk_VOSystem_C::GetDefaultObj()
{
	static class UPakChunk_VOSystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunk_VOSystem_C*>(UPakChunk_VOSystem_C::StaticClass()->DefaultObject);

	return Default;
}

}


