#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kenny_Actor_BP.Kenny_Actor_BP_C
// (Actor)

class UClass* AKenny_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kenny_Actor_BP_C");

	return Clss;
}


// Kenny_Actor_BP_C Kenny_Actor_BP.Default__Kenny_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKenny_Actor_BP_C* AKenny_Actor_BP_C::GetDefaultObj()
{
	static class AKenny_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKenny_Actor_BP_C*>(AKenny_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


