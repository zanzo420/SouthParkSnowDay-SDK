#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIAdultBrute.BodyControllerAIAdultBrute_C
// (Actor)

class UClass* ABodyControllerAIAdultBrute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIAdultBrute_C");

	return Clss;
}


// BodyControllerAIAdultBrute_C BodyControllerAIAdultBrute.Default__BodyControllerAIAdultBrute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIAdultBrute_C* ABodyControllerAIAdultBrute_C::GetDefaultObj()
{
	static class ABodyControllerAIAdultBrute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIAdultBrute_C*>(ABodyControllerAIAdultBrute_C::StaticClass()->DefaultObject);

	return Default;
}

}


