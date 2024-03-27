#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SubtitleScreen.SubtitleScreen_C
// (None)

class UClass* USubtitleScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubtitleScreen_C");

	return Clss;
}


// SubtitleScreen_C SubtitleScreen.Default__SubtitleScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubtitleScreen_C* USubtitleScreen_C::GetDefaultObj()
{
	static class USubtitleScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitleScreen_C*>(USubtitleScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


