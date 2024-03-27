#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyDamageReactionAdultGrab.BodyDamageReactionAdultGrab_C
// (None)

class UClass* UBodyDamageReactionAdultGrab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyDamageReactionAdultGrab_C");

	return Clss;
}


// BodyDamageReactionAdultGrab_C BodyDamageReactionAdultGrab.Default__BodyDamageReactionAdultGrab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBodyDamageReactionAdultGrab_C* UBodyDamageReactionAdultGrab_C::GetDefaultObj()
{
	static class UBodyDamageReactionAdultGrab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyDamageReactionAdultGrab_C*>(UBodyDamageReactionAdultGrab_C::StaticClass()->DefaultObject);

	return Default;
}

}


