#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShockwaveEnemy_WSnow_FX.ShockwaveEnemy_WSnow_FX_C
// (Actor)

class UClass* AShockwaveEnemy_WSnow_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShockwaveEnemy_WSnow_FX_C");

	return Clss;
}


// ShockwaveEnemy_WSnow_FX_C ShockwaveEnemy_WSnow_FX.Default__ShockwaveEnemy_WSnow_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShockwaveEnemy_WSnow_FX_C* AShockwaveEnemy_WSnow_FX_C::GetDefaultObj()
{
	static class AShockwaveEnemy_WSnow_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShockwaveEnemy_WSnow_FX_C*>(AShockwaveEnemy_WSnow_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


