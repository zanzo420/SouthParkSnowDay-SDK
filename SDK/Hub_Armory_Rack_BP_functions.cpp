#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hub_Armory_Rack_BP.Hub_Armory_Rack_BP_C
// (Actor)

class UClass* AHub_Armory_Rack_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hub_Armory_Rack_BP_C");

	return Clss;
}


// Hub_Armory_Rack_BP_C Hub_Armory_Rack_BP.Default__Hub_Armory_Rack_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHub_Armory_Rack_BP_C* AHub_Armory_Rack_BP_C::GetDefaultObj()
{
	static class AHub_Armory_Rack_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHub_Armory_Rack_BP_C*>(AHub_Armory_Rack_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


