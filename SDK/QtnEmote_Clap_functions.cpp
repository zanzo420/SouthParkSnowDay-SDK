#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Clap.QtnEmote_Clap_C
// (None)

class UClass* UQtnEmote_Clap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Clap_C");

	return Clss;
}


// QtnEmote_Clap_C QtnEmote_Clap.Default__QtnEmote_Clap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Clap_C* UQtnEmote_Clap_C::GetDefaultObj()
{
	static class UQtnEmote_Clap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Clap_C*>(UQtnEmote_Clap_C::StaticClass()->DefaultObject);

	return Default;
}

}


