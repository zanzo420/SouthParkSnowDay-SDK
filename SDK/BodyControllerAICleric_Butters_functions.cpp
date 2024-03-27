#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAICleric_Butters.BodyControllerAICleric_Butters_C
// (Actor)

class UClass* ABodyControllerAICleric_Butters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAICleric_Butters_C");

	return Clss;
}


// BodyControllerAICleric_Butters_C BodyControllerAICleric_Butters.Default__BodyControllerAICleric_Butters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAICleric_Butters_C* ABodyControllerAICleric_Butters_C::GetDefaultObj()
{
	static class ABodyControllerAICleric_Butters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAICleric_Butters_C*>(ABodyControllerAICleric_Butters_C::StaticClass()->DefaultObject);

	return Default;
}

}


