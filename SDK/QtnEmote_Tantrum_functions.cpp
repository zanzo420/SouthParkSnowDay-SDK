#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Tantrum.QtnEmote_Tantrum_C
// (None)

class UClass* UQtnEmote_Tantrum_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Tantrum_C");

	return Clss;
}


// QtnEmote_Tantrum_C QtnEmote_Tantrum.Default__QtnEmote_Tantrum_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Tantrum_C* UQtnEmote_Tantrum_C::GetDefaultObj()
{
	static class UQtnEmote_Tantrum_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Tantrum_C*>(UQtnEmote_Tantrum_C::StaticClass()->DefaultObject);

	return Default;
}

}


