#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkMakeshiftStronghold.PakChunkMakeshiftStronghold_C
// (None)

class UClass* UPakChunkMakeshiftStronghold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkMakeshiftStronghold_C");

	return Clss;
}


// PakChunkMakeshiftStronghold_C PakChunkMakeshiftStronghold.Default__PakChunkMakeshiftStronghold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkMakeshiftStronghold_C* UPakChunkMakeshiftStronghold_C::GetDefaultObj()
{
	static class UPakChunkMakeshiftStronghold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkMakeshiftStronghold_C*>(UPakChunkMakeshiftStronghold_C::StaticClass()->DefaultObject);

	return Default;
}

}


