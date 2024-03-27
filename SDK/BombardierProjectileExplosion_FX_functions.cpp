#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BombardierProjectileExplosion_FX.BombardierProjectileExplosion_FX_C
// (Actor)

class UClass* ABombardierProjectileExplosion_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BombardierProjectileExplosion_FX_C");

	return Clss;
}


// BombardierProjectileExplosion_FX_C BombardierProjectileExplosion_FX.Default__BombardierProjectileExplosion_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABombardierProjectileExplosion_FX_C* ABombardierProjectileExplosion_FX_C::GetDefaultObj()
{
	static class ABombardierProjectileExplosion_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABombardierProjectileExplosion_FX_C*>(ABombardierProjectileExplosion_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


