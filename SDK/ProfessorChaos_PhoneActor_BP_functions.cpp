#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ProfessorChaos_PhoneActor_BP.ProfessorChaos_PhoneActor_BP_C
// (Actor)

class UClass* AProfessorChaos_PhoneActor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProfessorChaos_PhoneActor_BP_C");

	return Clss;
}


// ProfessorChaos_PhoneActor_BP_C ProfessorChaos_PhoneActor_BP.Default__ProfessorChaos_PhoneActor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProfessorChaos_PhoneActor_BP_C* AProfessorChaos_PhoneActor_BP_C::GetDefaultObj()
{
	static class AProfessorChaos_PhoneActor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProfessorChaos_PhoneActor_BP_C*>(AProfessorChaos_PhoneActor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


