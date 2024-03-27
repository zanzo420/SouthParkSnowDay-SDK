#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_CongaRootMotion.QtnEmote_CongaRootMotion_C
// (None)

class UClass* UQtnEmote_CongaRootMotion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_CongaRootMotion_C");

	return Clss;
}


// QtnEmote_CongaRootMotion_C QtnEmote_CongaRootMotion.Default__QtnEmote_CongaRootMotion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_CongaRootMotion_C* UQtnEmote_CongaRootMotion_C::GetDefaultObj()
{
	static class UQtnEmote_CongaRootMotion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_CongaRootMotion_C*>(UQtnEmote_CongaRootMotion_C::StaticClass()->DefaultObject);

	return Default;
}

}


