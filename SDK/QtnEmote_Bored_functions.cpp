#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Bored.QtnEmote_Bored_C
// (None)

class UClass* UQtnEmote_Bored_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Bored_C");

	return Clss;
}


// QtnEmote_Bored_C QtnEmote_Bored.Default__QtnEmote_Bored_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Bored_C* UQtnEmote_Bored_C::GetDefaultObj()
{
	static class UQtnEmote_Bored_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Bored_C*>(UQtnEmote_Bored_C::StaticClass()->DefaultObject);

	return Default;
}

}


