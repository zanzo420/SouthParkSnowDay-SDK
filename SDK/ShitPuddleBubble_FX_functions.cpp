#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShitPuddleBubble_FX.ShitPuddleBubble_FX_C
// (Actor)

class UClass* AShitPuddleBubble_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShitPuddleBubble_FX_C");

	return Clss;
}


// ShitPuddleBubble_FX_C ShitPuddleBubble_FX.Default__ShitPuddleBubble_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShitPuddleBubble_FX_C* AShitPuddleBubble_FX_C::GetDefaultObj()
{
	static class AShitPuddleBubble_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShitPuddleBubble_FX_C*>(AShitPuddleBubble_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


