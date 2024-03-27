#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BombardierWeapon_Elf.BombardierWeapon_Elf_C
// (Actor)

class UClass* ABombardierWeapon_Elf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BombardierWeapon_Elf_C");

	return Clss;
}


// BombardierWeapon_Elf_C BombardierWeapon_Elf.Default__BombardierWeapon_Elf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABombardierWeapon_Elf_C* ABombardierWeapon_Elf_C::GetDefaultObj()
{
	static class ABombardierWeapon_Elf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABombardierWeapon_Elf_C*>(ABombardierWeapon_Elf_C::StaticClass()->DefaultObject);

	return Default;
}

}


