#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FrobGate_HasCompletedTutorial_FitcoinEnough.FrobGate_HasCompletedTutorial_FitcoinEnough_C
// (None)

class UClass* UFrobGate_HasCompletedTutorial_FitcoinEnough_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrobGate_HasCompletedTutorial_FitcoinEnough_C");

	return Clss;
}


// FrobGate_HasCompletedTutorial_FitcoinEnough_C FrobGate_HasCompletedTutorial_FitcoinEnough.Default__FrobGate_HasCompletedTutorial_FitcoinEnough_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFrobGate_HasCompletedTutorial_FitcoinEnough_C* UFrobGate_HasCompletedTutorial_FitcoinEnough_C::GetDefaultObj()
{
	static class UFrobGate_HasCompletedTutorial_FitcoinEnough_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFrobGate_HasCompletedTutorial_FitcoinEnough_C*>(UFrobGate_HasCompletedTutorial_FitcoinEnough_C::StaticClass()->DefaultObject);

	return Default;
}

}


