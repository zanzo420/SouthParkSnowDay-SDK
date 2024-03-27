#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnAISystemSettingsArchetype.QtnAISystemSettingsArchetype_C
// (None)

class UClass* UQtnAISystemSettingsArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnAISystemSettingsArchetype_C");

	return Clss;
}


// QtnAISystemSettingsArchetype_C QtnAISystemSettingsArchetype.Default__QtnAISystemSettingsArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnAISystemSettingsArchetype_C* UQtnAISystemSettingsArchetype_C::GetDefaultObj()
{
	static class UQtnAISystemSettingsArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnAISystemSettingsArchetype_C*>(UQtnAISystemSettingsArchetype_C::StaticClass()->DefaultObject);

	return Default;
}

}


