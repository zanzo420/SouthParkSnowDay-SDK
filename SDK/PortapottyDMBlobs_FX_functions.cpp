#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PortapottyDMBlobs_FX.PortapottyDMBlobs_FX_C
// (Actor)

class UClass* APortapottyDMBlobs_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PortapottyDMBlobs_FX_C");

	return Clss;
}


// PortapottyDMBlobs_FX_C PortapottyDMBlobs_FX.Default__PortapottyDMBlobs_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APortapottyDMBlobs_FX_C* APortapottyDMBlobs_FX_C::GetDefaultObj()
{
	static class APortapottyDMBlobs_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APortapottyDMBlobs_FX_C*>(APortapottyDMBlobs_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


