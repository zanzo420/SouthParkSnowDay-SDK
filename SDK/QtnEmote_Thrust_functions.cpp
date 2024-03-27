#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Thrust.QtnEmote_Thrust_C
// (None)

class UClass* UQtnEmote_Thrust_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Thrust_C");

	return Clss;
}


// QtnEmote_Thrust_C QtnEmote_Thrust.Default__QtnEmote_Thrust_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Thrust_C* UQtnEmote_Thrust_C::GetDefaultObj()
{
	static class UQtnEmote_Thrust_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Thrust_C*>(UQtnEmote_Thrust_C::StaticClass()->DefaultObject);

	return Default;
}

}


