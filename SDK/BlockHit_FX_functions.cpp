#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlockHit_FX.BlockHit_FX_C
// (Actor)

class UClass* ABlockHit_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlockHit_FX_C");

	return Clss;
}


// BlockHit_FX_C BlockHit_FX.Default__BlockHit_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlockHit_FX_C* ABlockHit_FX_C::GetDefaultObj()
{
	static class ABlockHit_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlockHit_FX_C*>(ABlockHit_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


