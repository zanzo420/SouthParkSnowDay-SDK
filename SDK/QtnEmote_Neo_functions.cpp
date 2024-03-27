#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Neo.QtnEmote_Neo_C
// (None)

class UClass* UQtnEmote_Neo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Neo_C");

	return Clss;
}


// QtnEmote_Neo_C QtnEmote_Neo.Default__QtnEmote_Neo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Neo_C* UQtnEmote_Neo_C::GetDefaultObj()
{
	static class UQtnEmote_Neo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Neo_C*>(UQtnEmote_Neo_C::StaticClass()->DefaultObject);

	return Default;
}

}


