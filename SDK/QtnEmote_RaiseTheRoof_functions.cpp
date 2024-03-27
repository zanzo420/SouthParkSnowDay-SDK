#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_RaiseTheRoof.QtnEmote_RaiseTheRoof_C
// (None)

class UClass* UQtnEmote_RaiseTheRoof_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_RaiseTheRoof_C");

	return Clss;
}


// QtnEmote_RaiseTheRoof_C QtnEmote_RaiseTheRoof.Default__QtnEmote_RaiseTheRoof_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_RaiseTheRoof_C* UQtnEmote_RaiseTheRoof_C::GetDefaultObj()
{
	static class UQtnEmote_RaiseTheRoof_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_RaiseTheRoof_C*>(UQtnEmote_RaiseTheRoof_C::StaticClass()->DefaultObject);

	return Default;
}

}


