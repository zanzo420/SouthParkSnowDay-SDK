#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerPlayer.BodyControllerPlayer_C
// (Actor)

class UClass* ABodyControllerPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerPlayer_C");

	return Clss;
}


// BodyControllerPlayer_C BodyControllerPlayer.Default__BodyControllerPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerPlayer_C* ABodyControllerPlayer_C::GetDefaultObj()
{
	static class ABodyControllerPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerPlayer_C*>(ABodyControllerPlayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


