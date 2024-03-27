#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyLocomotion_CartmanChurchChase.FullBodyLocomotion_CartmanChurchChase_C
// (None)

class UClass* UFullBodyLocomotion_CartmanChurchChase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyLocomotion_CartmanChurchChase_C");

	return Clss;
}


// FullBodyLocomotion_CartmanChurchChase_C FullBodyLocomotion_CartmanChurchChase.Default__FullBodyLocomotion_CartmanChurchChase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyLocomotion_CartmanChurchChase_C* UFullBodyLocomotion_CartmanChurchChase_C::GetDefaultObj()
{
	static class UFullBodyLocomotion_CartmanChurchChase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyLocomotion_CartmanChurchChase_C*>(UFullBodyLocomotion_CartmanChurchChase_C::StaticClass()->DefaultObject);

	return Default;
}

}


