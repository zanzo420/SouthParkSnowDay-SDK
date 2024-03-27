#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_DoubleDukes.QtnEmote_DoubleDukes_C
// (None)

class UClass* UQtnEmote_DoubleDukes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_DoubleDukes_C");

	return Clss;
}


// QtnEmote_DoubleDukes_C QtnEmote_DoubleDukes.Default__QtnEmote_DoubleDukes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_DoubleDukes_C* UQtnEmote_DoubleDukes_C::GetDefaultObj()
{
	static class UQtnEmote_DoubleDukes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_DoubleDukes_C*>(UQtnEmote_DoubleDukes_C::StaticClass()->DefaultObject);

	return Default;
}

}


