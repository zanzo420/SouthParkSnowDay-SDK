#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunk_DLC_Language_PtBr.PakChunk_DLC_Language_PtBr_C
// (None)

class UClass* UPakChunk_DLC_Language_PtBr_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunk_DLC_Language_PtBr_C");

	return Clss;
}


// PakChunk_DLC_Language_PtBr_C PakChunk_DLC_Language_PtBr.Default__PakChunk_DLC_Language_PtBr_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunk_DLC_Language_PtBr_C* UPakChunk_DLC_Language_PtBr_C::GetDefaultObj()
{
	static class UPakChunk_DLC_Language_PtBr_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunk_DLC_Language_PtBr_C*>(UPakChunk_DLC_Language_PtBr_C::StaticClass()->DefaultObject);

	return Default;
}

}


