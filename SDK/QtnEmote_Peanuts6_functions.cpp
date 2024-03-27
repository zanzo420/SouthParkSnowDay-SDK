#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Peanuts6.QtnEmote_Peanuts6_C
// (None)

class UClass* UQtnEmote_Peanuts6_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Peanuts6_C");

	return Clss;
}


// QtnEmote_Peanuts6_C QtnEmote_Peanuts6.Default__QtnEmote_Peanuts6_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Peanuts6_C* UQtnEmote_Peanuts6_C::GetDefaultObj()
{
	static class UQtnEmote_Peanuts6_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Peanuts6_C*>(UQtnEmote_Peanuts6_C::StaticClass()->DefaultObject);

	return Default;
}

}


