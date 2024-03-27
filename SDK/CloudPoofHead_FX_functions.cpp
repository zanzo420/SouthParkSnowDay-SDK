#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CloudPoofHead_FX.CloudPoofHead_FX_C
// (Actor)

class UClass* ACloudPoofHead_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CloudPoofHead_FX_C");

	return Clss;
}


// CloudPoofHead_FX_C CloudPoofHead_FX.Default__CloudPoofHead_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACloudPoofHead_FX_C* ACloudPoofHead_FX_C::GetDefaultObj()
{
	static class ACloudPoofHead_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACloudPoofHead_FX_C*>(ACloudPoofHead_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


