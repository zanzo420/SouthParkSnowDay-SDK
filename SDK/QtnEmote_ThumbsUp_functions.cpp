#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_ThumbsUp.QtnEmote_ThumbsUp_C
// (None)

class UClass* UQtnEmote_ThumbsUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_ThumbsUp_C");

	return Clss;
}


// QtnEmote_ThumbsUp_C QtnEmote_ThumbsUp.Default__QtnEmote_ThumbsUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_ThumbsUp_C* UQtnEmote_ThumbsUp_C::GetDefaultObj()
{
	static class UQtnEmote_ThumbsUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_ThumbsUp_C*>(UQtnEmote_ThumbsUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


