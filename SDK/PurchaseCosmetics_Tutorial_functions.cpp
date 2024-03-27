#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PurchaseCosmetics_Tutorial.PurchaseCosmetics_Tutorial_C
// (None)

class UClass* UPurchaseCosmetics_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PurchaseCosmetics_Tutorial_C");

	return Clss;
}


// PurchaseCosmetics_Tutorial_C PurchaseCosmetics_Tutorial.Default__PurchaseCosmetics_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPurchaseCosmetics_Tutorial_C* UPurchaseCosmetics_Tutorial_C::GetDefaultObj()
{
	static class UPurchaseCosmetics_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPurchaseCosmetics_Tutorial_C*>(UPurchaseCosmetics_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


