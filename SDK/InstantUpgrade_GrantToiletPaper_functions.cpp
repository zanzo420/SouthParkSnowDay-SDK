#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InstantUpgrade_GrantToiletPaper.InstantUpgrade_GrantToiletPaper_C
// (None)

class UClass* UInstantUpgrade_GrantToiletPaper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstantUpgrade_GrantToiletPaper_C");

	return Clss;
}


// InstantUpgrade_GrantToiletPaper_C InstantUpgrade_GrantToiletPaper.Default__InstantUpgrade_GrantToiletPaper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstantUpgrade_GrantToiletPaper_C* UInstantUpgrade_GrantToiletPaper_C::GetDefaultObj()
{
	static class UInstantUpgrade_GrantToiletPaper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstantUpgrade_GrantToiletPaper_C*>(UInstantUpgrade_GrantToiletPaper_C::StaticClass()->DefaultObject);

	return Default;
}

}


