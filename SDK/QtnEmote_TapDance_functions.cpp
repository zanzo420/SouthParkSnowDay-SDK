#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_TapDance.QtnEmote_TapDance_C
// (None)

class UClass* UQtnEmote_TapDance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_TapDance_C");

	return Clss;
}


// QtnEmote_TapDance_C QtnEmote_TapDance.Default__QtnEmote_TapDance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_TapDance_C* UQtnEmote_TapDance_C::GetDefaultObj()
{
	static class UQtnEmote_TapDance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_TapDance_C*>(UQtnEmote_TapDance_C::StaticClass()->DefaultObject);

	return Default;
}

}


