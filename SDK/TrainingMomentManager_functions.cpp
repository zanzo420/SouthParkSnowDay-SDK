#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrainingMomentManager.TrainingMomentManager_C
// (Actor)

class UClass* ATrainingMomentManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrainingMomentManager_C");

	return Clss;
}


// TrainingMomentManager_C TrainingMomentManager.Default__TrainingMomentManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrainingMomentManager_C* ATrainingMomentManager_C::GetDefaultObj()
{
	static class ATrainingMomentManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrainingMomentManager_C*>(ATrainingMomentManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


