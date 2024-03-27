#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TPGrant_FX.TPGrant_FX_C
// (Actor)

class UClass* ATPGrant_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TPGrant_FX_C");

	return Clss;
}


// TPGrant_FX_C TPGrant_FX.Default__TPGrant_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATPGrant_FX_C* ATPGrant_FX_C::GetDefaultObj()
{
	static class ATPGrant_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATPGrant_FX_C*>(ATPGrant_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


