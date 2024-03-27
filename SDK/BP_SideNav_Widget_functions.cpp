#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_SideNav_Widget.BP_SideNav_Widget_C
// (None)

class UClass* UBP_SideNav_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SideNav_Widget_C");

	return Clss;
}


// BP_SideNav_Widget_C BP_SideNav_Widget.Default__BP_SideNav_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SideNav_Widget_C* UBP_SideNav_Widget_C::GetDefaultObj()
{
	static class UBP_SideNav_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SideNav_Widget_C*>(UBP_SideNav_Widget_C::StaticClass()->DefaultObject);

	return Default;
}

}


