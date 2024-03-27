#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActorPlacementComp.ActorPlacementComp_C
// (SceneComponent)

class UClass* UActorPlacementComp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActorPlacementComp_C");

	return Clss;
}


// ActorPlacementComp_C ActorPlacementComp.Default__ActorPlacementComp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActorPlacementComp_C* UActorPlacementComp_C::GetDefaultObj()
{
	static class UActorPlacementComp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActorPlacementComp_C*>(UActorPlacementComp_C::StaticClass()->DefaultObject);

	return Default;
}

}


