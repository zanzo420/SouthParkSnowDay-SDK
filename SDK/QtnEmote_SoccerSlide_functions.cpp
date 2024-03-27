#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_SoccerSlide.QtnEmote_SoccerSlide_C
// (None)

class UClass* UQtnEmote_SoccerSlide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_SoccerSlide_C");

	return Clss;
}


// QtnEmote_SoccerSlide_C QtnEmote_SoccerSlide.Default__QtnEmote_SoccerSlide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_SoccerSlide_C* UQtnEmote_SoccerSlide_C::GetDefaultObj()
{
	static class UQtnEmote_SoccerSlide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_SoccerSlide_C*>(UQtnEmote_SoccerSlide_C::StaticClass()->DefaultObject);

	return Default;
}

}


