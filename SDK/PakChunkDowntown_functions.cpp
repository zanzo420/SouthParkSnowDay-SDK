#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkDowntown.PakChunkDowntown_C
// (None)

class UClass* UPakChunkDowntown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkDowntown_C");

	return Clss;
}


// PakChunkDowntown_C PakChunkDowntown.Default__PakChunkDowntown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkDowntown_C* UPakChunkDowntown_C::GetDefaultObj()
{
	static class UPakChunkDowntown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkDowntown_C*>(UPakChunkDowntown_C::StaticClass()->DefaultObject);

	return Default;
}

}


