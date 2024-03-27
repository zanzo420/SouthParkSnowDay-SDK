#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAIRangedChaff_Elf.BodyPawnAIRangedChaff_Elf_C
// (Actor, Pawn)

class UClass* ABodyPawnAIRangedChaff_Elf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAIRangedChaff_Elf_C");

	return Clss;
}


// BodyPawnAIRangedChaff_Elf_C BodyPawnAIRangedChaff_Elf.Default__BodyPawnAIRangedChaff_Elf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAIRangedChaff_Elf_C* ABodyPawnAIRangedChaff_Elf_C::GetDefaultObj()
{
	static class ABodyPawnAIRangedChaff_Elf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAIRangedChaff_Elf_C*>(ABodyPawnAIRangedChaff_Elf_C::StaticClass()->DefaultObject);

	return Default;
}

}


