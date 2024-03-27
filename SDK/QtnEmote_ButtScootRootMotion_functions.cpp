#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnEmote_ButtScootRootMotion.QtnEmote_ButtScootRootMotion_C
// (None)

class UClass* UQtnEmote_ButtScootRootMotion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnEmote_ButtScootRootMotion_C");

	return Clss;
}


// QtnEmote_ButtScootRootMotion_C QtnEmote_ButtScootRootMotion.Default__QtnEmote_ButtScootRootMotion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnEmote_ButtScootRootMotion_C* UQtnEmote_ButtScootRootMotion_C::GetDefaultObj()
{
	static class UQtnEmote_ButtScootRootMotion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnEmote_ButtScootRootMotion_C*>(UQtnEmote_ButtScootRootMotion_C::StaticClass()->DefaultObject);

	return Default;
}

}


