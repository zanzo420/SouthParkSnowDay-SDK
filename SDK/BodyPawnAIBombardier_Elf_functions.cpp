#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAIBombardier_Elf.BodyPawnAIBombardier_Elf_C
// (Actor, Pawn)

class UClass* ABodyPawnAIBombardier_Elf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAIBombardier_Elf_C");

	return Clss;
}


// BodyPawnAIBombardier_Elf_C BodyPawnAIBombardier_Elf.Default__BodyPawnAIBombardier_Elf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAIBombardier_Elf_C* ABodyPawnAIBombardier_Elf_C::GetDefaultObj()
{
	static class ABodyPawnAIBombardier_Elf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAIBombardier_Elf_C*>(ABodyPawnAIBombardier_Elf_C::StaticClass()->DefaultObject);

	return Default;
}

}


