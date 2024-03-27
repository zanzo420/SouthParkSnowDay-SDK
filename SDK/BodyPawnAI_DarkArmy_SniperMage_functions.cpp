#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAI_DarkArmy_SniperMage.BodyPawnAI_DarkArmy_SniperMage_C
// (Actor, Pawn)

class UClass* ABodyPawnAI_DarkArmy_SniperMage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAI_DarkArmy_SniperMage_C");

	return Clss;
}


// BodyPawnAI_DarkArmy_SniperMage_C BodyPawnAI_DarkArmy_SniperMage.Default__BodyPawnAI_DarkArmy_SniperMage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAI_DarkArmy_SniperMage_C* ABodyPawnAI_DarkArmy_SniperMage_C::GetDefaultObj()
{
	static class ABodyPawnAI_DarkArmy_SniperMage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAI_DarkArmy_SniperMage_C*>(ABodyPawnAI_DarkArmy_SniperMage_C::StaticClass()->DefaultObject);

	return Default;
}

}


