#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkHero.PakChunkHero_C
// (None)

class UClass* UPakChunkHero_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkHero_C");

	return Clss;
}


// PakChunkHero_C PakChunkHero.Default__PakChunkHero_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkHero_C* UPakChunkHero_C::GetDefaultObj()
{
	static class UPakChunkHero_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkHero_C*>(UPakChunkHero_C::StaticClass()->DefaultObject);

	return Default;
}

}


