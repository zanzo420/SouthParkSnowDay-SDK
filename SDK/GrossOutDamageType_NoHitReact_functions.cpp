#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrossOutDamageType_NoHitReact.GrossOutDamageType_NoHitReact_C
// (None)

class UClass* UGrossOutDamageType_NoHitReact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrossOutDamageType_NoHitReact_C");

	return Clss;
}


// GrossOutDamageType_NoHitReact_C GrossOutDamageType_NoHitReact.Default__GrossOutDamageType_NoHitReact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrossOutDamageType_NoHitReact_C* UGrossOutDamageType_NoHitReact_C::GetDefaultObj()
{
	static class UGrossOutDamageType_NoHitReact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrossOutDamageType_NoHitReact_C*>(UGrossOutDamageType_NoHitReact_C::StaticClass()->DefaultObject);

	return Default;
}

}


