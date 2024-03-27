#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkRoadwork.PakChunkRoadwork_C
// (None)

class UClass* UPakChunkRoadwork_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkRoadwork_C");

	return Clss;
}


// PakChunkRoadwork_C PakChunkRoadwork.Default__PakChunkRoadwork_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkRoadwork_C* UPakChunkRoadwork_C::GetDefaultObj()
{
	static class UPakChunkRoadwork_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkRoadwork_C*>(UPakChunkRoadwork_C::StaticClass()->DefaultObject);

	return Default;
}

}


