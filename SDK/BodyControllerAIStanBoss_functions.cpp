#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIStanBoss.BodyControllerAIStanBoss_C
// (Actor)

class UClass* ABodyControllerAIStanBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIStanBoss_C");

	return Clss;
}


// BodyControllerAIStanBoss_C BodyControllerAIStanBoss.Default__BodyControllerAIStanBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIStanBoss_C* ABodyControllerAIStanBoss_C::GetDefaultObj()
{
	static class ABodyControllerAIStanBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIStanBoss_C*>(ABodyControllerAIStanBoss_C::StaticClass()->DefaultObject);

	return Default;
}

}


