#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Peanuts5b.QtnEmote_Peanuts5b_C
// (None)

class UClass* UQtnEmote_Peanuts5b_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Peanuts5b_C");

	return Clss;
}


// QtnEmote_Peanuts5b_C QtnEmote_Peanuts5b.Default__QtnEmote_Peanuts5b_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Peanuts5b_C* UQtnEmote_Peanuts5b_C::GetDefaultObj()
{
	static class UQtnEmote_Peanuts5b_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Peanuts5b_C*>(UQtnEmote_Peanuts5b_C::StaticClass()->DefaultObject);

	return Default;
}

}


