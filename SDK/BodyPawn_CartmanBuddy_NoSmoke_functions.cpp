#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawn_CartmanBuddy_NoSmoke.BodyPawn_CartmanBuddy_NoSmoke_C
// (Actor, Pawn)

class UClass* ABodyPawn_CartmanBuddy_NoSmoke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawn_CartmanBuddy_NoSmoke_C");

	return Clss;
}


// BodyPawn_CartmanBuddy_NoSmoke_C BodyPawn_CartmanBuddy_NoSmoke.Default__BodyPawn_CartmanBuddy_NoSmoke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawn_CartmanBuddy_NoSmoke_C* ABodyPawn_CartmanBuddy_NoSmoke_C::GetDefaultObj()
{
	static class ABodyPawn_CartmanBuddy_NoSmoke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawn_CartmanBuddy_NoSmoke_C*>(ABodyPawn_CartmanBuddy_NoSmoke_C::StaticClass()->DefaultObject);

	return Default;
}

}


