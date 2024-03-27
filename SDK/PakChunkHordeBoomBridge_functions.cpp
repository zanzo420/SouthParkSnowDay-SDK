#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkHordeBoomBridge.PakChunkHordeBoomBridge_C
// (None)

class UClass* UPakChunkHordeBoomBridge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkHordeBoomBridge_C");

	return Clss;
}


// PakChunkHordeBoomBridge_C PakChunkHordeBoomBridge.Default__PakChunkHordeBoomBridge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkHordeBoomBridge_C* UPakChunkHordeBoomBridge_C::GetDefaultObj()
{
	static class UPakChunkHordeBoomBridge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkHordeBoomBridge_C*>(UPakChunkHordeBoomBridge_C::StaticClass()->DefaultObject);

	return Default;
}

}


