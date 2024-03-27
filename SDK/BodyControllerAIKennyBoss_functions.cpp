#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIKennyBoss.BodyControllerAIKennyBoss_C
// (Actor)

class UClass* ABodyControllerAIKennyBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIKennyBoss_C");

	return Clss;
}


// BodyControllerAIKennyBoss_C BodyControllerAIKennyBoss.Default__BodyControllerAIKennyBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIKennyBoss_C* ABodyControllerAIKennyBoss_C::GetDefaultObj()
{
	static class ABodyControllerAIKennyBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIKennyBoss_C*>(ABodyControllerAIKennyBoss_C::StaticClass()->DefaultObject);

	return Default;
}

}


