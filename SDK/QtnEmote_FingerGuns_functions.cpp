#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_FingerGuns.QtnEmote_FingerGuns_C
// (None)

class UClass* UQtnEmote_FingerGuns_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_FingerGuns_C");

	return Clss;
}


// QtnEmote_FingerGuns_C QtnEmote_FingerGuns.Default__QtnEmote_FingerGuns_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_FingerGuns_C* UQtnEmote_FingerGuns_C::GetDefaultObj()
{
	static class UQtnEmote_FingerGuns_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_FingerGuns_C*>(UQtnEmote_FingerGuns_C::StaticClass()->DefaultObject);

	return Default;
}

}


