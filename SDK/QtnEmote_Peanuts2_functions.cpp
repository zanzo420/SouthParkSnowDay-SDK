#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Peanuts2.QtnEmote_Peanuts2_C
// (None)

class UClass* UQtnEmote_Peanuts2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Peanuts2_C");

	return Clss;
}


// QtnEmote_Peanuts2_C QtnEmote_Peanuts2.Default__QtnEmote_Peanuts2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Peanuts2_C* UQtnEmote_Peanuts2_C::GetDefaultObj()
{
	static class UQtnEmote_Peanuts2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Peanuts2_C*>(UQtnEmote_Peanuts2_C::StaticClass()->DefaultObject);

	return Default;
}

}


