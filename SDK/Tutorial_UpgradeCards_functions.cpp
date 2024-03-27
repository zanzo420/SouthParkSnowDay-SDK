#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tutorial_UpgradeCards.Tutorial_UpgradeCards_C
// (None)

class UClass* UTutorial_UpgradeCards_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tutorial_UpgradeCards_C");

	return Clss;
}


// Tutorial_UpgradeCards_C Tutorial_UpgradeCards.Default__Tutorial_UpgradeCards_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTutorial_UpgradeCards_C* UTutorial_UpgradeCards_C::GetDefaultObj()
{
	static class UTutorial_UpgradeCards_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorial_UpgradeCards_C*>(UTutorial_UpgradeCards_C::StaticClass()->DefaultObject);

	return Default;
}

}


