#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_YesYes.QtnEmote_YesYes_C
// (None)

class UClass* UQtnEmote_YesYes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_YesYes_C");

	return Clss;
}


// QtnEmote_YesYes_C QtnEmote_YesYes.Default__QtnEmote_YesYes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_YesYes_C* UQtnEmote_YesYes_C::GetDefaultObj()
{
	static class UQtnEmote_YesYes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_YesYes_C*>(UQtnEmote_YesYes_C::StaticClass()->DefaultObject);

	return Default;
}

}


