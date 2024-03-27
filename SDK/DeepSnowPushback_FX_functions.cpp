#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DeepSnowPushback_FX.DeepSnowPushback_FX_C
// (Actor)

class UClass* ADeepSnowPushback_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeepSnowPushback_FX_C");

	return Clss;
}


// DeepSnowPushback_FX_C DeepSnowPushback_FX.Default__DeepSnowPushback_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADeepSnowPushback_FX_C* ADeepSnowPushback_FX_C::GetDefaultObj()
{
	static class ADeepSnowPushback_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADeepSnowPushback_FX_C*>(ADeepSnowPushback_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


