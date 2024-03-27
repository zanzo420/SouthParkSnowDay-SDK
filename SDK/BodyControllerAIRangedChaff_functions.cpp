#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIRangedChaff.BodyControllerAIRangedChaff_C
// (Actor)

class UClass* ABodyControllerAIRangedChaff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIRangedChaff_C");

	return Clss;
}


// BodyControllerAIRangedChaff_C BodyControllerAIRangedChaff.Default__BodyControllerAIRangedChaff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIRangedChaff_C* ABodyControllerAIRangedChaff_C::GetDefaultObj()
{
	static class ABodyControllerAIRangedChaff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIRangedChaff_C*>(ABodyControllerAIRangedChaff_C::StaticClass()->DefaultObject);

	return Default;
}

}


