#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpearHit_Player.SpearHit_Player_C
// (Actor)

class UClass* ASpearHit_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpearHit_Player_C");

	return Clss;
}


// SpearHit_Player_C SpearHit_Player.Default__SpearHit_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpearHit_Player_C* ASpearHit_Player_C::GetDefaultObj()
{
	static class ASpearHit_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpearHit_Player_C*>(ASpearHit_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


