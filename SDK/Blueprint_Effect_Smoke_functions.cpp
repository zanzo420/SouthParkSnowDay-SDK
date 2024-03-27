#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Blueprint_Effect_Smoke.Blueprint_Effect_Smoke_C
// (Actor)

class UClass* ABlueprint_Effect_Smoke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Blueprint_Effect_Smoke_C");

	return Clss;
}


// Blueprint_Effect_Smoke_C Blueprint_Effect_Smoke.Default__Blueprint_Effect_Smoke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlueprint_Effect_Smoke_C* ABlueprint_Effect_Smoke_C::GetDefaultObj()
{
	static class ABlueprint_Effect_Smoke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlueprint_Effect_Smoke_C*>(ABlueprint_Effect_Smoke_C::StaticClass()->DefaultObject);

	return Default;
}

}


