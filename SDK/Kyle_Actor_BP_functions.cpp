#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kyle_Actor_BP.Kyle_Actor_BP_C
// (Actor)

class UClass* AKyle_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kyle_Actor_BP_C");

	return Clss;
}


// Kyle_Actor_BP_C Kyle_Actor_BP.Default__Kyle_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKyle_Actor_BP_C* AKyle_Actor_BP_C::GetDefaultObj()
{
	static class AKyle_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKyle_Actor_BP_C*>(AKyle_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


