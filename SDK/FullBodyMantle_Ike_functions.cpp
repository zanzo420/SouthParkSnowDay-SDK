#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyMantle_Ike.FullBodyMantle_Ike_C
// (None)

class UClass* UFullBodyMantle_Ike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyMantle_Ike_C");

	return Clss;
}


// FullBodyMantle_Ike_C FullBodyMantle_Ike.Default__FullBodyMantle_Ike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyMantle_Ike_C* UFullBodyMantle_Ike_C::GetDefaultObj()
{
	static class UFullBodyMantle_Ike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyMantle_Ike_C*>(UFullBodyMantle_Ike_C::StaticClass()->DefaultObject);

	return Default;
}

}


