#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RecycleBinSmash_FX.RecycleBinSmash_FX_C
// (Actor)

class UClass* ARecycleBinSmash_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecycleBinSmash_FX_C");

	return Clss;
}


// RecycleBinSmash_FX_C RecycleBinSmash_FX.Default__RecycleBinSmash_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARecycleBinSmash_FX_C* ARecycleBinSmash_FX_C::GetDefaultObj()
{
	static class ARecycleBinSmash_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARecycleBinSmash_FX_C*>(ARecycleBinSmash_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


