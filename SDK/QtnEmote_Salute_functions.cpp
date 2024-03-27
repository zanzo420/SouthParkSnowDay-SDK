#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Salute.QtnEmote_Salute_C
// (None)

class UClass* UQtnEmote_Salute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Salute_C");

	return Clss;
}


// QtnEmote_Salute_C QtnEmote_Salute.Default__QtnEmote_Salute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Salute_C* UQtnEmote_Salute_C::GetDefaultObj()
{
	static class UQtnEmote_Salute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Salute_C*>(UQtnEmote_Salute_C::StaticClass()->DefaultObject);

	return Default;
}

}


