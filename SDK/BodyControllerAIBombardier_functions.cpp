#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIBombardier.BodyControllerAIBombardier_C
// (Actor)

class UClass* ABodyControllerAIBombardier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIBombardier_C");

	return Clss;
}


// BodyControllerAIBombardier_C BodyControllerAIBombardier.Default__BodyControllerAIBombardier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIBombardier_C* ABodyControllerAIBombardier_C::GetDefaultObj()
{
	static class ABodyControllerAIBombardier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIBombardier_C*>(ABodyControllerAIBombardier_C::StaticClass()->DefaultObject);

	return Default;
}

}


