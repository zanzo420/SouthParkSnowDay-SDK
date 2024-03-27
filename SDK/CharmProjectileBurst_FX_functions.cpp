#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharmProjectileBurst_FX.CharmProjectileBurst_FX_C
// (Actor)

class UClass* ACharmProjectileBurst_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharmProjectileBurst_FX_C");

	return Clss;
}


// CharmProjectileBurst_FX_C CharmProjectileBurst_FX.Default__CharmProjectileBurst_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACharmProjectileBurst_FX_C* ACharmProjectileBurst_FX_C::GetDefaultObj()
{
	static class ACharmProjectileBurst_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACharmProjectileBurst_FX_C*>(ACharmProjectileBurst_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


