#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CarryCam.CarryCam_C
// (None)

class UClass* UCarryCam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CarryCam_C");

	return Clss;
}


// CarryCam_C CarryCam.Default__CarryCam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCarryCam_C* UCarryCam_C::GetDefaultObj()
{
	static class UCarryCam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCarryCam_C*>(UCarryCam_C::StaticClass()->DefaultObject);

	return Default;
}

}


