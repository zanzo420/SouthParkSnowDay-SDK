#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShizaHuludController.ShizaHuludController_C
// (Actor)

class UClass* AShizaHuludController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShizaHuludController_C");

	return Clss;
}


// ShizaHuludController_C ShizaHuludController.Default__ShizaHuludController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShizaHuludController_C* AShizaHuludController_C::GetDefaultObj()
{
	static class AShizaHuludController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShizaHuludController_C*>(AShizaHuludController_C::StaticClass()->DefaultObject);

	return Default;
}

}


