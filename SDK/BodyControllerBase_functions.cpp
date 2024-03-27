#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerBase.BodyControllerBase_C
// (Actor)

class UClass* ABodyControllerBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerBase_C");

	return Clss;
}


// BodyControllerBase_C BodyControllerBase.Default__BodyControllerBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerBase_C* ABodyControllerBase_C::GetDefaultObj()
{
	static class ABodyControllerBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerBase_C*>(ABodyControllerBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


