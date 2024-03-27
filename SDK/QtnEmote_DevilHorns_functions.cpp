#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_DevilHorns.QtnEmote_DevilHorns_C
// (None)

class UClass* UQtnEmote_DevilHorns_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_DevilHorns_C");

	return Clss;
}


// QtnEmote_DevilHorns_C QtnEmote_DevilHorns.Default__QtnEmote_DevilHorns_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_DevilHorns_C* UQtnEmote_DevilHorns_C::GetDefaultObj()
{
	static class UQtnEmote_DevilHorns_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_DevilHorns_C*>(UQtnEmote_DevilHorns_C::StaticClass()->DefaultObject);

	return Default;
}

}


