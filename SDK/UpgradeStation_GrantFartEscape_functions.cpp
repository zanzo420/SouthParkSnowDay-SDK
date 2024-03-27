#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UpgradeStation_GrantFartEscape.UpgradeStation_GrantFartEscape_C
// (Actor)

class UClass* AUpgradeStation_GrantFartEscape_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpgradeStation_GrantFartEscape_C");

	return Clss;
}


// UpgradeStation_GrantFartEscape_C UpgradeStation_GrantFartEscape.Default__UpgradeStation_GrantFartEscape_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUpgradeStation_GrantFartEscape_C* AUpgradeStation_GrantFartEscape_C::GetDefaultObj()
{
	static class AUpgradeStation_GrantFartEscape_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUpgradeStation_GrantFartEscape_C*>(AUpgradeStation_GrantFartEscape_C::StaticClass()->DefaultObject);

	return Default;
}

}


