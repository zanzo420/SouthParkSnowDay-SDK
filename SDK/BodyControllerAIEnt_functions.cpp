#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIEnt.BodyControllerAIEnt_C
// (Actor)

class UClass* ABodyControllerAIEnt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIEnt_C");

	return Clss;
}


// BodyControllerAIEnt_C BodyControllerAIEnt.Default__BodyControllerAIEnt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIEnt_C* ABodyControllerAIEnt_C::GetDefaultObj()
{
	static class ABodyControllerAIEnt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIEnt_C*>(ABodyControllerAIEnt_C::StaticClass()->DefaultObject);

	return Default;
}

}


