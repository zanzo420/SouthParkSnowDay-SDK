#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAISwarmer_Elf.BodyPawnAISwarmer_Elf_C
// (Actor, Pawn)

class UClass* ABodyPawnAISwarmer_Elf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAISwarmer_Elf_C");

	return Clss;
}


// BodyPawnAISwarmer_Elf_C BodyPawnAISwarmer_Elf.Default__BodyPawnAISwarmer_Elf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAISwarmer_Elf_C* ABodyPawnAISwarmer_Elf_C::GetDefaultObj()
{
	static class ABodyPawnAISwarmer_Elf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAISwarmer_Elf_C*>(ABodyPawnAISwarmer_Elf_C::StaticClass()->DefaultObject);

	return Default;
}

}


