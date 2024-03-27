#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatPip_Widget.CheatPip_Widget_C
// (None)

class UClass* UCheatPip_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatPip_Widget_C");

	return Clss;
}


// CheatPip_Widget_C CheatPip_Widget.Default__CheatPip_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatPip_Widget_C* UCheatPip_Widget_C::GetDefaultObj()
{
	static class UCheatPip_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatPip_Widget_C*>(UCheatPip_Widget_C::StaticClass()->DefaultObject);

	return Default;
}

}


