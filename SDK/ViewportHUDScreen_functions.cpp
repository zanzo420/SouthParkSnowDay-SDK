#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ViewportHUDScreen.ViewportHUDScreen_C
// (None)

class UClass* UViewportHUDScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ViewportHUDScreen_C");

	return Clss;
}


// ViewportHUDScreen_C ViewportHUDScreen.Default__ViewportHUDScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UViewportHUDScreen_C* UViewportHUDScreen_C::GetDefaultObj()
{
	static class UViewportHUDScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UViewportHUDScreen_C*>(UViewportHUDScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ViewportHUDScreen.ViewportHUDScreen_C.OnScreenReadyForGameplay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UViewportHUDScreen_C::OnScreenReadyForGameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ViewportHUDScreen_C", "OnScreenReadyForGameplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ViewportHUDScreen.ViewportHUDScreen_C.ExecuteUbergraph_ViewportHUDScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapAMissionWorldBP_outputPin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTradeshowDemo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTradeshowDemoScreen_C*      CallFunc_RegisterSubScreen_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UViewportHUDScreen_C::ExecuteUbergraph_ViewportHUDScreen(int32 EntryPoint, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapAMissionWorldBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsTradeshowDemo_ReturnValue, class UTradeshowDemoScreen_C* CallFunc_RegisterSubScreen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ViewportHUDScreen_C", "ExecuteUbergraph_ViewportHUDScreen");

	Params::UViewportHUDScreen_C_ExecuteUbergraph_ViewportHUDScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsThisMapAMissionWorldBP_outputPin = CallFunc_IsThisMapAMissionWorldBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsTradeshowDemo_ReturnValue = CallFunc_IsTradeshowDemo_ReturnValue;
	Parms.CallFunc_RegisterSubScreen_ReturnValue = CallFunc_RegisterSubScreen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


