#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkStarksPondRopeCourse.PakChunkStarksPondRopeCourse_C
// (None)

class UClass* UPakChunkStarksPondRopeCourse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkStarksPondRopeCourse_C");

	return Clss;
}


// PakChunkStarksPondRopeCourse_C PakChunkStarksPondRopeCourse.Default__PakChunkStarksPondRopeCourse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkStarksPondRopeCourse_C* UPakChunkStarksPondRopeCourse_C::GetDefaultObj()
{
	static class UPakChunkStarksPondRopeCourse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkStarksPondRopeCourse_C*>(UPakChunkStarksPondRopeCourse_C::StaticClass()->DefaultObject);

	return Default;
}

}


