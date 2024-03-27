#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkHordeTwoFold.PakChunkHordeTwoFold_C
// (None)

class UClass* UPakChunkHordeTwoFold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkHordeTwoFold_C");

	return Clss;
}


// PakChunkHordeTwoFold_C PakChunkHordeTwoFold.Default__PakChunkHordeTwoFold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkHordeTwoFold_C* UPakChunkHordeTwoFold_C::GetDefaultObj()
{
	static class UPakChunkHordeTwoFold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkHordeTwoFold_C*>(UPakChunkHordeTwoFold_C::StaticClass()->DefaultObject);

	return Default;
}

}


