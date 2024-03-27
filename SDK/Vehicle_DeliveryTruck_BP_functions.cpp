#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vehicle_DeliveryTruck_BP.Vehicle_DeliveryTruck_BP_C
// (Actor)

class UClass* AVehicle_DeliveryTruck_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicle_DeliveryTruck_BP_C");

	return Clss;
}


// Vehicle_DeliveryTruck_BP_C Vehicle_DeliveryTruck_BP.Default__Vehicle_DeliveryTruck_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicle_DeliveryTruck_BP_C* AVehicle_DeliveryTruck_BP_C::GetDefaultObj()
{
	static class AVehicle_DeliveryTruck_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicle_DeliveryTruck_BP_C*>(AVehicle_DeliveryTruck_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


