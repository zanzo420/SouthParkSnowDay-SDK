#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkFTUX.PakChunkFTUX_C
// (None)

class UClass* UPakChunkFTUX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkFTUX_C");

	return Clss;
}


// PakChunkFTUX_C PakChunkFTUX.Default__PakChunkFTUX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkFTUX_C* UPakChunkFTUX_C::GetDefaultObj()
{
	static class UPakChunkFTUX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkFTUX_C*>(UPakChunkFTUX_C::StaticClass()->DefaultObject);

	return Default;
}

}


