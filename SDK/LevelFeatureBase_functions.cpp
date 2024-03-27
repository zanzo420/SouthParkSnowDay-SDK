#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LevelFeatureBase.LevelFeatureBase_C
// (Actor)

class UClass* ALevelFeatureBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelFeatureBase_C");

	return Clss;
}


// LevelFeatureBase_C LevelFeatureBase.Default__LevelFeatureBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALevelFeatureBase_C* ALevelFeatureBase_C::GetDefaultObj()
{
	static class ALevelFeatureBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelFeatureBase_C*>(ALevelFeatureBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelFeatureBase.LevelFeatureBase_C.ToggleOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALevelFeatureBase_C::ToggleOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelFeatureBase_C", "ToggleOff");



	UObject::ProcessEvent(Func, nullptr);

}

}


