#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LookAtMeActor.LookAtMeActor_C
// (Actor)

class UClass* ALookAtMeActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LookAtMeActor_C");

	return Clss;
}


// LookAtMeActor_C LookAtMeActor.Default__LookAtMeActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALookAtMeActor_C* ALookAtMeActor_C::GetDefaultObj()
{
	static class ALookAtMeActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALookAtMeActor_C*>(ALookAtMeActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


