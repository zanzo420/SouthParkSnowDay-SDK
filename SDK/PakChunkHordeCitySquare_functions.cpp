#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkHordeCitySquare.PakChunkHordeCitySquare_C
// (None)

class UClass* UPakChunkHordeCitySquare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkHordeCitySquare_C");

	return Clss;
}


// PakChunkHordeCitySquare_C PakChunkHordeCitySquare.Default__PakChunkHordeCitySquare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkHordeCitySquare_C* UPakChunkHordeCitySquare_C::GetDefaultObj()
{
	static class UPakChunkHordeCitySquare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkHordeCitySquare_C*>(UPakChunkHordeCitySquare_C::StaticClass()->DefaultObject);

	return Default;
}

}


