#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAICartmanBase.BodyControllerAICartmanBase_C
// (Actor)

class UClass* ABodyControllerAICartmanBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAICartmanBase_C");

	return Clss;
}


// BodyControllerAICartmanBase_C BodyControllerAICartmanBase.Default__BodyControllerAICartmanBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAICartmanBase_C* ABodyControllerAICartmanBase_C::GetDefaultObj()
{
	static class ABodyControllerAICartmanBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAICartmanBase_C*>(ABodyControllerAICartmanBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


