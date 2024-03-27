#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Jimmy_Actor_BP.Jimmy_Actor_BP_C
// (Actor)

class UClass* AJimmy_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Jimmy_Actor_BP_C");

	return Clss;
}


// Jimmy_Actor_BP_C Jimmy_Actor_BP.Default__Jimmy_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AJimmy_Actor_BP_C* AJimmy_Actor_BP_C::GetDefaultObj()
{
	static class AJimmy_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AJimmy_Actor_BP_C*>(AJimmy_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


