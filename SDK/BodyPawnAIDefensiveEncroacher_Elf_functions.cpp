#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAIDefensiveEncroacher_Elf.BodyPawnAIDefensiveEncroacher_Elf_C
// (Actor, Pawn)

class UClass* ABodyPawnAIDefensiveEncroacher_Elf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAIDefensiveEncroacher_Elf_C");

	return Clss;
}


// BodyPawnAIDefensiveEncroacher_Elf_C BodyPawnAIDefensiveEncroacher_Elf.Default__BodyPawnAIDefensiveEncroacher_Elf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAIDefensiveEncroacher_Elf_C* ABodyPawnAIDefensiveEncroacher_Elf_C::GetDefaultObj()
{
	static class ABodyPawnAIDefensiveEncroacher_Elf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAIDefensiveEncroacher_Elf_C*>(ABodyPawnAIDefensiveEncroacher_Elf_C::StaticClass()->DefaultObject);

	return Default;
}

}


