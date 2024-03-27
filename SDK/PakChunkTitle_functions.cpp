#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkTitle.PakChunkTitle_C
// (None)

class UClass* UPakChunkTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkTitle_C");

	return Clss;
}


// PakChunkTitle_C PakChunkTitle.Default__PakChunkTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkTitle_C* UPakChunkTitle_C::GetDefaultObj()
{
	static class UPakChunkTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkTitle_C*>(UPakChunkTitle_C::StaticClass()->DefaultObject);

	return Default;
}

}


