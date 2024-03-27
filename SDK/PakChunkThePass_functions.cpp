#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkThePass.PakChunkThePass_C
// (None)

class UClass* UPakChunkThePass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkThePass_C");

	return Clss;
}


// PakChunkThePass_C PakChunkThePass.Default__PakChunkThePass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkThePass_C* UPakChunkThePass_C::GetDefaultObj()
{
	static class UPakChunkThePass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkThePass_C*>(UPakChunkThePass_C::StaticClass()->DefaultObject);

	return Default;
}

}


