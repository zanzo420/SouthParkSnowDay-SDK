#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkDowntownNav.PakChunkDowntownNav_C
// (None)

class UClass* UPakChunkDowntownNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkDowntownNav_C");

	return Clss;
}


// PakChunkDowntownNav_C PakChunkDowntownNav.Default__PakChunkDowntownNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkDowntownNav_C* UPakChunkDowntownNav_C::GetDefaultObj()
{
	static class UPakChunkDowntownNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkDowntownNav_C*>(UPakChunkDowntownNav_C::StaticClass()->DefaultObject);

	return Default;
}

}


