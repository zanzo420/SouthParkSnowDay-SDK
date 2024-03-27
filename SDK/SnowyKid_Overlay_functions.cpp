#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SnowyKid_Overlay.SnowyKid_Overlay_C
// (None)

class UClass* USnowyKid_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SnowyKid_Overlay_C");

	return Clss;
}


// SnowyKid_Overlay_C SnowyKid_Overlay.Default__SnowyKid_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USnowyKid_Overlay_C* USnowyKid_Overlay_C::GetDefaultObj()
{
	static class USnowyKid_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USnowyKid_Overlay_C*>(USnowyKid_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


