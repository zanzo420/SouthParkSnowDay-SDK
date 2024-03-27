#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageNumberWidgetComponent.DamageNumberWidgetComponent_C
// (SceneComponent, PrimitiveComponent)

class UClass* UDamageNumberWidgetComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageNumberWidgetComponent_C");

	return Clss;
}


// DamageNumberWidgetComponent_C DamageNumberWidgetComponent.Default__DamageNumberWidgetComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageNumberWidgetComponent_C* UDamageNumberWidgetComponent_C::GetDefaultObj()
{
	static class UDamageNumberWidgetComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageNumberWidgetComponent_C*>(UDamageNumberWidgetComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


