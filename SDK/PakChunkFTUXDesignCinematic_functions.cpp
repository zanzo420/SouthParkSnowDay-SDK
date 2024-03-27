#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkFTUXDesignCinematic.PakChunkFTUXDesignCinematic_C
// (None)

class UClass* UPakChunkFTUXDesignCinematic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkFTUXDesignCinematic_C");

	return Clss;
}


// PakChunkFTUXDesignCinematic_C PakChunkFTUXDesignCinematic.Default__PakChunkFTUXDesignCinematic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkFTUXDesignCinematic_C* UPakChunkFTUXDesignCinematic_C::GetDefaultObj()
{
	static class UPakChunkFTUXDesignCinematic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkFTUXDesignCinematic_C*>(UPakChunkFTUXDesignCinematic_C::StaticClass()->DefaultObject);

	return Default;
}

}


