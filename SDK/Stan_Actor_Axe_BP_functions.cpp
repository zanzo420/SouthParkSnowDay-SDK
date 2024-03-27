#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stan_Actor_Axe_BP.Stan_Actor_Axe_BP_C
// (Actor)

class UClass* AStan_Actor_Axe_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stan_Actor_Axe_BP_C");

	return Clss;
}


// Stan_Actor_Axe_BP_C Stan_Actor_Axe_BP.Default__Stan_Actor_Axe_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStan_Actor_Axe_BP_C* AStan_Actor_Axe_BP_C::GetDefaultObj()
{
	static class AStan_Actor_Axe_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStan_Actor_Axe_BP_C*>(AStan_Actor_Axe_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


