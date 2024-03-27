#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WalkDestination.WalkDestination_C
// (SceneComponent)

class UClass* UWalkDestination_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WalkDestination_C");

	return Clss;
}


// WalkDestination_C WalkDestination.Default__WalkDestination_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWalkDestination_C* UWalkDestination_C::GetDefaultObj()
{
	static class UWalkDestination_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWalkDestination_C*>(UWalkDestination_C::StaticClass()->DefaultObject);

	return Default;
}

}


