#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Dab.QtnEmote_Dab_C
// (None)

class UClass* UQtnEmote_Dab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Dab_C");

	return Clss;
}


// QtnEmote_Dab_C QtnEmote_Dab.Default__QtnEmote_Dab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Dab_C* UQtnEmote_Dab_C::GetDefaultObj()
{
	static class UQtnEmote_Dab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Dab_C*>(UQtnEmote_Dab_C::StaticClass()->DefaultObject);

	return Default;
}

}


