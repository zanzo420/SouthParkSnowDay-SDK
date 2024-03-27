#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawn_FTUXCartmanBuddy_NoPuff.BodyPawn_FTUXCartmanBuddy_NoPuff_C
// (Actor, Pawn)

class UClass* ABodyPawn_FTUXCartmanBuddy_NoPuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawn_FTUXCartmanBuddy_NoPuff_C");

	return Clss;
}


// BodyPawn_FTUXCartmanBuddy_NoPuff_C BodyPawn_FTUXCartmanBuddy_NoPuff.Default__BodyPawn_FTUXCartmanBuddy_NoPuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawn_FTUXCartmanBuddy_NoPuff_C* ABodyPawn_FTUXCartmanBuddy_NoPuff_C::GetDefaultObj()
{
	static class ABodyPawn_FTUXCartmanBuddy_NoPuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawn_FTUXCartmanBuddy_NoPuff_C*>(ABodyPawn_FTUXCartmanBuddy_NoPuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


