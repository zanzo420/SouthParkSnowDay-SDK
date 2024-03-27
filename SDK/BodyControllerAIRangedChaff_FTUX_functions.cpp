#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIRangedChaff_FTUX.BodyControllerAIRangedChaff_FTUX_C
// (Actor)

class UClass* ABodyControllerAIRangedChaff_FTUX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIRangedChaff_FTUX_C");

	return Clss;
}


// BodyControllerAIRangedChaff_FTUX_C BodyControllerAIRangedChaff_FTUX.Default__BodyControllerAIRangedChaff_FTUX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIRangedChaff_FTUX_C* ABodyControllerAIRangedChaff_FTUX_C::GetDefaultObj()
{
	static class ABodyControllerAIRangedChaff_FTUX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIRangedChaff_FTUX_C*>(ABodyControllerAIRangedChaff_FTUX_C::StaticClass()->DefaultObject);

	return Default;
}

}


