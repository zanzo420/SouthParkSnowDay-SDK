#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ike_Actor_BP.Ike_Actor_BP_C
// (Actor)

class UClass* AIke_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ike_Actor_BP_C");

	return Clss;
}


// Ike_Actor_BP_C Ike_Actor_BP.Default__Ike_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIke_Actor_BP_C* AIke_Actor_BP_C::GetDefaultObj()
{
	static class AIke_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIke_Actor_BP_C*>(AIke_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


