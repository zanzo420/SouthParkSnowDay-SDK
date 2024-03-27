#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Peanuts3b.QtnEmote_Peanuts3b_C
// (None)

class UClass* UQtnEmote_Peanuts3b_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Peanuts3b_C");

	return Clss;
}


// QtnEmote_Peanuts3b_C QtnEmote_Peanuts3b.Default__QtnEmote_Peanuts3b_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Peanuts3b_C* UQtnEmote_Peanuts3b_C::GetDefaultObj()
{
	static class UQtnEmote_Peanuts3b_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Peanuts3b_C*>(UQtnEmote_Peanuts3b_C::StaticClass()->DefaultObject);

	return Default;
}

}


