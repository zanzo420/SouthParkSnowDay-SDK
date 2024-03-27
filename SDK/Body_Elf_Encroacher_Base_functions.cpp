#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_Elf_Encroacher_Base.Body_Elf_Encroacher_Base_C
// (None)

class UClass* UBody_Elf_Encroacher_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_Elf_Encroacher_Base_C");

	return Clss;
}


// Body_Elf_Encroacher_Base_C Body_Elf_Encroacher_Base.Default__Body_Elf_Encroacher_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_Elf_Encroacher_Base_C* UBody_Elf_Encroacher_Base_C::GetDefaultObj()
{
	static class UBody_Elf_Encroacher_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_Elf_Encroacher_Base_C*>(UBody_Elf_Encroacher_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


