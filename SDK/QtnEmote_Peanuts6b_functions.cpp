#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Peanuts6b.QtnEmote_Peanuts6b_C
// (None)

class UClass* UQtnEmote_Peanuts6b_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Peanuts6b_C");

	return Clss;
}


// QtnEmote_Peanuts6b_C QtnEmote_Peanuts6b.Default__QtnEmote_Peanuts6b_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Peanuts6b_C* UQtnEmote_Peanuts6b_C::GetDefaultObj()
{
	static class UQtnEmote_Peanuts6b_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Peanuts6b_C*>(UQtnEmote_Peanuts6b_C::StaticClass()->DefaultObject);

	return Default;
}

}


