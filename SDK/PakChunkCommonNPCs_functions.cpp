#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkCommonNPCs.PakChunkCommonNPCs_C
// (None)

class UClass* UPakChunkCommonNPCs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkCommonNPCs_C");

	return Clss;
}


// PakChunkCommonNPCs_C PakChunkCommonNPCs.Default__PakChunkCommonNPCs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkCommonNPCs_C* UPakChunkCommonNPCs_C::GetDefaultObj()
{
	static class UPakChunkCommonNPCs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkCommonNPCs_C*>(UPakChunkCommonNPCs_C::StaticClass()->DefaultObject);

	return Default;
}

}


