#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAI_ProjectileKid_Marshwalker.BodyPawnAI_ProjectileKid_Marshwalker_C
// (Actor, Pawn)

class UClass* ABodyPawnAI_ProjectileKid_Marshwalker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAI_ProjectileKid_Marshwalker_C");

	return Clss;
}


// BodyPawnAI_ProjectileKid_Marshwalker_C BodyPawnAI_ProjectileKid_Marshwalker.Default__BodyPawnAI_ProjectileKid_Marshwalker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAI_ProjectileKid_Marshwalker_C* ABodyPawnAI_ProjectileKid_Marshwalker_C::GetDefaultObj()
{
	static class ABodyPawnAI_ProjectileKid_Marshwalker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAI_ProjectileKid_Marshwalker_C*>(ABodyPawnAI_ProjectileKid_Marshwalker_C::StaticClass()->DefaultObject);

	return Default;
}

}


