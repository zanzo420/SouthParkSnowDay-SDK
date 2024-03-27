#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ControlRemappingScreen.ControlRemappingScreen_C
// (None)

class UClass* UControlRemappingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRemappingScreen_C");

	return Clss;
}


// ControlRemappingScreen_C ControlRemappingScreen.Default__ControlRemappingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UControlRemappingScreen_C* UControlRemappingScreen_C::GetDefaultObj()
{
	static class UControlRemappingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRemappingScreen_C*>(UControlRemappingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRemappingScreen.ControlRemappingScreen_C.CloseControlRemappingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UControlRemappingScreen_C::CloseControlRemappingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRemappingScreen_C", "CloseControlRemappingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ControlRemappingScreen.ControlRemappingScreen_C.ExecuteUbergraph_ControlRemappingScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UControlRemappingWidget_C*   CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UControlRemappingWidget_C*   K2Node_DynamicCast_AsControl_Remapping_Widget                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UControlRemappingScreen_C::ExecuteUbergraph_ControlRemappingScreen(int32 EntryPoint, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class UControlRemappingWidget_C* CallFunc_GetUserWidget_ReturnValue, class UControlRemappingWidget_C* K2Node_DynamicCast_AsControl_Remapping_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRemappingScreen_C", "ExecuteUbergraph_ControlRemappingScreen");

	Params::UControlRemappingScreen_C_ExecuteUbergraph_ControlRemappingScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsControl_Remapping_Widget = K2Node_DynamicCast_AsControl_Remapping_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


