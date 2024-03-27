#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KennyBombExplosion_FX.KennyBombExplosion_FX_C
// (Actor)

class UClass* AKennyBombExplosion_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KennyBombExplosion_FX_C");

	return Clss;
}


// KennyBombExplosion_FX_C KennyBombExplosion_FX.Default__KennyBombExplosion_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKennyBombExplosion_FX_C* AKennyBombExplosion_FX_C::GetDefaultObj()
{
	static class AKennyBombExplosion_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKennyBombExplosion_FX_C*>(AKennyBombExplosion_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


