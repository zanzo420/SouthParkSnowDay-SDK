#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIRandyBoss.BodyControllerAIRandyBoss_C
// (Actor)

class UClass* ABodyControllerAIRandyBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIRandyBoss_C");

	return Clss;
}


// BodyControllerAIRandyBoss_C BodyControllerAIRandyBoss.Default__BodyControllerAIRandyBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIRandyBoss_C* ABodyControllerAIRandyBoss_C::GetDefaultObj()
{
	static class ABodyControllerAIRandyBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIRandyBoss_C*>(ABodyControllerAIRandyBoss_C::StaticClass()->DefaultObject);

	return Default;
}

}


