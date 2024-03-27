#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CombinedOptionsMenuScreen.CombinedOptionsMenuScreen_C
// (None)

class UClass* UCombinedOptionsMenuScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CombinedOptionsMenuScreen_C");

	return Clss;
}


// CombinedOptionsMenuScreen_C CombinedOptionsMenuScreen.Default__CombinedOptionsMenuScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCombinedOptionsMenuScreen_C* UCombinedOptionsMenuScreen_C::GetDefaultObj()
{
	static class UCombinedOptionsMenuScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCombinedOptionsMenuScreen_C*>(UCombinedOptionsMenuScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


