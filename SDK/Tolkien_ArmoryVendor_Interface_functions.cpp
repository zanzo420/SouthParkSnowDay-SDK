#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tolkien_ArmoryVendor_Interface.Tolkien_ArmoryVendor_Interface_C
// (None)

class UClass* ITolkien_ArmoryVendor_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tolkien_ArmoryVendor_Interface_C");

	return Clss;
}


// Tolkien_ArmoryVendor_Interface_C Tolkien_ArmoryVendor_Interface.Default__Tolkien_ArmoryVendor_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ITolkien_ArmoryVendor_Interface_C* ITolkien_ArmoryVendor_Interface_C::GetDefaultObj()
{
	static class ITolkien_ArmoryVendor_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ITolkien_ArmoryVendor_Interface_C*>(ITolkien_ArmoryVendor_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Tolkien_ArmoryVendor_Interface.Tolkien_ArmoryVendor_Interface_C.LocalEndArmoryInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ITolkien_ArmoryVendor_Interface_C::LocalEndArmoryInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tolkien_ArmoryVendor_Interface_C", "LocalEndArmoryInteraction");



	UObject::ProcessEvent(Func, nullptr);

}

}


