#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnOutcomeCalculatorArchetype.QtnOutcomeCalculatorArchetype_C
// (None)

class UClass* UQtnOutcomeCalculatorArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnOutcomeCalculatorArchetype_C");

	return Clss;
}


// QtnOutcomeCalculatorArchetype_C QtnOutcomeCalculatorArchetype.Default__QtnOutcomeCalculatorArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnOutcomeCalculatorArchetype_C* UQtnOutcomeCalculatorArchetype_C::GetDefaultObj()
{
	static class UQtnOutcomeCalculatorArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnOutcomeCalculatorArchetype_C*>(UQtnOutcomeCalculatorArchetype_C::StaticClass()->DefaultObject);

	return Default;
}

}


