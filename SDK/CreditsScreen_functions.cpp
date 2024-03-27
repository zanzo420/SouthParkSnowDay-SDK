#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CreditsScreen.CreditsScreen_C
// (None)

class UClass* UCreditsScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreditsScreen_C");

	return Clss;
}


// CreditsScreen_C CreditsScreen.Default__CreditsScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreditsScreen_C* UCreditsScreen_C::GetDefaultObj()
{
	static class UCreditsScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreditsScreen_C*>(UCreditsScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


