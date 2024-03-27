#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateScriptedAction.MentalSubStateScriptedAction_C
// (None)

class UClass* UMentalSubStateScriptedAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateScriptedAction_C");

	return Clss;
}


// MentalSubStateScriptedAction_C MentalSubStateScriptedAction.Default__MentalSubStateScriptedAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateScriptedAction_C* UMentalSubStateScriptedAction_C::GetDefaultObj()
{
	static class UMentalSubStateScriptedAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateScriptedAction_C*>(UMentalSubStateScriptedAction_C::StaticClass()->DefaultObject);

	return Default;
}

}


