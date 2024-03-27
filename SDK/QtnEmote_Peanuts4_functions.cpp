#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Peanuts4.QtnEmote_Peanuts4_C
// (None)

class UClass* UQtnEmote_Peanuts4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Peanuts4_C");

	return Clss;
}


// QtnEmote_Peanuts4_C QtnEmote_Peanuts4.Default__QtnEmote_Peanuts4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Peanuts4_C* UQtnEmote_Peanuts4_C::GetDefaultObj()
{
	static class UQtnEmote_Peanuts4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Peanuts4_C*>(UQtnEmote_Peanuts4_C::StaticClass()->DefaultObject);

	return Default;
}

}


