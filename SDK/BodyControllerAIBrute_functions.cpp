#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIBrute.BodyControllerAIBrute_C
// (Actor)

class UClass* ABodyControllerAIBrute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIBrute_C");

	return Clss;
}


// BodyControllerAIBrute_C BodyControllerAIBrute.Default__BodyControllerAIBrute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIBrute_C* ABodyControllerAIBrute_C::GetDefaultObj()
{
	static class ABodyControllerAIBrute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIBrute_C*>(ABodyControllerAIBrute_C::StaticClass()->DefaultObject);

	return Default;
}

}


