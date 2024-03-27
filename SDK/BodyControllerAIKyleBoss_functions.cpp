#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIKyleBoss.BodyControllerAIKyleBoss_C
// (Actor)

class UClass* ABodyControllerAIKyleBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIKyleBoss_C");

	return Clss;
}


// BodyControllerAIKyleBoss_C BodyControllerAIKyleBoss.Default__BodyControllerAIKyleBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIKyleBoss_C* ABodyControllerAIKyleBoss_C::GetDefaultObj()
{
	static class ABodyControllerAIKyleBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIKyleBoss_C*>(ABodyControllerAIKyleBoss_C::StaticClass()->DefaultObject);

	return Default;
}

}


