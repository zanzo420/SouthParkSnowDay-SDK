#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerBSIntro_FX.PlayerBSIntro_FX_C
// (Actor)

class UClass* APlayerBSIntro_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerBSIntro_FX_C");

	return Clss;
}


// PlayerBSIntro_FX_C PlayerBSIntro_FX.Default__PlayerBSIntro_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerBSIntro_FX_C* APlayerBSIntro_FX_C::GetDefaultObj()
{
	static class APlayerBSIntro_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerBSIntro_FX_C*>(APlayerBSIntro_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


