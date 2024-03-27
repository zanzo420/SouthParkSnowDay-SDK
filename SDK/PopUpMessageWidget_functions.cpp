#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PopUpMessageWidget.PopUpMessageWidget_C
// (None)

class UClass* UPopUpMessageWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PopUpMessageWidget_C");

	return Clss;
}


// PopUpMessageWidget_C PopUpMessageWidget.Default__PopUpMessageWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPopUpMessageWidget_C* UPopUpMessageWidget_C::GetDefaultObj()
{
	static class UPopUpMessageWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPopUpMessageWidget_C*>(UPopUpMessageWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


