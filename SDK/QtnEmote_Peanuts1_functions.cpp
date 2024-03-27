#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Peanuts1.QtnEmote_Peanuts1_C
// (None)

class UClass* UQtnEmote_Peanuts1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Peanuts1_C");

	return Clss;
}


// QtnEmote_Peanuts1_C QtnEmote_Peanuts1.Default__QtnEmote_Peanuts1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Peanuts1_C* UQtnEmote_Peanuts1_C::GetDefaultObj()
{
	static class UQtnEmote_Peanuts1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Peanuts1_C*>(UQtnEmote_Peanuts1_C::StaticClass()->DefaultObject);

	return Default;
}

}


