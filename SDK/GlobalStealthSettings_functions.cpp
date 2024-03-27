#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GlobalStealthSettings.GlobalStealthSettings_C
// (None)

class UClass* UGlobalStealthSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalStealthSettings_C");

	return Clss;
}


// GlobalStealthSettings_C GlobalStealthSettings.Default__GlobalStealthSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGlobalStealthSettings_C* UGlobalStealthSettings_C::GetDefaultObj()
{
	static class UGlobalStealthSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalStealthSettings_C*>(UGlobalStealthSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


