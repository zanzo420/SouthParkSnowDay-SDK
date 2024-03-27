#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChainLIghting_FX.ChainLIghting_FX_C
// (Actor)

class UClass* AChainLIghting_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChainLIghting_FX_C");

	return Clss;
}


// ChainLIghting_FX_C ChainLIghting_FX.Default__ChainLIghting_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChainLIghting_FX_C* AChainLIghting_FX_C::GetDefaultObj()
{
	static class AChainLIghting_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChainLIghting_FX_C*>(AChainLIghting_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


