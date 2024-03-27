#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_Cleric_Elf_Marshwalker_Base.Body_Cleric_Elf_Marshwalker_Base_C
// (None)

class UClass* UBody_Cleric_Elf_Marshwalker_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_Cleric_Elf_Marshwalker_Base_C");

	return Clss;
}


// Body_Cleric_Elf_Marshwalker_Base_C Body_Cleric_Elf_Marshwalker_Base.Default__Body_Cleric_Elf_Marshwalker_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_Cleric_Elf_Marshwalker_Base_C* UBody_Cleric_Elf_Marshwalker_Base_C::GetDefaultObj()
{
	static class UBody_Cleric_Elf_Marshwalker_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_Cleric_Elf_Marshwalker_Base_C*>(UBody_Cleric_Elf_Marshwalker_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


