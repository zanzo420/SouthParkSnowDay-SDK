#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DevCheatNukeDamageDONOTUSE.DevCheatNukeDamageDONOTUSE_C
// (None)

class UClass* UDevCheatNukeDamageDONOTUSE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DevCheatNukeDamageDONOTUSE_C");

	return Clss;
}


// DevCheatNukeDamageDONOTUSE_C DevCheatNukeDamageDONOTUSE.Default__DevCheatNukeDamageDONOTUSE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevCheatNukeDamageDONOTUSE_C* UDevCheatNukeDamageDONOTUSE_C::GetDefaultObj()
{
	static class UDevCheatNukeDamageDONOTUSE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevCheatNukeDamageDONOTUSE_C*>(UDevCheatNukeDamageDONOTUSE_C::StaticClass()->DefaultObject);

	return Default;
}

}


