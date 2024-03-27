#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkDerailedTrain.PakChunkDerailedTrain_C
// (None)

class UClass* UPakChunkDerailedTrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkDerailedTrain_C");

	return Clss;
}


// PakChunkDerailedTrain_C PakChunkDerailedTrain.Default__PakChunkDerailedTrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkDerailedTrain_C* UPakChunkDerailedTrain_C::GetDefaultObj()
{
	static class UPakChunkDerailedTrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkDerailedTrain_C*>(UPakChunkDerailedTrain_C::StaticClass()->DefaultObject);

	return Default;
}

}


