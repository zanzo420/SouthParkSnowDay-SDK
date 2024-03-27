#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WildMagicShard_FX.WildMagicShard_FX_C
// (Actor)

class UClass* AWildMagicShard_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WildMagicShard_FX_C");

	return Clss;
}


// WildMagicShard_FX_C WildMagicShard_FX.Default__WildMagicShard_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWildMagicShard_FX_C* AWildMagicShard_FX_C::GetDefaultObj()
{
	static class AWildMagicShard_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWildMagicShard_FX_C*>(AWildMagicShard_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


