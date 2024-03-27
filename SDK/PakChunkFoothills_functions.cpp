#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkFoothills.PakChunkFoothills_C
// (None)

class UClass* UPakChunkFoothills_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkFoothills_C");

	return Clss;
}


// PakChunkFoothills_C PakChunkFoothills.Default__PakChunkFoothills_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkFoothills_C* UPakChunkFoothills_C::GetDefaultObj()
{
	static class UPakChunkFoothills_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkFoothills_C*>(UPakChunkFoothills_C::StaticClass()->DefaultObject);

	return Default;
}

}


