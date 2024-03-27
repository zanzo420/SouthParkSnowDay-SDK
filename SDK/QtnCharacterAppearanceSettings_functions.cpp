#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnCharacterAppearanceSettings.QtnCharacterAppearanceSettings_C
// (None)

class UClass* UQtnCharacterAppearanceSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnCharacterAppearanceSettings_C");

	return Clss;
}


// QtnCharacterAppearanceSettings_C QtnCharacterAppearanceSettings.Default__QtnCharacterAppearanceSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnCharacterAppearanceSettings_C* UQtnCharacterAppearanceSettings_C::GetDefaultObj()
{
	static class UQtnCharacterAppearanceSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnCharacterAppearanceSettings_C*>(UQtnCharacterAppearanceSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


