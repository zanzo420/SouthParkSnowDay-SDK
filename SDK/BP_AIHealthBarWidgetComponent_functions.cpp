#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIHealthBarWidgetComponent.BP_AIHealthBarWidgetComponent_C
// (SceneComponent, PrimitiveComponent)

class UClass* UBP_AIHealthBarWidgetComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIHealthBarWidgetComponent_C");

	return Clss;
}


// BP_AIHealthBarWidgetComponent_C BP_AIHealthBarWidgetComponent.Default__BP_AIHealthBarWidgetComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIHealthBarWidgetComponent_C* UBP_AIHealthBarWidgetComponent_C::GetDefaultObj()
{
	static class UBP_AIHealthBarWidgetComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIHealthBarWidgetComponent_C*>(UBP_AIHealthBarWidgetComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


