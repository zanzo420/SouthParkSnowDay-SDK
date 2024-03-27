#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyLocomotion_Golem.FullBodyLocomotion_Golem_C
// (None)

class UClass* UFullBodyLocomotion_Golem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyLocomotion_Golem_C");

	return Clss;
}


// FullBodyLocomotion_Golem_C FullBodyLocomotion_Golem.Default__FullBodyLocomotion_Golem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyLocomotion_Golem_C* UFullBodyLocomotion_Golem_C::GetDefaultObj()
{
	static class UFullBodyLocomotion_Golem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyLocomotion_Golem_C*>(UFullBodyLocomotion_Golem_C::StaticClass()->DefaultObject);

	return Default;
}

}


