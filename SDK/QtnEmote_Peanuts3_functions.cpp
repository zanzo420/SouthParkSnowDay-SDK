#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Peanuts3.QtnEmote_Peanuts3_C
// (None)

class UClass* UQtnEmote_Peanuts3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Peanuts3_C");

	return Clss;
}


// QtnEmote_Peanuts3_C QtnEmote_Peanuts3.Default__QtnEmote_Peanuts3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Peanuts3_C* UQtnEmote_Peanuts3_C::GetDefaultObj()
{
	static class UQtnEmote_Peanuts3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Peanuts3_C*>(UQtnEmote_Peanuts3_C::StaticClass()->DefaultObject);

	return Default;
}

}


