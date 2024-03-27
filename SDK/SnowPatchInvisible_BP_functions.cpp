#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SnowPatchInvisible_BP.SnowPatchInvisible_BP_C
// (Actor)

class UClass* ASnowPatchInvisible_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SnowPatchInvisible_BP_C");

	return Clss;
}


// SnowPatchInvisible_BP_C SnowPatchInvisible_BP.Default__SnowPatchInvisible_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASnowPatchInvisible_BP_C* ASnowPatchInvisible_BP_C::GetDefaultObj()
{
	static class ASnowPatchInvisible_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASnowPatchInvisible_BP_C*>(ASnowPatchInvisible_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


