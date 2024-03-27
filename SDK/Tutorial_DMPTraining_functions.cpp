#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tutorial_DMPTraining.Tutorial_DMPTraining_C
// (None)

class UClass* UTutorial_DMPTraining_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tutorial_DMPTraining_C");

	return Clss;
}


// Tutorial_DMPTraining_C Tutorial_DMPTraining.Default__Tutorial_DMPTraining_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTutorial_DMPTraining_C* UTutorial_DMPTraining_C::GetDefaultObj()
{
	static class UTutorial_DMPTraining_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorial_DMPTraining_C*>(UTutorial_DMPTraining_C::StaticClass()->DefaultObject);

	return Default;
}

}


