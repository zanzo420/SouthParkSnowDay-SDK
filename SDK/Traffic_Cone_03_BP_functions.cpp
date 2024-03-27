#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Traffic_Cone_03_BP.Traffic_Cone_03_BP_C
// (Actor)

class UClass* ATraffic_Cone_03_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Traffic_Cone_03_BP_C");

	return Clss;
}


// Traffic_Cone_03_BP_C Traffic_Cone_03_BP.Default__Traffic_Cone_03_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATraffic_Cone_03_BP_C* ATraffic_Cone_03_BP_C::GetDefaultObj()
{
	static class ATraffic_Cone_03_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATraffic_Cone_03_BP_C*>(ATraffic_Cone_03_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


