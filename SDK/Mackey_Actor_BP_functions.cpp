#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mackey_Actor_BP.Mackey_Actor_BP_C
// (Actor)

class UClass* AMackey_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mackey_Actor_BP_C");

	return Clss;
}


// Mackey_Actor_BP_C Mackey_Actor_BP.Default__Mackey_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMackey_Actor_BP_C* AMackey_Actor_BP_C::GetDefaultObj()
{
	static class AMackey_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMackey_Actor_BP_C*>(AMackey_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


