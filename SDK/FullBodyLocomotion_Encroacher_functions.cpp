#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyLocomotion_Encroacher.FullBodyLocomotion_Encroacher_C
// (None)

class UClass* UFullBodyLocomotion_Encroacher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyLocomotion_Encroacher_C");

	return Clss;
}


// FullBodyLocomotion_Encroacher_C FullBodyLocomotion_Encroacher.Default__FullBodyLocomotion_Encroacher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyLocomotion_Encroacher_C* UFullBodyLocomotion_Encroacher_C::GetDefaultObj()
{
	static class UFullBodyLocomotion_Encroacher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyLocomotion_Encroacher_C*>(UFullBodyLocomotion_Encroacher_C::StaticClass()->DefaultObject);

	return Default;
}

}


