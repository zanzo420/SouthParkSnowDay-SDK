#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkSchoolBossFight.PakChunkSchoolBossFight_C
// (None)

class UClass* UPakChunkSchoolBossFight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkSchoolBossFight_C");

	return Clss;
}


// PakChunkSchoolBossFight_C PakChunkSchoolBossFight.Default__PakChunkSchoolBossFight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkSchoolBossFight_C* UPakChunkSchoolBossFight_C::GetDefaultObj()
{
	static class UPakChunkSchoolBossFight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkSchoolBossFight_C*>(UPakChunkSchoolBossFight_C::StaticClass()->DefaultObject);

	return Default;
}

}


