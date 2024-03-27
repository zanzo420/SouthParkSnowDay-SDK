#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_Cowboy.QtnEmote_Cowboy_C
// (None)

class UClass* UQtnEmote_Cowboy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_Cowboy_C");

	return Clss;
}


// QtnEmote_Cowboy_C QtnEmote_Cowboy.Default__QtnEmote_Cowboy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_Cowboy_C* UQtnEmote_Cowboy_C::GetDefaultObj()
{
	static class UQtnEmote_Cowboy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_Cowboy_C*>(UQtnEmote_Cowboy_C::StaticClass()->DefaultObject);

	return Default;
}

}


