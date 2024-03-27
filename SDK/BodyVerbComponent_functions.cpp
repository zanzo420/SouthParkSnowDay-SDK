#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyVerbComponent.BodyVerbComponent_C
// (None)

class UClass* UBodyVerbComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyVerbComponent_C");

	return Clss;
}


// BodyVerbComponent_C BodyVerbComponent.Default__BodyVerbComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBodyVerbComponent_C* UBodyVerbComponent_C::GetDefaultObj()
{
	static class UBodyVerbComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBodyVerbComponent_C*>(UBodyVerbComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


