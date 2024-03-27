#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_FacePalm.QtnEmote_FacePalm_C
// (None)

class UClass* UQtnEmote_FacePalm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_FacePalm_C");

	return Clss;
}


// QtnEmote_FacePalm_C QtnEmote_FacePalm.Default__QtnEmote_FacePalm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_FacePalm_C* UQtnEmote_FacePalm_C::GetDefaultObj()
{
	static class UQtnEmote_FacePalm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_FacePalm_C*>(UQtnEmote_FacePalm_C::StaticClass()->DefaultObject);

	return Default;
}

}


