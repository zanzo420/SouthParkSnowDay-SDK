#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkIceLake.PakChunkIceLake_C
// (None)

class UClass* UPakChunkIceLake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkIceLake_C");

	return Clss;
}


// PakChunkIceLake_C PakChunkIceLake.Default__PakChunkIceLake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkIceLake_C* UPakChunkIceLake_C::GetDefaultObj()
{
	static class UPakChunkIceLake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkIceLake_C*>(UPakChunkIceLake_C::StaticClass()->DefaultObject);

	return Default;
}

}


