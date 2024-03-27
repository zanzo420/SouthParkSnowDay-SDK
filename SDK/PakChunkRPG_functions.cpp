#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkRPG.PakChunkRPG_C
// (None)

class UClass* UPakChunkRPG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkRPG_C");

	return Clss;
}


// PakChunkRPG_C PakChunkRPG.Default__PakChunkRPG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkRPG_C* UPakChunkRPG_C::GetDefaultObj()
{
	static class UPakChunkRPG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkRPG_C*>(UPakChunkRPG_C::StaticClass()->DefaultObject);

	return Default;
}

}


