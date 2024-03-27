#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Movement_Sprint_Tutorial.Movement_Sprint_Tutorial_C
// (None)

class UClass* UMovement_Sprint_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Movement_Sprint_Tutorial_C");

	return Clss;
}


// Movement_Sprint_Tutorial_C Movement_Sprint_Tutorial.Default__Movement_Sprint_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMovement_Sprint_Tutorial_C* UMovement_Sprint_Tutorial_C::GetDefaultObj()
{
	static class UMovement_Sprint_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovement_Sprint_Tutorial_C*>(UMovement_Sprint_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


