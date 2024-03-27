#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChainLightningBomb_FX.ChainLightningBomb_FX_C
// (Actor)

class UClass* AChainLightningBomb_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChainLightningBomb_FX_C");

	return Clss;
}


// ChainLightningBomb_FX_C ChainLightningBomb_FX.Default__ChainLightningBomb_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChainLightningBomb_FX_C* AChainLightningBomb_FX_C::GetDefaultObj()
{
	static class AChainLightningBomb_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChainLightningBomb_FX_C*>(AChainLightningBomb_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


