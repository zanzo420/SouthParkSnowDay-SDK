#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SnowPatchInvisible_Mound_BP.SnowPatchInvisible_Mound_BP_C
// (Actor)

class UClass* ASnowPatchInvisible_Mound_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SnowPatchInvisible_Mound_BP_C");

	return Clss;
}


// SnowPatchInvisible_Mound_BP_C SnowPatchInvisible_Mound_BP.Default__SnowPatchInvisible_Mound_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASnowPatchInvisible_Mound_BP_C* ASnowPatchInvisible_Mound_BP_C::GetDefaultObj()
{
	static class ASnowPatchInvisible_Mound_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASnowPatchInvisible_Mound_BP_C*>(ASnowPatchInvisible_Mound_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


