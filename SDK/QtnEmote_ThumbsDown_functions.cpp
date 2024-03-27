#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_ThumbsDown.QtnEmote_ThumbsDown_C
// (None)

class UClass* UQtnEmote_ThumbsDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_ThumbsDown_C");

	return Clss;
}


// QtnEmote_ThumbsDown_C QtnEmote_ThumbsDown.Default__QtnEmote_ThumbsDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_ThumbsDown_C* UQtnEmote_ThumbsDown_C::GetDefaultObj()
{
	static class UQtnEmote_ThumbsDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_ThumbsDown_C*>(UQtnEmote_ThumbsDown_C::StaticClass()->DefaultObject);

	return Default;
}

}


