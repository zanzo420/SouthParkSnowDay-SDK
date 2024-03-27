#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SwarmerDagger_Elf.SwarmerDagger_Elf_C
// (Actor)

class UClass* ASwarmerDagger_Elf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwarmerDagger_Elf_C");

	return Clss;
}


// SwarmerDagger_Elf_C SwarmerDagger_Elf.Default__SwarmerDagger_Elf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASwarmerDagger_Elf_C* ASwarmerDagger_Elf_C::GetDefaultObj()
{
	static class ASwarmerDagger_Elf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASwarmerDagger_Elf_C*>(ASwarmerDagger_Elf_C::StaticClass()->DefaultObject);

	return Default;
}

}


