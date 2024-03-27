#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkPrideDen.PakChunkPrideDen_C
// (None)

class UClass* UPakChunkPrideDen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkPrideDen_C");

	return Clss;
}


// PakChunkPrideDen_C PakChunkPrideDen.Default__PakChunkPrideDen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkPrideDen_C* UPakChunkPrideDen_C::GetDefaultObj()
{
	static class UPakChunkPrideDen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkPrideDen_C*>(UPakChunkPrideDen_C::StaticClass()->DefaultObject);

	return Default;
}

}


