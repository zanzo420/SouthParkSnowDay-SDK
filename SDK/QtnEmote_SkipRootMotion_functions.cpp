#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_SkipRootMotion.QtnEmote_SkipRootMotion_C
// (None)

class UClass* UQtnEmote_SkipRootMotion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_SkipRootMotion_C");

	return Clss;
}


// QtnEmote_SkipRootMotion_C QtnEmote_SkipRootMotion.Default__QtnEmote_SkipRootMotion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_SkipRootMotion_C* UQtnEmote_SkipRootMotion_C::GetDefaultObj()
{
	static class UQtnEmote_SkipRootMotion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_SkipRootMotion_C*>(UQtnEmote_SkipRootMotion_C::StaticClass()->DefaultObject);

	return Default;
}

}


