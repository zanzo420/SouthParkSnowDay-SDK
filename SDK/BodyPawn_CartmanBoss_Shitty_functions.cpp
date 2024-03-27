#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawn_CartmanBoss_Shitty.BodyPawn_CartmanBoss_Shitty_C
// (Actor, Pawn)

class UClass* ABodyPawn_CartmanBoss_Shitty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawn_CartmanBoss_Shitty_C");

	return Clss;
}


// BodyPawn_CartmanBoss_Shitty_C BodyPawn_CartmanBoss_Shitty.Default__BodyPawn_CartmanBoss_Shitty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawn_CartmanBoss_Shitty_C* ABodyPawn_CartmanBoss_Shitty_C::GetDefaultObj()
{
	static class ABodyPawn_CartmanBoss_Shitty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawn_CartmanBoss_Shitty_C*>(ABodyPawn_CartmanBoss_Shitty_C::StaticClass()->DefaultObject);

	return Default;
}

}


