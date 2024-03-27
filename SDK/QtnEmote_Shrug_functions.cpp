#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Shrug.QtnEmote_Shrug_C
// (None)

class UClass* UQtnEmote_Shrug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Shrug_C");

	return Clss;
}


// QtnEmote_Shrug_C QtnEmote_Shrug.Default__QtnEmote_Shrug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Shrug_C* UQtnEmote_Shrug_C::GetDefaultObj()
{
	static class UQtnEmote_Shrug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Shrug_C*>(UQtnEmote_Shrug_C::StaticClass()->DefaultObject);

	return Default;
}

}


