#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkTitleLighting.PakChunkTitleLighting_C
// (None)

class UClass* UPakChunkTitleLighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkTitleLighting_C");

	return Clss;
}


// PakChunkTitleLighting_C PakChunkTitleLighting.Default__PakChunkTitleLighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkTitleLighting_C* UPakChunkTitleLighting_C::GetDefaultObj()
{
	static class UPakChunkTitleLighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkTitleLighting_C*>(UPakChunkTitleLighting_C::StaticClass()->DefaultObject);

	return Default;
}

}


