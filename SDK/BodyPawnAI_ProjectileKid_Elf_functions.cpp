#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAI_ProjectileKid_Elf.BodyPawnAI_ProjectileKid_Elf_C
// (Actor, Pawn)

class UClass* ABodyPawnAI_ProjectileKid_Elf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAI_ProjectileKid_Elf_C");

	return Clss;
}


// BodyPawnAI_ProjectileKid_Elf_C BodyPawnAI_ProjectileKid_Elf.Default__BodyPawnAI_ProjectileKid_Elf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAI_ProjectileKid_Elf_C* ABodyPawnAI_ProjectileKid_Elf_C::GetDefaultObj()
{
	static class ABodyPawnAI_ProjectileKid_Elf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAI_ProjectileKid_Elf_C*>(ABodyPawnAI_ProjectileKid_Elf_C::StaticClass()->DefaultObject);

	return Default;
}

}


