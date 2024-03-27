#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_RChaff_Elf_Base.Body_RChaff_Elf_Base_C
// (None)

class UClass* UBody_RChaff_Elf_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_RChaff_Elf_Base_C");

	return Clss;
}


// Body_RChaff_Elf_Base_C Body_RChaff_Elf_Base.Default__Body_RChaff_Elf_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_RChaff_Elf_Base_C* UBody_RChaff_Elf_Base_C::GetDefaultObj()
{
	static class UBody_RChaff_Elf_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_RChaff_Elf_Base_C*>(UBody_RChaff_Elf_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


