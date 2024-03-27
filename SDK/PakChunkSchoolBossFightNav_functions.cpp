#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkSchoolBossFightNav.PakChunkSchoolBossFightNav_C
// (None)

class UClass* UPakChunkSchoolBossFightNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkSchoolBossFightNav_C");

	return Clss;
}


// PakChunkSchoolBossFightNav_C PakChunkSchoolBossFightNav.Default__PakChunkSchoolBossFightNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkSchoolBossFightNav_C* UPakChunkSchoolBossFightNav_C::GetDefaultObj()
{
	static class UPakChunkSchoolBossFightNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkSchoolBossFightNav_C*>(UPakChunkSchoolBossFightNav_C::StaticClass()->DefaultObject);

	return Default;
}

}


