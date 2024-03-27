#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BowImpactHelper.BP_BowImpactHelper_C
// (Actor)

class UClass* ABP_BowImpactHelper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BowImpactHelper_C");

	return Clss;
}


// BP_BowImpactHelper_C BP_BowImpactHelper.Default__BP_BowImpactHelper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BowImpactHelper_C* ABP_BowImpactHelper_C::GetDefaultObj()
{
	static class ABP_BowImpactHelper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BowImpactHelper_C*>(ABP_BowImpactHelper_C::StaticClass()->DefaultObject);

	return Default;
}

}


