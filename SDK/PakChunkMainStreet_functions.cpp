#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkMainStreet.PakChunkMainStreet_C
// (None)

class UClass* UPakChunkMainStreet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkMainStreet_C");

	return Clss;
}


// PakChunkMainStreet_C PakChunkMainStreet.Default__PakChunkMainStreet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkMainStreet_C* UPakChunkMainStreet_C::GetDefaultObj()
{
	static class UPakChunkMainStreet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkMainStreet_C*>(UPakChunkMainStreet_C::StaticClass()->DefaultObject);

	return Default;
}

}


