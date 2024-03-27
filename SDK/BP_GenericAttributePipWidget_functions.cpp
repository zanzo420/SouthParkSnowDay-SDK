#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_GenericAttributePipWidget.BP_GenericAttributePipWidget_C
// (None)

class UClass* UBP_GenericAttributePipWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GenericAttributePipWidget_C");

	return Clss;
}


// BP_GenericAttributePipWidget_C BP_GenericAttributePipWidget.Default__BP_GenericAttributePipWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GenericAttributePipWidget_C* UBP_GenericAttributePipWidget_C::GetDefaultObj()
{
	static class UBP_GenericAttributePipWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GenericAttributePipWidget_C*>(UBP_GenericAttributePipWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


