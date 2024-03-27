#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlockImpactShake.BlockImpactShake_C
// (None)

class UClass* UBlockImpactShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlockImpactShake_C");

	return Clss;
}


// BlockImpactShake_C BlockImpactShake.Default__BlockImpactShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlockImpactShake_C* UBlockImpactShake_C::GetDefaultObj()
{
	static class UBlockImpactShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlockImpactShake_C*>(UBlockImpactShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


