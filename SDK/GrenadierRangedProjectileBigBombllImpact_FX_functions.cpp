#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrenadierRangedProjectileBigBombllImpact_FX.GrenadierRangedProjectileBigBombllImpact_FX_C
// (Actor)

class UClass* AGrenadierRangedProjectileBigBombllImpact_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrenadierRangedProjectileBigBombllImpact_FX_C");

	return Clss;
}


// GrenadierRangedProjectileBigBombllImpact_FX_C GrenadierRangedProjectileBigBombllImpact_FX.Default__GrenadierRangedProjectileBigBombllImpact_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrenadierRangedProjectileBigBombllImpact_FX_C* AGrenadierRangedProjectileBigBombllImpact_FX_C::GetDefaultObj()
{
	static class AGrenadierRangedProjectileBigBombllImpact_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrenadierRangedProjectileBigBombllImpact_FX_C*>(AGrenadierRangedProjectileBigBombllImpact_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


