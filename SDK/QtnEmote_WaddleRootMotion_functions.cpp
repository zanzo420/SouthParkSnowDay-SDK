#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_WaddleRootMotion.QtnEmote_WaddleRootMotion_C
// (None)

class UClass* UQtnEmote_WaddleRootMotion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_WaddleRootMotion_C");

	return Clss;
}


// QtnEmote_WaddleRootMotion_C QtnEmote_WaddleRootMotion.Default__QtnEmote_WaddleRootMotion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_WaddleRootMotion_C* UQtnEmote_WaddleRootMotion_C::GetDefaultObj()
{
	static class UQtnEmote_WaddleRootMotion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_WaddleRootMotion_C*>(UQtnEmote_WaddleRootMotion_C::StaticClass()->DefaultObject);

	return Default;
}

}


