#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DevCheatSlapDamageDONOTUSE.DevCheatSlapDamageDONOTUSE_C
// (None)

class UClass* UDevCheatSlapDamageDONOTUSE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DevCheatSlapDamageDONOTUSE_C");

	return Clss;
}


// DevCheatSlapDamageDONOTUSE_C DevCheatSlapDamageDONOTUSE.Default__DevCheatSlapDamageDONOTUSE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevCheatSlapDamageDONOTUSE_C* UDevCheatSlapDamageDONOTUSE_C::GetDefaultObj()
{
	static class UDevCheatSlapDamageDONOTUSE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevCheatSlapDamageDONOTUSE_C*>(UDevCheatSlapDamageDONOTUSE_C::StaticClass()->DefaultObject);

	return Default;
}

}


