#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ViewportHUD.ViewportHUD_C
// (None)

class UClass* UViewportHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ViewportHUD_C");

	return Clss;
}


// ViewportHUD_C ViewportHUD.Default__ViewportHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UViewportHUD_C* UViewportHUD_C::GetDefaultObj()
{
	static class UViewportHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UViewportHUD_C*>(UViewportHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ViewportHUD.ViewportHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UViewportHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ViewportHUD_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ViewportHUD.ViewportHUD_C.ExecuteUbergraph_ViewportHUD
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UViewportHUD_C::ExecuteUbergraph_ViewportHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ViewportHUD_C", "ExecuteUbergraph_ViewportHUD");

	Params::UViewportHUD_C_ExecuteUbergraph_ViewportHUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


