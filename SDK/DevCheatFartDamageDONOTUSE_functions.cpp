#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DevCheatFartDamageDONOTUSE.DevCheatFartDamageDONOTUSE_C
// (None)

class UClass* UDevCheatFartDamageDONOTUSE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DevCheatFartDamageDONOTUSE_C");

	return Clss;
}


// DevCheatFartDamageDONOTUSE_C DevCheatFartDamageDONOTUSE.Default__DevCheatFartDamageDONOTUSE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevCheatFartDamageDONOTUSE_C* UDevCheatFartDamageDONOTUSE_C::GetDefaultObj()
{
	static class UDevCheatFartDamageDONOTUSE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevCheatFartDamageDONOTUSE_C*>(UDevCheatFartDamageDONOTUSE_C::StaticClass()->DefaultObject);

	return Default;
}

}


